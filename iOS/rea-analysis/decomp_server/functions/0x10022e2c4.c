// rea decompile_all
// name: FUN_10022e2c4
// address: 0x10022e2c4
// body: available
// range: 0x10022e2c4-0x10022e5d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022e2c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined *local_90 [3];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(&DAT_100b36348,auStack_78,0,0);
  if (DAT_100b36348 == 0) {
    if (DAT_100a7de20 != -1) {
      _swift_once(&DAT_100a7de20,FUN_100234cec);
    }
    if ((*(byte *)(DAT_100a7f1f8 + 0x11) & 1) == 0) {
      *(undefined1 *)(DAT_100a7f1f8 + 0x11) = 1;
      if (DAT_100a7de18 != -1) {
        _swift_once(&DAT_100a7de18,FUN_100234ab4);
      }
      _swift_beginAccess(&DAT_100b36340,&local_c0,0,0);
      puVar6 = (undefined8 *)(DAT_100b36340 + FCountAppConfig::appKey);
      _swift_beginAccess(puVar6,local_90,0,0);
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      _swift_bridgeObjectRetain(uVar2);
      FUN_10023a848(0,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
    }
  }
  else {
    if (DAT_100a7dde0 != -1) {
      _swift_once(&DAT_100a7dde0,FUN_100223714);
    }
    local_c8 = DAT_100b362e0;
    puVar5 = &DAT_1009a65b0;
    _swift_allocObject(&DAT_1009a65b0,0x18,7);
    _swift_weakInit(puVar5 + 0x10);
    local_a0 = FUN_1002315a8;
    local_c0 = PTR___NSConcreteStackBlock_100995490;
    local_b8 = 0x42000000;
    local_b0 = FUN_1000acdb4;
    puStack_a8 = &DAT_1009a6618;
    local_98 = puVar5;
    aBlock = __Block_copy(&local_c0);
    _swift_retain(puVar5);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
    local_90[0] = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a7e2d0;
    FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar7 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar8 = puVar7;
    FUN_10021e91c();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar9,local_90,puVar7,puVar8,lVar3,puVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar10,puVar9,aBlock);
    __Block_release(aBlock);
    (**(code **)(lVar12 + 8))(puVar9,lVar3);
    (**(code **)(lVar11 + 8))(lVar10,lVar4);
    puVar7 = local_98;
    _swift_release(puVar5);
    _swift_release(puVar7);
  }
  return;
}

