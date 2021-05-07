----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:04:28 04/12/2018 
-- Design Name: 
-- Module Name:    RegisterFile - Behavioral 
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
use work.mypackage.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity RegisterFile is
    Port ( read_sel1 : in  STD_LOGIC_VECTOR (4 downto 0);
           read_sel2 : in  STD_LOGIC_VECTOR (4 downto 0);
           write_sel : in  STD_LOGIC_VECTOR (4 downto 0);
           write_ena : in  STD_LOGIC;
		     clk : in STD_LOGIC;
           write_data : in  STD_LOGIC_VECTOR (31 downto 0);
           data1 : out  STD_LOGIC_VECTOR (31 downto 0);
           data2 : out  STD_LOGIC_VECTOR (31 downto 0));
end RegisterFile;
architecture Behavioral of RegisterFile is
SIGNAL OO0: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO1: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO2: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO3: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO4: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO5: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO6: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO7: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO8: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO9: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO10: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO11: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO12: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO13: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO14: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO15: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO16: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO17: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO18: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO19: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO20: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO21: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO22: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO23: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO24: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO25: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO26: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO27: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO28: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO29: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO30: STD_LOGIC_VECTOR (31 DOWNTO 0);
SIGNAL OO31: STD_LOGIC_VECTOR (31 DOWNTO 0);

signal tmp:std_logic_vector(31 downto 0);

begin
D:Decoder port map(write_sel,'1',tmp);
R0:REG generic map(32) port map(write_data,clk,tmp(0)and write_ena,'0','0',OO0);
R1:REG generic map(32) port map(write_data,clk,tmp(1)and write_ena,'0','0',OO1);
R2:REG generic map(32) port map(write_data,clk,tmp(2)and write_ena,'0','0',OO2);
R3:REG generic map(32) port map(write_data,clk,tmp(3)and write_ena,'0','0',OO3);
R4:REG generic map(32) port map(write_data,clk,tmp(4)and write_ena,'0','0',OO4);
R5:REG generic map(32) port map(write_data,clk,tmp(5)and write_ena,'0','0',OO5);
R6:REG generic map(32) port map(write_data,clk,tmp(6)and write_ena,'0','0',OO6);
R7:REG generic map(32) port map(write_data,clk,tmp(7)and write_ena,'0','0',OO7);
R8:REG generic map(32) port map(write_data,clk,tmp(8)and write_ena,'0','0',OO8);
R9:REG generic map(32) port map(write_data,clk,tmp(9)and write_ena,'0','0',OO9);
R10:REG generic map(32) port map(write_data,clk,tmp(10)and write_ena,'0','0',OO10);
R11:REG generic map(32) port map(write_data,clk,tmp(11)and write_ena,'0','0',OO11);
R12:REG generic map(32) port map(write_data,clk,tmp(12)and write_ena,'0','0',OO12);
R13:REG generic map(32) port map(write_data,clk,tmp(13)and write_ena,'0','0',OO13);
R14:REG generic map(32) port map(write_data,clk,tmp(14)and write_ena,'0','0',OO14);
R15:REG generic map(32) port map(write_data,clk,tmp(15)and write_ena,'0','0',OO15);
R16:REG generic map(32) port map(write_data,clk,tmp(16)and write_ena,'0','0',OO16);
R17:REG generic map(32) port map(write_data,clk,tmp(17)and write_ena,'0','0',OO17);
R18:REG generic map(32) port map(write_data,clk,tmp(18)and write_ena,'0','0',OO18);
R19:REG generic map(32) port map(write_data,clk,tmp(19)and write_ena,'0','0',OO19);
R20:REG generic map(32) port map(write_data,clk,tmp(20)and write_ena,'0','0',OO20);
R21:REG generic map(32) port map(write_data,clk,tmp(21)and write_ena,'0','0',OO21);
R22:REG generic map(32) port map(write_data,clk,tmp(22)and write_ena,'0','0',OO22);
R23:REG generic map(32) port map(write_data,clk,tmp(23)and write_ena,'0','0',OO23);
R24:REG generic map(32) port map(write_data,clk,tmp(24)and write_ena,'0','0',OO24);
R25:REG generic map(32) port map(write_data,clk,tmp(25)and write_ena,'0','0',OO25);
R26:REG generic map(32) port map(write_data,clk,tmp(26)and write_ena,'0','0',OO26);
R27:REG generic map(32) port map(write_data,clk,tmp(27)and write_ena,'0','0',OO27);
R28:REG generic map(32) port map(write_data,clk,tmp(28)and write_ena,'0','0',OO28);
R29:REG generic map(32) port map(write_data,clk,tmp(29)and write_ena,'0','0',OO29);
R30:REG generic map(32) port map(write_data,clk,tmp(30)and write_ena,'0','0',OO30);
R31:REG generic map(32) port map(write_data,clk,tmp(31)and write_ena,'0','0',OO31);

M1:MUX  port map(read_sel1,OO0,OO1,OO2,OO3,OO4,OO5,OO6,OO7,OO8,OO9,OO10,OO11,OO12,OO13,OO14,OO15,OO16,OO17,OO18,OO19,OO20,OO21,OO22,OO23,OO24,OO25,OO26,OO27,OO28,OO29,OO30,OO31,data1);
M2:MUX  port map(read_sel2,OO0,OO1,OO2,OO3,OO4,OO5,OO6,OO7,OO8,OO9,OO10,OO11,OO12,OO13,OO14,OO15,OO16,OO17,OO18,OO19,OO20,OO21,OO22,OO23,OO24,OO25,OO26,OO27,OO28,OO29,OO30,OO31,data2);



end Behavioral;


