// rea decompile_all
// name: FUN_1003e5460
// address: 0x1003e5460
// body: available
// range: 0x1003e5460-0x1003e54cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003e5460(void)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_70 [16];
  unkuint9 local_40;
  
  puVar1 = &DAT_100a7c340;
  FUN_100004bb4(&DAT_100a7c340,&DAT_100810278);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&local_40,FUN_1003e65d8,auStack_70,puVar1);
  auVar2._9_7_ = 0;
  auVar2._0_9_ = local_40;
  return auVar2;
}

