----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:53:49 03/31/2018 
-- Design Name: 
-- Module Name:    OneBitFullAdder - Behavioral 
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
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity OneBitFullAdder is
 Port (A : in STD_LOGIC;
		 B : in STD_LOGIC;
		 Cin : in STD_LOGIC;
		 S : out STD_LOGIC;
		 Cout : out STD_LOGIC);
end OneBitFullAdder;

architecture Behavioral of OneBitFullAdder is
signal tmp:std_logic_vector(1 downto 0);
begin

 tmp <= ('0'&A)+('0'&B)+('0'&cin);
 S <= tmp(0);
 Cout <= tmp(1);
 
end Behavioral;

