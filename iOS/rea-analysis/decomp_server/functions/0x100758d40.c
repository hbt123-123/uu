// rea decompile_all
// name: FUN_100758d40
// address: 0x100758d40
// body: available
// range: 0x100758d40-0x100758ec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100758ec4 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100758d40(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ID IVar2;
  long lVar3;
  code *pcVar4;
  
  if ((param_2 == 0) || ((int)param_3 == 0)) {
    if ((param_3 & 1) != 0) {
      if (param_2 == 0) {
        lVar3 = *(long *)(param_1 + 0x30);
        IVar2 = objc_stub::class(*(ID *)(param_1 + 0x20));
        IVar2 = objc_stub::description(IVar2);
        FUN_10079f85c(IVar2,0,&cf_filteredReportswasnil);
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x10))(lVar3,0,0,IVar2);
        }
      }
      goto LAB_100758e9c;
    }
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 == 0) goto LAB_100758e9c;
    pcVar4 = *(code **)(lVar3 + 0x10);
    param_3 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar1 = *(long *)(lVar3 + 0x18) + 1;
    *(ulong *)(lVar3 + 0x18) = uVar1;
    if (uVar1 < *(ulong *)(param_1 + 0x50)) {
      IVar2 = objc_stub::objectAtIndex_
                        (*(ID *)(param_1 + 0x28),
                         *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18));
      objc_stub::filterReports_onCompletion_
                (IVar2,param_2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 == 0) goto LAB_100758e9c;
    pcVar4 = *(code **)(lVar3 + 0x10);
  }
  (*pcVar4)(lVar3,param_2,param_3,param_4);
LAB_100758e9c:
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  return 0;
}

