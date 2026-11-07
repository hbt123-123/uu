// rea decompile_all
// name: FUN_100260cb0
// address: 0x100260cb0
// body: available
// range: 0x100260cb0-0x100260d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100260cb0(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,auStack_70,0,0);
  FUN_1000b142c(lVar1 + 0x10,auStack_58);
  FUN_10003f030(auStack_58,local_40);
  (**(code **)(lStack_38 + 0x10))(local_40,lStack_38);
  FUN_10003f094(auStack_58);
  return;
}

