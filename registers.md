##0x252 The x86 Processor  

**(gdb) info registers**  

The first four registers are known as general purpose registers.  
But they mainly act as temporary variable for the CPU when it is executing machine instructions.  

EAX - Accumulation  
ECX - Counter  
EDX - Data  
EBX - Base  

***
The second four registers are also general purpose registers, but they are sometimes known as pointers and indexes. The first two registers are called pointers because they store 32-bit addresses, which essentially point to that location in memory. These registers are fairly important to program execution and memory management. There are **load** and **store** instructions that use the last two registers, but for the most part, these registers can be thought of as just simple general-purpose registers.  

ESP - Stack Pointer  
EBP - Base Pointer  
ESI - Source Index  
EDI - Destination Index  

***
EIP points to the current instruction the processor is reading.  
EIP - Instruction Pointer 

***
EFLAGS register actually consists of several bit flags that are used for comparisons and memory segmentations.  
