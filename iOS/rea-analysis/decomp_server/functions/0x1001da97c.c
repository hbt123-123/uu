// rea decompile_all
// name: FUN_1001da97c
// address: 0x1001da97c
// body: available
// range: 0x1001da97c-0x1001dad77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001da97c(long param_1,undefined4 param_2,long param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,uint param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_140 [16];
  undefined4 auStack_130 [4];
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  undefined4 local_104;
  long local_100;
  long lStack_f8;
  long local_f0;
  undefined8 local_e8;
  code *pcStack_e0;
  uint local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  local_e8 = param_6;
  pcStack_e0 = param_5;
  local_d4 = param_8;
  local_d0 = param_7;
  local_c0 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f0 + 0x40));
  lVar14 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  local_100 = *(long *)(lVar5 + -8);
  lStack_f8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_100 + 0x40));
  lVar13 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100401b14(0);
    local_c8 = param_4;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_104 = param_2;
    *(undefined4 *)(lVar10 + -0x10) = param_2;
    FUN_1003fb48c(FUN_1001e0300,lVar10 + -0x20,0xd000000000000095,0x8000000100889250,
                  0xd000000000000064,0x800000010089e430,0x20f,0);
    lVar12 = ((undefined8 *)(local_c0 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))[1];
    lVar6 = local_c0;
    if (lVar12 != 0) {
      local_118 = *(undefined8 *)(local_c0 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName)
      ;
      local_120 = *(undefined8 *)(local_c0 + _TtC14UURemoteServer15TerminalSession::name);
      uVar1 = ((undefined8 *)(local_c0 + _TtC14UURemoteServer15TerminalSession::name))[1];
      FUN_100004b70(0);
      (**(code **)(lVar11 + 0x68))
                (lVar10,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_100995f60,
                 lVar5);
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(uVar1);
      lVar6 = lVar10;
      __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
      local_110 = lVar6;
      (**(code **)(lVar11 + 8))(lVar10,lVar5);
      puVar7 = &DAT_1009a3b50;
      _swift_allocObject(&DAT_1009a3b50,0x38,7);
      uVar3 = local_c8;
      *(undefined8 *)(puVar7 + 0x10) = local_c8;
      *(undefined8 *)(puVar7 + 0x18) = local_118;
      *(long *)(puVar7 + 0x20) = lVar12;
      *(undefined8 *)(puVar7 + 0x28) = local_120;
      *(undefined8 *)(puVar7 + 0x30) = uVar1;
      local_90 = thunk_FUN_1001e0610;
      local_b0 = PTR___NSConcreteStackBlock_100995490;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000acdb4;
      puStack_98 = &DAT_1009a3b68;
      local_88 = puVar7;
      aBlock = __Block_copy(&local_b0);
      _swift_retain(uVar3);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
      local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar8 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar7 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar9 = &DAT_100a75aa0;
      FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
      lVar6 = local_c0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar14,&local_b8,puVar7,puVar9,lVar4,puVar8);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar13,lVar14,aBlock);
      __Block_release(aBlock);
      (**(code **)(local_f0 + 8))(lVar14,lVar4);
      (**(code **)(local_100 + 8))(lVar13,lStack_f8);
      _swift_release(local_88);
    }
    uVar2 = local_104;
    FUN_1001d9d5c(local_104,0);
    (*pcStack_e0)(uVar2,0,0xf000000000000000,0);
    FUN_1001da754(local_d0,local_d4 & 1);
    FUN_1001dae28(lVar6,uVar2,local_c8);
  }
  return;
}

