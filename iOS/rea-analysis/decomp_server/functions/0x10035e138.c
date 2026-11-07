// rea decompile_all
// name: FUN_10035e138
// address: 0x10035e138
// body: available
// range: 0x10035e138-0x10035e297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035e138(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  ID IVar3;
  ID self;
  undefined1 *puVar4;
  
  puVar1 = &DAT_100a888f0;
  FUN_100004bb4(&DAT_100a888f0,&DAT_10081cb80);
  puVar4 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::taskLock);
  _objc_msgSend(self,"lock");
  IVar3 = *(ID *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::_task);
  _objc_msgSend(self,"unlock");
  if (IVar3 != 0) {
    IVar3 = _objc_msgSend(IVar3,"originalRequest");
    if (IVar3 == 0) {
      lVar2 = 0;
      __s10Foundation10URLRequestVMa();
    }
    else {
      __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
                (puVar4,IVar3);
      lVar2 = 0;
      __s10Foundation10URLRequestVMa();
    }
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar4,IVar3 == 0,1);
    FUN_10035edcc(puVar4,param_1);
    return;
  }
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
                    /* WARNING: Could not recover jumptable at 0x00010035e24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,1,1,lVar2);
  return;
}

