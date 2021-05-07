--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;

package mypackage is
component FirstAlu is

    Port (A : in  STD_LOGIC;
          B : in  STD_LOGIC;
			 Less: in STD_LOGIC;
          AluOp : in  STD_LOGIC_VECTOR (3 downto 0);
          Cin : in  STD_LOGIC;
          Res : out  STD_LOGIC;
          Cout : out  STD_LOGIC;
			 Set : out  STD_LOGIC);

end component;
component GenericMax is
	generic(n:natural:=5);
    Port ( s : in  STD_LOGIC;
           I0 : in  STD_LOGIC_VECTOR (n downto 0);
           I1 : in  STD_LOGIC_VECTOR (n downto 0);
           O : out  STD_LOGIC_VECTOR (n downto 0));
end component;
component Mux4 is
PORT (I0: IN STD_LOGIC;
	   I1: IN STD_LOGIC;
	   I2: IN STD_LOGIC;
	   I3: IN STD_LOGIC;
	   S: IN STD_LOGIC_VECTOR(1 DOWNTO 0);
	   O: OUT STD_LOGIC);
end component;

component OneBitFullAdder is
Port (A : in STD_LOGIC;
		B : in STD_LOGIC;
		Cin : in STD_LOGIC;
		S : out STD_LOGIC;
		Cout : out STD_LOGIC);
end component;

component Mux2 is
PORT (I0: IN STD_LOGIC;
		I1: IN STD_LOGIC;
		S: IN STD_LOGIC;
		O: OUT STD_LOGIC);
end component;

component Alu1Bit is
 Port (A : in  STD_LOGIC;
       B : in  STD_LOGIC;
		 Less: in STD_LOGIC;
       AluOp : in  STD_LOGIC_VECTOR (3 downto 0);
       Cin : in  STD_LOGIC;
       Res : out  STD_LOGIC;
       Cout : out  STD_LOGIC);
end component;

component ALU is
 PORT (data1 : IN  std_logic_vector(31 downto 0);
       data2 : IN  std_logic_vector(31 downto 0);
       aluop : IN  std_logic_vector(3 downto 0);
       cin : IN  std_logic;
       dataout : OUT  std_logic_vector(31 downto 0);
       cflag : OUT  std_logic;
       zflag : OUT  std_logic;
       oflag : OUT  std_logic);
end component;

component Control is
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
end component;

component ALUControl is
 port
(
	F : in std_logic_vector(5 downto 0);
	ALUOP : in std_logic_vector(1 downto 0);
	Operation : out std_logic_vector(3 downto 0)
);
end component;

component INSTRMEMORY is
	Generic(words : natural :=64;wordsize: natural :=32; addresssize: natural := 32);
  port(
    LoadIt: in Std_logic ;
	 DATA: out STD_LOGIC_VECTOR(wordsize-1 downto 0);
    ADDRESS: in STD_LOGIC_VECTOR(addresssize-1 downto 0);
    CLK: in STD_LOGIC
    );
end component;


component DATAMEMORY is
  Generic(words : natural :=64;wordsize: natural :=32; addresssize: natural := 32);
  port ( LoadIt: in STD_LOGIC;
  			INPUT     : in STD_LOGIC_VECTOR (wordsize-1 downto 0);
			OUTPUT    : out STD_LOGIC_VECTOR (wordsize-1 downto 0);
         MEM_READ : in STD_LOGIC;
			MEM_WRITE : in STD_LOGIC;
			ADDRESS   : in STD_LOGIC_VECTOR (addresssize-1 downto 0);
			CLK       : in STD_LOGIC
			);

end component;

component reg IS
	GENERIC(n:NATURAL);
	PORT (
	I: IN  STD_LOGIC_VECTOR (n-1 DOWNTO 0);
	CLK, LOD, INC, CLR: IN STD_LOGIC;
	O: OUT  STD_LOGIC_VECTOR (n-1 DOWNTO 0));
END component;
 
component MUX is 
         Port ( 
	        S : in  STD_LOGIC_VECTOR (4 downto 0);
           I1 : in  STD_LOGIC_VECTOR (31 downto 0);
           I2 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I3 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I4 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I5 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I6 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I7 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I8 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I9 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I10 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I11 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I12 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I13 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I14 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I15 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I16 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I17 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I18 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I19 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I20 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I21 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I22 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I23 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I24 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I25 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I26 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I27 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I28 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I29 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I30 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I31 : in  STD_LOGIC_VECTOR (31 downto 0);
			  I32 : in  STD_LOGIC_VECTOR (31 downto 0);
           O : out  STD_LOGIC_VECTOR (31 downto 0));
 end component;
 component Decoder is
    Port ( I : in  STD_LOGIC_VECTOR (4 downto 0);
           E : in  STD_LOGIC;
           O : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

component RegisterFile is
Port ( read_sel1 : in  STD_LOGIC_VECTOR (4 downto 0);
           read_sel2 : in  STD_LOGIC_VECTOR (4 downto 0);
           write_sel : in  STD_LOGIC_VECTOR (4 downto 0);
           write_ena : in  STD_LOGIC;
		   clk : in STD_LOGIC;
           write_data : in  STD_LOGIC_VECTOR (31 downto 0);
           data1 : out  STD_LOGIC_VECTOR (31 downto 0);
           data2 : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

end mypackage;

