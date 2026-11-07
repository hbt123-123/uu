// rea decompile_all
// name: FUN_10007ad38
// address: 0x10007ad38
// body: available
// range: 0x10007ad38-0x10007ae47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10007ae04 to 0x1000c21a4 _$ss11_StringGutsV18foreignScalarAlignySS5IndexVAEF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10007ad38(ulong param_1,ulong param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 local_28;
  ulong local_20;
  ulong uStack_18;
  
  if (((param_1 & 0xc000) == 0) && (0xffff < param_1)) {
    local_28 = param_1 >> 0x10;
    if ((param_3 >> 0x3c & 1) == 0) {
      if ((param_3 >> 0x3d & 1) == 0) {
        if ((param_2 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
          if (local_28 == param_3) goto LAB_10007addc;
        }
        else {
          uVar3 = param_2 & 0xffffffffffff;
          param_2 = (param_3 & 0xfffffffffffffff) + 0x20;
          if (local_28 == uVar3) goto LAB_10007addc;
        }
        if ((*(byte *)(param_2 + local_28) & 0xc0) == 0x80) {
          uVar3 = local_28;
          do {
            local_28 = uVar3 - 1;
            pbVar1 = (byte *)((param_2 - 1) + uVar3);
            uVar3 = local_28;
          } while ((*pbVar1 & 0xc0) == 0x80);
        }
      }
      else {
        local_20 = param_2;
        uStack_18 = param_3 & 0xffffffffffffff;
        if (local_28 != (param_3 >> 0x38 & 0xf)) {
          bVar2 = *(byte *)((long)&local_20 + local_28);
          while ((bVar2 & 0xc0) == 0x80) {
            bVar2 = *(byte *)((long)&local_28 + local_28 + 7);
            local_28 = local_28 - 1;
          }
        }
      }
LAB_10007addc:
      return local_28 << 0x10;
    }
    uVar3 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar3 = param_3 >> 0x38 & 0xf;
    }
    if (local_28 != uVar3) {
      __ss11_StringGutsV18foreignScalarAlignySS5IndexVAEF();
      return param_1;
    }
  }
  else {
    param_1 = param_1 & 0xffffffffffff0000;
  }
  return param_1;
}

