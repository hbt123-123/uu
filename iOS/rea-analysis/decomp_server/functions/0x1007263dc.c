// rea decompile_all
// name: SADeviceIDPropertyPlugin::prepare
// address: 0x1007263dc
// body: available
// range: 0x1007263dc-0x100726503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100726500 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SADeviceIDPropertyPlugin::prepare(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID *pIVar4;
  cfstringStruct **ppcVar5;
  cfstringStruct *local_68;
  ID IStack_60;
  cfstringStruct *local_58;
  ID IStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar2 = SAIdentifier::hardwareID((ID)&objc::class_t::SAIdentifier);
  IVar3 = objc_stub::dataUsingEncoding_(IVar2,4);
  IVar3 = objc_stub::base64EncodedStringWithOptions_(IVar3,0);
  bVar1 = disableDeviceId(param_1);
  if ((bVar1 & 1) == 0) {
    local_68 = &cf__device_id;
    pIVar4 = &IStack_60;
    ppcVar5 = &local_68;
    IStack_60 = IVar2;
  }
  else {
    local_58 = &cf__anonymization_id;
    pIVar4 = &IStack_50;
    ppcVar5 = &local_58;
    IStack_50 = IVar3;
  }
  IVar2 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,pIVar4,ppcVar5,1);
  SAPropertyPlugin::readyWithProperties_(param_1,IVar2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

