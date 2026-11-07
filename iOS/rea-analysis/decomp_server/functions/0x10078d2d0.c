// rea decompile_all
// name: SentryCrash::setDoNotIntrospectClasses:
// address: 0x10078d2d0
// body: available
// range: 0x10078d2d0-0x10078d3b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078d3b0 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrash::setDoNotIntrospectClasses_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  
  *(ID *)(param_1 + 0x48) = param_3;
  IVar1 = objc_stub::count(param_3);
  if (IVar1 == 0) {
    thunk_FUN_100737698(0,0);
  }
  else {
    IVar2 = objc_stub::dataWithLength_((ID)&_OBJC_CLASS___NSMutableData,IVar1 << 3);
    _objc_retainAutorelease();
    IVar2 = objc_stub::mutableBytes(IVar2);
    uVar4 = 0;
    do {
      IVar3 = objc_stub::objectAtIndex_(param_3,uVar4);
      _objc_retainAutorelease();
      IVar3 = objc_stub::cStringUsingEncoding_(IVar3,4);
      *(ID *)(IVar2 + uVar4 * 8) = IVar3;
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < IVar1);
    thunk_FUN_100737698(IVar2,IVar1);
  }
  return;
}

