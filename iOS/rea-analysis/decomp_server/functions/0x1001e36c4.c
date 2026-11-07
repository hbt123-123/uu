// rea decompile_all
// name: FUN_1001e36c4
// address: 0x1001e36c4
// body: available
// range: 0x1001e36c4-0x1001e3dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e36c4(long param_1,dispatch_group_t param_2,undefined4 param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6)

{
  dispatch_group_t pdVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  undefined **ppuVar13;
  undefined **ppuVar14;
  code *pcVar15;
  code *pcVar16;
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
  undefined **local_e8;
  undefined **local_e0;
  undefined **local_d8;
  ulong local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_110 = *(long *)(lVar3 + -8);
  local_f0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_110 + 0x40));
  lVar12 = (long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_f8 = lVar12;
  __s8Dispatch0A3QoSVMa();
  local_118 = *(long *)(lVar3 + -8);
  local_100 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_118 + 0x40));
  local_108 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_1009a3f88;
  _swift_allocObject(&DAT_1009a3f88,0x38,7);
  *(dispatch_group_t *)(puVar4 + 0x10) = param_2;
  local_d0 = CONCAT44(local_d0._4_4_,param_3);
  *(undefined4 *)(puVar4 + 0x18) = param_3;
  puVar4[0x20] = (char)param_4;
  *(short *)(puVar4 + 0x22) = (short)((ulong)param_4 >> 0x10);
  *(int *)(puVar4 + 0x24) = (int)((ulong)param_4 >> 0x20);
  *(undefined8 *)(puVar4 + 0x28) = param_5;
  *(undefined8 *)(puVar4 + 0x30) = param_6;
  lVar3 = _TtC14UURemoteServer15TerminalManager::sessions;
  local_158 = puVar4;
  local_d8 = param_4;
  _swift_beginAccess(param_1 + _TtC14UURemoteServer15TerminalManager::sessions,auStack_90,0,0);
  lVar3 = *(long *)(param_1 + lVar3);
  ppuVar14 = *(undefined ***)(lVar3 + 0x10);
  local_160 = param_1;
  if (ppuVar14 == (undefined **)0x0) {
    _swift_retain(param_2);
    FUN_100008184(param_5,param_6);
    ppuVar5 = (undefined **)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    ppuVar5 = ppuVar14;
    FUN_10006d7bc(ppuVar14,0);
    ppuVar13 = &local_c0;
    local_e0 = ppuVar5;
    FUN_10007451c(ppuVar13,ppuVar5 + 4,ppuVar14,lVar3);
    pcVar16 = local_a0;
    puVar6 = puStack_a8;
    pcVar15 = local_b0;
    uVar11 = local_b8;
    puVar4 = local_c0;
    local_120 = param_2;
    local_e8 = ppuVar13;
    _swift_retain();
    FUN_100008184(param_5,param_6);
    _swift_bridgeObjectRetain(lVar3);
    FUN_10003f638(puVar4,uVar11,pcVar15,puVar6,pcVar16);
    param_2 = local_120;
    ppuVar5 = local_e0;
    if (local_e8 != ppuVar14) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1001e3dc8);
      (*pcVar15)();
    }
  }
  if (((long)ppuVar5 < 0) || (((ulong)ppuVar5 >> 0x3e & 1) != 0)) {
    ppuVar14 = ppuVar5;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  else {
    ppuVar14 = (undefined **)ppuVar5[2];
  }
  if (ppuVar14 == (undefined **)0x0) {
    _swift_release();
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_1001dbaa8,0,0xd000000000000095,0x8000000100889250,0xd000000000000019,
                  0x800000010089ed10,0x299,0);
    FUN_1001c85a8(PTR___swiftEmptyArrayStorage_100995ea0,param_2,local_d0 & 0xffffffff,
                  (ulong)local_d8 & 0xffffffffffff00ff,param_5,param_6);
    puVar6 = local_158;
  }
  else {
    ppuVar13 = (undefined **)&DAT_1009a3d30;
    _swift_allocObject(&DAT_1009a3d30,0x18,7);
    ppuVar13[2] = PTR___swiftEmptyArrayStorage_100995ea0;
    local_e8 = ppuVar13;
    local_120 = _dispatch_group_create();
    lVar12 = local_f8;
    lVar3 = local_108;
    if ((long)ppuVar14 < 1) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1001e3dcc);
      (*pcVar15)();
    }
    ppuVar13 = (undefined **)0x0;
    local_138 = (ulong)ppuVar5 & 0xc000000000000001;
    local_128 = ppuVar14;
    local_e0 = ppuVar5;
    do {
      if (local_138 == 0) {
        ppuVar14 = (undefined **)local_e0[(long)((long)ppuVar13 + 4)];
        _swift_retain(ppuVar14);
      }
      else {
        ppuVar14 = ppuVar13;
        FUN_10016a520();
      }
      pdVar1 = local_120;
      ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      local_d8 = ppuVar14;
      _dispatch_group_enter(local_120);
      puVar4 = &DAT_1009a3fb0;
      _swift_allocObject(&DAT_1009a3fb0,0x20,7);
      ppuVar5 = local_e8;
      *(undefined ***)(puVar4 + 0x10) = local_e8;
      *(dispatch_group_t *)(puVar4 + 0x18) = pdVar1;
      local_d0 = *(ulong *)((long)ppuVar14 + _TtC14UURemoteServer15TerminalSession::ioQueue);
      puVar6 = &DAT_1009a3c40;
      _swift_allocObject(&DAT_1009a3c40,0x18,7);
      _swift_weakInit(puVar6 + 0x10,ppuVar14);
      puVar7 = &DAT_1009a3fd8;
      _swift_allocObject(&DAT_1009a3fd8,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(code **)(puVar7 + 0x18) = thunk_FUN_1001e1af8;
      *(undefined **)(puVar7 + 0x20) = puVar4;
      local_a0 = thunk_FUN_1001e1b00;
      local_c0 = PTR___NSConcreteStackBlock_100995490;
      local_b8 = 0x42000000;
      local_b0 = FUN_1000acdb4;
      puStack_a8 = &DAT_1009a3ff0;
      local_98 = puVar7;
      pvVar8 = __Block_copy(&local_c0);
      _swift_retain(ppuVar5);
      local_130 = pdVar1;
      _swift_retain(puVar6);
      _swift_retain(puVar4);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
      local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar9 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar7 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar10 = &DAT_100a75aa0;
      FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
      lVar2 = local_f0;
      local_150 = puVar10;
      local_148 = puVar7;
      local_140 = puVar9;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar12,&local_c8,puVar7,puVar10,local_f0,puVar9);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar3,lVar12,pvVar8);
      __Block_release(pvVar8);
      _swift_release(puVar4);
      pcVar15 = *(code **)(local_110 + 8);
      (*pcVar15)(lVar12,lVar2);
      pcVar16 = *(code **)(local_118 + 8);
      (*pcVar16)(lVar3,local_100);
      _swift_release(local_d8);
      puVar4 = local_98;
      _swift_release(puVar6);
      _swift_release(puVar4);
    } while (local_128 != ppuVar13);
    _swift_release(local_e0);
    uVar11 = 0;
    FUN_100004b70(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar4 = &DAT_1009a3ab0;
    _swift_allocObject(&DAT_1009a3ab0,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10,local_160);
    puVar6 = &DAT_1009a4028;
    _swift_allocObject(&DAT_1009a4028,0x30,7);
    ppuVar14 = local_e8;
    puVar7 = local_158;
    *(undefined **)(puVar6 + 0x10) = puVar4;
    *(code **)(puVar6 + 0x18) = FUN_1001e47ec;
    *(undefined **)(puVar6 + 0x20) = local_158;
    *(undefined ***)(puVar6 + 0x28) = local_e8;
    local_a0 = thunk_FUN_1001e1b0c;
    local_c0 = PTR___NSConcreteStackBlock_100995490;
    local_b8 = 0x42000000;
    local_b0 = FUN_1000acdb4;
    puStack_a8 = &DAT_1009a4040;
    local_98 = puVar6;
    pvVar8 = __Block_copy(&local_c0);
    _swift_retain(ppuVar14);
    _swift_retain(puVar4);
    _swift_retain(puVar7);
    lVar3 = local_108;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_108);
    lVar2 = local_f0;
    lVar12 = local_f8;
    local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_f8,&local_c8,local_148,local_150,local_f0,local_140);
    __sSo17OS_dispatch_groupC8DispatchE6notify3qos5flags5queue7executeyAC0D3QoSV_AC0D13WorkItemFlagsVSo0a1_b1_H0CyyXBtF
              (lVar3,lVar12,uVar11,pvVar8);
    __Block_release(pvVar8);
    (*pcVar15)(lVar12,lVar2);
    (*pcVar16)(lVar3,local_100);
    puVar6 = local_98;
    _swift_release(puVar7);
    _swift_release(local_e8);
    _swift_release(puVar4);
  }
  _swift_release(puVar6);
  return;
}

