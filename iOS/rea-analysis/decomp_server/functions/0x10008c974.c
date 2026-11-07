// rea decompile_all
// name: FUN_10008c974
// address: 0x10008c974
// body: available
// range: 0x10008c974-0x10008d58b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10008c974(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,code *param_6,undefined8 param_7)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  void *aBlock;
  undefined *puVar12;
  undefined4 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  long unaff_x20;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 auStack_200 [16];
  int aiStack_1f0 [2];
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  ulong local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  long local_1b0;
  long local_1a8;
  code *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  ulong local_170;
  long local_168;
  long local_160;
  long local_158;
  undefined1 *local_150;
  long local_148;
  long local_140;
  code *local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  code *local_100;
  undefined8 local_f8;
  long local_f0;
  undefined1 local_e4;
  undefined *local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined *local_c8;
  code *local_c0;
  undefined *local_b8;
  undefined1 auStack_80 [32];
  
  iVar5 = (int)param_1;
  local_138 = (code *)CONCAT44(local_138._4_4_,param_5);
  lVar7 = 0;
  local_118 = param_3;
  local_108 = param_4;
  local_100 = param_6;
  local_f8 = param_7;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_148 = *(long *)(lVar7 + -8);
  local_140 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_148 + 0x40));
  lVar7 = 0;
  local_150 = auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_160 = *(long *)(lVar7 + -8);
  local_158 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_160 + 0x40));
  lVar14 = (long)(auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_168 = lVar14;
  __s8Dispatch0A4TimeVMa();
  local_190 = *(long *)(lVar7 + -8);
  local_f0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_190 + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_198 = lVar14;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar14 - extraout_x12;
  lVar7 = 0;
  __s10Foundation4DateVMa();
  local_120 = *(long *)(lVar7 + -8);
  local_110 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar7 = lVar14 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  local_178 = extraout_x13;
  local_128 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar20 = lVar7 - extraout_x12_00;
  lVar8 = 0;
  __s10Foundation4UUIDVMa();
  lVar17 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar7 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
  lVar21 = uVar20 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
  local_188 = extraout_x12_01;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                     auStack_80,0,0);
  local_1a0 = *(code **)(lVar17 + 0x10);
  (*local_1a0)(lVar21,unaff_x20 + lVar7,lVar8);
  local_170 = param_2;
  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(param_2,lVar21);
  lVar7 = lVar21;
  local_180 = lVar17;
  local_130 = lVar21;
  (**(code **)(lVar17 + 8))(lVar21,lVar8);
  if ((param_2 & 1) == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_10008d58c,0,0xd00000000000009f,0x800000010087e740,0xd000000000000060,
                  0x800000010087f730,699,0);
LAB_10008cfb8:
    local_e0 = (undefined *)CONCAT71(local_e0._1_7_,1);
  }
  else {
    FUN_100075194();
    lVar19 = local_f0;
    uVar18 = local_108;
    lVar15 = *(long *)(lVar7 + 0x10);
    lVar17 = 0x20;
    local_1b0 = lVar14;
    local_1a8 = lVar8;
    do {
      if (lVar15 == 0) {
        _swift_bridgeObjectRelease();
        iVar6 = iVar5;
        _CGDisplayIsOnline();
        if (iVar6 == 0) goto LAB_10008cef0;
        goto LAB_10008cc98;
      }
      piVar1 = (int *)(lVar7 + lVar17);
      lVar17 = lVar17 + 4;
      lVar15 = lVar15 + -1;
    } while (*piVar1 != iVar5);
    _swift_bridgeObjectRelease();
LAB_10008cc98:
    lVar8 = *(long *)(unaff_x20 + 0x58);
    puVar12 = &DAT_100a76608;
    FUN_100004bb4(&DAT_100a76608,&DAT_10080b130);
    _swift_initStackObject();
    *(undefined8 *)(puVar12 + 0x18) = 2;
    *(undefined8 *)(puVar12 + 0x10) = 1;
    *(undefined8 *)(puVar12 + 0x20) = 1;
    *(int *)(puVar12 + 0x28) = iVar5;
    puVar9 = puVar12;
    FUN_1000cc774();
    _swift_setDeallocating(puVar12);
    _swift_bridgeObjectRetain(lVar8);
    local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
    uVar23 = param_1 & 0xffffffff;
    puVar12 = puVar9;
    lVar7 = lVar8;
    uVar22 = uVar23;
    FUN_10004bca0();
    _swift_bridgeObjectRelease(lVar8);
    _swift_bridgeObjectRelease();
    lVar8 = local_1a8;
    if (((uVar22 & 0xff) == 0) ||
       ((((uint)uVar22 & 0xff) == 6 && (puVar12 == (undefined *)0x0 && lVar7 == 0)))) {
      uVar13 = 0x2715;
    }
    else {
      uVar13 = 1;
    }
    *(undefined4 *)(unaff_x20 + 0x18) = uVar13;
    if ((uVar22 & 0xff) == 0) {
      FUN_100075194();
      lVar17 = *(long *)(puVar9 + 0x10);
      lVar14 = 0x20;
      do {
        if (lVar17 == 0) {
          _swift_bridgeObjectRelease();
          goto LAB_10008ce4c;
        }
        piVar1 = (int *)(puVar9 + lVar14);
        lVar14 = lVar14 + 4;
        lVar17 = lVar17 + -1;
      } while (*piVar1 != iVar5);
      _swift_bridgeObjectRelease();
      iVar6 = iVar5;
      _CGDisplayIsInMirrorSet();
      if (iVar6 == 0) {
        FUN_100075118(puVar12,lVar7,0);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(int *)(lVar21 + -0x10) = iVar5;
        FUN_1003fb48c(FUN_100092fd4,lVar21 + -0x20,0xd00000000000009f,0x800000010087e740,
                      0xd000000000000060,0x800000010087f730,0x2d2,0);
        *(int *)(unaff_x20 + 0x10) = iVar5;
        *(undefined1 *)(unaff_x20 + 0x14) = 0;
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
        goto LAB_10008cfc8;
      }
    }
LAB_10008ce4c:
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)(lVar21 + -0x20) = iVar5;
    *(undefined **)(lVar21 + -0x18) = puVar12;
    *(long *)(lVar21 + -0x10) = lVar7;
    *(char *)(lVar21 + -8) = (char)uVar22;
    FUN_1003fb45c(FUN_100092e50,lVar21 + -0x30,0xd00000000000009f,0x800000010087e740,
                  0xd000000000000060,0x800000010087f730,0x2d8,0);
    FUN_100075118(puVar12,lVar7,uVar22);
    uVar18 = local_108;
    lVar19 = local_f0;
    lVar14 = local_1b0;
LAB_10008cef0:
    __s10Foundation4DateVACycfC(uVar20);
    uVar22 = uVar20;
    __s10Foundation4DateV1loiySbAC_ACtFZ(uVar20,local_118);
    pcVar16 = *(code **)(local_120 + 8);
    (*pcVar16)(uVar20,local_110);
    if ((uVar22 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(int *)(lVar21 + -0x10) = iVar5;
      FUN_1003fb4ec(FUN_100092e60,lVar21 + -0x20,0xd00000000000009f,0x800000010087e740,
                    0xd000000000000060,0x800000010087f730,0x2db,0);
      goto LAB_10008cfb8;
    }
    if (((ulong)local_138 & 1) != 0) {
      local_1bc = 1;
LAB_10008d060:
      uVar11 = 0;
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      lVar7 = local_198;
      local_1b8 = uVar11;
      __s8Dispatch0A4TimeV3nowACyFZ(local_198);
      __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar14,0x3fb999999999999a,lVar7);
      local_138 = *(code **)(local_190 + 8);
      (*local_138)(lVar7,lVar19);
      puVar12 = &DAT_100999b60;
      _swift_allocObject(&DAT_100999b60,0x18,7);
      local_1c8 = uVar20;
      _swift_weakInit(puVar12 + 0x10,unaff_x20);
      (*local_1a0)(local_130,local_170,lVar8);
      lVar17 = local_110;
      lVar14 = local_120;
      pcVar16 = *(code **)(local_120 + 0x10);
      (*pcVar16)(uVar20,local_118,local_110);
      (*pcVar16)(local_128,uVar18,lVar17);
      lVar8 = local_180;
      bVar2 = *(byte *)(local_180 + 0x50);
      uVar22 = (ulong)bVar2 + 0x2c & ((ulong)bVar2 ^ 0xffffffffffffffff);
      bVar3 = *(byte *)(lVar14 + 0x50);
      uVar20 = (ulong)bVar3;
      uVar23 = local_188 + uVar20 + uVar22 & (uVar20 ^ 0xffffffffffffffff);
      uVar20 = local_178 + uVar20 + uVar23 & (uVar20 ^ 0xffffffffffffffff);
      lVar7 = uVar20 + local_178;
      puVar9 = &DAT_100999db8;
      _swift_allocObject(&DAT_100999db8,lVar7 + 1,bVar2 | bVar3 | 7);
      uVar18 = local_f8;
      *(undefined **)(puVar9 + 0x10) = puVar12;
      *(code **)(puVar9 + 0x18) = local_100;
      *(undefined8 *)(puVar9 + 0x20) = local_f8;
      *(int *)(puVar9 + 0x28) = iVar5;
      (**(code **)(lVar8 + 0x20))(puVar9 + uVar22,local_130,local_1a8);
      pcVar16 = *(code **)(lVar14 + 0x20);
      (*pcVar16)(puVar9 + uVar23,local_1c8,lVar17);
      (*pcVar16)(puVar9 + uVar20,local_128,lVar17);
      puVar9[lVar7] = (char)local_1bc;
      local_c0 = FUN_100092f40;
      local_e0 = PTR___NSConcreteStackBlock_100995490;
      local_d8 = 0x42000000;
      local_d0 = FUN_1000acdb4;
      local_c8 = &DAT_100999dd0;
      local_b8 = puVar9;
      aBlock = __Block_copy(&local_e0);
      puVar12 = local_b8;
      _swift_retain(uVar18);
      _swift_release(puVar12);
      lVar8 = local_168;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_168);
      local_e0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar10 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar12 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar9 = puVar12;
      FUN_10004eec4();
      lVar14 = local_140;
      puVar4 = local_150;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_150,&local_e0,puVar12,puVar9,local_140,puVar10);
      lVar7 = local_1b0;
      __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (local_1b0,lVar8,puVar4,aBlock);
      __Block_release(aBlock);
      (**(code **)(local_148 + 8))(puVar4,lVar14);
      (**(code **)(local_160 + 8))(lVar8,local_158);
      (*local_138)(lVar7,local_f0);
      return;
    }
    __s10Foundation4DateVACycfC(uVar20);
    puVar10 = &DAT_100a76230;
    FUN_100005c90(&DAT_100a76230,PTR___s10Foundation4DateVMa_100996208,
                  PTR___s10Foundation4DateVSLAAMc_100996220);
    lVar7 = local_110;
    uVar22 = uVar20;
    __sSL1loiySbx_xtFZTj(uVar20,uVar18,local_110,puVar10);
    (*pcVar16)(uVar20,lVar7);
    if ((uVar22 & 1) != 0) {
      local_1bc = 0;
      uVar18 = local_108;
      goto LAB_10008d060;
    }
    iVar6 = iVar5;
    _CGDisplayIsOnline();
    uVar18 = local_108;
    if (((iVar6 == 0) || (iVar6 = iVar5, _CGDisplayIsActive(), iVar6 != 0)) ||
       (iVar6 = iVar5, _CGDisplayIsInMirrorSet(), iVar6 != 0)) {
      local_1bc = 0;
      goto LAB_10008d060;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)(lVar21 + -0x10) = iVar5;
    local_138 = (code *)(s___code__10087f720 + 0x10);
    FUN_1003fb48c(FUN_100092fc4,lVar21 + -0x20,extraout_x12_02 + 0x3f,0x800000010087e740,
                  0xd000000000000060,0x800000010087f730,0x2e6,0);
    FUN_10004adfc();
    local_1bc = 1;
    if ((param_1 & 1) != 0) goto LAB_10008d060;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)(lVar21 + -0x10) = iVar5;
    FUN_1003fb4ec(FUN_100092fcc,lVar21 + -0x20,0xd00000000000009f,0x800000010087e740,
                  0xd000000000000060,(ulong)local_138 | 0x8000000000000000,0x2e8,0);
    puVar12 = *(undefined **)(unaff_x20 + 0x70);
    *(undefined4 *)(unaff_x20 + 0x18) = 1;
    if (puVar12 != (undefined *)0x0) {
      local_d0 = *(code **)(unaff_x20 + 0x80);
      local_c8 = *(undefined **)(unaff_x20 + 0x88);
      local_d8 = CONCAT44(local_d8._4_4_,(int)*(undefined8 *)(unaff_x20 + 0x78));
      local_c0 = (code *)CONCAT44(local_c0._4_4_,*(undefined4 *)(unaff_x20 + 0x90));
      local_e0 = puVar12;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined ***)(lVar21 + -0x10) = &local_e0;
      FUN_1003fb48c(thunk_FUN_10007ec98,lVar21 + -0x20,0xd0000000000000a5,0x800000010087d1a0,
                    0x656e6e6f63736964,0xee00293a5f287463,0xb6,0);
      FUN_100004030(puVar12);
      *(undefined4 *)(unaff_x20 + 0x90) = 0;
      *(undefined8 *)(unaff_x20 + 0x78) = 0;
      *(ulong *)(unaff_x20 + 0x70) = 0;
      *(undefined8 *)(unaff_x20 + 0x88) = 0;
      *(undefined8 *)(unaff_x20 + 0x80) = 0;
    }
    local_e4 = 1;
  }
  uVar23 = 0x100000000;
LAB_10008cfc8:
  (*local_100)(uVar23);
  return;
}

