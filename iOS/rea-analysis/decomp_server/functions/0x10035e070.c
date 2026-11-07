// rea decompile_all
// name: _TtC10Filepicker17FilePickerRequest::request
// address: 0x10035e070
// body: available
// range: 0x10035e070-0x10035e137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10035e134 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC10Filepicker17FilePickerRequest::request(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ID IVar4;
  undefined1 *puVar5;
  long lVar6;
  
  puVar1 = &DAT_100a888f0;
  FUN_100004bb4(&DAT_100a888f0,&DAT_10081cb80);
  puVar5 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10035e138(puVar5,param_1);
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar2);
  IVar4 = 0;
  if ((int)puVar3 != 1) {
    __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
    (**(code **)(lVar6 + 8))(puVar5,lVar2);
  }
  return IVar4;
}

