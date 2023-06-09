// cpuid.c

/*
 * cpuid v1.00
 * https://github.com/anzz1/cpuid
 */

#include <stdio.h>

#include "cpuid.h"

int main(void)
{
  printf("SSE3=%d\n", CPUID_SSE3());
  printf("PCLMULQDQ=%d\n", CPUID_PCLMULQDQ());
  printf("DTES64=%d\n", CPUID_DTES64());
  printf("MONITOR=%d\n", CPUID_MONITOR());
  printf("DS_CPL=%d\n", CPUID_DS_CPL());
  printf("VMX=%d\n", CPUID_VMX());
  printf("SMX=%d\n", CPUID_SMX());
  printf("EIST=%d\n", CPUID_EIST());
  printf("TM2=%d\n", CPUID_TM2());
  printf("SSSE3=%d\n", CPUID_SSSE3());
  printf("CNXT_ID=%d\n", CPUID_CNXT_ID());
  printf("SDBG=%d\n", CPUID_SDBG());
  printf("FMA=%d\n", CPUID_FMA());
  printf("CMPXCHG16B=%d\n", CPUID_CMPXCHG16B());
  printf("XTPR=%d\n", CPUID_XTPR());
  printf("PDCM=%d\n", CPUID_PDCM());
  printf("PCID=%d\n", CPUID_PCID());
  printf("DCA=%d\n", CPUID_DCA());
  printf("SSE4_1=%d\n", CPUID_SSE4_1());
  printf("SSE4_2=%d\n", CPUID_SSE4_2());
  printf("X2APIC=%d\n", CPUID_X2APIC());
  printf("MOVBE=%d\n", CPUID_MOVBE());
  printf("POPCNT=%d\n", CPUID_POPCNT());
  printf("TSC_DEADLINE=%d\n", CPUID_TSC_DEADLINE());
  printf("AESNI=%d\n", CPUID_AESNI());
  printf("XSAVE=%d\n", CPUID_XSAVE());
  printf("OSXSAVE=%d\n", CPUID_OSXSAVE());
  printf("AVX=%d\n", CPUID_AVX());
  printf("F16C=%d\n", CPUID_F16C());
  printf("RDRAND=%d\n", CPUID_RDRAND());
  printf("FPU=%d\n", CPUID_FPU());
  printf("VME=%d\n", CPUID_VME());
  printf("DE=%d\n", CPUID_DE());
  printf("PSE=%d\n", CPUID_PSE());
  printf("TSC=%d\n", CPUID_TSC());
  printf("MSR=%d\n", CPUID_MSR());
  printf("PAE=%d\n", CPUID_PAE());
  printf("MCE=%d\n", CPUID_MCE());
  printf("CX8=%d\n", CPUID_CX8());
  printf("APIC=%d\n", CPUID_APIC());
  printf("SEP=%d\n", CPUID_SEP());
  printf("MTRR=%d\n", CPUID_MTRR());
  printf("PGE=%d\n", CPUID_PGE());
  printf("MCA=%d\n", CPUID_MCA());
  printf("CMOV=%d\n", CPUID_CMOV());
  printf("PAT=%d\n", CPUID_PAT());
  printf("PSE_36=%d\n", CPUID_PSE_36());
  printf("PSN=%d\n", CPUID_PSN());
  printf("CLFSH=%d\n", CPUID_CLFSH());
  printf("DS=%d\n", CPUID_DS());
  printf("ACPI=%d\n", CPUID_ACPI());
  printf("MMX=%d\n", CPUID_MMX());
  printf("FXSR=%d\n", CPUID_FXSR());
  printf("SSE=%d\n", CPUID_SSE());
  printf("SSE2=%d\n", CPUID_SSE2());
  printf("SS=%d\n", CPUID_SS());
  printf("HTT=%d\n", CPUID_HTT());
  printf("TM=%d\n", CPUID_TM());
  printf("PBE=%d\n", CPUID_PBE());
  printf("FSGSBASE=%d\n", CPUID_FSGSBASE());
  printf("IA32_TSC_ADJUST=%d\n", CPUID_IA32_TSC_ADJUST());
  printf("SGX=%d\n", CPUID_SGX());
  printf("BMI1=%d\n", CPUID_BMI1());
  printf("HLE=%d\n", CPUID_HLE());
  printf("AVX2=%d\n", CPUID_AVX2());
  printf("FDP_EXCPTN_ONLY=%d\n", CPUID_FDP_EXCPTN_ONLY());
  printf("SMEP=%d\n", CPUID_SMEP());
  printf("BMI2=%d\n", CPUID_BMI2());
  printf("ERMSB=%d\n", CPUID_ERMSB());
  printf("INVPCID=%d\n", CPUID_INVPCID());
  printf("RTM=%d\n", CPUID_RTM());
  printf("RDTM=%d\n", CPUID_RDTM());
  printf("DFPUCDS=%d\n", CPUID_DFPUCDS());
  printf("MPX=%d\n", CPUID_MPX());
  printf("RDTA=%d\n", CPUID_RDTA());
  printf("AVX512F=%d\n", CPUID_AVX512F());
  printf("AVX512DQ=%d\n", CPUID_AVX512DQ());
  printf("RDSEED=%d\n", CPUID_RDSEED());
  printf("ADX=%d\n", CPUID_ADX());
  printf("SMAP=%d\n", CPUID_SMAP());
  printf("AVX512_IFMA=%d\n", CPUID_AVX512_IFMA());
  printf("CLFLUSHOPT=%d\n", CPUID_CLFLUSHOPT());
  printf("CLWB=%d\n", CPUID_CLWB());
  printf("PT=%d\n", CPUID_PT());
  printf("AVX512PF=%d\n", CPUID_AVX512PF());
  printf("AVX512ER=%d\n", CPUID_AVX512ER());
  printf("AVX512CD=%d\n", CPUID_AVX512CD());
  printf("SHA=%d\n", CPUID_SHA());
  printf("AVX512BW=%d\n", CPUID_AVX512BW());
  printf("AVX512VL=%d\n", CPUID_AVX512VL());
  printf("PREFETCHWT1=%d\n", CPUID_PREFETCHWT1());
  printf("AVX512_VBMI=%d\n", CPUID_AVX512_VBMI());
  printf("UMIP=%d\n", CPUID_UMIP());
  printf("PKU=%d\n", CPUID_PKU());
  printf("OSPKE=%d\n", CPUID_OSPKE());
  printf("WAITPKG=%d\n", CPUID_WAITPKG());
  printf("AVX512_VBMI2=%d\n", CPUID_AVX512_VBMI2());
  printf("CET_SS=%d\n", CPUID_CET_SS());
  printf("GFNI=%d\n", CPUID_GFNI());
  printf("VAES=%d\n", CPUID_VAES());
  printf("VPCLMULQDQ=%d\n", CPUID_VPCLMULQDQ());
  printf("AVX512_VNNI=%d\n", CPUID_AVX512_VNNI());
  printf("AVX512_BITALG=%d\n", CPUID_AVX512_BITALG());
  printf("TME_EN=%d\n", CPUID_TME_EN());
  printf("AVX512_VPOPCNTDQ=%d\n", CPUID_AVX512_VPOPCNTDQ());
  printf("LA57=%d\n", CPUID_LA57());
  printf("RDPID=%d\n", CPUID_RDPID());
  printf("KL=%d\n", CPUID_KL());
  printf("CLDEMOTE=%d\n", CPUID_CLDEMOTE());
  printf("MOVDIRI=%d\n", CPUID_MOVDIRI());
  printf("MOVDIR64B=%d\n", CPUID_MOVDIR64B());
  printf("ENQCMD=%d\n", CPUID_ENQCMD());
  printf("SGX_LC=%d\n", CPUID_SGX_LC());
  printf("PKS=%d\n", CPUID_PKS());
  printf("AVX512_4VNNIW=%d\n", CPUID_AVX512_4VNNIW());
  printf("AVX512_4FMAPS=%d\n", CPUID_AVX512_4FMAPS());
  printf("FSREPMOV=%d\n", CPUID_FSREPMOV());
  printf("UINTR=%d\n", CPUID_UINTR());
  printf("AVX512_VP2INTERSECT=%d\n", CPUID_AVX512_VP2INTERSECT());
  printf("MDCLEAR=%d\n", CPUID_MDCLEAR());
  printf("SERIALIZE=%d\n", CPUID_SERIALIZE());
  printf("HYBRID=%d\n", CPUID_HYBRID());
  printf("TSXLDTRK=%d\n", CPUID_TSXLDTRK());
  printf("PCONFIG=%d\n", CPUID_PCONFIG());
  printf("CET_IBT=%d\n", CPUID_CET_IBT());
  printf("AMX_BF16=%d\n", CPUID_AMX_BF16());
  printf("AVX512_FP16=%d\n", CPUID_AVX512_FP16());
  printf("AMX_TILE=%d\n", CPUID_AMX_TILE());
  printf("AMX_INT8=%d\n", CPUID_AMX_INT8());
  printf("IBRS=%d\n", CPUID_IBRS());
  printf("STIBP=%d\n", CPUID_STIBP());
  printf("L1DF=%d\n", CPUID_L1DF());
  printf("ACAPMSR=%d\n", CPUID_ACAPMSR());
  printf("CCAPMSR=%d\n", CPUID_CCAPMSR());
  printf("SSBD=%d\n", CPUID_SSBD());
  return 0;
}

