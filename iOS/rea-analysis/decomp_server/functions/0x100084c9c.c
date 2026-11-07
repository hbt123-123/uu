// rea decompile_all
// name: FUN_100084c9c
// address: 0x100084c9c
// body: available
// range: 0x100084c9c-0x100085713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100084c9c(ulong param_1,ulong param_2,ulong param_3,long param_4,undefined8 *param_5,
             undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  void *aBlock;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar14;
  undefined8 *unaff_x20;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long local_200;
  undefined *local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  long local_1d0;
  code *local_1c8;
  long local_1c0;
  char *local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  undefined8 *local_190;
  long local_188;
  long local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  ulong local_138;
  ulong local_130;
  code *local_128;
  long local_120;
  long local_118;
  ulong local_110;
  ulong uStack_108;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  local_170 = *unaff_x20;
  lVar5 = 0;
  local_188 = param_8;
  local_130 = param_3;
  local_128 = (code *)param_4;
  local_110 = param_1;
  uStack_108 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar18 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar18 + 0x40));
  lVar11 = (long)&local_200 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_148 = lVar11;
  __s8Dispatch0A3QoSVMa();
  local_158 = *(long *)(lVar6 + -8);
  local_150 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_158 + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_160 = lVar11;
  __s10Foundation4UUIDVMa();
  local_120 = *(long *)(lVar6 + -8);
  lVar16 = *(long *)(local_120 + 0x40);
  local_118 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = lVar11 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  local_180 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = lVar11 - extraout_x12;
  local_140 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_138 = lVar11 - extraout_x12_00;
  uVar7 = 0;
  FUN_100401b14();
  pcVar15 = s___10087e8a0 + 0x30;
  local_c0 = param_6;
  uStack_b8 = param_7;
  FUN_1003fb48c(FUN_10008f1ac,auStack_d0,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                0x800000010087e8d0,0xa8,0);
  local_178 = param_6;
  local_168 = param_7;
  local_f0 = param_6;
  uStack_e8 = param_7;
  local_e0 = param_5;
  FUN_1003fb45c(FUN_10008f1b4,auStack_100,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                0x800000010087e8d0,0xaa,0);
  puVar8 = unaff_x20 + 4;
  _swift_unknownObjectWeakLoadStrong();
  if (puVar8 == (undefined8 *)0x0) goto LAB_100085194;
  lVar6 = unaff_x20[5];
  if (DAT_100a73b60 != -1) {
    local_1b8 = s___10087e8a0 + 0x30;
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    pcVar15 = local_1b8;
  }
  lVar11 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                    _TtC14UURemoteServer15StreamerManager::dispatcher);
  if ((lVar11 == 0) ||
     (lVar11 = *(long *)(lVar11 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
     lVar11 == 0)) {
    _swift_unknownObjectRelease();
    goto LAB_100085194;
  }
  local_1b0 = lVar18;
  local_1a8 = lVar5;
  local_1a0 = uVar7;
  local_198 = lVar11;
  local_190 = puVar8;
  FUN_1000c7b64();
  uVar13 = *(ulong *)(lVar11 + 0x30);
  uVar14 = *(ulong *)(lVar11 + 0x38);
  _swift_bridgeObjectRetain(uVar14);
  _swift_release(lVar11);
  if (uVar14 == 0) {
LAB_100084f9c:
    _swift_unknownObjectRelease(local_190);
    goto LAB_100085194;
  }
  if (uVar13 == local_110 && uVar14 == uStack_108) {
    _swift_bridgeObjectRelease(uVar14);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar13,uVar14,local_110,uStack_108,0);
    _swift_bridgeObjectRelease(uVar14);
    if ((uVar13 & 1) == 0) goto LAB_100084f9c;
  }
  lVar5 = (long)unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
  local_1c0 = lVar6;
  local_1b8 = pcVar15;
  _swift_beginAccess(lVar5,auStack_80,0,0);
  lVar11 = local_118;
  lVar6 = local_120;
  uVar13 = local_138;
  local_1c8 = *(code **)(local_120 + 0x10);
  uVar14 = local_138;
  local_1d0 = lVar5;
  (*local_1c8)(local_138,lVar5,local_118);
  __s10Foundation4UUIDV10uuidStringSSvg();
  pcVar12 = *(code **)(lVar6 + 8);
  (*pcVar12)(uVar13,lVar11);
  if ((uVar14 == local_130) && ((code *)lVar5 == local_128)) {
    _swift_bridgeObjectRelease(lVar5);
LAB_1000850b0:
    lVar5 = local_118;
    puVar8 = local_190;
    pcVar3 = local_1c8;
    if ((((*(char *)((long)unaff_x20 + 0x14) != '\x01') &&
         (iVar2 = *(int *)(unaff_x20 + 2), -1 < iVar2)) && (*(int *)((long)param_5 + 0xc) == iVar2))
       && ((lVar6 = unaff_x20[0xe], lVar6 != 0 && (iVar2 == *(int *)(unaff_x20 + 0xf))))) {
      plVar1 = (long *)((long)unaff_x20 +
                       _TtC14UURemoteServer19SecondScreenManager::settingsCompletion);
      local_128 = pcVar12;
      if (*plVar1 != 0) {
        FUN_1003fb4bc(FUN_100085990,0,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                      (ulong)local_1b8 | 0x8000000000000000,0xb7,0);
        _swift_unknownObjectRelease(puVar8);
        return 0;
      }
      if (0 < *(int *)((long)param_5 + 0x1c)) {
        FUN_1003fb4ec(FUN_1000859bc,0,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                      (ulong)local_1b8 | 0x8000000000000000,0xbc,0);
        FUN_1000837f8(*(undefined4 *)
                       (local_198 + _TtC14UURemoteServer22StreamerConnectSession::handle),1);
        _swift_unknownObjectRelease(local_190);
        return 0;
      }
      local_1a0 = unaff_x20[0x10];
      local_138 = CONCAT44(local_138._4_4_,*(undefined4 *)(unaff_x20 + 0x12));
      local_1d4 = *(undefined4 *)((long)unaff_x20 + 0x8c);
      local_1b8 = (char *)CONCAT44(local_1b8._4_4_,*(undefined4 *)(unaff_x20 + 0x11));
      local_1d8 = *(undefined4 *)(local_198 + _TtC14UURemoteServer22StreamerConnectSession::handle);
      (*local_1c8)(local_140,local_1d0,local_118);
      *plVar1 = local_188;
      plVar1[1] = param_9;
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      local_188 = lVar6;
      _swift_retain();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar9 = &DAT_100999b60;
      local_130 = param_9;
      _swift_allocObject(&DAT_100999b60,0x18,7);
      local_1f8 = puVar9;
      _swift_weakInit(puVar9 + 0x10);
      lVar6 = local_180;
      (*pcVar3)(local_180,local_140,lVar5);
      lVar11 = local_120;
      uVar13 = (ulong)*(byte *)(local_120 + 0x50);
      uVar14 = uVar13 + 0x18 & (uVar13 ^ 0xffffffffffffffff);
      uVar17 = lVar16 + uVar14 + 7 & 0xfffffffffffffff8;
      local_200 = uVar17 + 0x20;
      local_1e8 = uVar17 + 0x68;
      local_1d0 = uVar17 + 0x78;
      local_1f0 = uVar17 + 0x80;
      local_1e0 = uVar17 + 0x90;
      local_1c8 = (code *)(uVar17 + 0xb8);
      puVar9 = &DAT_100999b88;
      _swift_allocObject(&DAT_100999b88,uVar17 + 0xc0,uVar13 | 7);
      *(undefined **)(puVar9 + 0x10) = local_1f8;
      (**(code **)(lVar11 + 0x20))(puVar9 + uVar14,lVar6,lVar5);
      uVar13 = uStack_108;
      uVar7 = local_168;
      puVar4 = local_190;
      *(long *)(puVar9 + uVar17) = local_198;
      *(int *)(puVar9 + uVar17 + 8) = iVar2;
      *(undefined8 **)(puVar9 + uVar17 + 0x10) = local_190;
      *(long *)((long)(puVar9 + uVar17 + 0x10) + 8) = local_1c0;
      puVar8 = (undefined8 *)(puVar9 + local_200);
      *(undefined1 *)(puVar8 + 8) = *(undefined1 *)(param_5 + 8);
      uVar21 = param_5[4];
      uVar20 = param_5[7];
      uVar19 = param_5[6];
      puVar8[5] = param_5[5];
      puVar8[4] = uVar21;
      puVar8[7] = uVar20;
      puVar8[6] = uVar19;
      uVar19 = *param_5;
      uVar21 = param_5[3];
      uVar20 = param_5[2];
      puVar8[1] = param_5[1];
      *puVar8 = uVar19;
      puVar8[3] = uVar21;
      puVar8[2] = uVar20;
      *(undefined8 *)(puVar9 + local_1e8) = local_178;
      *(undefined8 *)((long)(puVar9 + local_1e8) + 8) = local_168;
      *(undefined4 *)(puVar9 + local_1d0) = local_1d8;
      *(ulong *)(puVar9 + local_1f0) = local_110;
      *(ulong *)((long)(puVar9 + local_1f0) + 8) = uStack_108;
      plVar1 = (long *)(puVar9 + local_1e0);
      *plVar1 = local_188;
      *(int *)(plVar1 + 1) = iVar2;
      plVar1[2] = local_1a0;
      *(undefined4 *)(plVar1 + 3) = local_1b8._0_4_;
      *(undefined4 *)((long)plVar1 + 0x1c) = local_1d4;
      *(undefined4 *)(plVar1 + 4) = (undefined4)local_138;
      *(undefined8 *)(puVar9 + (long)local_1c8) = local_170;
      local_90 = FUN_10008f2e4;
      local_b0 = PTR___NSConcreteStackBlock_100995490;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000acdb4;
      puStack_98 = &DAT_100999ba0;
      local_88 = puVar9;
      aBlock = __Block_copy(&local_b0);
      puVar9 = local_88;
      _swift_unknownObjectRetain(puVar4);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar13);
      _swift_release(puVar9);
      lVar6 = local_160;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_160);
      local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar8 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar9 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar10 = puVar9;
      FUN_10004eec4();
      lVar11 = local_148;
      lVar5 = local_1a8;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_148,&local_b0,puVar9,puVar10,local_1a8,puVar8);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar6,lVar11,aBlock);
      __Block_release(aBlock);
      _swift_unknownObjectRelease(puVar4);
      (**(code **)(local_1b0 + 8))(lVar11,lVar5);
      (**(code **)(local_158 + 8))(lVar6,local_150);
      (*local_128)(local_140,local_118);
      return 1;
    }
  }
  else {
    uVar13 = local_130;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (local_130,local_128,uVar14,lVar5,0);
    _swift_bridgeObjectRelease(lVar5);
    if ((uVar13 & 1) != 0) goto LAB_1000850b0;
  }
  pcVar15 = local_1b8;
  _swift_unknownObjectRelease(local_190);
LAB_100085194:
  FUN_1003fb4ec(FUN_100085964,0,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                (ulong)pcVar15 | 0x8000000000000000,0xb3,0);
  return 0;
}

