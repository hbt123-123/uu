// rea decompile_all
// name: FUN_10067de9c
// address: 0x10067de9c
// body: available
// range: 0x10067de9c-0x10067df6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10067de9c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  long local_68 [3];
  long local_50;
  undefined **ppuStack_48;
  
  FUN_10067e840();
  lVar1 = param_2;
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = 0x40;
  *(code **)(lVar1 + 0x18) = FUN_1000046dc;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20;
  ppuStack_48 = &PTR_PTR_1009e60c0;
  lVar2 = 0;
  local_68[0] = lVar1;
  local_50 = param_2;
  FUN_100634e1c();
  lVar1 = lVar2;
  _swift_allocObject();
  *(undefined **)(lVar1 + 0x48) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(lVar1 + 0x10) = 0x40;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  FUN_1000a0074(local_68,lVar1 + 0x20);
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_PTR_1009e1948;
  param_1[5] = (long)&PTR_PTR_1009e1958;
  *param_1 = lVar1;
  _swift_retain();
  return;
}

