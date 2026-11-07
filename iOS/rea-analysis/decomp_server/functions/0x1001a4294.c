// rea decompile_all
// name: FUN_1001a4294
// address: 0x1001a4294
// body: available
// range: 0x1001a4294-0x1001a4647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001a4294(double param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  long local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_c0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar10 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined8 *)0x0;
  __s10Foundation4DateVMa();
  lVar9 = puVar3[-1];
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a73b60 != -1) {
    puVar4 = &DAT_100a73b60;
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_100122344();
  local_b8 = lVar2;
  local_b0 = lVar11;
  if (((ulong)puVar4 & 0xff) == 0) {
    uVar12 = 0xe700000000000000;
    uVar5 = 0x6e776f6e6b6e75;
  }
  else {
    if (((uint)puVar4 & 0xff) == 1) {
      _swift_bridgeObjectRelease(0xe400000000000000);
      goto LAB_1001a43f0;
    }
    uVar12 = 0xe500000000000000;
    uVar5 = 0x7473657567;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar5,uVar12,0x72657375,0xe400000000000000,0);
  _swift_bridgeObjectRelease(uVar12);
  if ((uVar5 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(char *)(lVar7 + -0x10) = (char)puVar4;
    FUN_1003fb48c(FUN_1001a9874,lVar7 + -0x20,0xd000000000000093,0x800000010089a630,
                  &DAT_d000000000000010,0x800000010089a6d0,0x74,0);
    return;
  }
LAB_1001a43f0:
  __s10Foundation4DateVACycfC(lVar7);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar9 + 8))(lVar7,puVar3);
  if (20.0 <= param_1 - *(double *)
                         (unaff_x20 + _TtC14UURemoteServer14AppListManager::lastUpdateRemoteTime)) {
    *(double *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::lastUpdateRemoteTime) = param_1;
    puVar6 = &DAT_1009a2070;
    _swift_allocObject(&DAT_1009a2070,0x18,7);
    *(long *)(puVar6 + 0x10) = unaff_x20;
    local_80 = FUN_1001a98a0;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_1009a2088;
    local_78 = puVar6;
    aBlock = __Block_copy(&local_a0);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
    local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar3 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar8,&local_a8,puVar6,puVar3,lVar1,puVar4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar10,lVar8,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_b0 + 8))(lVar8,lVar1);
    (**(code **)(local_c0 + 8))(lVar10,local_b8);
    _swift_release(local_78);
  }
  else {
    FUN_1001a4afc();
  }
  return;
}

