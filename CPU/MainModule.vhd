----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:36:24 04/11/2018 
-- Design Name: 
-- Module Name:    MainModule - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;
use work.MyPackage.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity MainModule is
    Port ( start : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           RegFileOut1 : out  STD_LOGIC_VECTOR (31 downto 0);
           RegFileOut2 : out  STD_LOGIC_VECTOR (31 downto 0);
           ALUOut : out  STD_LOGIC_VECTOR (31 downto 0);
           pcout : out std_logic_vector (31 downto 0);
           dataMemout : out std_logic_vector (31 downto 0)
	   );
end MainModule;

architecture Behavioral of MainModule is
SIGNAL RegFileOut11: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL RegFileOut22: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL ALUOut11: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL pcout11: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL dataMemout11: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL data: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL RegDst :   STD_LOGIC;
SIGNAL ALUSrc :   STD_LOGIC;
SIGNAL MemtoReg :   STD_LOGIC;
SIGNAL RegWrite :   STD_LOGIC;
SIGNAL MemRead :   STD_LOGIC;
SIGNAL MemWrite :   STD_LOGIC;
SIGNAL Branch :   STD_LOGIC;
SIGNAL BranchNE :   STD_LOGIC;
SIGNAL ALUOp : STD_LOGIC_VECTOR(1 DOWNTO 0);
signal Jump:   STD_LOGIC;
SIGNAL WriteRegO: STD_LOGIC_VECTOR (4 DOWNTO 0);
SIGNAL Operation:STD_LOGIC_VECTOR (3 DOWNTO 0);
SIGNAL tmp2:STD_LOGIC;
SIGNAL tmp3: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL IALU: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL cin:STD_LOGIC;
SIGNAL cflag:STD_LOGIC;
SIGNAL zflag:STD_LOGIC;
SIGNAL oflag:STD_LOGIC;
SIGNAL Wdata: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL tmp4: STD_LOGIC_VECTOR (33 DOWNTO 0);
SIGNAL OurALUOut: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL max4O: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL max5O: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL lasttmp: STD_LOGIC_VECTOR (31 DOWNTO 0);
begin
PC:REG generic map(32) port map(max5O,clk,start,'0',not start,pcout11);           
insMem:INSTRMEMORY port map(not start,data,pcout11,clk);
con:Control port map(data(31 DOWNTO 26),RegDst,ALUSrc,MemtoReg,RegWrite,MemRead,MemWrite,Branch,BranchNE, ALUOp,Jump);
genMUX:GenericMax generic map(4) port map(RegDst,data(20 DOWNTO 16),data(15 DOWNTO 11),WriteRegO);
ALUcon:ALUControl port map(data(5 downto 0),ALUOp,Operation);
tmp2<=data(15);
tmp3 <= "0000000000000000"&data(15 DOWNTO 0) when tmp2='0' else
		  "1111111111111111"&data(15 DOWNTO 0) when tmp2='1';
genMUX2:GenericMax generic map(31) port map(ALUSrc,RegFileOut22,tmp3,IALU);
OurALU: ALU port map(RegFileOut11,IALU,Operation,Operation(2),ALUOut11,cflag,zflag,oflag);
OurDATAMEMORY:DATAMEMORY port map(not start,RegFileOut22,dataMemout11,MemRead,MemWrite,ALUOut11,clk);
genMUX3:GenericMax generic map(31) port map(MemtoReg,ALUOut11,dataMemout11,Wdata);
regfile:RegisterFile port map(data(25 DOWNTO 21),data(20 DOWNTO 16),WriteRegO,RegWrite,clk,Wdata,RegFileOut11,RegFileOut22);
tmp4<=(tmp3&"00");
genMUX4:GenericMax generic map(31) port map((Branch and zflag)or(BranchNE and (not zflag)) ,(pcout11+4),(pcout11+4)+tmp4(31 DOWNTO 0),max4O);
lasttmp<=pcout11+4;
genMUX5:GenericMax generic map(31) port map(Jump,max4O,lasttmp(31 downto 28)&data(25 downto 0)&"00",max5O);
RegFileOut1<=RegFileOut11;
RegFileOut2<=RegFileOut22;
ALUOut<=ALUOut11;
pcout<=pcout11;
dataMemout<=dataMemout11;
end Behavioral;