// rea decompile_all
// name: FUN_1005f4348
// address: 0x1005f4348
// body: available
// range: 0x1005f4348-0x1005f438b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005f4348(ulong param_1)

{
  undefined *puVar1;
  long unaff_x21;
  undefined1 auVar2 [16];
  
  puVar1 = &DAT_100aaf840;
  FUN_1005f8e74(param_1,&DAT_100aaf840,&DAT_100846e10,FUN_1005f8db4,&DAT_1009dcb10);
  if (unaff_x21 != 0) {
    puVar1 = (undefined *)(param_1 & 0xffffffffff);
  }
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = (undefined *)(param_1 & 0xffffffffff);
  return auVar2;
}

