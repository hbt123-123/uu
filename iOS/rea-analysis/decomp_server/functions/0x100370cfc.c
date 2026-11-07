// rea decompile_all
// name: FUN_100370cfc
// address: 0x100370cfc
// body: available
// range: 0x100370cfc-0x100370d9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100370d98 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100370cfc(void)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  ulong *puVar3;
  
  puVar3 = *(ulong **)(unaff_x20 + _TtC10Filepicker17FilepickerManager::sessionDelegate);
  _swift_unknownObjectWeakAssign
            ((long)puVar3 + _TtC10Filepicker25FilePickerSessionDelegate::sessionManager);
  puVar1 = &DAT_1009b5368;
  _swift_allocObject(&DAT_1009b5368,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  pcVar2 = *(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 & *puVar3) + 0xb0);
  _swift_retain(puVar1);
  (*pcVar2)(thunk_FUN_100372c0c,puVar1);
  _swift_release(puVar1);
  return;
}

