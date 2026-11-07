// rea decompile_all
// name: FUN_1002d1abc
// address: 0x1002d1abc
// body: available
// range: 0x1002d1abc-0x1002d1d73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002d1abc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  void *aBlock;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_e0 [8];
  long local_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  undefined1 *local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  undefined *local_58;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(long *)(lVar4 + -8);
  lVar9 = *(long *)(local_b0 + 0x40);
  lVar5 = 0;
  local_b8 = auStack_e0 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_c8 = *(long *)(lVar5 + -8);
  lVar10 = (long)(auStack_e0 + -(lVar9 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  local_d0 = lVar10;
  lStack_c0 = lVar5;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar9 + -8);
  lVar13 = *(long *)(lVar11 + 0x40);
  lVar10 = lVar10 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(*(long *)(param_1 + 0x148) + 0x10);
  if (lVar5 != 0) {
    uVar15 = (ulong)*(byte *)(lVar11 + 0x50);
    uVar14 = uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff);
    local_d8 = lVar4;
    local_a8 = param_3;
    (**(code **)(lVar11 + 0x10))
              (lVar10,*(long *)(param_1 + 0x148) + uVar14 + *(long *)(lVar11 + 0x48) * (lVar5 + -1),
               lVar9);
    puVar6 = &DAT_1009ae210;
    _swift_allocObject(&DAT_1009ae210,uVar14 + lVar13,uVar15 | 7);
    *(undefined8 *)(puVar6 + 0x10) = local_a8;
    *(undefined8 *)(puVar6 + 0x18) = param_4;
    (**(code **)(lVar11 + 0x20))(puVar6 + uVar14,lVar10,lVar9);
    local_70 = FUN_1002d8a58;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009ae228;
    local_68 = puVar6;
    aBlock = __Block_copy(&local_90);
    _swift_retain(param_4);
    lVar5 = local_d0;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d0);
    local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar8 = &DAT_100a82c20;
    FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
    param_3 = local_a8;
    puVar3 = local_b8;
    lVar4 = local_d8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_b8,&local_58,puVar6,puVar8,local_d8,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar5,puVar3,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_b0 + 8))(puVar3,lVar4);
    (**(code **)(local_c8 + 8))(lVar5,lStack_c0);
    _swift_release(local_68);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uVar12 = *(undefined8 *)(param_1 + 0xb0);
  _swift_retain(param_4);
  FUN_10028a014(uVar1,uVar2,uVar12);
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  *(undefined8 *)(param_1 + 0xb0) = param_4;
  return;
}

