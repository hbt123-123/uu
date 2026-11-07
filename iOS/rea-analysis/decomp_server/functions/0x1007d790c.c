// rea decompile_all
// name: FUN_1007d790c
// address: 0x1007d790c
// body: available
// range: 0x1007d790c-0x1007d798f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1007d790c(ulong param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = -(param_1 >> 7 & 1) & 0xfffffffffffff800 | (param_1 & 0xff) << 3;
  lVar2 = *(long *)(&DAT_100854098 + uVar3);
  lVar4 = *(long *)(&DAT_1008540d0 + uVar3);
  uVar3 = -(param_2 >> 7 & 1) & 0xfffffffffffff800 | (param_2 & 0xff) << 3;
  lVar5 = *(long *)(&DAT_1008540d0 + uVar3);
  if (lVar2 == *(long *)(&DAT_100854098 + uVar3) && lVar4 == lVar5) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar2,lVar4,*(long *)(&DAT_100854098 + uVar3),lVar5,0);
    uVar1 = (uint)lVar2;
  }
  _swift_bridgeObjectRelease(lVar4);
  _swift_bridgeObjectRelease(lVar5);
  return uVar1 & 1;
}

