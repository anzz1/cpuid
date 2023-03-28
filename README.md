# cpuid

cross-platform cross-compiler single-header C/C++ cpuid intrinsic.  

This should alleviate the clusterfuck of __cpuid intrinsics as it seems that every compiler decided   
that they had to have their own instead of using a common standard.

Being simply pure machine code, this should work with every compiler on planet Earth.

**cpuid.h**  
can be included to your application or just copypasta the functions you need  

**cpuid.c**  
example command-line test application 

#### TODO

##### Architectures
- [x] x86
- [x] x86_64
- [ ] ARM
- [ ] PPC
- [ ] ...

Most of the features are implemented, but not every single one of them because laziness.  
If a feature you need isn't covered, feel free to [post an issue](https://github.com/anzz1/cpuid/issues)
