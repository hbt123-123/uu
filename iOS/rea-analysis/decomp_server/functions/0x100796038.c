// rea decompile_all
// name: FUN_100796038
// address: 0x100796038
// body: available
// range: 0x100796038-0x1007966bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007966bc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100796038(ID param_1,ID param_2,ID param_3,ID param_4)

{
  bool bVar1;
  byte bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  size_t sVar6;
  ID IVar7;
  ID IVar8;
  cfstringStruct *pcVar9;
  ID IVar10;
  ulong uVar11;
  long lVar12;
  double extraout_d0;
  undefined8 local_210;
  long lStack_208;
  long *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  long lStack_1c8;
  long *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  char acStack_185 [21];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  _objc_retainAutorelease();
  IVar3 = objc_stub::UTF8String(param_3);
  IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
  IVar4 = objc_stub::isKindOfClass_(param_2,IVar4);
  if ((int)IVar4 == 0) {
    IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
    IVar4 = objc_stub::isKindOfClass_(param_2,IVar4);
    if ((int)IVar4 == 0) {
      IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
      IVar5 = objc_stub::isKindOfClass_(param_2,IVar4);
      IVar4 = param_4;
      if ((int)IVar5 == 0) {
        IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
        IVar5 = objc_stub::isKindOfClass_(param_2,IVar5);
        if ((int)IVar5 == 0) {
          IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNull);
          IVar4 = objc_stub::isKindOfClass_(param_2,IVar4);
          if ((int)IVar4 == 0) {
            IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSDate);
            IVar4 = objc_stub::isKindOfClass_(param_2,IVar4);
            if ((int)IVar4 == 0) {
              IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSData);
              IVar4 = objc_stub::isKindOfClass_(param_2,IVar4);
              if ((int)IVar4 == 0) {
                objc_stub::class(param_2);
                pcVar9 = &cf_SentryCrashJSONCodecObjC;
                FUN_10079f85c(&cf_SentryCrashJSONCodecObjC,0,&cf_Couldnotdeterminetypeof__);
                objc_stub::setError_(param_1,pcVar9);
                IVar4 = 5;
              }
              else {
                _objc_retainAutorelease();
                IVar4 = objc_stub::bytes(param_2);
                IVar5 = objc_stub::length(param_2);
                FUN_1007a5150(param_4,IVar3,IVar4,IVar5);
                IVar4 = param_4;
              }
            }
            else {
              objc_stub::timeIntervalSince1970(param_2);
              FUN_100799408((long)extraout_d0,acStack_185);
              sVar6 = _strnlen(acStack_185,0x14);
              IVar4 = objc_stub::dataWithBytes_length_((ID)&_OBJC_CLASS___NSData,acStack_185,sVar6);
              _objc_retainAutorelease();
              IVar5 = objc_stub::bytes(IVar4);
              IVar4 = objc_stub::length(IVar4);
              FUN_1007a4e8c(param_4,IVar3,IVar5,IVar4);
              IVar4 = param_4;
            }
          }
          else {
            FUN_1007a4d2c(param_4,IVar3);
            IVar4 = param_4;
          }
        }
        else {
          FUN_1007a5314(param_4,IVar3);
          if ((int)IVar4 == 0) {
            IVar3 = objc_stub::allKeys(param_2);
            IVar4 = objc_stub::count(IVar3);
            if (IVar4 < 2) {
              bVar1 = false;
            }
            else {
              uVar11 = 1;
              bVar2 = 1;
              do {
                IVar4 = objc_stub::objectAtIndexedSubscript_(IVar3,uVar11 - 1);
                IVar4 = objc_stub::class(IVar4);
                IVar5 = objc_stub::objectAtIndexedSubscript_(IVar3,uVar11);
                IVar5 = objc_stub::class(IVar5);
                bVar2 = IVar4 == IVar5 & bVar2;
                uVar11 = uVar11 + 1;
                IVar4 = objc_stub::count(IVar3);
              } while (uVar11 < IVar4);
              bVar1 = (bool)(bVar2 ^ 1);
            }
            if ((*(char *)(param_1 + 9) != '\0') && (!bVar1)) {
              IVar3 = objc_stub::FUN_1007f5b00(IVar3,"compare:");
            }
            uStack_1e8 = 0;
            local_1f0 = 0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            lStack_208 = 0;
            local_210 = 0;
            uStack_1f8 = 0;
            local_200 = (long *)0x0;
            IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar3,&local_210,auStack_170,0x10);
            if (IVar5 != 0) {
              lVar12 = *local_200;
              do {
                IVar10 = 0;
                do {
                  if (*local_200 != lVar12) {
                    _objc_enumerationMutation(IVar3);
                  }
                  IVar4 = *(ID *)(lStack_208 + IVar10 * 8);
                  IVar7 = objc_stub::objectForKeyedSubscript_(param_2,IVar4);
                  IVar8 = objc_stub::description(IVar4);
                  IVar4 = param_1;
                  FUN_100796038(param_1,IVar7,IVar8,param_4);
                  if ((int)IVar4 != 0) goto LAB_1007961d8;
                  IVar10 = IVar10 + 1;
                } while (IVar5 != IVar10);
                IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                                  (IVar3,&local_210,auStack_170,0x10);
              } while (IVar5 != 0);
            }
            FUN_1007a5380(param_4);
            IVar4 = param_4;
          }
        }
      }
      else {
        FUN_1007a52a8(param_4,IVar3);
        if ((int)IVar4 == 0) {
          uStack_1a8 = 0;
          local_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          lStack_1c8 = 0;
          local_1d0 = 0;
          uStack_1b8 = 0;
          local_1c0 = (long *)0x0;
          IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                            (param_2,&local_1d0,auStack_f0,0x10);
          if (IVar3 != 0) {
            lVar12 = *local_1c0;
            do {
              IVar5 = 0;
              do {
                if (*local_1c0 != lVar12) {
                  _objc_enumerationMutation(param_2);
                }
                IVar4 = param_1;
                FUN_100796038(param_1,*(undefined8 *)(lStack_1c8 + IVar5 * 8),0,param_4);
                if ((int)IVar4 != 0) goto LAB_1007961d8;
                IVar5 = IVar5 + 1;
              } while (IVar3 != IVar5);
              IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                                (param_2,&local_1d0,auStack_f0,0x10);
            } while (IVar3 != 0);
          }
          FUN_1007a5380(param_4);
          IVar4 = param_4;
        }
      }
    }
    else {
      IVar4 = param_2;
      _CFNumberGetType();
      if (IVar4 < 0x11) {
        if ((1L << (IVar4 & 0x3f) & 0x13060U) != 0) {
          objc_stub::doubleValue(param_2);
          FUN_1007a4c4c(param_4,IVar3);
          IVar4 = param_4;
          goto LAB_1007961d8;
        }
        if (IVar4 == 7) {
          IVar4 = objc_stub::boolValue(param_2);
          FUN_1007a4bf4(param_4,IVar3,IVar4);
          IVar4 = param_4;
          goto LAB_1007961d8;
        }
      }
      IVar4 = objc_stub::longLongValue(param_2);
      FUN_1007a4d6c(param_4,IVar3,IVar4);
      IVar4 = param_4;
    }
  }
  else {
    IVar4 = objc_stub::dataUsingEncoding_(param_2,4);
    _objc_retainAutorelease();
    IVar5 = objc_stub::bytes(IVar4);
    IVar4 = objc_stub::length(IVar4);
    FUN_1007a4e8c(param_4,IVar3,IVar5,IVar4);
    IVar4 = param_4;
    if ((int)param_4 == 1) {
      pcVar9 = &cf_SentryCrashJSONCodecObjC;
      FUN_10079f85c(&cf_SentryCrashJSONCodecObjC,0,&cf_Invalidcharacterin__);
      objc_stub::setError_(param_1,pcVar9);
    }
  }
LAB_1007961d8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar4;
}

