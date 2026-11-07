// rea decompile_all
// name: FUN_1001eac0c
// address: 0x1001eac0c
// body: available
// range: 0x1001eac0c-0x1001eb02f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001eac0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  long local_c0;
  long local_b8;
  long lStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b8 = *(long *)(lVar2 + -8);
  lStack_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  lVar2 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_78;
  _swift_beginAccess(param_1 + 0x10,puVar8,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    if ((-1 < *(int *)(param_1 + 0x18)) &&
       (pcVar3 = _ptsname(*(int *)(param_1 + 0x18)), pcVar3 != (char *)0x0)) {
      __sSS7cStringSSSPys4Int8VG_tcfC();
      local_c0 = lVar10;
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar5 = &DAT_1009a46c8;
      _swift_allocObject(&DAT_1009a46c8,0x30,7);
      *(undefined8 *)(puVar5 + 0x10) = param_2;
      *(undefined8 *)(puVar5 + 0x18) = param_3;
      *(char **)(puVar5 + 0x20) = pcVar3;
      *(undefined1 **)(puVar5 + 0x28) = puVar8;
      local_88 = FUN_1001ec320;
      local_a8 = PTR___NSConcreteStackBlock_100995490;
      local_a0 = 0x42000000;
      local_98 = FUN_1000acdb4;
      puStack_90 = &DAT_1009a46e0;
      local_80 = puVar5;
      pvVar4 = __Block_copy(&local_a8);
      puVar5 = local_80;
      _swift_retain(param_3);
      _swift_release(puVar5);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
      local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar6 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar5 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar7 = &DAT_100a75aa0;
      FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
      lVar10 = local_c0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar9,&local_a8,puVar5,puVar7,lVar1,puVar6);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar2,lVar9,pvVar4);
      __Block_release(pvVar4);
      _swift_release(param_1);
      goto LAB_1001eafe8;
    }
    _swift_release(param_1);
  }
  FUN_100401b14(0);
  FUN_1003fb4bc(FUN_1001eb030,0,0xd000000000000095,0x80000001008a00c0,0xd00000000000001b,
                0x80000001008a0500,0xce,0);
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar5 = &DAT_1009a4678;
  _swift_allocObject(&DAT_1009a4678,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  local_88 = FUN_1001ed118;
  local_a8 = PTR___NSConcreteStackBlock_100995490;
  local_a0 = 0x42000000;
  local_98 = FUN_1000acdb4;
  puStack_90 = &DAT_1009a4690;
  local_80 = puVar5;
  pvVar4 = __Block_copy(&local_a8);
  puVar5 = local_80;
  _swift_retain(param_3);
  _swift_release(puVar5);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar9,&local_a8,puVar5,puVar7,lVar1,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,lVar9,pvVar4);
  __Block_release(pvVar4);
LAB_1001eafe8:
  (**(code **)(lVar10 + 8))(lVar9,lVar1);
  (**(code **)(local_b8 + 8))(lVar2,lStack_b0);
  return;
}

