// rea decompile_all
// name: FUN_1007521dc
// address: 0x1007521dc
// body: available
// range: 0x1007521dc-0x10075235f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1007521dc(ID param_1,ID param_2,ID param_3,undefined8 param_4)

{
  ID IVar1;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  ID local_60;
  undefined8 local_58;
  
  IVar1 = objc_stub::trace(param_3);
  IVar1 = objc_stub::FUN_1007ecae0(IVar1);
  FUN_10078a958();
  if (IVar1 == 0) {
    IVar1 = objc_stub::scope(param_1);
    objc_stub::captureTransaction_withScope_(param_1,param_3,IVar1);
  }
  else {
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0xc2000000;
    local_80 = FUN_1007523e8;
    puStack_78 = &DAT_1009e8c20;
    local_70 = IVar1;
    local_68 = param_1;
    local_60 = param_3;
    local_58 = param_4;
    objc_stub::dispatchAsyncWithBlock_(param_2,&local_90);
  }
  return 0;
}

