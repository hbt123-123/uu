// rea decompile_all
// name: SentryHub::captureTransaction:withScope:additionalEnvelopeItems:
// address: 0x1007672e0
// body: available
// range: 0x1007672e0-0x1007674bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryHub::captureTransaction_withScope_additionalEnvelopeItems_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  ID local_60;
  ID local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  IVar1 = objc_stub::trace(param_3);
  IVar1 = objc_stub::FUN_1007f0c20(IVar1);
  if (IVar1 == 1) {
    _objc_initWeak(auStack_48,param_1);
    IVar1 = objc_stub::FUN_1007e8880(param_1);
    local_88 = PTR___NSConcreteStackBlock_100995490;
    local_80 = 0xc2000000;
    local_78 = FUN_1007674e4;
    puStack_70 = &DAT_1009e9128;
    _objc_copyWeak(auStack_50,auStack_48);
    local_68 = param_3;
    local_60 = param_4;
    local_58 = param_5;
    objc_stub::dispatchAsyncWithBlock_(IVar1,&local_88);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    IVar1 = objc_stub::FUN_1007e6ba0(param_1);
    objc_stub::recordLostEvent_reason_(IVar1,4,2);
    IVar1 = objc_stub::FUN_1007e6ba0(param_1);
    IVar2 = objc_stub::spans(param_3);
    IVar2 = objc_stub::count(IVar2);
    objc_stub::recordLostEvent_reason_quantity_(IVar1,0xb,2,IVar2 + 1);
  }
  return;
}

