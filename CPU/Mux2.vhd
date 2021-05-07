----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:43:21 03/31/2018 
-- Design Name: 
-- Module Name:    Mux2 - Behavioral 
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

entity Mux2 is
PORT (I0: IN STD_LOGIC;
		I1: IN STD_LOGIC;
		S: IN STD_LOGIC;
		O: OUT STD_LOGIC);
end Mux2;



architecture Behavioral of Mux2 is

begin

O <= I0 WHEN (S='0') ELSE
	  I1 WHEN (S='1') ELSE
	  'Z';

end Behavioral;

