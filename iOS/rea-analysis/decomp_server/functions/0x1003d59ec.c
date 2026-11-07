// rea decompile_all
// name: FUN_1003d59ec
// address: 0x1003d59ec
// body: available
// range: 0x1003d59ec-0x1003d6d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d6d40 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003d59ec(double param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined1 *puVar6;
  ID IVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  char *pcVar12;
  char *extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long lVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  char *pcVar17;
  undefined8 auStack_140 [2];
  long alStack_130 [2];
  undefined8 auStack_120 [2];
  undefined8 auStack_110 [2];
  ID *local_100;
  float local_f8;
  undefined1 *local_f0;
  undefined4 local_e8 [2];
  ID local_e0;
  char *local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined4 local_bc;
  code *local_b8;
  long local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  ID local_90 [5];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar15 = 0;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xc,0,0);
  local_a0 = param_2;
  if ((uVar15 & 1) != 0) {
    local_a8 = (undefined1 *)&local_e0;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_b0 = -0x7ffffffeff74b960;
    lVar4 = 0;
    local_f0 = param_2;
    FUN_1005cac3c();
    lVar14 = *(long *)(lVar4 + -8);
    lVar13 = *(long *)(lVar14 + 0x40);
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar1 = -(lVar13 + 0xfU & 0xfffffffffffffff0);
    uVar15 = (long)&local_100 + lVar1;
    local_b8 = *(code **)(lVar14 + 0x68);
    local_bc = 2;
    (*local_b8)(uVar15,2,lVar4);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar7 = DAT_100a8e090;
    pcVar17 = s_Sentry_____1008b4600;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar3 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar8 = uVar15;
      FUN_1005cc2b8();
      if ((uVar8 & 1) == 0) {
        _swift_release(lVar3);
      }
      else {
        IVar5 = 0xd000000000000093;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000093,0x80000001008b4600)
        ;
        pcVar12 = "lastPathComponent";
        IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
        local_c8 = s_Sentry_____1008b4600;
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)((long)auStack_110 + lVar1) = FUN_1003d7210;
        *(ID ***)((long)auStack_110 + lVar1 + 8) = &local_100;
        *(undefined8 *)((long)alStack_130 + lVar1 + 8) = 0x1d;
        *(long *)((long)alStack_130 + lVar1) = local_b0;
        FUN_1005cc010(thunk_FUN_1003a85e4,(long)auStack_120 + lVar1,uVar15,0x65746f6d65525555,
                      0xe800000000000000,IVar5,pcVar12,0xd000000000000012);
        _swift_release(lVar3);
        pcVar17 = local_c8;
        _swift_bridgeObjectRelease(pcVar12);
      }
    }
    _objc_msgSend(IVar7,"unlock");
    pcVar16 = *(code **)(lVar14 + 8);
    (*pcVar16)(uVar15,lVar4);
    puVar11 = local_a0;
    puVar6 = local_a8;
    IVar5 = _objc_msgSend((ID)local_a0,"maximumFramesPerSecond");
    if ((long)IVar5 < 1) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      uVar15 = (long)puVar6 - (lVar13 + 0xfU & 0xfffffffffffffff0);
      (*local_b8)(uVar15,local_bc,lVar4);
      _objc_msgSend(IVar7,"lock");
      lVar1 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        uVar8 = uVar15;
        FUN_1005cc2b8();
        if ((uVar8 & 1) == 0) {
          _swift_release(lVar1);
        }
        else {
          IVar5 = 0xd000000000000093;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000093,(ulong)pcVar17 | 0x8000000000000000);
          pcVar17 = "lastPathComponent";
          IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
          *(undefined8 *)(uVar15 - 8) = 0x1f;
          *(long *)(uVar15 - 0x10) = local_b0;
          FUN_1005cc010(FUN_1003fe3c4,0,uVar15,0x65746f6d65525555,0xe800000000000000,IVar5,pcVar17,
                        0xd000000000000012);
          _swift_release(lVar1);
          _swift_bridgeObjectRelease(pcVar17);
        }
      }
      _objc_msgSend(IVar7,"unlock");
      (*pcVar16)(uVar15,lVar4);
      IVar7 = 0x1e;
    }
    else {
      IVar7 = _objc_msgSend((ID)puVar11,"maximumFramesPerSecond");
    }
    goto LAB_1003d6b58;
  }
  puVar6 = (undefined1 *)0x6e6565726353534e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6565726353534e,0xee007265626d754e);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_d0 = 0x80000001008b46a0;
  lVar4 = 0;
  local_f0 = puVar6;
  local_a8 = puVar6;
  FUN_1005cac3c();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar1 = -((ulong)(extraout_x12 + 0xf) & 0xfffffffffffffff0);
  uVar15 = (long)&local_100 + lVar1;
  local_b8 = *(code **)(lVar13 + 0x68);
  local_bc = 2;
  local_c8 = extraout_x12;
  local_b0 = lVar4;
  (*local_b8)(uVar15);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  IVar7 = DAT_100a8e090;
  local_d8 = s_Sentry_____1008b4600;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar14 = local_b0;
  lVar4 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    uVar8 = uVar15;
    FUN_1005cc2b8();
    if ((uVar8 & 1) == 0) {
      _swift_release(lVar4);
    }
    else {
      IVar5 = 0xd000000000000093;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                (0xd000000000000093,(ulong)local_d8 | 0x8000000000000000);
      local_e0 = IVar7;
      pcVar17 = "lastPathComponent";
      IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(code **)((long)auStack_110 + lVar1) = FUN_1003d71e8;
      *(ID ***)((long)auStack_110 + lVar1 + 8) = &local_100;
      *(undefined8 *)((long)alStack_130 + lVar1 + 8) = 0x25;
      *(undefined8 *)((long)alStack_130 + lVar1) = local_d0;
      IVar7 = local_e0;
      FUN_1005cc010(thunk_FUN_1003a85e4,(long)auStack_120 + lVar1,uVar15,0x65746f6d65525555,
                    0xe800000000000000,IVar5,pcVar17,0xd000000000000012);
      _swift_release(lVar4);
      _swift_bridgeObjectRelease(pcVar17);
      lVar14 = local_b0;
    }
  }
  _objc_msgSend(IVar7,"unlock");
  pcVar16 = *(code **)(lVar13 + 8);
  (*pcVar16)(uVar15,lVar14);
  IVar5 = _objc_msgSend((ID)local_a0,"deviceDescription");
  uVar8 = 0;
  FUN_100006014();
  uVar15 = uVar8;
  FUN_1003d5678();
  puVar2 = PTR___sypN_100995e88;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar5,uVar8,PTR___sypN_100995e88 + 8,uVar15);
  if (*(long *)(IVar5 + 0x10) == 0) {
LAB_1003d6048:
    param_1 = 0.0;
    local_90[1] = 0;
    local_90[0] = 0;
    local_90[3] = 0;
    local_90[2] = 0;
  }
  else {
    _swift_bridgeObjectRetain(IVar5);
    puVar6 = local_a8;
    thunk_FUN_1001a2e90(local_a8);
    if ((uVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar5);
      goto LAB_1003d6048;
    }
    FUN_10003e8bc(*(long *)(IVar5 + 0x38) + (long)puVar6 * 0x20,local_90);
    _swift_bridgeObjectRelease(IVar5);
  }
  _swift_bridgeObjectRelease(IVar5);
  if (local_90[3] == 0) {
    FUN_1000c776c(local_90);
LAB_1003d624c:
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar1 = -(extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
    uVar15 = (long)&local_e0 + lVar1;
    (*local_b8)(uVar15,local_bc,lVar14);
    _objc_msgSend(IVar7,"lock");
    lVar4 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar8 = uVar15;
      FUN_1005cc2b8();
      if ((uVar8 & 1) == 0) {
        _swift_release(lVar4);
      }
      else {
        IVar5 = 0xd000000000000093;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                  (0xd000000000000093,(ulong)local_d8 | 0x8000000000000000);
        pcVar17 = "lastPathComponent";
        IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
        *(undefined8 *)((long)local_e8 + lVar1) = 0x27;
        *(undefined8 *)((long)local_e8 + lVar1 + -8) = local_d0;
        FUN_1005cc010(FUN_1003fe5b4,0,uVar15,0x65746f6d65525555,0xe800000000000000,IVar5,pcVar17,
                      0xd000000000000012);
        _swift_release(lVar4);
        _swift_bridgeObjectRelease(pcVar17);
      }
    }
    _objc_msgSend(IVar7,"unlock");
LAB_1003d6398:
    (*pcVar16)(uVar15,lVar14);
  }
  else {
    uVar9 = 0;
    FUN_10004003c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
    ppuVar10 = &local_98;
    _swift_dynamicCast(ppuVar10,local_90,puVar2 + 8,uVar9,6);
    if (((ulong)ppuVar10 & 1) == 0) goto LAB_1003d624c;
    puVar6 = (undefined1 *)_objc_msgSend((ID)local_98,"intValue");
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,(int)puVar6);
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar1 = -(extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
    uVar15 = (long)&local_100 + lVar1;
    (*local_b8)(uVar15,local_bc,lVar14);
    _objc_msgSend(IVar7,"lock");
    lVar4 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar8 = uVar15;
      FUN_1005cc2b8();
      if ((uVar8 & 1) == 0) {
        _swift_release(lVar4);
      }
      else {
        IVar5 = 0xd000000000000093;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                  (0xd000000000000093,(ulong)local_d8 | 0x8000000000000000);
        pcVar17 = "lastPathComponent";
        IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)((long)auStack_110 + lVar1) = FUN_1003d71f0;
        *(ID ***)((long)auStack_110 + lVar1 + 8) = &local_100;
        *(undefined8 *)((long)alStack_130 + lVar1 + 8) = 0x2a;
        *(undefined8 *)((long)alStack_130 + lVar1) = local_d0;
        FUN_1005cc010(thunk_FUN_1003a85e4,(long)auStack_120 + lVar1,uVar15,0x65746f6d65525555,
                      0xe800000000000000,IVar5,pcVar17,0xd000000000000012);
        _swift_release(lVar4);
        lVar14 = local_b0;
        _swift_bridgeObjectRelease(pcVar17);
      }
    }
    _objc_msgSend(IVar7,"unlock");
    (*pcVar16)(uVar15,lVar14);
    if ((int)puVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1003d6d28);
      (*pcVar16)();
    }
    puVar11 = puVar6;
    _CGDisplayCopyDisplayMode();
    if (puVar11 != (undefined1 *)0x0) {
      _CGDisplayModeGetRefreshRate();
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1003d6d2c);
        (*pcVar16)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1003d6d30);
        (*pcVar16)();
      }
      local_e0 = IVar7;
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1003d6d34);
        (*pcVar16)();
      }
      local_90[0] = (long)param_1;
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_f0 = puVar11;
      (*(code *)PTR____chkstk_darwin_100995498)();
      lVar1 = -(extraout_x12_02 + 0xfU & 0xfffffffffffffff0);
      uVar15 = (long)&local_100 + lVar1;
      (*local_b8)(uVar15,local_bc,lVar14);
      _objc_msgSend(local_e0,"lock");
      lVar4 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        uVar8 = uVar15;
        FUN_1005cc2b8();
        if ((uVar8 & 1) == 0) {
          _swift_release(lVar4);
        }
        else {
          IVar7 = 0xd000000000000093;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000093,(ulong)local_d8 | 0x8000000000000000);
          pcVar17 = "lastPathComponent";
          local_a0 = puVar11;
          IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
          (*(code *)PTR____chkstk_darwin_100995498)(0);
          *(code **)((long)auStack_110 + lVar1) = FUN_1003d71f8;
          *(ID ***)((long)auStack_110 + lVar1 + 8) = &local_100;
          *(undefined8 *)((long)alStack_130 + lVar1 + 8) = 0x30;
          *(undefined8 *)((long)alStack_130 + lVar1) = local_d0;
          puVar11 = local_a0;
          FUN_1005cc010(thunk_FUN_1003a85e4,(long)auStack_120 + lVar1,uVar15,0x65746f6d65525555,
                        0xe800000000000000,IVar7,pcVar17,0xd000000000000012);
          _swift_release(lVar4);
          _swift_bridgeObjectRelease(pcVar17);
          lVar14 = local_b0;
        }
      }
      _objc_msgSend(local_e0,"unlock");
      (*pcVar16)(uVar15,lVar14);
      if ((long)param_1 == 0) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        lVar1 = -(extraout_x12_04 + 0xfU & 0xfffffffffffffff0);
        uVar15 = (long)&local_e0 + lVar1;
        (*local_b8)(uVar15,local_bc,lVar14);
        _objc_msgSend(local_e0,"lock");
        lVar4 = DAT_100a8e098;
        if (DAT_100a8e098 != 0) {
          _swift_retain(DAT_100a8e098);
          uVar8 = uVar15;
          FUN_1005cc2b8();
          if ((uVar8 & 1) == 0) {
            _swift_release(lVar4);
          }
          else {
            IVar7 = 0xd000000000000093;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000093,(ulong)local_d8 | 0x8000000000000000);
            pcVar17 = "lastPathComponent";
            IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
            *(undefined8 *)((long)local_e8 + lVar1) = 0x32;
            *(undefined8 *)((long)local_e8 + lVar1 + -8) = local_d0;
            FUN_1005cc010(FUN_1003fe440,0,uVar15,0x65746f6d65525555,0xe800000000000000,IVar7,pcVar17
                          ,0xd000000000000012);
            _swift_release(lVar4);
            lVar14 = local_b0;
            _swift_bridgeObjectRelease(pcVar17);
          }
        }
        _objc_msgSend(local_e0,"unlock");
        (*pcVar16)(uVar15,lVar14);
        local_98 = (undefined1 *)0x0;
        ppuVar10 = &local_98;
        _CVDisplayLinkCreateWithCGDisplay(puVar6);
        if ((local_98 != (undefined1 *)0x0) &&
           (puVar6 = local_98, _CVDisplayLinkGetNominalOutputVideoRefreshPeriod(),
           (ulong)ppuVar10 >> 0x20 != 1)) {
          local_f8 = (float)(int)((float)(long)(int)ppuVar10 / (float)(long)puVar6);
          if (0x7f7fffff < (uint)ABS(local_f8)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1003d6d38);
            (*pcVar16)();
          }
          if (local_f8 <= -9.223373e+18) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1003d6d3c);
            (*pcVar16)();
          }
          if (9.223372e+18 <= local_f8) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1003d6d40);
            (*pcVar16)();
          }
          local_90[0] = (ID)local_f8;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_100 = local_90;
          local_e8[0] = SUB84(ppuVar10,0);
          local_f0 = puVar6;
          (*(code *)PTR____chkstk_darwin_100995498)();
          lVar1 = -(extraout_x12_05 + 0xfU & 0xfffffffffffffff0);
          uVar15 = (long)auStack_110 + lVar1;
          (*local_b8)(uVar15,local_bc,lVar14);
          _objc_msgSend(local_e0,"lock");
          lVar4 = DAT_100a8e098;
          if (DAT_100a8e098 != 0) {
            _swift_retain(DAT_100a8e098);
            uVar8 = uVar15;
            FUN_1005cc2b8();
            if ((uVar8 & 1) == 0) {
              _swift_release(lVar4);
            }
            else {
              IVar7 = 0xd000000000000093;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0xd000000000000093,(ulong)local_d8 | 0x8000000000000000);
              pcVar17 = "lastPathComponent";
              local_a0 = puVar11;
              IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
              (*(code *)PTR____chkstk_darwin_100995498)(0);
              *(code **)((long)auStack_120 + lVar1) = FUN_1003d7200;
              *(undefined8 **)((long)auStack_120 + lVar1 + 8) = auStack_110;
              *(undefined8 *)((long)auStack_140 + lVar1 + 8) = 0x3a;
              *(undefined8 *)((long)auStack_140 + lVar1) = local_d0;
              FUN_1005cc010(FUN_1003a85e4,(long)alStack_130 + lVar1,uVar15,0x65746f6d65525555,
                            0xe800000000000000,IVar7,pcVar17,0xd000000000000012);
              _swift_release(lVar4);
              lVar14 = local_b0;
              _swift_bridgeObjectRelease(pcVar17);
            }
          }
          _objc_msgSend(local_e0,"unlock");
          (*pcVar16)(uVar15,lVar14);
        }
      }
      IVar7 = local_90[0];
      if (0 < (long)local_90[0]) goto LAB_1003d6b58;
      (*(code *)PTR____chkstk_darwin_100995498)();
      lVar1 = -(extraout_x12_06 + 0xfU & 0xfffffffffffffff0);
      uVar15 = (long)&local_e0 + lVar1;
      (*local_b8)(uVar15,local_bc,lVar14);
      IVar7 = local_e0;
      _objc_msgSend(local_e0,"lock");
      lVar4 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        uVar8 = uVar15;
        FUN_1005cc2b8();
        if ((uVar8 & 1) == 0) {
          _swift_release(lVar4);
        }
        else {
          IVar5 = 0xd000000000000093;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000093,(ulong)local_d8 | 0x8000000000000000);
          pcVar17 = "lastPathComponent";
          IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
          *(undefined8 *)((long)local_e8 + lVar1) = 0x3f;
          *(undefined8 *)((long)local_e8 + lVar1 + -8) = local_d0;
          FUN_1005cc010(FUN_1003fe4bc,0,uVar15,0x65746f6d65525555,0xe800000000000000,IVar5,pcVar17,
                        0xd000000000000012);
          _swift_release(lVar4);
          _swift_bridgeObjectRelease(pcVar17);
        }
      }
      _objc_msgSend(IVar7,"unlock");
      goto LAB_1003d6398;
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar1 = -(extraout_x12_03 + 0xfU & 0xfffffffffffffff0);
    uVar15 = (long)&local_e0 + lVar1;
    (*local_b8)(uVar15,local_bc,lVar14);
    _objc_msgSend(IVar7,"lock");
    lVar4 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar8 = uVar15;
      FUN_1005cc2b8();
      if ((uVar8 & 1) == 0) {
        _swift_release(lVar4);
      }
      else {
        IVar5 = 0xd000000000000093;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                  (0xd000000000000093,(ulong)local_d8 | 0x8000000000000000);
        pcVar17 = "lastPathComponent";
        IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
        *(undefined8 *)((long)local_e8 + lVar1) = 0x2c;
        *(undefined8 *)((long)local_e8 + lVar1 + -8) = local_d0;
        FUN_1005cc010(FUN_1003fe538,0,uVar15,0x65746f6d65525555,0xe800000000000000,IVar5,pcVar17,
                      0xd000000000000012);
        _swift_release(lVar4);
        _swift_bridgeObjectRelease(pcVar17);
      }
    }
    _objc_msgSend(IVar7,"unlock");
    (*pcVar16)(uVar15,lVar14);
  }
  IVar7 = 0x1e;
LAB_1003d6b58:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar7);
}

