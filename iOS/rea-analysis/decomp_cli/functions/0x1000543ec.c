// rea decompile_all
// name: FUN_1000543ec
// address: 0x1000543ec
// body: available
// range: 0x1000543ec-0x10005462f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000543ec(long *param_1,long *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_4 == 0) {
    FUN_1000b3298();
    if (param_2 != (long *)0x0) {
      if ((param_1 == (long *)0x68737a) && (param_2 == (long *)0xe300000000000000)) {
        return;
      }
      uVar1 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x68737a,0xe300000000000000,param_1,param_2,0);
      if ((uVar1 & 1) != 0) {
        return;
      }
      if ((param_1 == (long *)0x68736162) && (param_2 == (long *)0xe400000000000000)) {
        return;
      }
      uVar1 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x68736162,0xe400000000000000,param_1,param_2,0);
      if ((uVar1 & 1) != 0) {
        return;
      }
      uVar1 = 0;
      if ((param_1 == (long *)0x68736966) && (param_2 == (long *)0xe400000000000000)) {
        return;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x68736966,0xe400000000000000,param_1,param_2,0);
      if ((uVar1 & 1) != 0) {
        return;
      }
      _swift_bridgeObjectRelease();
      param_1 = param_2;
    }
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,param_1,0,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if ((param_3 == 0x68737a) && (param_4 == -0x1d00000000000000)) {
      return;
    }
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x68737a,0xe300000000000000,param_3,param_4,0);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if ((param_3 == 0x68736162) && (param_4 == -0x1c00000000000000)) {
      return;
    }
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x68736162,0xe400000000000000,param_3,param_4,0);
    if ((uVar1 & 1) != 0) {
      return;
    }
    param_1 = (long *)0x68736966;
    if ((param_3 == 0x68736966) && (param_4 == -0x1c00000000000000)) {
      return;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x68736966,0xe400000000000000,param_3,param_4,0);
    if (((ulong)param_1 & 1) != 0) {
      return;
    }
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,param_1,0,0);
    *param_1 = param_3;
    param_1[1] = param_4;
  }
  param_1[3] = lStack_78;
  param_1[2] = local_80;
  param_1[5] = lStack_68;
  param_1[4] = lStack_70;
  param_1[7] = lStack_58;
  param_1[6] = local_60;
  param_1[9] = lStack_48;
  param_1[8] = lStack_50;
  *(undefined1 *)(param_1 + 10) = 3;
  _swift_willThrow();
  return;
}

