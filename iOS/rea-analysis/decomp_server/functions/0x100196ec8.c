// rea decompile_all
// name: FUN_100196ec8
// address: 0x100196ec8
// body: available
// range: 0x100196ec8-0x1001973f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100196ec8(long param_1,ulong param_2,long param_3,long param_4,undefined8 param_5,
                  code *param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar9;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_110;
  long local_108;
  code *local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  local_108 = param_7;
  local_100 = param_6;
  local_f8 = param_5;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e0 + 0x40));
  lVar12 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_e8 = lVar12;
  __s8Dispatch0A3QoSVMa();
  local_f0 = *(long *)(lVar2 + -8);
  local_d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f0 + 0x40));
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar2 = lVar11 - extraout_x12;
  _swift_beginAccess(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    uVar4 = 0;
    local_110 = lVar1;
    FUN_100401b14(0);
    if (((param_2 & 1) == 0) && (param_1 == 0)) {
      FUN_1003fb45c(uVar4,FUN_100197424,0,0xd0000000000000b0,0x8000000100899320,0xd00000000000002d,
                    0x8000000100899600,0x7b,7);
      _swift_beginAccess(param_4 + 0x10,auStack_98,1,0);
      *(undefined1 *)(param_4 + 0x10) = 0;
      (*local_100)();
      FUN_100194478();
      puVar6 = &DAT_1009a1740;
      _swift_allocObject(&DAT_1009a1740,0x18,7);
      uVar4 = local_f8;
      *(undefined8 *)(puVar6 + 0x10) = local_f8;
      local_a8 = FUN_1000a9f7c;
      local_c8 = PTR___NSConcreteStackBlock_100995490;
      local_c0 = 0x42000000;
      local_b8 = FUN_1000acdb4;
      puStack_b0 = &DAT_1009a1758;
      local_a0 = puVar6;
      pvVar5 = __Block_copy(&local_c8);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12,uVar4);
      local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar7 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar6 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar8 = &DAT_100a75aa0;
      FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
      lVar3 = local_e8;
      lVar2 = local_110;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_e8,&local_d0,puVar6,puVar8,local_110,puVar7);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar12,lVar3,pvVar5);
      __Block_release(pvVar5);
      (**(code **)(local_e0 + 8))(lVar3,lVar2);
      lVar2 = lVar12;
      lVar3 = local_d8;
      pcVar9 = *(code **)(local_f0 + 8);
    }
    else {
      FUN_1003fb45c(uVar4,FUN_1001973f8,0,0xd0000000000000b0,0x8000000100899320,0xd00000000000002d,
                    0x8000000100899600,0x75,7);
      lVar1 = param_4 + 0x10;
      _swift_beginAccess(lVar1,auStack_98,1,0);
      *(undefined1 *)(param_4 + 0x10) = 1;
      FUN_100194478();
      local_108 = lVar1;
      __s8Dispatch0A4TimeV3nowACyFZ(lVar11);
      __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar2,0x3f9eb851eb851eb8,lVar11);
      local_100 = *(code **)(lVar10 + 8);
      (*local_100)(lVar11,lVar3);
      puVar6 = &DAT_1009a16f0;
      _swift_allocObject(&DAT_1009a16f0,0x18,7);
      uVar4 = local_f8;
      *(undefined8 *)(puVar6 + 0x10) = local_f8;
      local_a8 = thunk_FUN_1000a9f7c;
      local_c8 = PTR___NSConcreteStackBlock_100995490;
      local_c0 = 0x42000000;
      local_b8 = FUN_1000acdb4;
      puStack_b0 = &DAT_1009a1708;
      local_a0 = puVar6;
      pvVar5 = __Block_copy(&local_c8);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12,uVar4);
      local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar7 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar6 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar8 = &DAT_100a75aa0;
      FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
      lVar10 = local_e8;
      lVar1 = local_110;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_e8,&local_d0,puVar6,puVar8,local_110,puVar7);
      __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (lVar2,lVar12,lVar10,pvVar5);
      __Block_release(pvVar5);
      (**(code **)(local_e0 + 8))(lVar10,lVar1);
      (**(code **)(local_f0 + 8))(lVar12,local_d8);
      pcVar9 = local_100;
    }
    (*pcVar9)(lVar2,lVar3);
    _swift_release(local_a0);
  }
  return;
}

