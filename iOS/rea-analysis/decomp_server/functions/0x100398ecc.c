// rea decompile_all
// name: FUN_100398ecc
// address: 0x100398ecc
// body: available
// range: 0x100398ecc-0x100398f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100398ecc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  code *local_50;
  undefined *puStack_48;
  
  lVar3 = *unaff_x20;
  lVar2 = unaff_x20[2];
  puVar1 = &DAT_1009b5ff0;
  _swift_allocObject(&DAT_1009b5ff0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar3 + 0x50);
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  local_50 = thunk_FUN_100398d78;
  puStack_48 = puVar1;
  _swift_retain(param_2);
  _swift_retain(lVar2);
  FUN_100398ca4(&local_50);
  _swift_release(lVar2);
  _swift_release(puVar1);
  return;
}

