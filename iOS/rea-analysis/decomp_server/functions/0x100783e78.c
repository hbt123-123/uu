// rea decompile_all
// name: SentrySession::initWithJSONObject:
// address: 0x100783e78
// body: available
// range: 0x100783e78-0x1007843ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySession::initWithJSONObject_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentrySession;
  local_70.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_70,"init");
  if (IVar2 == 0) {
    return 0;
  }
  IVar3 = objc_stub::valueForKey_(param_3,&cf_sid);
  if (IVar3 == 0) {
    return 0;
  }
  IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
  IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
  if ((int)IVar4 == 0) {
    return 0;
  }
  IVar4 = objc_stub::UUID((ID)&_OBJC_CLASS___NSUUID);
  IVar3 = objc_stub::initWithUUIDString_(IVar4,IVar3);
  if (IVar3 == 0) {
    return 0;
  }
  *(ID *)(IVar2 + 0x10) = IVar3;
  IVar3 = objc_stub::valueForKey_(param_3,&cf_started);
  if (IVar3 != 0) {
    IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
    IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
    if ((int)IVar4 != 0) {
      FUN_10078681c();
      if (IVar3 == 0) {
        bVar1 = true;
        goto LAB_100784394;
      }
      *(ID *)(IVar2 + 0x18) = IVar3;
      IVar3 = objc_stub::valueForKey_(param_3,&cf_status);
      if (IVar3 != 0) {
        IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
        IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
        if ((int)IVar4 != 0) {
          IVar4 = objc_stub::isEqualToString_(0x100a09870,IVar3);
          if ((IVar4 & 1) == 0) {
            IVar4 = objc_stub::isEqualToString_(0x100a0eb50,IVar3);
            if ((IVar4 & 1) == 0) {
              IVar4 = objc_stub::isEqualToString_(0x100a0b970,IVar3);
              if ((IVar4 & 1) == 0) {
                IVar3 = objc_stub::isEqualToString_(0x100a0eb70,IVar3);
                if ((int)IVar3 == 0) goto LAB_100784344;
                uVar6 = 3;
              }
              else {
                uVar6 = 2;
              }
            }
            else {
              uVar6 = 1;
            }
          }
          else {
            uVar6 = 0;
          }
          *(undefined8 *)(IVar2 + 0x20) = uVar6;
          IVar3 = objc_stub::valueForKey_(param_3,&cf_seq);
          if (IVar3 != 0) {
            IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
            IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
            if ((int)IVar4 != 0) {
              IVar3 = objc_stub::unsignedIntegerValue(IVar3);
              *(ID *)(IVar2 + 0x30) = IVar3;
              IVar3 = objc_stub::valueForKey_(param_3,&cf_errors);
              if (IVar3 != 0) {
                IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
                IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
                if ((int)IVar4 != 0) {
                  IVar3 = objc_stub::unsignedIntegerValue(IVar3);
                  *(ID *)(IVar2 + 0x28) = IVar3;
                  IVar3 = objc_stub::valueForKey_(param_3,&cf_did);
                  if (IVar3 == 0) {
                    bVar1 = true;
                  }
                  else {
                    IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
                    IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
                    if ((int)IVar4 == 0) {
                      bVar1 = true;
                    }
                    else {
                      *(ID *)(IVar2 + 0x38) = IVar3;
                      IVar3 = objc_stub::valueForKey_(param_3,&cf_init);
                      IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
                      IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
                      if ((int)IVar4 != 0) {
                        *(ID *)(IVar2 + 8) = IVar3;
                      }
                      IVar3 = objc_stub::valueForKey_(param_3,&cf_attrs);
                      if (IVar3 != 0) {
                        IVar4 = objc_stub::valueForKey_(IVar3,&cf_release);
                        IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
                        IVar5 = objc_stub::isKindOfClass_(IVar4,IVar5);
                        if ((int)IVar5 != 0) {
                          *(ID *)(IVar2 + 0x50) = IVar4;
                        }
                        IVar3 = objc_stub::valueForKey_(IVar3,&cf_environment);
                        IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
                        IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
                        if ((int)IVar4 != 0) {
                          *(ID *)(IVar2 + 0x58) = IVar3;
                        }
                      }
                      IVar4 = objc_stub::valueForKey_(param_3,&cf_timestamp);
                      IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
                      IVar3 = objc_stub::isKindOfClass_(IVar4,IVar3);
                      if ((int)IVar3 != 0) {
                        FUN_10078681c();
                        *(ID *)(IVar2 + 0x40) = IVar4;
                      }
                      IVar3 = objc_stub::valueForKey_(param_3,&cf_duration);
                      IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
                      IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
                      if ((int)IVar4 != 0) {
                        *(ID *)(IVar2 + 0x48) = IVar3;
                      }
                      IVar3 = objc_stub::valueForKey_(param_3,&cf_abnormal_mechanism);
                      IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
                      IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
                      if ((int)IVar4 != 0) {
                        *(ID *)(IVar2 + 0x68) = IVar3;
                      }
                      bVar1 = false;
                    }
                  }
                  goto LAB_100784394;
                }
              }
              bVar1 = true;
              goto LAB_100784394;
            }
          }
          bVar1 = true;
          goto LAB_100784394;
        }
      }
LAB_100784344:
      bVar1 = true;
      goto LAB_100784394;
    }
  }
  bVar1 = true;
LAB_100784394:
  if (bVar1) {
    return 0;
  }
  return IVar2;
}

