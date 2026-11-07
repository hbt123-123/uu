// rea decompile_all
// name: FUN_1001e1430
// address: 0x1001e1430
// body: available
// range: 0x1001e1430-0x1001e1acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e1430(long param_1,undefined8 param_2,undefined8 param_3)

{
  dispatch_group_t pdVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  undefined **ppuVar14;
  undefined **ppuVar15;
  code *pcVar16;
  code *pcVar17;
  long local_160;
  undefined *local_158;
  undefined8 *local_150;
  undefined *local_148;
  undefined8 *local_140;
  ulong local_138;
  dispatch_group_t local_130;
  undefined **local_128;
  dispatch_group_t local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  undefined **local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [32];
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_110 = *(long *)(lVar4 + -8);
  local_f0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_110 + 0x40));
  lVar13 = (long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_f8 = lVar13;
  __s8Dispatch0A3QoSVMa();
  local_118 = *(long *)(lVar4 + -8);
  local_100 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_118 + 0x40));
  local_108 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_1009a3d08;
  _swift_allocObject(&DAT_1009a3d08,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  lVar4 = _TtC14UURemoteServer15TerminalManager::sessions;
  local_158 = puVar5;
  _swift_beginAccess(param_1 + _TtC14UURemoteServer15TerminalManager::sessions,auStack_90,0,0);
  lVar4 = *(long *)(param_1 + lVar4);
  ppuVar15 = *(undefined ***)(lVar4 + 0x10);
  local_160 = param_1;
  if (ppuVar15 == (undefined **)0x0) {
    _swift_retain(param_3);
    ppuVar6 = (undefined **)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    ppuVar6 = ppuVar15;
    local_d0 = param_2;
    FUN_10006d7bc(ppuVar15,0);
    ppuVar14 = &local_c0;
    local_e0 = ppuVar6;
    FUN_10007451c(ppuVar14,ppuVar6 + 4,ppuVar15,lVar4);
    pcVar17 = local_a0;
    puVar7 = puStack_a8;
    pcVar16 = local_b0;
    uVar12 = local_b8;
    puVar5 = local_c0;
    _swift_retain(param_3);
    _swift_bridgeObjectRetain(lVar4);
    FUN_10003f638(puVar5,uVar12,pcVar16,puVar7,pcVar17);
    param_2 = local_d0;
    ppuVar6 = local_e0;
    if (ppuVar14 != ppuVar15) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1001e1ac8);
      (*pcVar16)();
    }
  }
  if (((long)ppuVar6 < 0) || (((ulong)ppuVar6 >> 0x3e & 1) != 0)) {
    ppuVar15 = ppuVar6;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  else {
    ppuVar15 = (undefined **)ppuVar6[2];
  }
  if (ppuVar15 == (undefined **)0x0) {
    _swift_release();
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_1001dbaa8,0,0xd000000000000095,0x8000000100889250,0xd000000000000019,
                  0x800000010089ed10,0x299,0);
    FUN_1001e5a40(PTR___swiftEmptyArrayStorage_100995ea0,param_2,param_3);
    puVar7 = local_158;
  }
  else {
    puVar5 = &DAT_1009a3d30;
    _swift_allocObject(&DAT_1009a3d30,0x18,7);
    *(undefined **)(puVar5 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
    local_e8 = puVar5;
    local_120 = _dispatch_group_create();
    lVar13 = local_f8;
    lVar4 = local_108;
    if ((long)ppuVar15 < 1) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1001e1acc);
      (*pcVar16)();
    }
    ppuVar14 = (undefined **)0x0;
    local_138 = (ulong)ppuVar6 & 0xc000000000000001;
    local_128 = ppuVar15;
    local_e0 = ppuVar6;
    do {
      if (local_138 == 0) {
        ppuVar15 = (undefined **)local_e0[(long)((long)ppuVar14 + 4)];
        _swift_retain(ppuVar15);
      }
      else {
        ppuVar15 = ppuVar14;
        FUN_10016a520();
      }
      pdVar1 = local_120;
      ppuVar14 = (undefined **)((long)ppuVar14 + 1);
      local_d8 = ppuVar15;
      _dispatch_group_enter(local_120);
      puVar5 = &DAT_1009a3d58;
      _swift_allocObject(&DAT_1009a3d58,0x20,7);
      puVar3 = local_e8;
      *(undefined **)(puVar5 + 0x10) = local_e8;
      *(dispatch_group_t *)(puVar5 + 0x18) = pdVar1;
      local_d0 = *(undefined8 *)((long)ppuVar15 + _TtC14UURemoteServer15TerminalSession::ioQueue);
      puVar7 = &DAT_1009a3c40;
      _swift_allocObject(&DAT_1009a3c40,0x18,7);
      _swift_weakInit(puVar7 + 0x10,ppuVar15);
      puVar8 = &DAT_1009a3d80;
      _swift_allocObject(&DAT_1009a3d80,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(code **)(puVar8 + 0x18) = FUN_1001e1af8;
      *(undefined **)(puVar8 + 0x20) = puVar5;
      local_a0 = FUN_1001e1b00;
      local_c0 = PTR___NSConcreteStackBlock_100995490;
      local_b8 = 0x42000000;
      local_b0 = FUN_1000acdb4;
      puStack_a8 = &DAT_1009a3d98;
      local_98 = puVar8;
      pvVar9 = __Block_copy(&local_c0);
      _swift_retain(puVar3);
      local_130 = pdVar1;
      _swift_retain(puVar7);
      _swift_retain(puVar5);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar4);
      local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar10 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar8 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar11 = &DAT_100a75aa0;
      FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
      lVar2 = local_f0;
      local_150 = puVar11;
      local_148 = puVar8;
      local_140 = puVar10;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar13,&local_c8,puVar8,puVar11,local_f0,puVar10);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar4,lVar13,pvVar9);
      __Block_release(pvVar9);
      _swift_release(puVar5);
      pcVar16 = *(code **)(local_110 + 8);
      (*pcVar16)(lVar13,lVar2);
      pcVar17 = *(code **)(local_118 + 8);
      (*pcVar17)(lVar4,local_100);
      _swift_release(local_d8);
      puVar5 = local_98;
      _swift_release(puVar7);
      _swift_release(puVar5);
    } while (local_128 != ppuVar14);
    _swift_release(local_e0);
    uVar12 = 0;
    FUN_100004b70(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar5 = &DAT_1009a3ab0;
    _swift_allocObject(&DAT_1009a3ab0,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10,local_160);
    puVar7 = &DAT_1009a3dd0;
    _swift_allocObject(&DAT_1009a3dd0,0x30,7);
    puVar3 = local_e8;
    puVar8 = local_158;
    *(undefined **)(puVar7 + 0x10) = puVar5;
    *(code **)(puVar7 + 0x18) = FUN_1001e1acc;
    *(undefined **)(puVar7 + 0x20) = local_158;
    *(undefined **)(puVar7 + 0x28) = local_e8;
    local_a0 = FUN_1001e1b0c;
    local_c0 = PTR___NSConcreteStackBlock_100995490;
    local_b8 = 0x42000000;
    local_b0 = FUN_1000acdb4;
    puStack_a8 = &DAT_1009a3de8;
    local_98 = puVar7;
    pvVar9 = __Block_copy(&local_c0);
    _swift_retain(puVar3);
    _swift_retain(puVar5);
    _swift_retain(puVar8);
    lVar4 = local_108;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_108);
    lVar2 = local_f0;
    lVar13 = local_f8;
    local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_f8,&local_c8,local_148,local_150,local_f0,local_140);
    __sSo17OS_dispatch_groupC8DispatchE6notify3qos5flags5queue7executeyAC0D3QoSV_AC0D13WorkItemFlagsVSo0a1_b1_H0CyyXBtF
              (lVar4,lVar13,uVar12,pvVar9);
    __Block_release(pvVar9);
    (*pcVar16)(lVar13,lVar2);
    (*pcVar17)(lVar4,local_100);
    puVar7 = local_98;
    _swift_release(puVar8);
    _swift_release(local_e8);
    _swift_release(puVar5);
  }
  _swift_release(puVar7);
  return;
}

