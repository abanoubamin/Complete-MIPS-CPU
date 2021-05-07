# Complete-MIPS-CPU
Building a Processor (Register File and ALU).

#### The MIPS Register File
* Contains 32 32-bit general purpose registers.
* The MIPS register makes it possible to simultaneously read from two registers and write into one register.
##### Register File Function
* any value provided on 5-line Read register number 1 port results in the content of the corresponding register being provided on the 32-line Read data 1 port.
* any value provided on 5-line Read register number 2 port results in the content of the corresponding register being provided on the 32-line Read data 2 port.
* on the falling edge of write line, values that appear on 32-bit Write data port are written into the register with the number specified on the 5-line Write register port.

### Main objective
* The design of the Register File and ALU.
* Integrating the Register File and the ALU.
* process R-Type, I-Type and J-Type instructions.

### Mapping control to HW
![capture1](https://user-images.githubusercontent.com/40027608/41206598-c4521e22-6d06-11e8-87f6-8bed98d0740e.PNG)

### CU Function Table
![capture2](https://user-images.githubusercontent.com/40027608/41206599-c476c998-6d06-11e8-8dd1-a8ab19783ebf.PNG)

### CU HW Design
![capture3](https://user-images.githubusercontent.com/40027608/41206600-c4a20dce-6d06-11e8-9923-cea80fc61ffd.PNG)

### ALU Control
![capture4](https://user-images.githubusercontent.com/40027608/41206601-c4c9b37e-6d06-11e8-867a-65f8b76e0768.PNG)


### Development Tool
VHDL

### Sample Run
![capture5](https://user-images.githubusercontent.com/40027608/41206665-c2bcd786-6d07-11e8-964a-e011b83c65ce.PNG)
