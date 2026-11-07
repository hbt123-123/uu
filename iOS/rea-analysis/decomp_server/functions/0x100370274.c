// rea decompile_all
// name: _TtC10Filepicker17FilepickerManager::backgroundCompletionHandler
// address: 0x100370274
// body: available
// range: 0x100370274-0x100370323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100370320 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC10Filepicker17FilepickerManager::backgroundCompletionHandler(ID param_1,SEL param_2)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  long local_58;
  long local_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + backgroundCompletionHandler);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  local_58 = *plVar1;
  if (local_58 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    lVar4 = plVar1[1];
    local_78 = PTR___NSConcreteStackBlock_100995490;
    local_70 = 0x42000000;
    local_68 = FUN_1000acdb4;
    puStack_60 = &DAT_1009b5438;
    local_50 = lVar4;
    pvVar3 = __Block_copy(&local_78);
    lVar2 = local_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
  return (ID)pvVar3;
}

