// rea decompile_all
// name: FUN_100616260
// address: 0x100616260
// body: available
// range: 0x100616260-0x1006162ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100616260(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  FUN_100616300(0,*(undefined8 *)(*unaff_x20 + 0x50));
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = (undefined8 *)
           (&stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0));
  plVar2 = (long *)unaff_x20[2];
  *puVar3 = param_1;
  _swift_storeEnumTagMultiPayload(puVar3,lVar1,1);
  pcVar5 = *(code **)(*plVar2 + 0x68);
  _swift_errorRetain(param_1);
  (*pcVar5)(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}

