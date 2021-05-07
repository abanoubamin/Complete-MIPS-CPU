----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:56:48 04/11/2018 
-- Design Name: 
-- Module Name:    ALUControl - Behavioral 
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

entity ALUControl is
port
(
	F : in std_logic_vector(5 downto 0);
	ALUOP : in std_logic_vector(1 downto 0);
	Operation : out std_logic_vector(3 downto 0)
);
end ALUControl;

architecture Behavioral of ALUControl is

signal tmp1:std_logic;
signal tmp2:std_logic;
signal tmp3:std_logic;
signal tmp4:std_logic;

begin

tmp1 <= F(0) or F(3);
tmp2 <= ALUOP(1) and tmp1;
Operation(1) <= (not ALUOP(1)) or (not F(2));
tmp3 <= ALUOP(1) and F(1);
Operation(2) <= tmp3 or ALUOP(0);
tmp4 <= F(0) and F(1);
Operation(3) <= tmp4 and ALUOP(1);
Operation(0) <= (not (tmp4 and ALUOP(1))) and tmp2;

end Behavioral;

