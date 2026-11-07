// rea decompile_all
// name: FUN_1005cb7ac
// address: 0x1005cb7ac
// body: available
// range: 0x1005cb7ac-0x1005cb867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1005cb7ac(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined8 unaff_x20;
  undefined1 local_31;
  
  lVar2 = 0;
  FUN_1005c8c98();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *param_2;
  FUN_1005cb768(param_1,puVar3);
  local_31 = uVar1;
  _swift_allocObject();
  FUN_1005cb868(puVar3,&local_31,unaff_x20);
  FUN_1005cbe6c(param_1);
  return puVar3;
}

