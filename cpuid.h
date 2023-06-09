// cpuid.h

/*
 * cpuid v1.00
 * https://github.com/anzz1/cpuid
 */

#ifndef __CPUID_H
#define __CPUID_H

#if ( defined(__GNUC__) || defined(__MINGW__) || defined (__clang__) )
#ifndef __forceinline
#define __forceinline __attribute__((always_inline)) inline
#endif
#ifndef __cdecl
#define __cdecl __attribute__((__cdecl__))
#endif
#endif

#if defined(_WIN64) || defined(__x86_64__) || defined(_M_X64) || defined(_M_AMD64)
#undef IS_X86
#ifndef IS_X64
#define IS_X64
#endif
#elif defined(i386) || defined(__i386__) || defined(__i386) || defined(_M_IX86)
#undef IS_X64
#ifndef IS_X86
#define IS_X86
#endif
#endif

#if defined(IS_X86) || defined(IS_X64)

__forceinline unsigned int CPUID_SSE3(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PCLMULQDQ(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xD1,0xE9,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_DTES64(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x02,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_MONITOR(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x03,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_DS_CPL(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x04,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_VMX(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x05,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SMX(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x06,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_EIST(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x07,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_TM2(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x08,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SSSE3(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x09,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_CNXT_ID(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x0A,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SDBG(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x0B,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_FMA(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x0C,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_CMPXCHG16B(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x0D,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_XTPR(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x0E,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PDCM(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x0F,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PCID(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x11,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_DCA(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x12,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SSE4_1(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x13,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SSE4_2(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x14,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_X2APIC(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x15,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_MOVBE(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x16,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_POPCNT(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x17,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_TSC_DEADLINE(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x18,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AESNI(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x19,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_XSAVE(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x1A,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_OSXSAVE(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x1B,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x1C,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_F16C(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x1D,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_RDRAND(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x1E,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_FPU(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_VME(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xD1,0xEA,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_DE(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x02,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PSE(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x03,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_TSC(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x04,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_MSR(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x05,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PAE(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x06,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_MCE(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x07,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_CX8(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x08,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_APIC(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x09,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SEP(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x0B,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_MTRR(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x0C,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PGE(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x0D,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_MCA(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x0E,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_CMOV(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x0F,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PAT(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x10,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PSE_36(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x11,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PSN(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x12,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_CLFSH(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x13,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_DS(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x15,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_ACPI(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x16,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_MMX(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x17,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_FXSR(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x18,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SSE(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x19,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SSE2(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x1A,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SS(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x1B,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_HTT(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x1C,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_TM(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x1D,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PBE(void) {
  static unsigned const char a[] = {0x53,0xB8,0x01,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x1F,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_FSGSBASE(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_IA32_TSC_ADJUST(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xD1,0xEB,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SGX(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x02,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_BMI1(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x03,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_HLE(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x04,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX2(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x05,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_FDP_EXCPTN_ONLY(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x06,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SMEP(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x07,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_BMI2(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x08,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_ERMSB(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x09,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_INVPCID(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x0A,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_RTM(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x0B,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_RDTM(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x0C,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_DFPUCDS(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x0D,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_MPX(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x0E,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_RDTA(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x0F,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512F(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x10,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512DQ(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x11,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_RDSEED(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x12,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_ADX(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x13,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SMAP(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x14,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512_IFMA(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x15,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_CLFLUSHOPT(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x17,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_CLWB(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x18,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PT(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x19,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512PF(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x1A,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512ER(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x1B,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512CD(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x1C,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SHA(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x1D,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512BW(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x1E,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512VL(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEB,0x1F,0x83,0xE3,0x01,0x89,0xD8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PREFETCHWT1(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512_VBMI(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xD1,0xE9,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_UMIP(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x02,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PKU(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x03,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_OSPKE(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x04,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_WAITPKG(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x05,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512_VBMI2(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x06,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_CET_SS(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x07,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_GFNI(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x08,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_VAES(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x09,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_VPCLMULQDQ(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x0A,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512_VNNI(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x0B,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512_BITALG(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x0C,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_TME_EN(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x0D,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512_VPOPCNTDQ(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x0E,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_LA57(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x10,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_RDPID(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x16,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_KL(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x17,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_CLDEMOTE(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x19,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_MOVDIRI(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x1B,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_MOVDIR64B(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x1C,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_ENQCMD(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x1D,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SGX_LC(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x1E,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PKS(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xE9,0x1F,0x83,0xE1,0x01,0x89,0xC8,0x5B,0xC3};
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512_4VNNIW(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x02,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512_4FMAPS(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x03,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_FSREPMOV(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x04,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_UINTR(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x05,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512_VP2INTERSECT(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x08,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_MDCLEAR(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x0A,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SERIALIZE(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x0E,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_HYBRID(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x0F,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_TSXLDTRK(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x10,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_PCONFIG(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x12,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_CET_IBT(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x14,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AMX_BF16(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x16,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AVX512_FP16(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x17,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AMX_TILE(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x18,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_AMX_INT8(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x19,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_IBRS(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x1A,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_STIBP(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x1B,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_L1DF(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x1C,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_ACAPMSR(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x1D,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_CCAPMSR(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x1E,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
__forceinline unsigned int CPUID_SSBD(void) {
  static unsigned const char a[] = {0x53,0x31,0xC9,0xB8,0x07,0x00,0x00,0x00,0x0F,0xA2,0xC1,0xEA,0x1F,0x83,0xE2,0x01,0x89,0xD0,0x5B,0xC3}; 
  return ((unsigned int (__cdecl *)(void)) (void*)((void*)a))();
}
#endif // defined(IS_X86) || defined(IS_X64)

#endif // __CPUID_H

