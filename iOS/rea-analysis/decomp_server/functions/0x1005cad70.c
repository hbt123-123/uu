// rea decompile_all
// name: FUN_1005cad70
// address: 0x1005cad70
// body: available
// range: 0x1005cad70-0x1005cae3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cad70(code *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined1 local_58 [8];
  ulong local_50;
  ulong uStack_48;
  undefined1 local_38 [8];
  
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) != 0) {
      uStack_48 = param_4 & 0xffffffffffffff;
      local_50 = param_3;
      (*param_1)(local_58,&local_50);
      return;
    }
    if ((param_3 >> 0x3c & 1) != 0) {
      (*param_1)(&local_50,(param_4 & 0xfffffffffffffff) + 0x20);
      return;
    }
  }
  puVar1 = &DAT_100aad810;
  FUN_100004bb4(&DAT_100aad810,&DAT_10083f040);
  __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
            (local_38,param_1,param_2,param_3,param_4,puVar1);
  return;
}

