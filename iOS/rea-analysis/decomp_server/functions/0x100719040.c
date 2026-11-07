// rea decompile_all
// name: SASecurityPolicy::evaluateServerTrust:forDomain:
// address: 0x100719040
// body: available
// range: 0x100719040-0x100719763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100719760 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool SASecurityPolicy::evaluateServerTrust_forDomain_
               (ID param_1,SEL param_2,__SecTrust *param_3,ID param_4)

{
  bool bVar1;
  unsigned_long_long uVar2;
  ID IVar3;
  ulong uVar4;
  __SecTrust *p_Var5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  __SecTrust *p_Var9;
  long lVar10;
  ID IVar11;
  long lVar12;
  ID IVar13;
  long lVar14;
  ID IVar15;
  ID IVar16;
  __SecTrust *p_Var17;
  ID local_398;
  undefined8 local_390;
  long lStack_388;
  long *local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  long lStack_348;
  long *local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  long lStack_308;
  long *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  long lStack_2c8;
  long *local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_284 [4];
  long local_280;
  undefined1 auStack_278 [128];
  undefined1 auStack_1f8 [128];
  undefined1 auStack_178 [128];
  undefined1 auStack_f8 [128];
  __SecTrust *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (((param_4 != 0) && (bVar1 = allowInvalidCertificates(param_1), bVar1 != 0)) &&
     (bVar1 = validatesDomainName(param_1), bVar1 != 0)) {
    uVar2 = SSLPinningMode(param_1);
    if (uVar2 != 0) {
      IVar3 = pinnedCertificates(param_1);
      IVar3 = objc_stub::count(IVar3);
      if (IVar3 != 0) goto LAB_1007190d4;
    }
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,8,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/SASecurityPolicy.m"
               ,"-[SASecurityPolicy evaluateServerTrust:forDomain:]",0xed,0,
               &cf_Inordertovalidateadomainnameforselfsignedcertificates_youMUSTusepinning_);
    bVar1 = 0;
    goto LAB_10071971c;
  }
LAB_1007190d4:
  IVar3 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
  bVar1 = validatesDomainName(param_1);
  uVar4 = (ulong)bVar1;
  if (bVar1 == 0) {
    _SecPolicyCreateBasicX509();
  }
  else {
    uVar4 = 1;
    _SecPolicyCreateSSL(1,param_4);
  }
  NSMutableArray::addObject_(IVar3,uVar4);
  _SecTrustSetPolicies(param_3,IVar3);
  uVar2 = SSLPinningMode(param_1);
  if (uVar2 == 0) {
    bVar1 = allowInvalidCertificates(param_1);
    if ((bVar1 & 1) != 0) {
      bVar1 = 1;
      goto LAB_10071971c;
    }
    _SecTrustEvaluate(param_3,&local_78);
    if ((int)param_3 == 0) {
      bVar1 = (bool)((int)local_78 == 4 || (int)local_78 == 1);
      goto LAB_10071971c;
    }
  }
  else {
    p_Var5 = param_3;
    _SecTrustEvaluate(param_3,&local_78);
    if ((((int)p_Var5 == 0) && (((int)local_78 == 1 || ((int)local_78 == 4)))) ||
       (bVar1 = allowInvalidCertificates(param_1), bVar1 != 0)) {
      uVar2 = SSLPinningMode(param_1);
      if (uVar2 == 1) {
        _SecPolicyCreateBasicX509();
        p_Var5 = param_3;
        _SecTrustGetCertificateCount();
        IVar3 = NSMutableArray::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,p_Var5);
        if (0 < (long)p_Var5) {
          p_Var17 = (__SecTrust *)0x0;
          do {
            p_Var9 = param_3;
            _SecTrustGetCertificateAtIndex(param_3,p_Var17);
            lVar10 = 0;
            local_78 = p_Var9;
            _CFArrayCreate(0,&local_78,1,0);
            lVar12 = lVar10;
            _SecTrustCreateWithCertificates();
            if (((int)lVar12 == 0) &&
               (lVar12 = local_280, _SecTrustEvaluate(local_280,auStack_284), (int)lVar12 == 0)) {
              lVar12 = local_280;
              _SecTrustCopyPublicKey(local_280);
              NSMutableArray::addObject_(IVar3,lVar12);
            }
            if (local_280 != 0) {
              _CFRelease();
            }
            if (lVar10 != 0) {
              _CFRelease(lVar10);
            }
            p_Var17 = p_Var17 + 1;
          } while (p_Var5 != p_Var17);
        }
        _CFRelease(uVar2);
        IVar3 = NSArray::arrayWithArray_((ID)&_OBJC_CLASS___NSArray,IVar3);
        lStack_348 = 0;
        local_350 = 0;
        uStack_338 = 0;
        local_340 = (long *)0x0;
        uStack_328 = 0;
        local_330 = 0;
        uStack_318 = 0;
        uStack_320 = 0;
        local_398 = NSArray::countByEnumeratingWithState_objects_count_
                              (IVar3,&local_350,auStack_1f8,0x10);
        if (local_398 == 0) {
          bVar1 = 0;
        }
        else {
          lVar12 = 0;
          lVar10 = *local_340;
          do {
            IVar6 = 0;
            do {
              if (*local_340 != lVar10) {
                _objc_enumerationMutation(IVar3);
              }
              IVar16 = *(ID *)(lStack_348 + IVar6 * 8);
              lStack_388 = 0;
              local_390 = 0;
              uStack_378 = 0;
              local_380 = (long *)0x0;
              uStack_368 = 0;
              local_370 = 0;
              uStack_358 = 0;
              uStack_360 = 0;
              IVar7 = pinnedPublicKeys(param_1);
              IVar13 = objc_stub::countByEnumeratingWithState_objects_count_
                                 (IVar7,&local_390,auStack_278,0x10);
              if (IVar13 != 0) {
                lVar14 = *local_380;
                do {
                  IVar15 = 0;
                  do {
                    if (*local_380 != lVar14) {
                      _objc_enumerationMutation(IVar7);
                    }
                    uVar8 = *(undefined8 *)(lStack_388 + IVar15 * 8);
                    IVar11 = IVar16;
                    FUN_100719b9c();
                    FUN_100719b9c(uVar8);
                    IVar11 = objc_stub::isEqual_(IVar11,uVar8);
                    lVar12 = lVar12 + (IVar11 & 0xffffffff);
                    IVar15 = IVar15 + 1;
                  } while (IVar13 != IVar15);
                  IVar13 = objc_stub::countByEnumeratingWithState_objects_count_
                                     (IVar7,&local_390,auStack_278,0x10);
                } while (IVar13 != 0);
              }
              IVar6 = IVar6 + 1;
            } while (IVar6 != local_398);
            local_398 = NSArray::countByEnumeratingWithState_objects_count_
                                  (IVar3,&local_350,auStack_1f8,0x10);
          } while (local_398 != 0);
          bVar1 = (bool)(lVar12 != 0);
        }
        goto LAB_10071971c;
      }
      if (uVar2 == 2) {
        IVar3 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
        lStack_2c8 = 0;
        local_2d0 = 0;
        uStack_2b8 = 0;
        local_2c0 = (long *)0x0;
        uStack_2a8 = 0;
        local_2b0 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        IVar6 = pinnedCertificates(param_1);
        IVar7 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar6,&local_2d0,auStack_f8,0x10);
        if (IVar7 != 0) {
          lVar12 = *local_2c0;
          do {
            IVar13 = 0;
            do {
              if (*local_2c0 != lVar12) {
                _objc_enumerationMutation(IVar6);
              }
              uVar8 = 0;
              _SecCertificateCreateWithData(0,*(undefined8 *)(lStack_2c8 + IVar13 * 8));
              NSMutableArray::addObject_(IVar3,uVar8);
              IVar13 = IVar13 + 1;
            } while (IVar7 != IVar13);
            IVar7 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar6,&local_2d0,auStack_f8,0x10);
          } while (IVar7 != 0);
        }
        _SecTrustSetAnchorCertificates(param_3,IVar3);
        p_Var5 = param_3;
        _SecTrustEvaluate(param_3,&local_78);
        if (((int)p_Var5 == 0) && (((int)local_78 == 4 || ((int)local_78 == 1)))) {
          p_Var5 = param_3;
          _SecTrustGetCertificateCount();
          IVar3 = NSMutableArray::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,p_Var5);
          if (0 < (long)p_Var5) {
            p_Var17 = (__SecTrust *)0x0;
            do {
              p_Var9 = param_3;
              _SecTrustGetCertificateAtIndex(param_3,p_Var17);
              _SecCertificateCopyData();
              NSMutableArray::addObject_(IVar3,p_Var9);
              p_Var17 = p_Var17 + 1;
            } while (p_Var5 != p_Var17);
          }
          IVar3 = NSArray::arrayWithArray_((ID)&_OBJC_CLASS___NSArray,IVar3);
          uStack_2e8 = 0;
          local_2f0 = 0;
          uStack_2d8 = 0;
          uStack_2e0 = 0;
          lStack_308 = 0;
          local_310 = 0;
          uStack_2f8 = 0;
          local_300 = (long *)0x0;
          IVar3 = NSArray::reverseObjectEnumerator(IVar3);
          IVar6 = NSArray::countByEnumeratingWithState_objects_count_
                            (IVar3,&local_310,auStack_178,0x10);
          if (IVar6 != 0) {
            lVar12 = *local_300;
            do {
              IVar7 = 0;
              do {
                if (*local_300 != lVar12) {
                  _objc_enumerationMutation(IVar3);
                }
                uVar8 = *(undefined8 *)(lStack_308 + IVar7 * 8);
                IVar13 = pinnedCertificates(param_1);
                IVar13 = objc_stub::containsObject_(IVar13,uVar8);
                if ((IVar13 & 1) != 0) {
                  bVar1 = 1;
                  goto LAB_10071971c;
                }
                IVar7 = IVar7 + 1;
              } while (IVar6 != IVar7);
              IVar6 = NSArray::countByEnumeratingWithState_objects_count_
                                (IVar3,&local_310,auStack_178,0x10);
            } while (IVar6 != 0);
          }
          bVar1 = 0;
        }
        else {
          bVar1 = 0;
        }
        goto LAB_10071971c;
      }
    }
  }
  bVar1 = 0;
LAB_10071971c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

