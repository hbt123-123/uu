// rea decompile_all
// name: FUN_100122dd0
// address: 0x100122dd0
// body: available
// range: 0x100122dd0-0x100122e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100122dd0(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  _swift_allocObject();
  *(undefined4 *)(unaff_x20 + 0x10) = param_1;
  _swift_beginAccess(unaff_x20 + 0x18,auStack_48,0x21,0);
  uVar1 = 0;
  local_60 = param_2;
  FUN_100005c3c(0);
  FUN_10039f5b8(&local_58,&local_60,uVar1);
  *(undefined8 *)(unaff_x20 + 0x18) = local_58;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_50;
  _swift_endAccess(auStack_48);
  *(undefined4 *)(unaff_x20 + 0x28) = param_3;
  return unaff_x20;
}

