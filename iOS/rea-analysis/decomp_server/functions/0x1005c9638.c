// rea decompile_all
// name: FUN_1005c9638
// address: 0x1005c9638
// body: available
// range: 0x1005c9638-0x1005c96c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005c9638(ulong param_1,ulong param_2)

{
  uint uVar1;
  long unaff_x21;
  ulong local_30;
  ulong uStack_28;
  byte local_11;
  ulong *puVar2;
  
  puVar2 = &local_30;
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) goto LAB_1005c9694;
      puVar2 = (ulong *)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_28 = param_2 & 0xffffffffffffff;
      local_30 = param_1;
    }
    FUN_1005ce070(puVar2);
    uVar1 = (uint)puVar2;
  }
  else {
LAB_1005c9694:
    uVar1 = 0;
    __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
              (&local_11,FUN_1005c960c,0,param_1,param_2,PTR___sSbN_1009958c8);
    if (unaff_x21 == 0) {
      uVar1 = (uint)local_11;
    }
  }
  return uVar1 & 1;
}

