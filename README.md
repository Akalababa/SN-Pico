Discription
===
`SN-Pico`--we employed a pre-developed SN machine, which utilizes parameters such as `SN` declarations and pin mappings presented in the form of C language `.h` files, generated by the file `sparse-generator.c`. We used a variant of the `SN` virtual machine for `GPU`, replacing certain multidimensional grid structures with the corresponding (nested) loops. To fit the limited memory of microcontrollers, we adopted a specialized Indexed Column-Wise Sparse Matrix (`sicw`) data structure and used arrays to store priorities to accelerate retrieval. Compared to conventional matrix-based implementations, this structure reduces memory usage and enhances performance. In practical applications, we used the `Raspberry Pi Pico` microcontroller and employed the `Arduino IDE` as the central tool to test and evaluate the performance of the microcontroller.

How to use `NDRtoSN` as a part of experimental `SNC IDE&VM`
-----
We list references to components in the "Compatibility" section.

1.Use `Tina` `nd` as a graphical editor and its labels with special syntax (see "Transition Substitution Label" section) to specify the transition substitution of `HSN`.
   
2.Use `NDRtoSN` to convert the `NDR` file from `Tina` into `HSN` or `LSN`.
   
3.Use `HSNtoLSN` to compile and link the HSN file with the mentioned LSN files into a single `LSN` file.
   
4.Run the `LSN` file on `SN-VM` or `SN-VM-GPU`.

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

Content:
-----


