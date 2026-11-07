// rea decompile_all
// name: FUN_10015ee8c
// address: 0x10015ee8c
// body: available
// range: 0x10015ee8c-0x10015f3e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015ee8c(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  undefined8 uVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined *puVar11;
  void *aBlock;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_220 [16];
  uint auStack_210 [2];
  undefined8 auStack_208 [3];
  long lStack_1f0;
  char *local_1e8;
  char *local_1e0;
  long local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 local_188 [24];
  undefined *local_170 [24];
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  code *pcStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_70;
  
  lVar3 = 0;
  local_1cc = param_2;
  local_1c8 = param_3;
  uStack_1c0 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar18 = (long)&lStack_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_1d8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1d8 + 0x40));
  lVar16 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_100127240();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar17 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  IVar6 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  uVar2 = uStack_1c0;
  uVar10 = local_1c8;
  uVar1 = local_1cc;
  if ((int)IVar6 == 0) {
    uVar10 = 0;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    local_1e0 = (char *)lVar15;
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar19 = &DAT_10099f2e0;
    local_1e8 = (char *)uVar10;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar19 + 0x10);
    puVar11 = &DAT_10099f510;
    _swift_allocObject(&DAT_10099f510,0xf0,7);
    uVar2 = uStack_1c0;
    uVar10 = local_1c8;
    uVar7 = param_1[0x10];
    uVar21 = param_1[0x13];
    uVar20 = param_1[0x12];
    *(undefined8 *)(puVar11 + 0xa0) = param_1[0x11];
    *(undefined8 *)(puVar11 + 0x98) = uVar7;
    *(undefined8 *)(puVar11 + 0xb0) = uVar21;
    *(undefined8 *)(puVar11 + 0xa8) = uVar20;
    uVar7 = param_1[0x14];
    uVar21 = param_1[0x17];
    uVar20 = param_1[0x16];
    *(undefined8 *)(puVar11 + 0xc0) = param_1[0x15];
    *(undefined8 *)(puVar11 + 0xb8) = uVar7;
    *(undefined8 *)(puVar11 + 0xd0) = uVar21;
    *(undefined8 *)(puVar11 + 200) = uVar20;
    uVar7 = param_1[8];
    uVar21 = param_1[0xb];
    uVar20 = param_1[10];
    *(undefined8 *)(puVar11 + 0x60) = param_1[9];
    *(undefined8 *)(puVar11 + 0x58) = uVar7;
    *(undefined8 *)(puVar11 + 0x70) = uVar21;
    *(undefined8 *)(puVar11 + 0x68) = uVar20;
    uVar7 = param_1[0xc];
    uVar21 = param_1[0xf];
    uVar20 = param_1[0xe];
    *(undefined8 *)(puVar11 + 0x80) = param_1[0xd];
    *(undefined8 *)(puVar11 + 0x78) = uVar7;
    *(undefined8 *)(puVar11 + 0x90) = uVar21;
    *(undefined8 *)(puVar11 + 0x88) = uVar20;
    uVar7 = *param_1;
    uVar21 = param_1[3];
    uVar20 = param_1[2];
    *(undefined8 *)(puVar11 + 0x20) = param_1[1];
    *(undefined8 *)(puVar11 + 0x18) = uVar7;
    *(undefined8 *)(puVar11 + 0x30) = uVar21;
    *(undefined8 *)(puVar11 + 0x28) = uVar20;
    uVar7 = param_1[4];
    uVar21 = param_1[7];
    uVar20 = param_1[6];
    *(undefined8 *)(puVar11 + 0x40) = param_1[5];
    *(undefined8 *)(puVar11 + 0x38) = uVar7;
    *(undefined **)(puVar11 + 0x10) = puVar19;
    *(undefined8 *)(puVar11 + 0x50) = uVar21;
    *(undefined8 *)(puVar11 + 0x48) = uVar20;
    *(uint *)(puVar11 + 0xd8) = local_1cc;
    *(undefined8 *)(puVar11 + 0xe0) = local_1c8;
    *(undefined8 *)(puVar11 + 0xe8) = uStack_1c0;
    pcStack_90 = FUN_10016b6e4;
    local_b0 = PTR___NSConcreteStackBlock_100995490;
    local_a8 = 0x42000000;
    local_a0 = FUN_1000acdb4;
    local_98 = &DAT_10099f528;
    local_88 = puVar11;
    aBlock = __Block_copy(&local_b0);
    puVar19 = local_88;
    FUN_1000408d0(param_1,local_170);
    FUN_100008184(uVar10,uVar2);
    _swift_release(puVar19);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar16);
    local_170[0] = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar12 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar19 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar13 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar18,local_170,puVar19,puVar13,lVar3,puVar12);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar16,lVar18,aBlock);
    __Block_release(aBlock);
    (**(code **)((long)local_1e0 + 8))(lVar18,lVar3);
    (**(code **)(local_1d8 + 8))(lVar16,lVar4);
  }
  else {
    puVar19 = (undefined *)(ulong)local_1cc;
    uVar7 = 0;
    FUN_100401b14();
    pcVar8 = FUN_10015f46c;
    local_1e8 = "uest:segmentRequest:)";
    local_1e0 = s___pathLength__10088d850 + 0x20;
    local_1d8 = uVar7;
    FUN_1003fb45c(FUN_10015f46c,0,0xd0000000000000a4,0x800000010088d870,0xd00000000000003a,
                  0x8000000100893160,0x248,7);
    FUN_1001532e8();
    pcVar9 = pcVar8 + 0x18;
    _swift_unknownObjectWeakLoadStrong();
    if (pcVar9 == (code *)0x0) {
      _swift_release(pcVar8);
    }
    else {
      local_188[0] = 1;
      local_a8 = 1;
      local_a0 = (code *)CONCAT71(local_a0._1_7_,1);
      pcStack_90 = (code *)0xc000000000000000;
      local_98 = (undefined *)0x0;
      local_80 = 0x2000000000000000;
      local_70 = 0x2000000000000000;
      local_b0 = puVar19;
      FUN_100193df4(local_170,&local_b0);
      FUN_1001bddd8(param_1,local_170);
      _swift_release(pcVar8);
      FUN_10016b308(local_170);
      _swift_unknownObjectRelease(pcVar9);
      FUN_100006cdc(0,0xc000000000000000);
    }
    lVar3 = _TtC14UURemoteServer18ClipboardPCManager::dropTasks;
    _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks,local_188,0,0
                      );
    puVar11 = puVar19;
    FUN_100152fd0(puVar19,*(undefined8 *)(unaff_x20 + lVar3));
    if (((ulong)puVar11 & 1) != 0) {
      puVar11 = puVar19;
      FUN_100161224(puVar19);
    }
    FUN_100153208();
    FUN_1001358f8(puVar19);
    _swift_release(puVar11);
    lVar3 = _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
    _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer,
                       auStack_1a0,0,0);
    uVar14 = uVar17;
    FUN_10016b6f8(unaff_x20 + lVar3);
    if ((*(long *)(*(long *)(uVar17 + (long)*(int *)(lVar5 + 0x20)) + 0x10) == 0) ||
       (thunk_FUN_1001a2c34(puVar19), (uVar14 & 1) == 0)) {
      FUN_10016b73c(uVar17);
    }
    else {
      FUN_10016b73c(uVar17);
      _swift_beginAccess(unaff_x20 + lVar3,auStack_1b8,0x21,0);
      FUN_100127da8(puVar19);
      _swift_endAccess(auStack_1b8);
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint *)(uVar17 - 0x20) = uVar1;
    *(undefined8 *)(uVar17 - 0x18) = uVar10;
    *(undefined8 *)(uVar17 - 0x10) = uVar2;
    FUN_1003fb48c(FUN_10016b778,uVar17 - 0x30,0xd0000000000000a4,
                  (ulong)local_1e0 | 0x8000000000000000,0xd00000000000003a,
                  (ulong)local_1e8 | 0x8000000000000000,0x24f,0);
  }
  return;
}

