// rea decompile_all
// name: FUN_100002a9c
// address: 0x100002a9c
// body: available
// range: 0x100002a9c-0x100003277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100002c9c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100003274 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100002a9c(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *op;
  cfstringStruct *op_00;
  cfstringStruct *op_01;
  cfstringStruct *op_02;
  cfstringStruct *op_03;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined *puVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  long lVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ID IVar19;
  int local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long *local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte local_17a;
  byte local_179;
  long local_178 [4];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float local_90;
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_1c4 = 0;
  _CGSGetNumberOfDisplayModes(param_1,&local_1c4);
  if (local_1c4 < 1) {
    pcVar4 = &cf_DisplayModeTrace_copyallfaileddisplayID__umodeCount__d;
  }
  else {
    if (DAT_100abd980 != -1) {
      FUN_1007da448();
    }
    if (DAT_100abd988 == '\x01') {
      pcVar4 = &cf_MPDisplay;
      _NSClassFromString();
      if (pcVar4 == (cfstringStruct *)0x0) {
        FUN_100002a48(&cf_DisplayModeTrace_MonitorPanelMPDisplayclassunavailabledisplayID__u);
      }
      else {
        op = &cf_initWithCGSDisplayID_;
        _NSSelectorFromString();
        op_00 = &cf_isBuiltIn;
        _NSSelectorFromString();
        op_01 = &cf_resolutionsOfType_;
        _NSSelectorFromString();
        op_02 = &cf_modesForResolution_;
        _NSSelectorFromString();
        op_03 = &cf_modeNumber;
        _NSSelectorFromString();
        _objc_alloc();
        IVar5 = _objc_msgSend((ID)pcVar4,(SEL)op,param_1);
        if (IVar5 == 0) {
          pcVar4 = &cf_DisplayModeTrace_MonitorPaneldisplayinitfaileddisplayID__u;
        }
        else {
          IVar6 = IVar5;
          _objc_opt_respondsToSelector(IVar5,op_00);
          if ((((IVar6 & 1) != 0) &&
              (IVar6 = IVar5, _objc_opt_respondsToSelector(IVar5,op_01), (IVar6 & 1) != 0)) &&
             (IVar6 = IVar5, _objc_opt_respondsToSelector(IVar5,op_02), (IVar6 & 1) != 0)) {
            IVar6 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
            if (IVar6 == 0) {
              local_178[0] = 0;
              local_178[1] = 0;
              local_178[2] = 0;
            }
            else {
              NSProcessInfo::operatingSystemVersion(IVar6,local_178);
            }
            lVar14 = local_178[0];
            IVar6 = _objc_msgSend(IVar5,(SEL)op_00);
            uVar7 = param_1;
            _CGDisplayVendorNumber();
            uVar8 = param_1;
            _CGDisplayModelNumber();
            bVar3 = (int)uVar7 == 0x5544 && ((int)uVar8 - 0x5201U < 3 || (int)uVar8 - 0x55e9U < 3);
            local_179 = 0;
            if (lVar14 < 0xe) {
              bVar15 = 0;
              local_17a = 0;
            }
            else {
              IVar9 = IVar5;
              FUN_100004190(IVar5,&local_179);
              if ((IVar9 & 1) == 0) {
                FUN_100003a34(&
                              cf_DisplayModeTrace_MonitorPanelhqModesForChicletsunavailabledisplayID__usystemMajor__ld_fallbackuserresolutions
                             );
              }
              bVar15 = 0;
              local_17a = 0;
              if (bVar3) {
                IVar9 = IVar5;
                FUN_100004218(IVar5,&local_17a);
                if ((IVar9 & 1) == 0) {
                  FUN_100003a34(&
                                cf_DisplayModeTrace_MonitorPanelis4KunavailabledisplayID__usystemMajor__ld_fallbackuserresolutions
                               );
                  bVar15 = 0;
                }
                else {
                  bVar15 = 1;
                }
              }
            }
            bVar2 = local_179 ^ 1;
            if (lVar14 < 0xe) {
              bVar2 = 1;
            }
            lVar14 = 2;
            if ((bVar15 & local_17a) == 0 && bVar3) {
              lVar14 = 5;
            }
            lVar1 = 5;
            if ((int)IVar6 == 0 && bVar2 == 0) {
              lVar1 = lVar14;
            }
            IVar9 = _objc_msgSend(IVar5,(SEL)op_01,lVar1);
            puVar10 = &_OBJC_CLASS___NSArray;
            _objc_opt_class(&_OBJC_CLASS___NSArray);
            IVar6 = IVar9;
            _objc_opt_isKindOfClass(IVar9,puVar10);
            if (((IVar6 & 1) == 0) || (IVar6 = objc_stub::count(IVar9), IVar6 == 0)) {
              uVar7 = 2;
              if (lVar1 != 5) {
                uVar7 = 5;
              }
              FUN_100003a34(&
                            cf_DisplayModeTrace_MonitorPanelresolutionsunavailabledisplayID__usystemMajor__ldtype__ld_fallbacktype__ld
                           );
              IVar9 = _objc_msgSend(IVar5,(SEL)op_01,uVar7);
            }
            puVar10 = &_OBJC_CLASS___NSArray;
            _objc_opt_class(&_OBJC_CLASS___NSArray);
            IVar6 = IVar9;
            _objc_opt_isKindOfClass(IVar9,puVar10);
            if (((IVar6 & 1) == 0) || (IVar6 = objc_stub::count(IVar9), IVar6 == 0)) {
              FUN_100002a48(&
                            cf_DisplayModeTrace_MonitorPanelsystemresolutionsemptydisplayID__utype__ld
                           );
              IVar6 = 0;
            }
            else {
              IVar6 = objc_stub::count(IVar9);
              IVar6 = NSMutableSet::setWithCapacity_((ID)&_OBJC_CLASS___NSMutableSet,IVar6);
              uStack_1b8 = 0;
              local_1c0 = 0;
              local_1a8 = 0;
              local_1b0 = (long *)0x0;
              uStack_198 = 0;
              local_1a0 = 0.0;
              uStack_188 = 0;
              uStack_190 = 0;
              IVar11 = objc_stub::countByEnumeratingWithState_objects_count_
                                 (IVar9,&local_1c0,local_178 + 3,0x10);
              if (IVar11 != 0) {
                lVar14 = *local_1b0;
                do {
                  IVar19 = 0;
                  do {
                    if (*local_1b0 != lVar14) {
                      _objc_enumerationMutation(IVar9);
                    }
                    IVar12 = _objc_msgSend(IVar5,(SEL)op_02,*(undefined8 *)(uStack_1b8 + IVar19 * 8)
                                          );
                    puVar10 = &_OBJC_CLASS___NSArray;
                    _objc_opt_class(&_OBJC_CLASS___NSArray);
                    IVar13 = IVar12;
                    _objc_opt_isKindOfClass(IVar12,puVar10);
                    if ((((IVar13 & 1) == 0) ||
                        (IVar13 = objc_stub::firstObject(IVar12), IVar13 == 0)) ||
                       (IVar12 = IVar13, _objc_opt_respondsToSelector(IVar13,op_03),
                       (IVar12 & 1) == 0)) {
                      FUN_100002a48(&
                                    cf_DisplayModeTrace_MonitorPanelresolutionmodegroupunavailabledisplayID__utype__ldresolution___
                                   );
                      IVar6 = 0;
                      goto LAB_100003100;
                    }
                    IVar13 = _objc_msgSend(IVar13,(SEL)op_03);
                    IVar13 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,IVar13);
                    NSMutableSet::addObject_(IVar6,IVar13);
                    IVar19 = IVar19 + 1;
                  } while (IVar11 != IVar19);
                  IVar11 = objc_stub::countByEnumeratingWithState_objects_count_
                                     (IVar9,&local_1c0,local_178 + 3,0x10);
                } while (IVar11 != 0);
              }
              IVar5 = NSMutableSet::count(IVar6);
              IVar11 = objc_stub::count(IVar9);
              if (IVar5 == IVar11) {
                NSMutableSet::count(IVar6);
                FUN_1000039e0(&
                              cf_DisplayModeTrace_usesystemresolutionsdisplayID__usystemMajor__ldbuiltIn__dnrdVirtual__dhqModesForChiclets__dhasIs4K__dis4K__dtype__ldcount__lu
                             );
              }
              else {
                objc_stub::count(IVar9);
                NSMutableSet::count(IVar6);
                FUN_100002a48(&
                              cf_DisplayModeTrace_MonitorPanelsystemresolutionsduplicatemodenumberdisplayID__utype__ldresolutions__lumodes__lu
                             );
                IVar6 = 0;
              }
            }
LAB_100003100:
            if (IVar6 != 0) {
              IVar5 = NSMutableArray::arrayWithCapacity_
                                ((ID)&_OBJC_CLASS___NSMutableArray,(long)local_1c4);
              if (0 < local_1c4) {
                iVar18 = 0;
                do {
                  local_90 = 0.0;
                  uStack_a8 = 0;
                  local_b0 = 0;
                  uStack_98 = 0;
                  uStack_a0 = 0;
                  uStack_c8 = 0;
                  local_d0 = 0;
                  uStack_b8 = 0;
                  uStack_c0 = 0;
                  uStack_e8 = 0;
                  local_f0 = 0;
                  uStack_d8 = 0;
                  uStack_e0 = 0;
                  uStack_108 = 0;
                  local_110 = 0;
                  uStack_f8 = 0;
                  uStack_100 = 0;
                  uStack_128 = 0;
                  local_130 = 0;
                  uStack_118 = 0;
                  uStack_120 = 0;
                  uStack_138 = 0;
                  local_140 = 0;
                  uStack_158 = 0;
                  local_178[3] = 0;
                  uStack_148 = 0;
                  uStack_150 = 0;
                  _CGSGetDisplayModeDescriptionOfLength(param_1,iVar18,local_178 + 3,0xd4);
                  IVar9 = NSNumber::numberWithInt_
                                    ((ID)&_OBJC_CLASS___NSNumber,local_178[3] & 0xffffffff);
                  IVar9 = objc_stub::containsObject_(IVar6,IVar9);
                  local_1a0 = (double)local_90;
                  if (local_90 <= 0.0) {
                    local_1a0 = 1.0;
                  }
                  iVar16 = (int)(long)(local_1a0 * (double)(int)uStack_158);
                  if (iVar16 < 2) {
                    iVar16 = 1;
                  }
                  iVar17 = (int)(long)(local_1a0 * (double)uStack_158._4_4_);
                  if (iVar17 < 2) {
                    iVar17 = 1;
                  }
                  local_1a8 = NEON_ucvtf(uStack_a8 >> 0x30);
                  local_1c0 = CONCAT44((int)uStack_158,(int)local_178[3]);
                  uStack_1b8 = CONCAT44(iVar16,uStack_158._4_4_);
                  local_1b0 = (long *)CONCAT44(local_1b0._4_4_,iVar17);
                  uStack_198 = CONCAT71(uStack_198._1_7_,(char)IVar9);
                  IVar9 = NSValue::valueWithBytes_objCType_
                                    ((ID)&_OBJC_CLASS___NSValue,&local_1c0,"{?=iiiiiddB}");
                  NSMutableArray::addObject_(IVar5,IVar9);
                  iVar18 = iVar18 + 1;
                } while (iVar18 < local_1c4);
              }
              goto LAB_100002c60;
            }
            goto LAB_100002c4c;
          }
          pcVar4 = &
                   cf_DisplayModeTrace_MonitorPaneldisplaymissingsystemresolutionselectorsdisplayID__u
          ;
        }
        FUN_100002a48(pcVar4);
      }
    }
LAB_100002c4c:
    pcVar4 = &cf_DisplayModeTrace_copyallfailedreason_systemresolutionsunavailabledisplayID__u;
  }
  FUN_100002a48(pcVar4);
  IVar5 = 0;
LAB_100002c60:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_88) {
    return IVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

