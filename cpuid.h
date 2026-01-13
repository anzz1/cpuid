// cpuid.h

/*
 * cpuid v2.00
 * https://github.com/anzz1/cpuid
 */

#ifndef __CPUID_H
#define __CPUID_H

#if defined(_WIN64) || defined(__x86_64__) || defined(_M_X64) || defined(_M_AMD64)
#undef __X86__
#ifndef __X64__
#define __X64__
#endif
#elif defined(i386) || defined(__i386__) || defined(__i386) || defined(_M_IX86)
#undef __X64__
#ifndef __X86__
#define __X86__
#endif
#endif

#if defined(__GNUC__) || defined (__clang__)
#ifndef __forceinline
#define __forceinline __attribute__((always_inline)) inline
#endif
#endif

#if defined(__X86__) || defined(__X64__)

#ifdef _MSC_VER
#include <intrin.h>
#else
#include <cpuid.h>
#endif

// Standard CPUID helper
__forceinline static void cpuidex(unsigned int leaf, unsigned int subleaf,
                           unsigned int *eax, unsigned int *ebx,
                           unsigned int *ecx, unsigned int *edx) {
#ifdef _MSC_VER
  int regs[4];
  __cpuidex(regs, leaf, subleaf);
  *eax = regs[0]; *ebx = regs[1]; *ecx = regs[2]; *edx = regs[3];
#else
  __get_cpuid_count(leaf, subleaf, eax, ebx, ecx, edx);
#endif
}

// Leaf 1, ECX
__forceinline static unsigned int CPUID_SSE3(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<0))!=0; }
__forceinline static unsigned int CPUID_PCLMULQDQ(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<1))!=0; }
__forceinline static unsigned int CPUID_DTES64(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<2))!=0; }
__forceinline static unsigned int CPUID_MONITOR(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<3))!=0; }
__forceinline static unsigned int CPUID_DS_CPL(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<4))!=0; }
__forceinline static unsigned int CPUID_VMX(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<5))!=0; }
__forceinline static unsigned int CPUID_SMX(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<6))!=0; }
__forceinline static unsigned int CPUID_EIST(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<7))!=0; }
__forceinline static unsigned int CPUID_TM2(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<8))!=0; }
__forceinline static unsigned int CPUID_SSSE3(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<9))!=0; }
__forceinline static unsigned int CPUID_CNXT_ID(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<10))!=0; }
__forceinline static unsigned int CPUID_SDBG(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<11))!=0; }
__forceinline static unsigned int CPUID_FMA(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<12))!=0; }
__forceinline static unsigned int CPUID_CMPXCHG16B(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<13))!=0; }
__forceinline static unsigned int CPUID_XTPR(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<14))!=0; }
__forceinline static unsigned int CPUID_PDCM(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<15))!=0; }
__forceinline static unsigned int CPUID_PCID(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<17))!=0; }
__forceinline static unsigned int CPUID_DCA(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<18))!=0; }
__forceinline static unsigned int CPUID_SSE4_1(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<19))!=0; }
__forceinline static unsigned int CPUID_SSE4_2(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<20))!=0; }
__forceinline static unsigned int CPUID_X2APIC(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<21))!=0; }
__forceinline static unsigned int CPUID_MOVBE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<22))!=0; }
__forceinline static unsigned int CPUID_POPCNT(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<23))!=0; }
__forceinline static unsigned int CPUID_TSC_DEADLINE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<24))!=0; }
__forceinline static unsigned int CPUID_AESNI(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<25))!=0; }
__forceinline static unsigned int CPUID_XSAVE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<26))!=0; }
__forceinline static unsigned int CPUID_OSXSAVE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<27))!=0; }
__forceinline static unsigned int CPUID_AVX(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<28))!=0; }
__forceinline static unsigned int CPUID_F16C(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<29))!=0; }
__forceinline static unsigned int CPUID_RDRAND(void)  { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<30))!=0; }

// Leaf 1, EDX
__forceinline static unsigned int CPUID_FPU(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<0))!=0; }
__forceinline static unsigned int CPUID_VME(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<1))!=0; }
__forceinline static unsigned int CPUID_DE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<2))!=0; }
__forceinline static unsigned int CPUID_PSE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<3))!=0; }
__forceinline static unsigned int CPUID_TSC(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<4))!=0; }
__forceinline static unsigned int CPUID_MSR(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<5))!=0; }
__forceinline static unsigned int CPUID_PAE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<6))!=0; }
__forceinline static unsigned int CPUID_MCE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<7))!=0; }
__forceinline static unsigned int CPUID_CX8(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<8))!=0; }
__forceinline static unsigned int CPUID_APIC(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<9))!=0; }
__forceinline static unsigned int CPUID_SEP(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<11))!=0; }
__forceinline static unsigned int CPUID_MTRR(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<12))!=0; }
__forceinline static unsigned int CPUID_PGE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<13))!=0; }
__forceinline static unsigned int CPUID_MCA(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<14))!=0; }
__forceinline static unsigned int CPUID_CMOV(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<15))!=0; }
__forceinline static unsigned int CPUID_PAT(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<16))!=0; }
__forceinline static unsigned int CPUID_PSE_36(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<17))!=0; }
__forceinline static unsigned int CPUID_PSN(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<18))!=0; }
__forceinline static unsigned int CPUID_CLFSH(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<19))!=0; }
__forceinline static unsigned int CPUID_DS(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<21))!=0; }
__forceinline static unsigned int CPUID_ACPI(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<22))!=0; }
__forceinline static unsigned int CPUID_MMX(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<23))!=0; }
__forceinline static unsigned int CPUID_FXSR(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<24))!=0; }
__forceinline static unsigned int CPUID_SSE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<25))!=0; }
__forceinline static unsigned int CPUID_SSE2(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<26))!=0; }
__forceinline static unsigned int CPUID_SS(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<27))!=0; }
__forceinline static unsigned int CPUID_HTT(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<28))!=0; }
__forceinline static unsigned int CPUID_TM(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<29))!=0; }
__forceinline static unsigned int CPUID_PBE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(1,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<31))!=0; }

// Leaf 7, subleaf 0, EBX
__forceinline static unsigned int CPUID_FSGSBASE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<0))!=0; }
__forceinline static unsigned int CPUID_IA32_TSC_ADJUST(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<1))!=0; }
__forceinline static unsigned int CPUID_SGX(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<2))!=0; }
__forceinline static unsigned int CPUID_BMI1(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<3))!=0; }
__forceinline static unsigned int CPUID_HLE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<4))!=0; }
__forceinline static unsigned int CPUID_AVX2(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<5))!=0; }
__forceinline static unsigned int CPUID_FDP_EXCPTN_ONLY(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<6))!=0; }
__forceinline static unsigned int CPUID_SMEP(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<7))!=0; }
__forceinline static unsigned int CPUID_BMI2(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<8))!=0; }
__forceinline static unsigned int CPUID_ERMSB(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<9))!=0; }
__forceinline static unsigned int CPUID_INVPCID(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<10))!=0; }
__forceinline static unsigned int CPUID_RTM(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<11))!=0; }
__forceinline static unsigned int CPUID_RDTM(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<12))!=0; }
__forceinline static unsigned int CPUID_DFPUCDS(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<13))!=0; }
__forceinline static unsigned int CPUID_MPX(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<14))!=0; }
__forceinline static unsigned int CPUID_RDTA(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<15))!=0; }
__forceinline static unsigned int CPUID_AVX512F(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<16))!=0; }
__forceinline static unsigned int CPUID_AVX512DQ(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<17))!=0; }
__forceinline static unsigned int CPUID_RDSEED(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<18))!=0; }
__forceinline static unsigned int CPUID_ADX(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<19))!=0; }
__forceinline static unsigned int CPUID_SMAP(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<20))!=0; }
__forceinline static unsigned int CPUID_AVX512_IFMA(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<21))!=0; }
__forceinline static unsigned int CPUID_CLFLUSHOPT(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<23))!=0; }
__forceinline static unsigned int CPUID_CLWB(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<24))!=0; }
__forceinline static unsigned int CPUID_PT(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<25))!=0; }
__forceinline static unsigned int CPUID_AVX512PF(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<26))!=0; }
__forceinline static unsigned int CPUID_AVX512ER(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<27))!=0; }
__forceinline static unsigned int CPUID_AVX512CD(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<28))!=0; }
__forceinline static unsigned int CPUID_SHA(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<29))!=0; }
__forceinline static unsigned int CPUID_AVX512BW(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<30))!=0; }
__forceinline static unsigned int CPUID_AVX512VL(void)  { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ebx & (1<<31))!=0; }

// Leaf 7, subleaf 0, ECX
__forceinline static unsigned int CPUID_PREFETCHWT1(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<0))!=0; }
__forceinline static unsigned int CPUID_AVX512_VBMI(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<1))!=0; }
__forceinline static unsigned int CPUID_UMIP(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<2))!=0; }
__forceinline static unsigned int CPUID_PKU(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<3))!=0; }
__forceinline static unsigned int CPUID_OSPKE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<4))!=0; }
__forceinline static unsigned int CPUID_WAITPKG(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<5))!=0; }
__forceinline static unsigned int CPUID_AVX512_VBMI2(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<6))!=0; }
__forceinline static unsigned int CPUID_CET_SS(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<7))!=0; }
__forceinline static unsigned int CPUID_GFNI(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<8))!=0; }
__forceinline static unsigned int CPUID_VAES(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<9))!=0; }
__forceinline static unsigned int CPUID_VPCLMULQDQ(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<10))!=0; }
__forceinline static unsigned int CPUID_AVX512_VNNI(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<11))!=0; }
__forceinline static unsigned int CPUID_AVX512_BITALG(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<12))!=0; }
__forceinline static unsigned int CPUID_TME_EN(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<13))!=0; }
__forceinline static unsigned int CPUID_AVX512_VPOPCNTDQ(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<14))!=0; }
__forceinline static unsigned int CPUID_LA57(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<16))!=0; }
__forceinline static unsigned int CPUID_RDPID(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<22))!=0; }
__forceinline static unsigned int CPUID_KL(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<23))!=0; }
__forceinline static unsigned int CPUID_BUS_LOCK_DETECT(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<24))!=0; }
__forceinline static unsigned int CPUID_CLDEMOTE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<25))!=0; }
__forceinline static unsigned int CPUID_MOVDIRI(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<27))!=0; }
__forceinline static unsigned int CPUID_MOVDIR64B(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<28))!=0; }
__forceinline static unsigned int CPUID_ENQCMD(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<29))!=0; }
__forceinline static unsigned int CPUID_SGX_LC(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<30))!=0; }
__forceinline static unsigned int CPUID_PKS(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (ecx & (1<<31))!=0; }

// Leaf 7, subleaf 0, EDX
__forceinline static unsigned int CPUID_SGX_KEYS(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<1))!=0; }
__forceinline static unsigned int CPUID_AVX512_4VNNIW(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<2))!=0; }
__forceinline static unsigned int CPUID_AVX512_4FMAPS(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<3))!=0; }
__forceinline static unsigned int CPUID_FSREPMOV(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<4))!=0; }
__forceinline static unsigned int CPUID_UINTR(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<5))!=0; }
__forceinline static unsigned int CPUID_AVX512_VP2INTERSECT(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<8))!=0; }
__forceinline static unsigned int CPUID_SRBDS_CTRL(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<9))!=0; }
__forceinline static unsigned int CPUID_MDCLEAR(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<10))!=0; }
__forceinline static unsigned int CPUID_RTM_ALWAYS_ABORT(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<11))!=0; }
__forceinline static unsigned int CPUID_RTM_FORCE_ABORT(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<13))!=0; }
__forceinline static unsigned int CPUID_SERIALIZE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<14))!=0; }
__forceinline static unsigned int CPUID_HYBRID(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<15))!=0; }
__forceinline static unsigned int CPUID_TSXLDTRK(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<16))!=0; }
__forceinline static unsigned int CPUID_PCONFIG(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<18))!=0; }
__forceinline static unsigned int CPUID_ALRBS(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<19))!=0; }
__forceinline static unsigned int CPUID_CET_IBT(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<20))!=0; }
__forceinline static unsigned int CPUID_AMX_BF16(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (edx & (1<<22))!=0; }
__forceinline static unsigned int CPUID_AVX512_FP16(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<23))!=0; }
__forceinline static unsigned int CPUID_AMX_TILE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<24))!=0; }
__forceinline static unsigned int CPUID_AMX_INT8(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<25))!=0; }
__forceinline static unsigned int CPUID_IBRS(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<26))!=0; }
__forceinline static unsigned int CPUID_STIBP(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<27))!=0; }
__forceinline static unsigned int CPUID_L1DF(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<28))!=0; }
__forceinline static unsigned int CPUID_ACAPMSR(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<29))!=0; }
__forceinline static unsigned int CPUID_CCAPMSR(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<30))!=0; }
__forceinline static unsigned int CPUID_SSBD(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,0,&eax,&ebx,&ecx,&edx); return (edx & (1<<31))!=0; }

// Leaf 7, subleaf 1, EAX
__forceinline static unsigned int CPUID_SHA512(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<0))!=0; }
__forceinline static unsigned int CPUID_SM3(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<1))!=0; }
__forceinline static unsigned int CPUID_SM4(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<2))!=0; }
__forceinline static unsigned int CPUID_RAO_INT(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<3))!=0; }
__forceinline static unsigned int CPUID_AVX_VNNI(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<4))!=0; }
__forceinline static unsigned int CPUID_AVX512_BF16(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<5))!=0; }
__forceinline static unsigned int CPUID_LASS(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<6))!=0; }
__forceinline static unsigned int CPUID_CMPCCXADD(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<7))!=0; }
__forceinline static unsigned int CPUID_APMEXT(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<8))!=0; }
__forceinline static unsigned int CPUID_FZLMSB(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<10))!=0; }
__forceinline static unsigned int CPUID_FSSB(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<11))!=0; }
__forceinline static unsigned int CPUID_FSCSB(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<12))!=0; }
__forceinline static unsigned int CPUID_WRMSRNS(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<19))!=0; }
__forceinline static unsigned int CPUID_AMX_FP16(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<21))!=0; }
__forceinline static unsigned int CPUID_HRESET(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<22))!=0; }
__forceinline static unsigned int CPUID_AVX_IFMA(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<23))!=0; }
__forceinline static unsigned int CPUID_LAM(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<26))!=0; }
__forceinline static unsigned int CPUID_MSRLIST(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (eax & (1<<27))!=0; }

// Leaf 7, subleaf 1, EBX
__forceinline static unsigned int CPUID_IA32_PPIN(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (ebx & (1<<0))!=0; }
__forceinline static unsigned int CPUID_IA32_TSE(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (ebx & (1<<1))!=0; }

// Leaf 7, subleaf 1, EDX
__forceinline static unsigned int CPUID_AVX_VNNI_INT8(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (edx & (1<<4))!=0; }
__forceinline static unsigned int CPUID_AVX_NECONV(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (edx & (1<<5))!=0; }
__forceinline static unsigned int CPUID_AMX_COMPLEX(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (edx & (1<<8))!=0; }
__forceinline static unsigned int CPUID_AVX_VNNI_INT16(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (edx & (1<<10))!=0; }
__forceinline static unsigned int CPUID_PREFETCHI(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (edx & (1<<14))!=0; }
__forceinline static unsigned int CPUID_CET_SSS(void) { unsigned int eax,ebx,ecx,edx; cpuidex(7,1,&eax,&ebx,&ecx,&edx); return (edx & (1<<18))!=0; }

#endif // defined(__X86__) || defined(__X64__)

#endif // __CPUID_H
