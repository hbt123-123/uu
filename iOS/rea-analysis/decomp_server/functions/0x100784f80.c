// rea decompile_all
// name: SentryMsgPackSerializer::serializeDictionaryToMessagePack:intoFile:
// address: 0x100784f80
// body: available
// range: 0x100784f80-0x100785463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100785460 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool SentryMsgPackSerializer::serializeDictionaryToMessagePack_intoFile_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  undefined *self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  ID IVar9;
  ulong uVar10;
  undefined1 local_549;
  uint local_548;
  undefined1 local_542;
  undefined1 local_541;
  undefined8 local_540;
  long lStack_538;
  long *local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  byte local_4f1;
  undefined1 auStack_4f0 [1024];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  self = &_OBJC_CLASS___NSOutputStream;
  _objc_alloc();
  IVar2 = objc_stub::FUN_1007ec660((ID)self,param_4,0);
  objc_stub::open(IVar2);
  IVar3 = objc_stub::count(param_3);
  local_4f1 = (byte)IVar3 | 0x80;
  objc_stub::FUN_1007f8360(IVar2,&local_4f1,1);
  lStack_538 = 0;
  local_540 = 0;
  uStack_528 = 0;
  local_530 = (long *)0x0;
  uStack_518 = 0;
  local_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_540,auStack_f0,0x10);
  if (IVar3 == 0) {
LAB_100785314:
    objc_stub::close(IVar2);
    bVar8 = 1;
LAB_100785328:
    if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(0);
    }
    return bVar8;
  }
  uVar10 = 0;
  lVar7 = *local_530;
  lVar6 = lVar7;
  do {
    if (lVar6 != lVar7) {
      _objc_enumerationMutation(param_3);
    }
    IVar9 = *(ID *)(lStack_538 + uVar10 * 8);
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,IVar9);
    IVar5 = objc_stub::dataUsingEncoding_(IVar9,4);
    local_541 = 0xd9;
    IVar9 = objc_stub::length(IVar5);
    local_542 = (undefined1)IVar9;
    objc_stub::FUN_1007f8360(IVar2,&local_541,1);
    objc_stub::FUN_1007f8360(IVar2,&local_542,1);
    _objc_retainAutorelease();
    IVar9 = objc_stub::bytes(IVar5);
    IVar5 = objc_stub::length(IVar5);
    objc_stub::FUN_1007f8360(IVar2,IVar9,IVar5);
    IVar9 = objc_stub::FUN_1007f6480(IVar4);
    if ((long)IVar9 < 1) {
      IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar2 != 0) {
        IVar2 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryMsgPackSerializer.m"
                          );
        IVar2 = objc_stub::lastPathComponent(IVar2);
        objc_stub::stringByDeletingPathExtension(IVar2);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_DataforMessagePackdictionaryhasnocontent_Input___
                  );
        IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
      }
LAB_1007852f4:
      bVar8 = 0;
      goto LAB_100785328;
    }
    local_548 = (uint)IVar9;
    local_549 = 0xc6;
    objc_stub::FUN_1007f8360(IVar2,&local_549,1);
    uVar1 = (local_548 & 0xff00ff00) >> 8 | (local_548 & 0xff00ff) << 8;
    local_548 = uVar1 >> 0x10 | uVar1 << 0x10;
    objc_stub::FUN_1007f8360(IVar2,&local_548,4);
    IVar4 = objc_stub::FUN_1007e59c0(IVar4);
    objc_stub::open(IVar4);
    IVar9 = objc_stub::FUN_1007eacc0(IVar4);
    if ((int)IVar9 != 0) {
      do {
        IVar9 = objc_stub::FUN_1007efc40(IVar4,auStack_4f0,0x400);
        if ((long)IVar9 < 1) {
          if ((long)IVar9 < 0) {
            IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
            if ((int)IVar3 != 0) {
              IVar3 = objc_stub::stringWithUTF8String_
                                ((ID)&_OBJC_CLASS___NSString,
                                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryMsgPackSerializer.m"
                                );
              IVar3 = objc_stub::lastPathComponent(IVar3);
              objc_stub::stringByDeletingPathExtension(IVar3);
              objc_stub::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,
                         &cf_Errorreadingbytesfrominputstream_Input_____li);
              IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
              objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1)
              ;
            }
            objc_stub::close(IVar4);
            objc_stub::close(IVar2);
            goto LAB_1007852f4;
          }
        }
        else {
          objc_stub::FUN_1007f8360(IVar2,auStack_4f0,IVar9);
        }
        IVar9 = objc_stub::FUN_1007eacc0(IVar4);
      } while ((IVar9 & 1) != 0);
    }
    objc_stub::close(IVar4);
    uVar10 = uVar10 + 1;
    if (IVar3 <= uVar10) {
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_540,auStack_f0,0x10);
      if (IVar3 == 0) goto LAB_100785314;
      uVar10 = 0;
    }
    lVar6 = *local_530;
  } while( true );
}

