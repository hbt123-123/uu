// rea decompile_all
// name: FUN_1000d4814
// address: 0x1000d4814
// body: available
// range: 0x1000d4814-0x1000d48c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d4814(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong local_40;
  ulong uStack_38;
  undefined1 local_28 [8];
  
  puVar1 = &local_40;
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) goto LAB_1000d486c;
      puVar1 = (ulong *)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_38 = param_2 & 0xffffffffffffff;
      local_40 = param_1;
    }
    _opendir(puVar1);
  }
  else {
LAB_1000d486c:
    puVar2 = &DAT_100a77788;
    FUN_100004bb4(&DAT_100a77788,&DAT_10080c580);
    __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
              (local_28,FUN_1000d47e8,0,param_1,param_2,puVar2);
  }
  return;
}

