----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:55:11 04/14/2018 
-- Design Name: 
-- Module Name:    GenericMax - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity GenericMax is
	generic(n:natural:=5);
    Port ( s : in  STD_LOGIC;
           I0 : in  STD_LOGIC_VECTOR (n downto 0);
           I1 : in  STD_LOGIC_VECTOR (n downto 0);
           O : out  STD_LOGIC_VECTOR (n downto 0));
end GenericMax;

architecture Behavioral of GenericMax is

begin
O <= I0 WHEN (S='0') ELSE
	I1 WHEN (S='1') ELSE
	(others=>'Z');

end Behavioral;

