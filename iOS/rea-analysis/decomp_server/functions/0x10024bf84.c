// rea decompile_all
// name: FUN_10024bf84
// address: 0x10024bf84
// body: available
// range: 0x10024bf84-0x10024d083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10024d068 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10024bf84(undefined1 *param_1,undefined8 param_2,ID param_3,long param_4,ID param_5,
                  code *param_6,undefined8 param_7)

{
  ID *pIVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ID self;
  ID IVar9;
  undefined1 *puVar10;
  ID IVar11;
  ulong uVar12;
  double *pdVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  FILE *pFVar17;
  ID IVar18;
  double dVar19;
  void *pvVar20;
  size_t sVar21;
  undefined *puVar22;
  char *pcVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  ID IVar29;
  double dVar30;
  double dVar31;
  undefined4 auStack_270 [2];
  long alStack_268 [5];
  long local_240;
  undefined *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  long local_200;
  long local_1f8;
  long local_1f0;
  ulong local_1e8;
  long local_1e0;
  ulong local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  char *local_1a8;
  ID local_1a0;
  long local_198;
  long local_190;
  ulong local_188;
  ID local_180;
  long local_178;
  undefined1 *local_170;
  code *local_168;
  long local_160;
  long local_158;
  ID local_150;
  long local_148;
  ID local_140;
  ID local_138;
  ulong local_130;
  undefined1 *local_128;
  double local_110;
  byte local_101 [33];
  double local_e0 [3];
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar6 = 0;
  local_1b8 = param_7;
  local_1a0 = param_3;
  local_168 = param_6;
  local_148 = param_4;
  local_138 = param_5;
  __s10Foundation8CalendarVMa();
  local_1f0 = *(long *)(uVar6 - 8);
  uVar12 = (long)&local_240 - (*(long *)(local_1f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_1e8 = uVar6;
  local_1d8 = uVar12;
  __s10Foundation14DateComponentsVMa();
  local_200 = *(long *)(lVar7 + -8);
  lVar24 = uVar12 - (*(long *)(local_200 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100a7fb50;
  local_1f8 = lVar7;
  local_1b0 = lVar24;
  FUN_100004bb4(&DAT_100a7fb50,&DAT_1008143d0);
  lVar24 = lVar24 - (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0;
  local_198 = lVar24;
  __s10Foundation4DateVMa();
  local_190 = *(long *)(uVar6 - 8);
  lVar24 = lVar24 - (*(long *)(local_190 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_1c0 = lVar24;
  local_188 = uVar6;
  FUN_10024e0bc();
  lVar28 = *(long *)(lVar7 + -8);
  uVar6 = *(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0;
  IVar29 = lVar24 - uVar6;
  lVar24 = IVar29 - uVar6;
  pcVar23 = "defaultManager";
  local_160 = lVar7;
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar11 = self;
  __s10Foundation3URLV4pathSSvg();
  lVar7 = 0;
  local_1a8 = pcVar23;
  FUN_10024e09c();
  _swift_initStackObject();
  *(undefined1 *)(lVar7 + 0x10) = 1;
  IVar9 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  *(ID *)(lVar7 + 0x18) = IVar9;
  FUN_10024d988();
  _swift_setDeallocating(lVar7);
  uVar6 = *(ulong *)(param_1 + 0x10);
  local_180 = IVar29;
  local_158 = lVar28;
  local_130 = uVar6;
  local_128 = param_1;
  if (uVar6 == 0) {
    dVar30 = 0.0;
  }
  else {
    param_1 = param_1 + ((ulong)*(byte *)(lVar28 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar28 + 0x50) ^ 0xffffffffffffffff));
    lVar7 = *(long *)(lVar28 + 0x48);
    lVar28 = *(long *)PTR__NSFileSize_1009952c8;
    dVar30 = 0.0;
    local_140 = IVar11;
    do {
      puVar10 = param_1;
      lVar25 = lVar24;
      FUN_100082394(param_1,lVar24,FUN_10024e0bc);
      __s10Foundation3URLV4pathSSvg();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(lVar25);
      local_c0 = 0;
      IVar11 = NSFileManager::attributesOfItemAtPath_error_
                         (self,"attributesOfItemAtPath:error:",puVar10,&local_c0);
      if (IVar11 == 0) {
        uVar14 = local_c0;
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_c0);
        _swift_willThrow(0);
        FUN_1000d27dc(lVar24,FUN_10024e0bc);
        _swift_errorRelease(uVar14);
      }
      else {
        uVar12 = 0;
        FUN_100248dc4();
        puVar8 = &DAT_100a7fb40;
        FUN_100005c90(&DAT_100a7fb40,FUN_100248dc4,&TargetProtocolConformanceDescriptor_100814388);
        __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                  (IVar11,uVar12,PTR___sypN_100995e88 + 8,puVar8);
        if ((*(long *)(IVar11 + 0x10) == 0) ||
           (lVar25 = lVar28, FUN_100234398(lVar28), (uVar12 & 1) == 0)) {
          _swift_bridgeObjectRelease(IVar11);
          FUN_1000d27dc(lVar24,FUN_10024e0bc);
        }
        else {
          FUN_10003e8bc(*(long *)(IVar11 + 0x38) + lVar25 * 0x20,&local_c0);
          FUN_1000d27dc(lVar24,FUN_10024e0bc);
          _swift_bridgeObjectRelease(IVar11);
          pdVar13 = local_e0;
          _swift_dynamicCast(pdVar13,&local_c0,PTR___sypN_100995e88 + 8,PTR___sSdN_1009958f0,6);
          if (((ulong)pdVar13 & 1) != 0) {
            dVar30 = dVar30 + local_e0[0];
          }
        }
      }
      param_1 = param_1 + lVar7;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar30)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d034);
      (*pcVar4)();
    }
    if (dVar30 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d030);
      (*pcVar4)();
    }
    IVar11 = local_140;
    if (9.223372036854776e+18 <= dVar30) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10024c3f4);
      (*pcVar4)();
    }
  }
  uVar6 = local_130;
  lVar28 = local_158;
  IVar9 = local_180;
  local_1e0 = (long)dVar30;
  IVar29 = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",local_1e0);
  NSProgress::setCancellable_(IVar29,"setCancellable:",0);
  NSProgress::setPausable_(IVar29,"setPausable:",0);
  local_150 = IVar29;
  NSProgress::setKind_(IVar29,"setKind:",*(undefined8 *)PTR__NSProgressKindFile_100995310);
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(IVar11,local_1a8);
  lVar7 = IVar11 + 0x20;
  FUN_100252084(lVar7,0);
  _swift_release(IVar11);
  pcVar4 = local_168;
  if (uVar6 != 0) {
    uVar6 = 0;
    puVar10 = local_128 +
              ((ulong)*(byte *)(lVar28 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar28 + 0x50) ^ 0xffffffffffffffff));
    local_178 = (long)(char)local_138;
    local_1c8 = *(long *)PTR__NSFileModificationDate_1009952b8;
    local_204 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_100996280;
    local_208 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO5monthyA2EmFWC_100996288;
    local_20c = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO3dayyA2EmFWC_100996270;
    local_210 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4houryA2EmFWC_100996278;
    local_214 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO6minuteyA2EmFWC_100996290;
    dVar31 = 0.0;
    local_218 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO6secondyA2EmFWC_100996298;
    local_1d0 = *(long *)PTR__NSFileSize_1009952c8;
    uStack_228 = 0xc;
    local_230 = 6;
    local_170 = puVar10;
    do {
      if (*(ulong *)(local_128 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d020);
        (*pcVar4)();
      }
      puVar15 = puVar10 + *(long *)(lVar28 + 0x48) * uVar6;
      IVar11 = IVar9;
      FUN_100082394(puVar15,IVar9,FUN_10024e0bc);
      __s10Foundation3URLV4pathSSvg();
      local_101[0] = 0;
      puVar16 = puVar15;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      NSFileManager::fileExistsAtPath_isDirectory_
                (self,"fileExistsAtPath:isDirectory:",puVar16,local_101);
      if ((local_101[0] & 1) == 0) {
        puVar10 = puVar15;
        __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(puVar15,IVar11);
        pFVar17 = _fopen(puVar10 + 0x20,"r");
        _swift_release(puVar10);
        if (pFVar17 == (FILE *)0x0) {
          _swift_bridgeObjectRelease(IVar11);
          _swift_bridgeObjectRelease(local_1a8);
          puVar10 = local_128;
          _swift_bridgeObjectRelease();
          FUN_100248d84();
          _swift_allocError(&DAT_1009a7f28,puVar10,0,0);
          *puVar10 = 2;
          _swift_willThrow();
        }
        else {
          pIVar1 = (ID *)(IVar9 + (long)*(int *)(local_160 + 0x14));
          local_140 = *pIVar1;
          IVar29 = pIVar1[1];
          uStack_a8 = 0;
          local_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar15,IVar11);
          local_e0[0] = 0.0;
          IVar18 = NSFileManager::attributesOfItemAtPath_error_
                             (self,"attributesOfItemAtPath:error:",puVar15,local_e0);
          dVar19 = local_e0[0];
          local_138 = IVar29;
          if (IVar18 == 0) {
            _swift_bridgeObjectRelease(IVar11);
            __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(dVar19);
            _swift_willThrow(0);
            _swift_errorRelease(dVar19);
          }
          else {
            uVar12 = 0;
            FUN_100248dc4();
            puVar8 = &DAT_100a7fb40;
            FUN_100005c90(&DAT_100a7fb40,FUN_100248dc4,
                          &TargetProtocolConformanceDescriptor_100814388);
            __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                      (IVar18,uVar12,PTR___sypN_100995e88 + 8,puVar8);
            if (*(long *)(IVar18 + 0x10) == 0) {
LAB_10024c860:
              _swift_bridgeObjectRelease(IVar11);
              pcVar4 = local_168;
              lVar28 = local_198;
              (**(code **)(local_190 + 0x38))(local_198,1,1,local_188);
LAB_10024c898:
              uVar12 = 0;
              FUN_100040bb4(lVar28,&DAT_100a7fb50,&DAT_1008143d0);
              if (*(long *)(IVar18 + 0x10) == 0) goto LAB_10024c8f8;
LAB_10024c8b8:
              _swift_bridgeObjectRetain(IVar18);
              lVar28 = local_1d0;
              FUN_100234398(local_1d0);
              if ((uVar12 & 1) == 0) {
                _swift_bridgeObjectRelease(IVar18);
                goto LAB_10024c8f8;
              }
              FUN_10003e8bc(*(long *)(IVar18 + 0x38) + lVar28 * 0x20,local_e0);
              _swift_bridgeObjectRelease(IVar18);
            }
            else {
              _swift_bridgeObjectRetain(IVar18);
              lVar28 = local_1c8;
              FUN_100234398(local_1c8);
              if ((uVar12 & 1) == 0) {
                _swift_bridgeObjectRelease(IVar11);
                IVar11 = IVar18;
                goto LAB_10024c860;
              }
              FUN_10003e8bc(*(long *)(IVar18 + 0x38) + lVar28 * 0x20,local_e0);
              _swift_bridgeObjectRelease(IVar18);
              uVar12 = local_188;
              lVar28 = local_198;
              lVar27 = local_198;
              _swift_dynamicCast(local_198,local_e0,PTR___sypN_100995e88 + 8,local_188,6);
              lVar25 = local_190;
              (**(code **)(local_190 + 0x38))(lVar28,(uint)lVar27 ^ 1,1,uVar12);
              lVar27 = lVar28;
              (**(code **)(lVar25 + 0x30))(lVar28,1,uVar12);
              if ((int)lVar27 == 1) {
                _swift_bridgeObjectRelease(IVar11);
                pcVar4 = local_168;
                goto LAB_10024c898;
              }
              (**(code **)(lVar25 + 0x20))(local_1c0,lVar28,uVar12);
              __s10Foundation8CalendarV7currentACvgZ(local_1d8);
              puVar8 = &DAT_100a7fcf0;
              FUN_100004bb4(&DAT_100a7fcf0,&DAT_100814580);
              lVar28 = 0;
              local_238 = puVar8;
              __s10Foundation8CalendarV9ComponentOMa();
              lVar25 = *(long *)(lVar28 + -8);
              lVar27 = *(long *)(lVar25 + 0x48);
              uVar12 = (ulong)*(byte *)(lVar25 + 0x50);
              uVar26 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
              _swift_allocObject(local_238,uVar26 + lVar27 * 6,uVar12 | 7);
              *(undefined8 *)(local_238 + 0x18) = uStack_228;
              *(undefined8 *)(local_238 + 0x10) = local_230;
              puVar8 = local_238 + uVar26;
              pcVar4 = *(code **)(lVar25 + 0x68);
              (*pcVar4)(puVar8,local_204,lVar28);
              (*pcVar4)(puVar8 + lVar27,local_208,lVar28);
              local_240 = lVar27 * 2;
              (*pcVar4)(puVar8 + local_240,local_20c,lVar28);
              (*pcVar4)(puVar8 + local_240 + lVar27,local_210,lVar28);
              local_240 = lVar27 * 4;
              (*pcVar4)(puVar8 + local_240,local_214,lVar28);
              (*pcVar4)(puVar8 + local_240 + lVar27,local_218,lVar28);
              puVar3 = local_238;
              puVar22 = local_238;
              FUN_10024bd3c(local_238);
              _swift_setDeallocating(puVar3);
              _swift_arrayDestroy(puVar8,6,lVar28);
              _swift_deallocClassInstance(puVar3,0x20,7);
              uVar26 = local_1d8;
              __s10Foundation8CalendarV14dateComponents_4fromAA04DateD0VShyAC9ComponentOG_AA0F0VtF
                        (local_1b0,puVar22,local_1c0);
              _swift_bridgeObjectRelease(puVar22);
              uVar12 = local_1e8;
              (**(code **)(local_1f0 + 8))();
              __s10Foundation14DateComponentsV6secondSiSgvg();
              if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d070);
                (*pcVar4)();
              }
              if ((long)uVar26 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d038);
                (*pcVar4)();
              }
              if (uVar26 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d03c);
                (*pcVar4)();
              }
              local_c0 = CONCAT44(local_c0._4_4_,(int)uVar26);
              __s10Foundation14DateComponentsV6minuteSiSgvg();
              pcVar4 = local_168;
              if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d074);
                (*pcVar4)();
              }
              if ((long)uVar26 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d040);
                (*pcVar4)();
              }
              if (uVar26 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d044);
                (*pcVar4)();
              }
              local_c0 = CONCAT44((int)uVar26,(undefined4)local_c0);
              __s10Foundation14DateComponentsV4hourSiSgvg();
              if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d078);
                (*pcVar4)();
              }
              if ((long)uVar26 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d048);
                (*pcVar4)();
              }
              if (uVar26 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d04c);
                (*pcVar4)();
              }
              uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uVar26);
              __s10Foundation14DateComponentsV3daySiSgvg();
              if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d07c);
                (*pcVar4)();
              }
              if ((long)uVar26 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d050);
                (*pcVar4)();
              }
              if (uVar26 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d054);
                (*pcVar4)();
              }
              uStack_b8 = CONCAT44((int)uVar26,(undefined4)uStack_b8);
              __s10Foundation14DateComponentsV5monthSiSgvg();
              lVar28 = local_1b0;
              if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d080);
                (*pcVar4)();
              }
              if ((long)uVar26 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d058);
                (*pcVar4)();
              }
              if (uVar26 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d05c);
                (*pcVar4)();
              }
              if ((int)uVar26 == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d060);
                (*pcVar4)();
              }
              local_b0 = CONCAT44(local_b0._4_4_,(int)uVar26 + -1);
              __s10Foundation14DateComponentsV4yearSiSgvg();
              if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d084);
                (*pcVar4)();
              }
              _swift_bridgeObjectRelease(IVar11);
              (**(code **)(local_200 + 8))(lVar28,local_1f8);
              uVar12 = local_188;
              (**(code **)(local_190 + 8))(local_1c0);
              if ((long)uVar26 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d064);
                (*pcVar4)();
              }
              if (uVar26 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d068);
                (*pcVar4)();
              }
              local_b0 = CONCAT44((int)uVar26,(undefined4)local_b0);
              if (*(long *)(IVar18 + 0x10) != 0) goto LAB_10024c8b8;
LAB_10024c8f8:
              local_e0[1] = 0.0;
              local_e0[0] = 0.0;
              local_c8 = 0;
              local_e0[2] = 0.0;
            }
            _swift_bridgeObjectRelease(IVar18);
            if (local_c8 == 0) {
              FUN_100040bb4(local_e0,&DAT_100a7fce8,&DAT_100814578);
              IVar9 = local_180;
            }
            else {
              pdVar13 = &local_110;
              _swift_dynamicCast(pdVar13,local_e0,PTR___sypN_100995e88 + 8,PTR___sSdN_1009958f0,6);
              IVar9 = local_180;
              if (((ulong)pdVar13 & 1) != 0) {
                dVar31 = dVar31 + local_110;
              }
            }
          }
          pvVar20 = _malloc(0x4000);
          if (pvVar20 != (void *)0x0) {
            if (local_148 == 0) {
              if (local_138 != 0) {
                uVar2 = *(undefined4 *)((long)&PTR___mh_execute_header_100814640 + local_178 * 4);
                IVar11 = local_140;
                __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(local_140);
                *(undefined8 *)(lVar24 + -0x18) = 0;
                *(undefined8 *)(lVar24 + -0x10) = 0;
                *(undefined8 *)(lVar24 + -0x28) = 0xfffffff100000000;
                *(undefined8 *)(lVar24 + -0x20) = 8;
                *(undefined4 *)(lVar24 + -0x30) = 8;
                *(undefined4 *)(lVar24 + -0x2c) = uVar2;
                FUN_100252d20(lVar7,IVar11 + 0x20,&local_c0,0,0,0,0,0);
                goto LAB_10024ca98;
              }
            }
            else if (local_138 != 0) {
              uVar2 = *(undefined4 *)((long)&PTR___mh_execute_header_100814640 + local_178 * 4);
              IVar29 = local_140;
              __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(local_140);
              IVar11 = local_1a0;
              __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(local_1a0,local_148);
              *(ID *)(lVar24 + -0x18) = IVar11 + 0x20;
              *(undefined8 *)(lVar24 + -0x10) = 0;
              *(undefined8 *)(lVar24 + -0x28) = 0xfffffff100000000;
              *(undefined8 *)(lVar24 + -0x20) = 8;
              *(undefined4 *)(lVar24 + -0x30) = 8;
              *(undefined4 *)(lVar24 + -0x2c) = uVar2;
              FUN_100252d20(lVar7,IVar29 + 0x20,&local_c0,0,0,0,0,0);
              _swift_release(IVar29);
LAB_10024ca98:
              puVar10 = local_170;
              _swift_release(IVar11);
              while (iVar5 = _feof(pFVar17), uVar14 = local_1b8, iVar5 == 0) {
                sVar21 = _fread(pvVar20,1,0x4000,pFVar17);
                if ((long)sVar21 < 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d018);
                  (*pcVar4)();
                }
                if (sVar21 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d01c);
                  (*pcVar4)();
                }
                FUN_100252ebc(lVar7,pvVar20,sVar21);
              }
              if ((pcVar4 != (code *)0x0) && (dVar31 / dVar30 != 1.0)) {
                _swift_retain(local_1b8);
                (*pcVar4)(dVar31 / dVar30);
                FUN_10007ed2c(pcVar4,uVar14);
              }
              if (0x7fefffffffffffff < (ulong)ABS(dVar31)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d024);
                (*pcVar4)();
              }
              if (dVar31 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d028);
                (*pcVar4)();
              }
              if (9.223372036854776e+18 <= dVar31) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10024d02c);
                (*pcVar4)();
              }
              _objc_msgSend(local_150,"setCompletedUnitCount:",(long)dVar31);
              FUN_100252c04(lVar7);
              _free(pvVar20);
              _fclose(pFVar17);
              lVar28 = local_158;
              goto LAB_10024c5b0;
            }
          }
          _swift_bridgeObjectRelease(local_1a8);
          puVar10 = local_128;
          _swift_bridgeObjectRelease();
          FUN_100248d84();
          _swift_allocError(&DAT_1009a7f28,puVar10,0,0);
          *puVar10 = 2;
          _swift_willThrow();
          _fclose(pFVar17);
        }
        FUN_1000d27dc(IVar9,FUN_10024e0bc);
        goto LAB_10024cfd0;
      }
      _swift_bridgeObjectRelease(IVar11);
LAB_10024c5b0:
      uVar6 = uVar6 + 1;
      FUN_1000d27dc(IVar9,FUN_10024e0bc);
    } while (uVar6 != local_130);
  }
  puVar10 = local_128;
  _swift_bridgeObjectRelease(local_1a8);
  _swift_bridgeObjectRelease(puVar10);
  FUN_10025391c(lVar7,0);
  uVar14 = local_1b8;
  if (pcVar4 != (code *)0x0) {
    _swift_retain(local_1b8);
    (*pcVar4)(0x3ff0000000000000);
    FUN_10007ed2c(pcVar4,uVar14);
  }
  _objc_msgSend(local_150,"setCompletedUnitCount:",local_1e0);
LAB_10024cfd0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

