// rea decompile_all
// name: _TtC10Filepicker17FilePickerRequest::taskDidCompleteWithError
// address: 0x10035de2c
// body: available
// range: 0x10035de2c-0x10035dec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10035dec4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC10Filepicker17FilePickerRequest::taskDidCompleteWithError(ID param_1,SEL param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  long local_40;
  long local_38;
  
  local_40 = *(long *)(param_1 + taskDidCompleteWithError);
  if (local_40 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + taskDidCompleteWithError))[1];
    local_60 = PTR___NSConcreteStackBlock_100995490;
    local_58 = 0x42000000;
    local_50 = FUN_10035dec8;
    puStack_48 = &DAT_1009b4ea8;
    local_38 = lVar3;
    pvVar2 = __Block_copy(&local_60);
    lVar1 = local_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
  return (ID)pvVar2;
}

