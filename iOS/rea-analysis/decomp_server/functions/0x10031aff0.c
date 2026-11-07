// rea decompile_all
// name: FUN_10031aff0
// address: 0x10031aff0
// body: available
// range: 0x10031aff0-0x10031b07b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10031aff0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_1009b0a70;
  _swift_allocObject(&DAT_1009b0a70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  puVar2 = &DAT_1009b0a98;
  _swift_allocObject(&DAT_1009b0a98,0x20,7);
  *(code **)(puVar2 + 0x10) = thunk_FUN_10031bdd8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  _swift_retain_n();
  return;
}

