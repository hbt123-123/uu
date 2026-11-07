// rea decompile_all
// name: SentryAppState::initWithJSONObject:
// address: 0x1007616f8
// body: available
// range: 0x1007616f8-0x100761adb inclusive
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

ID SentryAppState::initWithJSONObject_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryAppState;
  local_70.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_70,"init");
  if (IVar2 == 0) {
    return 0;
  }
  IVar3 = objc_stub::valueForKey_(param_3,&cf_release_name);
  if (IVar3 != 0) {
    IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
    IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
    if ((IVar4 & 1) == 0) {
      return 0;
    }
  }
  *(ID *)(IVar2 + 0x10) = IVar3;
  IVar3 = objc_stub::valueForKey_(param_3,&cf_os_version);
  if (IVar3 == 0) {
    return 0;
  }
  IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
  IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
  if ((int)IVar4 == 0) {
    return 0;
  }
  *(ID *)(IVar2 + 0x18) = IVar3;
  IVar3 = objc_stub::valueForKey_(param_3,&cf_vendor_id);
  if (IVar3 != 0) {
    IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
    IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
    if ((int)IVar4 != 0) {
      *(ID *)(IVar2 + 0x20) = IVar3;
      IVar3 = objc_stub::valueForKey_(param_3,&cf_is_debugging);
      if (IVar3 != 0) {
        IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
        IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
        if ((int)IVar4 != 0) {
          IVar3 = objc_stub::boolValue(IVar3);
          *(char *)(IVar2 + 8) = (char)IVar3;
          IVar3 = objc_stub::valueForKey_(param_3,&cf_system_boot_timestamp);
          if (IVar3 != 0) {
            IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
            IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
            if ((int)IVar4 != 0) {
              FUN_10078681c();
              if (IVar3 == 0) {
                bVar1 = true;
                goto LAB_100761a80;
              }
              *(ID *)(IVar2 + 0x28) = IVar3;
              IVar3 = objc_stub::valueForKey_(param_3,&cf_is_active);
              if (IVar3 != 0) {
                IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
                IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
                if ((int)IVar4 != 0) {
                  IVar3 = objc_stub::boolValue(IVar3);
                  *(char *)(IVar2 + 9) = (char)IVar3;
                  IVar3 = objc_stub::valueForKey_(param_3,&cf_was_terminated);
                  if (IVar3 == 0) {
                    bVar1 = true;
                    goto LAB_100761a80;
                  }
                  IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
                  IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
                  if ((int)IVar4 == 0) {
                    bVar1 = true;
                    goto LAB_100761a80;
                  }
                  IVar3 = objc_stub::boolValue(IVar3);
                  *(char *)(IVar2 + 10) = (char)IVar3;
                  IVar3 = objc_stub::valueForKey_(param_3,&cf_is_anr_ongoing);
                  if (IVar3 == 0) {
                    bVar1 = true;
                    goto LAB_100761a80;
                  }
                  IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
                  IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
                  if ((int)IVar4 == 0) {
                    bVar1 = true;
                    goto LAB_100761a80;
                  }
                  IVar3 = objc_stub::boolValue(IVar3);
                  *(char *)(IVar2 + 0xb) = (char)IVar3;
                  IVar3 = objc_stub::valueForKey_(param_3,&cf_is_sdk_running);
                  if (IVar3 == 0) {
LAB_100761a38:
                    *(undefined1 *)(IVar2 + 0xc) = 1;
                  }
                  else {
                    IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
                    IVar4 = objc_stub::isKindOfClass_(IVar3,IVar4);
                    if ((IVar4 & 1) == 0) goto LAB_100761a38;
                    IVar3 = objc_stub::boolValue(IVar3);
                    *(char *)(IVar2 + 0xc) = (char)IVar3;
                  }
                  bVar1 = false;
                  goto LAB_100761a80;
                }
              }
              bVar1 = true;
              goto LAB_100761a80;
            }
          }
          bVar1 = true;
          goto LAB_100761a80;
        }
      }
      bVar1 = true;
      goto LAB_100761a80;
    }
  }
  bVar1 = true;
LAB_100761a80:
  if (bVar1) {
    return 0;
  }
  return IVar2;
}

