// rea decompile_all
// name: FUN_1001d5f38
// address: 0x1001d5f38
// body: available
// range: 0x1001d5f38-0x1001d6407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001d5f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,long param_6,code *param_7,undefined8 param_8,ulong param_9,
                  ulong param_10)

{
  ulong *puVar1;
  long lVar2;
  undefined *puVar3;
  void *aBlock;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_150 [16];
  undefined4 auStack_140 [4];
  undefined8 local_130;
  long local_128;
  ulong local_120;
  ulong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  code *pcStack_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d8 = *(long *)(lVar2 + -8);
  local_d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d8 + 0x40));
  lVar7 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_e0 = lVar7;
  __s8Dispatch0A3QoSVMa();
  local_f0 = *(long *)(lVar2 + -8);
  lStack_e8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f0 + 0x40));
  lVar7 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_f8 = lVar7;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar11 = *(long *)(lVar2 + -8);
  local_100 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_5 + 0x10,auStack_80,0,0);
  param_5 = param_5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar2 = _TtC14UURemoteServer15TerminalManager::sessions;
  if (param_5 == 0) {
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)(lVar7 + -0x10) = (int)param_6;
    FUN_1003fb4bc(FUN_1001e05d4,lVar7 + -0x20,0xd000000000000095,0x8000000100889250,
                  0xd000000000000032,0x800000010089e8e0,0x54,0);
    (*param_7)(param_1,param_2,param_3,param_4);
    return;
  }
  local_c8 = param_8;
  pcStack_c0 = param_7;
  if ((param_4 & 0xff) == 0) {
    uVar9 = param_9 & 0xffffffffffff;
    if ((param_10 & 0x2000000000000000) != 0) {
      uVar9 = param_10 >> 0x38 & 0xf;
    }
    if (uVar9 != 0) {
      ppuVar6 = &local_b0;
      local_110 = param_3;
      uStack_108 = param_2;
      _swift_beginAccess(param_5 + _TtC14UURemoteServer15TerminalManager::sessions,ppuVar6,0x20,0);
      lVar2 = *(long *)(param_5 + lVar2);
      if ((*(long *)(lVar2 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)ppuVar6 & 1) == 0)) {
        _swift_endAccess(&local_b0);
        param_2 = uStack_108;
        param_3 = local_110;
      }
      else {
        lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + param_6 * 8);
        _swift_endAccess(&local_b0);
        puVar1 = (ulong *)(lVar2 + _TtC14UURemoteServer15TerminalSession::name);
        uVar9 = puVar1[1];
        local_120 = param_9;
        *puVar1 = param_9;
        puVar1[1] = param_10;
        _swift_retain(lVar2);
        local_118 = param_10;
        _swift_bridgeObjectRetain(param_10);
        _swift_bridgeObjectRelease(uVar9);
        lVar12 = *(long *)(param_5 + _TtC14UURemoteServer15TerminalManager::tmuxController);
        if (lVar12 != 0) {
          lVar8 = ((undefined8 *)(lVar2 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))
                  [1];
          if (lVar8 != 0) {
            uVar10 = *(undefined8 *)(lVar2 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName)
            ;
            local_130 = param_1;
            local_128 = lVar2;
            FUN_100004b70(0);
            lVar2 = local_100;
            (**(code **)(lVar11 + 0x68))
                      (lVar7,*(undefined4 *)
                              PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_100995f60,local_100)
            ;
            _swift_retain(lVar12);
            _swift_bridgeObjectRetain(lVar8);
            __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar7);
            (**(code **)(lVar11 + 8))(lVar7,lVar2);
            puVar3 = &DAT_1009a3bc8;
            _swift_allocObject(&DAT_1009a3bc8,0x38,7);
            uVar9 = local_118;
            *(long *)(puVar3 + 0x10) = lVar12;
            *(undefined8 *)(puVar3 + 0x18) = uVar10;
            *(long *)(puVar3 + 0x20) = lVar8;
            *(ulong *)(puVar3 + 0x28) = local_120;
            *(ulong *)(puVar3 + 0x30) = local_118;
            local_90 = thunk_FUN_1001e0610;
            local_b0 = PTR___NSConcreteStackBlock_100995490;
            local_a8 = 0x42000000;
            local_a0 = FUN_1000acdb4;
            puStack_98 = &DAT_1009a3be0;
            local_88 = puVar3;
            aBlock = __Block_copy(&local_b0);
            _swift_bridgeObjectRetain(uVar9);
            _swift_retain(lVar12);
            lVar2 = local_f8;
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_f8);
            local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
            puVar4 = &DAT_100a75a90;
            FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                          PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
            puVar3 = &DAT_100a75a98;
            FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
            puVar5 = &DAT_100a75aa0;
            FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
            lVar11 = local_d0;
            lVar7 = local_e0;
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (local_e0,&local_b8,puVar3,puVar5,local_d0,puVar4);
            __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                      (0,lVar2,lVar7,aBlock);
            __Block_release(aBlock);
            _swift_release(lVar12);
            _swift_release(local_128);
            (**(code **)(local_d8 + 8))(lVar7,lVar11);
            (**(code **)(local_f0 + 8))(lVar2,lStack_e8);
            _swift_release(local_88);
            param_2 = uStack_108;
            param_1 = local_130;
            param_3 = local_110;
            goto LAB_1001d63cc;
          }
        }
        _swift_release(lVar2);
        param_2 = uStack_108;
        param_3 = local_110;
      }
    }
  }
LAB_1001d63cc:
  (*pcStack_c0)(param_1,param_2,param_3,param_4);
  return;
}

