// rea decompile_all
// name: FUN_1000f2918
// address: 0x1000f2918
// body: available
// range: 0x1000f2918-0x1000f2ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f2918(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  code *local_e0 [4];
  long local_c0;
  code *local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b8 = *(code **)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)((long)local_b8 + 0x40));
  lVar6 = (long)local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_c0 = *(long *)(lVar2 + -8);
  local_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar8 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  puVar11 = (undefined8 *)(lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)puVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar12 - extraout_x12;
  if ((*(byte *)(unaff_x20 + 0x108) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x108) = 1;
    local_e0[3] = *(code **)(unaff_x20 + 0x100);
    __s8Dispatch0A4TimeV3nowACyFZ(lVar12);
    *puVar11 = 0xf;
    (**(code **)(lVar7 + 0x68))
              (puVar11,*(undefined4 *)
                        PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,lVar2);
    __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(lVar10,lVar12,puVar11);
    (**(code **)(lVar7 + 8))(puVar11,lVar2);
    local_e0[2] = *(code **)(lVar9 + 8);
    (*local_e0[2])(lVar12,lVar3);
    local_80 = FUN_1000f2cec;
    uStack_78 = 0;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_10099c638;
    pvVar4 = __Block_copy(&local_a0);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar8);
    local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar11 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    pcVar13 = (code *)&DAT_100a75a98;
    local_e0[1] = (code *)puVar11;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar5 = &DAT_100a75aa0;
    local_e0[0] = pcVar13;
    FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar6,&local_a8,pcVar13,puVar5,lVar1,puVar11);
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (lVar10,lVar8,lVar6,pvVar4);
    __Block_release(pvVar4);
    local_b8 = *(code **)((long)local_b8 + 8);
    (*local_b8)(lVar6,lVar1);
    lVar2 = local_b0;
    pcVar13 = *(code **)(local_c0 + 8);
    (*pcVar13)(lVar8,local_b0);
    (*local_e0[2])(lVar10,lVar3);
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    local_80 = FUN_1000f2cfc;
    uStack_78 = 0;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_10099c660;
    pvVar4 = __Block_copy(&local_a0);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar8);
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar6,&local_a0,local_e0[0],puVar5,lVar1,local_e0[1]);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar8,lVar6,pvVar4);
    __Block_release(pvVar4);
    (*local_b8)(lVar6,lVar1);
    (*pcVar13)(lVar8,lVar2);
  }
  return;
}

