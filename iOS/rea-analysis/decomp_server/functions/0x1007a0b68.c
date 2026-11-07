// rea decompile_all
// name: SentryTraceContext::initWithTracer:scope:options:
// address: 0x1007a0b68
// body: available
// range: 0x1007a0b68-0x1007a0f27 inclusive
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

ID SentryTraceContext::initWithTracer_scope_options_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  cfstringStruct *pcVar7;
  ID local_98;
  ID local_70;
  ID local_68;
  
  IVar1 = objc_stub::traceId(param_3);
  IVar2 = 0;
  if (IVar1 != 0) {
    IVar2 = objc_stub::parsedDsn(param_5);
    if (IVar2 == 0) {
      IVar2 = 0;
    }
    else {
      IVar2 = objc_stub::userObject(param_4);
      IVar2 = objc_stub::segment(IVar2);
      if (IVar2 == 0) {
        local_68 = 0;
      }
      else {
        IVar2 = objc_stub::userObject(param_4);
        local_68 = objc_stub::segment(IVar2);
      }
      IVar2 = objc_stub::FUN_1007f7700(param_3);
      IVar2 = objc_stub::FUN_1007f0be0(IVar2);
      if (IVar2 == 0) {
        local_70 = 0;
      }
      else {
        objc_stub::doubleValue(IVar2);
        local_70 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__f);
      }
      IVar2 = objc_stub::FUN_1007f7700(param_3);
      IVar2 = objc_stub::sampleRate(IVar2);
      if (IVar2 == 0) {
        local_98 = 0;
      }
      else {
        objc_stub::doubleValue(IVar2);
        local_98 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__f);
      }
      IVar2 = objc_stub::FUN_1007f0c20(param_3);
      if (IVar2 == 0) {
        pcVar7 = (cfstringStruct *)0x0;
      }
      else {
        IVar2 = objc_stub::FUN_1007f0c20(param_3);
        pcVar7 = &cf_true;
        if (IVar2 != 1) {
          pcVar7 = &cf_false;
        }
      }
      IVar2 = objc_stub::traceId(param_3);
      IVar1 = objc_stub::parsedDsn(param_5);
      IVar1 = objc_stub::url(IVar1);
      IVar1 = objc_stub::user(IVar1);
      IVar3 = objc_stub::releaseName(param_5);
      IVar4 = objc_stub::environment(param_5);
      IVar5 = objc_stub::FUN_1007f7700(param_3);
      IVar5 = objc_stub::name(IVar5);
      IVar6 = objc_stub::replayId(param_4);
      IVar2 = objc_stub::FUN_1007ec400
                        (param_1,IVar2,IVar1,IVar3,IVar4,IVar5,local_68,local_98,local_70,pcVar7,
                         IVar6);
    }
  }
  return IVar2;
}

