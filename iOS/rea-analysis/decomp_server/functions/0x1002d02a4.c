// rea decompile_all
// name: FUN_1002d02a4
// address: 0x1002d02a4
// body: available
// range: 0x1002d02a4-0x1002d0697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d02a4(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  ulong uVar13;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  long local_68;
  undefined *local_58;
  
  lVar2 = 0;
  local_b8 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar2 + -8);
  lVar10 = (long)&local_c0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar3 + -8);
  lVar11 = lVar10 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_1009ae058;
  lStack_a8 = lVar3;
  _swift_allocObject(&DAT_1009ae058,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  uVar13 = *(ulong *)(param_1 + 0xd0);
  _swift_retain(param_3);
  uVar5 = uVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar9 = uVar13;
  if ((uVar5 & 1) == 0) {
    uVar9 = 0;
    FUN_100296548(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
  }
  uVar5 = *(ulong *)(uVar9 + 0x10);
  uVar13 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar5) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_100296548(uVar13,uVar5 + 1,1,uVar9);
  }
  lVar1 = local_b8;
  *(ulong *)(uVar13 + 0x10) = uVar5 + 1;
  lVar3 = uVar13 + uVar5 * 0x10;
  *(code **)(lVar3 + 0x20) = FUN_100102840;
  *(undefined **)(lVar3 + 0x28) = puVar4;
  *(ulong *)(param_1 + 0xd0) = uVar13;
  bVar12 = *param_1;
  if (bVar12 == 4) {
    bVar12 = 1;
    *param_1 = 1;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_1[0xe8] == 1) {
    local_c0 = *(undefined8 *)(local_b8 + _TtC9Alamofire7Request::underlyingQueue);
    local_70 = thunk_FUN_1002cbca4;
    local_68 = local_b8;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009ae098;
    pvVar6 = __Block_copy(&local_90);
    _swift_retain(lVar1);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
    local_58 = puVar4;
    puVar7 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar4 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar8 = &DAT_100a82c20;
    FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&local_58,puVar4,puVar8,lVar2,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar11,lVar10,pvVar6);
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    __Block_release(pvVar6);
    (**(code **)(local_a0 + 8))(lVar10,lVar2);
    (**(code **)(local_b0 + 8))(lVar11,lStack_a8);
    _swift_release(local_68);
  }
  lVar3 = local_b8;
  if (bVar12 < 2) {
    if (bVar12 != 0) {
      return;
    }
  }
  else if (bVar12 != 2) {
    return;
  }
  local_70 = FUN_1002d89ac;
  local_68 = local_b8;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009ae070;
  pvVar6 = __Block_copy(&local_90);
  _swift_retain(lVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  puVar7 = &DAT_100a82c10;
  local_58 = puVar4;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar4 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar8 = &DAT_100a82c20;
  FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&local_58,puVar4,puVar8,lVar2,puVar7);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,lVar10,pvVar6);
  __Block_release(pvVar6);
  (**(code **)(local_a0 + 8))(lVar10,lVar2);
  (**(code **)(local_b0 + 8))(lVar11,lStack_a8);
  _swift_release(local_68);
  return;
}

