// rea decompile_all
// name: FUN_1003e5590
// address: 0x1003e5590
// body: available
// range: 0x1003e5590-0x1003e55f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003e5590(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 local_38;
  
  uVar1 = 0;
  __sSaMa(0,*(undefined8 *)(*unaff_x20 + 0x50));
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&local_38,FUN_1003e65f4,auStack_70,uVar1);
  return local_38;
}

