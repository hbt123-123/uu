// rea decompile_all
// name: FUN_100080810
// address: 0x100080810
// body: available
// range: 0x100080810-0x1000808a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100080810(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  param_1[3] = &DAT_1000f9148;
  FUN_100083938();
  param_1[4] = param_2;
  puVar1 = &DAT_1000f8fc0;
  _swift_allocObject(&DAT_1000f8fc0,0xd1,7);
  *param_1 = puVar1;
  FUN_1000837c0();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000133cc(unaff_x20 + 0x30,puVar1 + 0x90,&DAT_100104818,&DAT_1000d62d0);
  *(undefined8 *)(puVar1 + 0x88) = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  return;
}

