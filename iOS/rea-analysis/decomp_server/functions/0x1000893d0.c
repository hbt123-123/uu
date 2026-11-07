// rea decompile_all
// name: FUN_1000893d0
// address: 0x1000893d0
// body: available
// range: 0x1000893d0-0x100089dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000893d0(double param_1,long param_2,undefined8 param_3,int param_4,int param_5,
                  code *param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  double dVar23;
  undefined1 auStack_200 [16];
  int aiStack_1f0 [2];
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  undefined1 *local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  code *local_1a8;
  code *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  undefined *local_168;
  int local_15c;
  undefined8 local_158;
  int local_14c;
  undefined *local_148;
  undefined *local_140;
  undefined8 local_138;
  code *local_130;
  undefined *local_128;
  code *local_120;
  undefined *local_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  double local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  char local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char local_88;
  
  lVar5 = 0;
  local_168 = (undefined *)param_8;
  local_15c = param_5;
  local_158 = param_7;
  local_14c = param_4;
  __s8Dispatch0A4TimeVMa();
  lVar21 = *(long *)(lVar5 + -8);
  local_170 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar20 = (long)(auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_180 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar15 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_178 = lVar15;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_188 = lVar15;
  __s10Foundation4UUIDVMa();
  lVar17 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar18 = lVar15 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  local_190 = extraout_x12_00;
  _swift_beginAccess(param_2 + 0x10,auStack_f8,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  lVar5 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
  if (param_2 == 0) {
    FUN_100401b14();
    FUN_1003fb48c(thunk_FUN_1000890e0,0,0xd00000000000009f,0x800000010087e740,0xd000000000000043,
                  0x800000010087ecd0,0x145,0);
    return;
  }
  local_1a0 = param_6;
  _swift_beginAccess(param_2 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                     auStack_110,0,0);
  local_1a8 = *(code **)(lVar17 + 0x10);
  (*local_1a8)(uVar18,param_2 + lVar5,lVar6);
  uVar8 = uVar18;
  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar18,param_3);
  local_198 = lVar17;
  (**(code **)(lVar17 + 8))(uVar18,lVar6);
  lVar5 = _TtC14UURemoteServer19SecondScreenManager::rotationWorkItem;
  if ((uVar8 & 1) == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_100089dfc,0,0xd00000000000009f,0x800000010087e740,0xd000000000000043,
                  0x800000010087ecd0,0x149,0);
LAB_1000897ac:
    _swift_release(param_2);
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + _TtC14UURemoteServer19SecondScreenManager::rotationWorkItem);
    *(undefined8 *)(param_2 + _TtC14UURemoteServer19SecondScreenManager::rotationWorkItem) = 0;
    local_1d0 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    local_1c8 = lVar21;
    local_1c0 = lVar20;
    local_1b8 = param_3;
    _swift_release(uVar7);
    FUN_10003990c(&local_e0,local_14c);
    uVar8 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
    uVar7 = 0;
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar8,uVar7);
    local_1d8 = lVar5;
    local_1b0 = param_2;
    if (uVar8 >> 0x3e == 0) {
      uVar22 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar22 = uVar8 & 0xffffffffffffff8;
      if ((long)uVar8 < 0) {
        uVar22 = uVar8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar22 != 0) {
      uVar19 = 0;
      do {
        if ((uVar8 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1000897cc);
            (*pcVar16)();
          }
          uVar9 = *(ulong *)(uVar8 + uVar19 * 8 + 0x20);
        }
        else {
          uVar9 = uVar19;
          FUN_100169c00(uVar19,uVar8);
        }
        uVar1 = uVar19 + 1;
        if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x1000897c8);
          (*pcVar16)();
        }
        uVar10 = uVar9;
        FUN_1003d541c();
        if ((int)uVar10 == local_14c) {
          _swift_bridgeObjectRelease(uVar8);
          goto LAB_1000897f0;
        }
        uVar19 = uVar19 + 1;
      } while (uVar1 != uVar22);
    }
    _swift_bridgeObjectRelease(uVar8);
    uVar9 = 0;
LAB_1000897f0:
    _CGDisplayRotation(local_14c);
    iVar4 = local_15c;
    lVar5 = local_198;
    param_2 = local_1b0;
    if ((param_1 == (double)local_15c) && (local_b8 != '\x02')) {
      uStack_a8 = uStack_d8;
      local_b0 = local_e0;
      uStack_98 = uStack_c8;
      uStack_a0 = uStack_d0;
      local_90 = local_c0;
      local_88 = local_b8;
      if (uVar9 != 0) {
        _objc_msgSend(uVar9,"frame");
        _CGRectGetWidth();
        dVar23 = (double)(long)local_e0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x100089de8);
          (*pcVar16)();
        }
        if (dVar23 <= -2147483649.0) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x100089dec);
          (*pcVar16)();
        }
        if (2147483648.0 <= dVar23) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x100089df0);
          (*pcVar16)();
        }
        if (local_b0._4_4_ == (int)dVar23) {
          _objc_msgSend(uVar9,"frame");
          _CGRectGetHeight();
          dVar23 = (double)(long)dVar23;
          if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100089df4);
            (*pcVar16)();
          }
          if (dVar23 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100089df8);
            (*pcVar16)();
          }
          if (2147483648.0 <= dVar23) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100089dfc);
            (*pcVar16)();
          }
          if ((int)uStack_a8 == (int)dVar23) {
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(int *)(uVar18 - 0x10) = local_14c;
            *(int *)(uVar18 - 0xc) = iVar4;
            *(undefined8 **)(uVar18 - 8) = &local_b0;
            FUN_1003fb48c(FUN_100091650,uVar18 - 0x20,0xd00000000000009f,0x800000010087e740,
                          0xd000000000000043,0x800000010087ecd0,0x154,0);
            (*local_1a0)(0);
            goto LAB_1000897ac;
          }
        }
      }
    }
    lVar15 = local_1b8;
    if ((long)local_168 < 2) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(int *)(uVar18 - 0x10) = local_14c;
      *(int *)(uVar18 - 0xc) = iVar4;
      FUN_1003fb4ec(FUN_100091538,uVar18 - 0x20,0xd00000000000009f,0x800000010087e740,
                    0xd000000000000043,0x800000010087ecd0,0x15a,0);
      (*local_1a0)(0x2715);
      _swift_release(param_2);
    }
    else {
      local_1b8 = (long)local_168 + -1;
      puVar11 = &DAT_100999b60;
      _swift_allocObject(&DAT_100999b60,0x18,7);
      local_168 = puVar11;
      _swift_weakInit(puVar11 + 0x10,param_2);
      (*local_1a8)(uVar18,lVar15,lVar6);
      uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
      uVar22 = uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff);
      uVar19 = local_190 + uVar22 + 3 & 0xfffffffffffffffc;
      uVar9 = uVar19 + 0xf & 0xfffffffffffffff8;
      puVar11 = &DAT_100999cf0;
      _swift_allocObject(&DAT_100999cf0,uVar9 + 0x18,uVar8 | 7);
      *(undefined **)(puVar11 + 0x10) = local_168;
      (**(code **)(lVar5 + 0x20))(puVar11 + uVar22,uVar18,lVar6);
      uVar7 = local_158;
      *(int *)(puVar11 + uVar19) = local_14c;
      *(int *)(puVar11 + uVar19 + 4) = local_15c;
      *(code **)(puVar11 + uVar9) = local_1a0;
      *(undefined8 *)((long)(puVar11 + uVar9) + 8) = local_158;
      *(long *)(puVar11 + uVar9 + 0x10) = local_1b8;
      local_120 = thunk_FUN_1000915e4;
      local_140 = PTR___NSConcreteStackBlock_100995490;
      local_138 = 0x42000000;
      local_130 = FUN_1000acdb4;
      local_128 = &DAT_100999d08;
      local_118 = puVar11;
      pvVar12 = __Block_copy(&local_140);
      puVar3 = local_168;
      _swift_retain(local_168);
      _swift_retain(uVar7);
      lVar15 = local_188;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_188);
      local_148 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar13 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar11 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar14 = puVar11;
      FUN_10004eec4();
      lVar5 = local_178;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_178,&local_148,puVar11,puVar14,local_180,puVar13);
      __s8Dispatch0A8WorkItemCMa();
      _swift_allocObject();
      __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar15,lVar5,pvVar12)
      ;
      puVar11 = local_118;
      _swift_release(puVar3);
      _swift_release(puVar11);
      lVar6 = local_1b0;
      uVar7 = *(undefined8 *)(local_1b0 + local_1d8);
      *(long *)(local_1b0 + local_1d8) = lVar15;
      _swift_retain(lVar15);
      _swift_release(uVar7);
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar2 = local_1d0;
      __s8Dispatch0A4TimeV3nowACyFZ(local_1d0);
      lVar5 = local_1c0;
      __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_1c0,0x3fb999999999999a,puVar2);
      lVar17 = local_170;
      pcVar16 = *(code **)(local_1c8 + 8);
      (*pcVar16)(puVar2,local_170);
      __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
                (lVar5,lVar15);
      _swift_release(lVar15);
      _swift_release(lVar6);
      (*pcVar16)(lVar5,lVar17);
    }
  }
  return;
}

