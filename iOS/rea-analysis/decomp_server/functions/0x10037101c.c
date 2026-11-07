// rea decompile_all
// name: _TtC10Filepicker17FilepickerManager::commonConfig
// address: 0x10037101c
// body: available
// range: 0x10037101c-0x1003710d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003710d0 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC10Filepicker17FilepickerManager::commonConfig(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong *puVar3;
  code *pcVar4;
  
  lVar1 = sessionDelegate;
  _swift_unknownObjectWeakAssign
            (*(long *)(param_1 + sessionDelegate) +
             ::_TtC10Filepicker25FilePickerSessionDelegate::sessionManager,param_1);
  puVar3 = *(ulong **)(param_1 + lVar1);
  puVar2 = &DAT_1009b5368;
  _swift_allocObject(&DAT_1009b5368,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,param_1);
  pcVar4 = *(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 & *puVar3) + 0xb0);
  _swift_retain(puVar2);
  (*pcVar4)(thunk_FUN_100372c0c,puVar2);
  _swift_release(puVar2);
  return;
}

