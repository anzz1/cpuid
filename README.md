# cpuid

cross-platform cross-compiler single-header C/C++ cpuid intrinsic.  

v2 branch uses the cpuid compiler instrinsics for GCC/Clang/MSVC support and works on Linux/BSD/Windows/macOS, and is compatible with modern compilers.
For older or obscure compilers that allow machine code inlining and doesn't have the cpuid intrinsics, refer to the v1 branch.

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
