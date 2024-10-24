SN-Pico
===
`SN-Pico`--we employed a pre-developed SN machine, which utilizes parameters such as `SN` declarations and pin mappings presented in the form of C language `.h` files, generated by the file `sparse-generator.c`. We used a variant of the `SN` virtual machine for `GPU`, replacing certain multidimensional grid structures with the corresponding (nested) loops. To fit the limited memory of microcontrollers, we adopted a specialized Indexed Column-Wise Sparse Matrix (`sicw`) data structure and used arrays to store priorities to accelerate retrieval. Compared to conventional matrix-based implementations, this structure reduces memory usage and enhances performance. In practical applications, we used the `Raspberry Pi Pico` microcontroller and employed the `Arduino IDE` as the central tool to test and evaluate the performance of the microcontroller.

## Directory
- [Compatibility](#Compatibility)
- [Usage-instructions](#Usage-instructions)
- [Content](#Content)
- [Sicw.h-file](#Sicw.h-file)
- [References](#References)

Compatibility:
-----
1.`Tina` and file format according to https://projects.laas.fr/tina/index.php `nd` `NDR`

2.`NDRtoSN` and transition substitution labels according to https://github.com/dazeorgacm/ `NDRtoSN`

3.`SN-VM` and file format according to https://github.com/zhangq9919/Sleptsov-net-processor `LSN`

4.`HSNtoLSN` and file format according to https://github.com/HfZhao1998/Compiler-and-Linker-of-Sleptsov-net-Program `HSN`

5.`SN-VM-GPU` and file format according to https://github.com/tishtri/SN-VM-GPU `MSN`

6.`SNC_ArduinoIDE` SN declarations in the form of C language sn.h file for https://github.com/dimazaitsev/SNC_ArduinoIDE

7.To build , files for work with abstract lists al.h and al.c should be downloaded from https://github.com/dazeorgacm/ts `NDRtoSN`

8.`Arduino IDE` to compile and upload to microcontroller https://www.arduino.cc/en/software

9.Reliable Embedded System Graphical Design in Sleptsov Net Machine https://youtu.be/BG8_UDN7Xvk

Usage-instructions:
-----
> How to use `NDRtoSN` as a part of experimental `SNC IDE&VM`

We list references to components in the "Compatibility" section.

-Use `Tina` `nd` as a graphical editor and its labels with special syntax (see "Transition Substitution Label" section) to specify the transition substitution of `HSN`.
   
-Use `NDRtoSN` to convert the `NDR` file from `Tina` into `HSN` or `LSN`.
   
-Use `HSNtoLSN` to compile and link the HSN file with the mentioned LSN files into a single `LSN` file.
   
-Run the `LSN` file on `SN-VM` or `SN-VM-GPU`.

> Desktop:

-Compile and run `generator.c` to convert `dense-matrix.h` in input directory to the corresponding `sicw-matrix.h`.

-Choose SN machine by using different .h files(dense/sicw)

-Open `dev-C` or other IDE

-Compile and run `test.c`

> Arduino:

-Run `generator.c` to convert `dense-matrix.h` in input directory to the corresponding `sicw-matrix.h`.

-Choose SN machine by using different .h files

-Open sketch sna.ino in `Arduino IDE`

-Compile and upload to `microcontroller`

-Test microcontroller work

-Debug controlling debug info printed on serial interface

Content:
-----
`dense-Arduino` - Arduino sketch for generic SN machine with dense matrix example .h files

`dense-desktop` - C file for generic SN machine with dense matrix example .h files

`sicw-Arduino` - Arduino sketch for generic SN machine with specialized Indexed Column-Wise Sparse Matrix (sicw) example .h files

`sicw-desktop` - C file for generic SN machine with specialized Indexed Column-Wise Sparse Matrix (sicw) example .h files

`input` - examples of dense matrices and specialized Indexed Column-Wise Sparse matrices(sicw) 

`generator` - generator for converting dense matrices to specialized Indexed Column-Wise Sparse matrices(sicw)

Sicw.h-file:
-----
SN is specified as 5 numbers, 2 matrices, 4 vector:

`#define m` - number of places

`#define n` - number of transitions

`#define KB` - number of non-zero elements in the dense matrix b

`#define KD` - number of non-zero elements in the dense matrix d

`#define KR` - number of non-zero elements in the dense matrix r

`static int bs[KB][2]` - non-zero elements' row-index and value in b matrix of imcoming arcs of transitions

`static int ds[KD][2]` - non-zero elements' row-index and value in d matrix of outgoing arcs of transitions

`static int tbs[n+1]` - vector of index of the first non-zero element in each column of the b matrix

`static int tds[n+1]` - vector of index of the first non-zero element in each column of the d matrix

`static int v_per[n]` - vector of priority sequence of transitions

`static int mu[m]` - vector of initial marking

References:
----
1.Zaitsev D.A. Sleptsov Nets Run Fast, IEEE Transactions on Systems, Man, and Cybernetics: Systems, 2016, Vol. 46, No. 5, 682 - 693. http://dx.doi.org/10.1109/TSMC.2015.2444414    

2.Dmitry A. Zaitsev, Tatiana R. Shmeleva, Qing Zhang, and Hongfei Zhao, Virtual Machine and Integrated Developer Environment for Sleptsov Net Computing Parallel Processing Letters, Vol. 33, No. 03, 2350006 (2023). https://doi.org/10.1142/S0129626423500068      

3.TIme petri Net Analyzer, Release 3.8.0, May 05, 2024 (Runs Sleptsov nets). https://projects.laas.fr/tina/download.php

4.Zaitsev D.A. Universal Sleptsov Net, International Journal of Computer Mathematics, 94(12) 2017, 2396-2408. http://dx.doi.org/10.1080/00207160.2017.1283410

5.Tatiana R. Shmeleva, Jan W. Owsiński, Abdulmalik Ahmad Lawan (2021) Deep learning on Sleptsov nets, International Journal of Parallel, Emergent and Distributed Systems, 36:6, 535-548, https://doi.org/10.1080/17445760.2021.1945055

6.Qing Zhang, Ding Liu, Yifan Hou, Sleptsov Net Processor, International Conference ”Problems of Infocommunications. Science and Technology” (PICST2022), 10-12 October, 2022, Kyiv, Ukraine.

7.Hongfei Zhao, Ding Liu, Yifan Hou, Compiler and Linker of Sleptsov Net Program,International Conference ”Problems of Infocommunications. Science and Technology” (PICST2022), 10-12 October, 2022, Kyiv, Ukraine.









