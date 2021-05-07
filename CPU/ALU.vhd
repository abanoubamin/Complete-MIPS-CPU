----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:13:25 03/31/2018 
-- Design Name: 
-- Module Name:    main - Behavioral 
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

entity ALU is
PORT(
         data1 : IN  std_logic_vector(31 downto 0);
         data2 : IN  std_logic_vector(31 downto 0);
         aluop : IN  std_logic_vector(3 downto 0);
         cin : IN  std_logic;
         dataout : OUT  std_logic_vector(31 downto 0);
         cflag : OUT  std_logic;
         zflag : OUT  std_logic;
         oflag : OUT  std_logic
        );
end ALU;

architecture Behavioral of ALU is

 signal tmp: std_logic_vector(31 downto 0);
 signal tmp_res: std_logic_vector(31 downto 0);
 signal less: std_logic;
 signal set: std_logic;
 
begin

Alu1:Alu1Bit port map(data1(0),data2(0),less,aluop,AluOp(2),tmp_res(0),tmp(0));
Alu2:Alu1Bit port map(data1(1),data2(1),'0',aluop,tmp(0),tmp_res(1),tmp(1));
Alu3:Alu1Bit port map(data1(2),data2(2),'0',aluop,tmp(1),tmp_res(2),tmp(2));
Alu4:Alu1Bit port map(data1(3),data2(3),'0',aluop,tmp(2),tmp_res(3),tmp(3));
Alu5:Alu1Bit port map(data1(4),data2(4),'0',aluop,tmp(3),tmp_res(4),tmp(4));
Alu6:Alu1Bit port map(data1(5),data2(5),'0',aluop,tmp(4),tmp_res(5),tmp(5));
Alu7:Alu1Bit port map(data1(6),data2(6),'0',aluop,tmp(5),tmp_res(6),tmp(6));
Alu8:Alu1Bit port map(data1(7),data2(7),'0',aluop,tmp(6),tmp_res(7),tmp(7));
Alu9:Alu1Bit port map(data1(8),data2(8),'0',aluop,tmp(7),tmp_res(8),tmp(8));
Alu10:Alu1Bit port map(data1(9),data2(9),'0',aluop,tmp(8),tmp_res(9),tmp(9));
Alu11:Alu1Bit port map(data1(10),data2(10),'0',aluop,tmp(9),tmp_res(10),tmp(10));
Alu12:Alu1Bit port map(data1(11),data2(11),'0',aluop,tmp(10),tmp_res(11),tmp(11));
Alu13:Alu1Bit port map(data1(12),data2(12),'0',aluop,tmp(11),tmp_res(12),tmp(12));
Alu14:Alu1Bit port map(data1(13),data2(13),'0',aluop,tmp(12),tmp_res(13),tmp(13));
Alu15:Alu1Bit port map(data1(14),data2(14),'0',aluop,tmp(13),tmp_res(14),tmp(14));
Alu16:Alu1Bit port map(data1(15),data2(15),'0',aluop,tmp(14),tmp_res(15),tmp(15));
Alu17:Alu1Bit port map(data1(16),data2(16),'0',aluop,tmp(15),tmp_res(16),tmp(16));
Alu18:Alu1Bit port map(data1(17),data2(17),'0',aluop,tmp(16),tmp_res(17),tmp(17));
Alu19:Alu1Bit port map(data1(18),data2(18),'0',aluop,tmp(17),tmp_res(18),tmp(18));
Alu20:Alu1Bit port map(data1(19),data2(19),'0',aluop,tmp(18),tmp_res(19),tmp(19));
Alu21:Alu1Bit port map(data1(20),data2(20),'0',aluop,tmp(19),tmp_res(20),tmp(20));
Alu22:Alu1Bit port map(data1(21),data2(21),'0',aluop,tmp(20),tmp_res(21),tmp(21));
Alu23:Alu1Bit port map(data1(22),data2(22),'0',aluop,tmp(21),tmp_res(22),tmp(22));
Alu24:Alu1Bit port map(data1(23),data2(23),'0',aluop,tmp(22),tmp_res(23),tmp(23));
Alu25:Alu1Bit port map(data1(24),data2(24),'0',aluop,tmp(23),tmp_res(24),tmp(24));
Alu26:Alu1Bit port map(data1(25),data2(25),'0',aluop,tmp(24),tmp_res(25),tmp(25));
Alu27:Alu1Bit port map(data1(26),data2(26),'0',aluop,tmp(25),tmp_res(26),tmp(26));
Alu28:Alu1Bit port map(data1(27),data2(27),'0',aluop,tmp(26),tmp_res(27),tmp(27));
Alu29:Alu1Bit port map(data1(28),data2(28),'0',aluop,tmp(27),tmp_res(28),tmp(28));
Alu30:Alu1Bit port map(data1(29),data2(29),'0',aluop,tmp(28),tmp_res(29),tmp(29));
Alu31:Alu1Bit port map(data1(30),data2(30),'0',aluop,tmp(29),tmp_res(30),tmp(30));
Alu32:FirstAlu port map(data1(31),data2(31),'0',aluop,tmp(30),tmp_res(31),tmp(31),set);

less <= set;

dataout <= tmp_res;
cflag <= tmp(31);
zflag <= not(tmp_res(0) or tmp_res(1) or tmp_res(2) or tmp_res(3) or tmp_res(4) or tmp_res(5) or tmp_res(6) or tmp_res(7) or tmp_res(8) or tmp_res(9) or tmp_res(10) or tmp_res(11) or tmp_res(12) or tmp_res(13) or tmp_res(14) or tmp_res(15) or tmp_res(16) or tmp_res(17) or tmp_res(18) or tmp_res(19) or tmp_res(20) or tmp_res(21) or tmp_res(22) or tmp_res(23) or tmp_res(24) or tmp_res(25) or tmp_res(26) or tmp_res(27) or tmp_res(28) or tmp_res(29) or tmp_res(30) or tmp_res(31));
oflag <= tmp(30) XOR tmp(31);

end Behavioral;

