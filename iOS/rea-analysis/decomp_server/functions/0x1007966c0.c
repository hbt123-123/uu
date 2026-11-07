// rea decompile_all
// name: SentryCrashJSONCodec::decode:options:error:
// address: 0x1007966c0
// body: available
// range: 0x1007966c0-0x100796887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100796830 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID SentryCrashJSONCodec::decode_options_error_
             (ID param_1,SEL param_2,ID param_3,int param_4,ID *param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  cfstringStruct *pcVar7;
  undefined1 local_54 [4];
  
  IVar1 = objc_stub::FUN_1007e6c60(param_1,0,(ulong)param_4);
  IVar2 = objc_stub::dataWithLength_((ID)&_OBJC_CLASS___NSMutableData,0x249f1);
  _objc_retainAutorelease();
  IVar3 = objc_stub::bytes(param_3);
  IVar4 = objc_stub::length(param_3);
  _objc_retainAutorelease();
  IVar5 = objc_stub::mutableBytes(IVar2);
  IVar2 = objc_stub::length(IVar2);
  IVar6 = objc_stub::FUN_1007e63c0(IVar1);
  FUN_1007a54d0(IVar3,IVar4,IVar5,IVar2,IVar6,IVar1,local_54);
  if (((int)IVar3 != 0) && (IVar4 = objc_stub::error(IVar1), IVar4 == 0)) {
    FUN_1007a4a1c();
    pcVar7 = &cf_SentryCrashJSONCodecObjC;
    FUN_10079f85c(&cf_SentryCrashJSONCodecObjC,0,&cf__s_offset_d_);
    objc_stub::setError_(IVar1,pcVar7);
  }
  if (param_5 != (ID *)0x0) {
    IVar4 = objc_stub::error(IVar1);
    *param_5 = IVar4;
  }
  if (((param_4 >> 2 & 1) == 0) && ((int)IVar3 != 0)) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::FUN_1007f7260(IVar1);
  }
  return IVar1;
}

