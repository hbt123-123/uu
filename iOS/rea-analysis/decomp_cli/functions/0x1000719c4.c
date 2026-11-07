// rea decompile_all
// name: FUN_1000719c4
// address: 0x1000719c4
// body: available
// range: 0x1000719c4-0x100071a97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000719c4(code *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint extraout_w8;
  uint uVar1;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long unaff_x21;
  ulong local_40;
  ulong uStack_38;
  byte local_22;
  byte local_21;
  
  if (((param_4 >> 0x3c & 1) == 0) &&
     ((param_4 & 0x2000000000000000) != 0 || (param_3 & 0x1000000000000000) != 0)) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if ((param_3 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
      }
      (*param_1)(&local_40);
      uVar1 = extraout_w8;
      local_22 = (byte)local_40;
    }
    else {
      uStack_38 = param_4 & 0xffffffffffffff;
      local_40 = param_3;
      (*param_1)(&local_22,&local_40);
      uVar1 = extraout_w8_00;
    }
    if (unaff_x21 == 0) {
      uVar1 = (uint)local_22;
    }
  }
  else {
    __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
              (&local_21,param_1,param_2,param_3,param_4,PTR___sSbN_1000f03a0);
    uVar1 = extraout_w8_01;
    if (unaff_x21 == 0) {
      uVar1 = (uint)local_21;
    }
  }
  return uVar1 & 1;
}

