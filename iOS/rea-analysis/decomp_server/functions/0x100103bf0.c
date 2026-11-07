// rea decompile_all
// name: FUN_100103bf0
// address: 0x100103bf0
// body: available
// range: 0x100103bf0-0x100103c9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100103bf0(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_1003a9990(0);
    puVar1 = &DAT_10099d400;
    _swift_allocObject(&DAT_10099d400,0x18,7);
    _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
    _swift_retain(puVar1);
    FUN_1003a8df4(FUN_10010408c,puVar1);
    _swift_release_n(puVar1,2);
  }
  return;
}

