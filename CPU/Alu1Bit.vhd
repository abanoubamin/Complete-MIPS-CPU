----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:33:42 03/31/2018 
-- Design Name: 
-- Module Name:    Alu1Bit - Behavioral 
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

entity Alu1Bit is
    Port (A : in  STD_LOGIC;
          B : in  STD_LOGIC;
			 Less: in STD_LOGIC;
          AluOp : in  STD_LOGIC_VECTOR (3 downto 0);
          Cin : in  STD_LOGIC;
          Res : out  STD_LOGIC;
          Cout : out  STD_LOGIC);
			 --Set : out  STD_LOGIC);
end Alu1Bit;

architecture Behavioral of ALU1Bit is

signal tmp1: STD_LOGIC;
signal tmp2: STD_LOGIC;
signal tmp3: STD_LOGIC;

begin

M1: Mux2 port map(A,not A,AluOp(3),tmp1);
M2: Mux2 port map(B,not B,AluOp(2),tmp2);
Adder: OneBitFullAdder port map(tmp1,tmp2,Cin,tmp3,cout);
MM: Mux4 port map(tmp1 and tmp2,tmp1 or tmp2,tmp3,Less,AluOp(1 downto 0),Res);

--Set <= tmp3;

end Behavioral;

