// rea decompile_all
// name: FUN_1004f6774
// address: 0x1004f6774
// body: available
// range: 0x1004f6774-0x1004f685f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004f6774(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  uVar3 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar3 = uVar1;
    FUN_1005188b8();
    _swift_bridgeObjectRelease(uVar1);
    (**(code **)(param_3 + 0x18))();
    if (uVar2 == param_2 && uVar3 == param_3) {
      uVar4 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar2,uVar3,param_2,param_3,0);
      uVar4 = (uint)uVar2;
    }
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(param_3);
  }
  return uVar4 & 1;
}

