// rea decompile_all
// name: FUN_100093250
// address: 0x100093250
// body: available
// range: 0x100093250-0x1000933b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100093250(ulong param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  __s10Foundation3URLV17lastPathComponentSSvg();
  if (((param_1 == 0xd000000000000012) && (param_2 == -0x7ffffffeff780440)) ||
     (uVar1 = param_1,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (param_1,param_2,0xd000000000000012,0x800000010087fbc0,0), (uVar1 & 1) != 0)) {
LAB_1000932b4:
    uVar2 = 1;
  }
  else {
    uVar3 = 0x65746f6d65525555;
    uVar1 = uVar3;
    __sSS9hasPrefixySbSSF(0x65746f6d65525555,0xef2e726576726553,param_1,param_2);
    if ((uVar1 & 1) != 0) {
      uVar1 = 0;
      __sSS9hasSuffixySbSSF(0x676f6c2e,0xe400000000000000,param_1,param_2);
      if ((uVar1 & 1) != 0) goto LAB_1000932b4;
    }
    uVar1 = uVar3;
    __sSS9hasPrefixySbSSF(0x65746f6d65525555,0xee00726576726553,param_1,param_2);
    if ((uVar1 & 1) != 0) {
      uVar1 = 0;
      __sSS9hasSuffixySbSSF(0x676f6c732e,0xe500000000000000,param_1,param_2);
      if ((uVar1 & 1) != 0) goto LAB_1000932b4;
    }
    __sSS9hasPrefixySbSSF(0x65746f6d65525555,0xee00726576726553,param_1,param_2);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      __sSS9hasSuffixySbSSF(0x676f6c782e,0xe500000000000000,param_1,param_2);
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return uVar2 & 1;
}

