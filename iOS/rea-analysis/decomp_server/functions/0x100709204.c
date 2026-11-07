// rea decompile_all
// name: SAReachability::reachabilityInstance
// address: 0x100709204
// body: available
// range: 0x100709204-0x100709277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100709274 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAReachability::reachabilityInstance(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
  uStack_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_40 = 0x1e1c;
  lVar1 = *(long *)PTR__kCFAllocatorDefault_1009953c8;
  _SCNetworkReachabilityCreateWithAddress(lVar1,&local_40);
  _objc_alloc();
  IVar2 = objc_stub::initWithReachability_(param_1,lVar1);
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
  return IVar2;
}

