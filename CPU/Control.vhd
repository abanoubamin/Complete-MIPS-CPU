----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:24:26 04/11/2018 
-- Design Name: 
-- Module Name:    Control - Behavioral 
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

entity Control is
    Port ( Op : in  STD_LOGIC_VECTOR(5 DOWNTO 0);
           RegDst : out  STD_LOGIC;
           ALUSrc : out  STD_LOGIC;
           MemtoReg : out  STD_LOGIC;
           RegWrite : out  STD_LOGIC;
           MemRead : out  STD_LOGIC;
           MemWrite : out  STD_LOGIC;
           Branch : out  STD_LOGIC;
			  Branchne : out  STD_LOGIC;
           ALUOp : out  STD_LOGIC_VECTOR(1 DOWNTO 0);
			  Jump : out STD_LOGIC);
end Control;

architecture Behavioral of Control is

signal R: std_logic;
signal lw: std_logic;
signal sw: std_logic;
signal beq: std_logic;
signal bne: std_logic;
signal j: std_logic;


begin

R <= ((not Op(0)) and (not Op(1)) and (not Op(2)) and (not Op(3)) and (not Op(4)) and (not Op(5)));
lw <= (Op(0) and Op(1) and (not Op(2)) and (not Op(3)) and (not Op(4)) and Op(5));
sw <= (Op(0) and Op(1) and (not Op(2)) and Op(3) and (not Op(4)) and Op(5));
beq <= ((not Op(0)) and (not Op(1)) and Op(2) and (not Op(3)) and (not Op(4)) and (not Op(5)));
bne <= (Op(0) and (not Op(1)) and Op(2) and (not Op(3)) and (not Op(4)) and (not Op(5)));
j <= ((not Op(0)) and Op(1) and (not Op(2)) and (not Op(3)) and (not Op(4)) and (not Op(5)));

RegDst <= R;
ALUSrc <= lw or sw;
MemtoReg <= lw;
RegWrite <= R or lw;
MemRead <= lw;
MemWrite <= sw;
Branch <= beq ;
ALUOp(0) <= beq or bne;
ALUOp(1) <= R;
Jump <= j;
Branchne <= bne;
--Jump <= '1' WHEN (Op = "000010") ELSE '0';

end Behavioral;

