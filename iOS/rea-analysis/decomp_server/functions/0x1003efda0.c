// rea decompile_all
// name: FUN_1003efda0
// address: 0x1003efda0
// body: available
// range: 0x1003efda0-0x1003efe27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003efda0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_1009bb6b8;
  _swift_allocObject(&DAT_1009bb6b8,0x28,7);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  *(long *)(puVar1 + 0x20) = param_1;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  _swift_bridgeObjectRetain(param_1);
  FUN_1003efe4c(param_2,param_3,puVar1,uVar2);
  _swift_release(puVar1);
  return param_2;
}

