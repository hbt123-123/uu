// rea decompile_all
// name: FUN_1000927ac
// address: 0x1000927ac
// body: available
// range: 0x1000927ac-0x100092e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000927ac(double param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar9;
  bool bVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined1 auStack_180 [16];
  undefined8 auStack_170 [2];
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  code *local_138;
  undefined8 local_130;
  undefined1 local_124;
  ID local_118;
  uint local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  byte local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  long local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  
  lVar4 = 0;
  local_138 = param_3;
  local_130 = param_4;
  __s10Foundation4DateVMa();
  local_148 = *(long *)(lVar4 + -8);
  local_140 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_148 + 0x40));
  lVar4 = (long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_150 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = lVar4 - extraout_x12;
  local_158 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = lVar4 - extraout_x12_00;
  lVar11 = *(long *)(unaff_x20 + 0x50);
  local_160 = lVar4;
  if (lVar11 == 0) {
    uVar5 = 0;
  }
  else {
    _swift_retain(lVar11);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar11);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  _swift_release();
  lVar11 = *(long *)(unaff_x20 + 0x70);
  *(undefined4 *)(unaff_x20 + 0x18) = 0x2715;
  if (lVar11 != 0) {
    local_78 = *(undefined4 *)(unaff_x20 + 0x90);
    local_88 = *(undefined8 *)(unaff_x20 + 0x80);
    local_90 = (undefined4)*(undefined8 *)(unaff_x20 + 0x78);
    local_80 = (undefined4)*(undefined8 *)(unaff_x20 + 0x88);
    uStack_7c = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x88) >> 0x20);
    local_98 = lVar11;
    FUN_100401b14(0);
    FUN_1003fb4bc(FUN_10008c6d4,0,0xd00000000000009f,0x800000010087e740,0xd000000000000027,
                  0x800000010087f6d0,0x288,0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long **)(lVar4 + -0x10) = &local_98;
    FUN_1003fb48c(thunk_FUN_10007ec98,lVar4 + -0x20,extraout_x12_01 + 0x7e,0x800000010087d1a0,
                  0x656e6e6f63736964,0xee00293a5f287463,0xb6,0);
    FUN_100004030(lVar11);
    *(undefined4 *)(unaff_x20 + 0x90) = 0;
    param_1 = 0.0;
    *(undefined8 *)(unaff_x20 + 0x78) = 0;
    *(long *)(unaff_x20 + 0x70) = 0;
    *(undefined8 *)(unaff_x20 + 0x88) = 0;
    *(undefined8 *)(unaff_x20 + 0x80) = 0;
    uVar5 = 0;
  }
  FUN_10008faa0();
  local_f0 = CONCAT71(local_f0._1_7_,lVar11 == 0);
  uVar6 = uVar5;
  FUN_10008ee7c();
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar6;
  _swift_bridgeObjectRelease(uVar5);
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_100092e40);
  lVar11 = _TtC14UURemoteServer19SecondScreenManager::rotationWorkItem;
  lVar12 = *(long *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::rotationWorkItem);
  if (lVar12 == 0) {
    uVar5 = 0;
  }
  else {
    _swift_retain(lVar12);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar12);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar11);
  }
  *(undefined8 *)(unaff_x20 + lVar11) = 0;
  _swift_release(uVar5);
  puVar1 = (undefined4 *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::settingsCompletion)
  ;
  pcVar9 = (code *)*puVar2;
  uVar5 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  if (pcVar9 != (code *)0x0) {
    _swift_retain(uVar5);
    (*pcVar9)(0xffffffff);
    FUN_10007ed2c(pcVar9,uVar5);
    FUN_10007ed2c(pcVar9,uVar5);
  }
  *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
  *(undefined1 *)(unaff_x20 + 0x14) = 0;
  puVar2 = (undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::reportedAutoFrameQuality);
  *puVar2 = 0;
  *(undefined2 *)(puVar2 + 1) = 0x100;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::settingsRevision) = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings)
       = 1;
  lVar11 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                     &local_f0,0x21,0);
  lVar12 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar12 + -8) + 0x18))(unaff_x20 + lVar11,param_2,lVar12);
  _swift_endAccess(&local_f0);
  IVar7 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  thunk_FUN_1003d7218();
  if (IVar7 == 0) {
    local_d0 = 0;
    bVar10 = false;
    uStack_d8 = 0;
  }
  else {
    _objc_msgSend(IVar7,"backingScaleFactor");
    bVar10 = 1.0 < param_1;
    local_118 = IVar7;
    FUN_10008c7d4(&local_f0,&local_118);
    uStack_d8 = local_f0;
    local_d0 = uStack_e8;
  }
  FUN_10004518c();
  puVar8 = &DAT_100a75988;
  FUN_100004bb4(&DAT_100a75988,&DAT_10080a9f0);
  _swift_initStaticObject();
  uStack_e8 = 0x8ba8e79cbfe85555;
  local_f0 = 1;
  local_e0 = 0xa800000000000000;
  local_c0 = 0x3c;
  local_b0 = 0;
  local_a8 = 1;
  puStack_c8 = puVar8;
  local_b8 = bVar10;
  FUN_100049c1c(&local_118,&local_f0);
  IVar7 = local_118;
  FUN_10007f01c(&local_f0);
  lVar11 = local_160;
  if ((local_f4 & 1) == 0) {
    *(ID *)(unaff_x20 + 0x70) = IVar7;
    *(ulong *)(unaff_x20 + 0x78) = (ulong)local_110;
    *(undefined8 *)(unaff_x20 + 0x88) = uStack_100;
    *(undefined8 *)(unaff_x20 + 0x80) = local_108;
    *(undefined4 *)(unaff_x20 + 0x90) = local_f8;
    __s10Foundation4DateVACycfC(local_160,0);
    lVar4 = local_158;
    __s10Foundation4DateV18addingTimeIntervalyACSdF(local_158,0x4014000000000000);
    lVar12 = local_150;
    __s10Foundation4DateV18addingTimeIntervalyACSdF(local_150,0x3fe0000000000000);
    FUN_10008c974((ulong)local_110,param_2,lVar4,lVar12,0,local_138,local_130);
    FUN_100040bb4(&local_118,&DAT_100a76228,&DAT_10080b140);
    lVar3 = local_140;
    pcVar9 = *(code **)(local_148 + 8);
    (*pcVar9)(lVar12,local_140);
    (*pcVar9)(lVar4,lVar3);
    (*pcVar9)(lVar11,lVar3);
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar13 = (undefined4)IVar7;
    *(undefined4 *)(lVar4 + -0x10) = uVar13;
    FUN_1003fb4ec(FUN_100092e48,lVar4 + -0x20,0xd00000000000009f,0x800000010087e740,
                  0xd000000000000027,0x800000010087f6d0,0x2aa,0);
    *(undefined4 *)(unaff_x20 + 0x18) = uVar13;
    local_124 = 1;
    (*local_138)(0x100000000);
  }
  return;
}

