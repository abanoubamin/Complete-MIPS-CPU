----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:29:28 02/19/2018 
-- Design Name: 
-- Module Name:    Mux - MuxArch 
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

entity Mux4 is
    PORT (I0: IN STD_LOGIC;
			 I1: IN STD_LOGIC;
			 I2: IN STD_LOGIC;
			 I3: IN STD_LOGIC;
			 S: IN STD_LOGIC_VECTOR(1 DOWNTO 0);
			 O: OUT STD_LOGIC);
end Mux4;

architecture MuxArch of Mux4 is

begin

O <= I0 WHEN (S="00") ELSE
	  I1 WHEN (S="01") ELSE
	  I2 WHEN (S="10") ELSE
	  I3 WHEN (S="11") ELSE  
	  'Z';

end MuxArch;

