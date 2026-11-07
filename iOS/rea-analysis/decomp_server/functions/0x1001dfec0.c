// rea decompile_all
// name: FUN_1001dfec0
// address: 0x1001dfec0
// body: available
// range: 0x1001dfec0-0x1001dff9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001dff78 to 0x1007dc784 _$ss11_StringGutsV18foreignScalarAlignySS5IndexVAEF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1001dfec0(ulong param_1,ulong param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  ulong uStack_18;
  
  if (((param_1 & 0xc000) != 0) || (param_1 < 0x10000)) {
    return param_1 & 0xffffffffffff0000;
  }
  uVar3 = param_1 >> 0x10;
  if ((param_3 >> 0x3c & 1) != 0) {
    uVar2 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar2 = param_3 >> 0x38 & 0xf;
    }
    if (uVar3 == uVar2) {
      return param_1;
    }
    __ss11_StringGutsV18foreignScalarAlignySS5IndexVAEF();
    return param_1;
  }
  if ((param_3 >> 0x3d & 1) == 0) {
    if ((param_2 >> 0x3c & 1) == 0) {
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      uVar2 = param_2;
    }
    else {
      uVar2 = (param_3 & 0xfffffffffffffff) + 0x20;
      param_3 = param_2 & 0xffffffffffff;
    }
    if (uVar3 == param_3) goto LAB_1001dff50;
    do {
      pbVar1 = (byte *)(uVar2 + uVar3);
      uVar3 = uVar3 - 1;
    } while ((*pbVar1 & 0xc0) == 0x80);
  }
  else {
    local_20 = param_2;
    uStack_18 = param_3 & 0xffffffffffffff;
    if (uVar3 == (param_3 >> 0x38 & 0xf)) goto LAB_1001dff50;
    do {
      pbVar1 = (byte *)((long)&local_20 + uVar3);
      uVar3 = uVar3 - 1;
    } while ((*pbVar1 & 0xc0) == 0x80);
  }
  uVar3 = uVar3 + 1;
LAB_1001dff50:
  return uVar3 << 0x10;
}

