// rea decompile_all
// name: FUN_1002cdf78
// address: 0x1002cdf78
// body: available
// range: 0x1002cdf78-0x1002ce217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002cdf78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  void *aBlock;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  undefined *local_58;
  
  lVar3 = 0;
  local_b8 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar3 + -8);
  lVar9 = (long)&local_c0 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_98 = lVar9;
  __s8Dispatch0A3QoSVMa();
  local_a8 = *(long *)(lVar4 + -8);
  lVar9 = lVar9 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_b0 = lVar9;
  lStack_a0 = lVar4;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar5 + -8);
  lVar14 = *(long *)(lVar11 + 0x40);
  lVar9 = lVar9 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    local_c0 = lVar13;
    (**(code **)(lVar11 + 0x10))(lVar9,local_b8,lVar5);
    uVar10 = (ulong)*(byte *)(lVar11 + 0x50);
    uVar12 = uVar10 + 0x28 & (uVar10 ^ 0xffffffffffffffff);
    puVar6 = &DAT_1009adf40;
    local_b8 = lVar3;
    _swift_allocObject(&DAT_1009adf40,uVar12 + lVar14,uVar10 | 7);
    *(long *)(puVar6 + 0x10) = lVar4;
    *(undefined8 *)(puVar6 + 0x18) = uVar1;
    *(undefined8 *)(puVar6 + 0x20) = uVar2;
    (**(code **)(lVar11 + 0x20))(puVar6 + uVar12,lVar9,lVar5);
    local_70 = FUN_1002d8924;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009adf58;
    local_68 = puVar6;
    aBlock = __Block_copy(&local_90);
    FUN_1002d8884(lVar4,uVar1,uVar2);
    _swift_retain(uVar2);
    lVar4 = local_b0;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_b0);
    local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar8 = &DAT_100a82c20;
    FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
    lVar5 = local_98;
    lVar3 = local_b8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_98,&local_58,puVar6,puVar8,local_b8,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar4,lVar5,aBlock);
    __Block_release(aBlock);
    _swift_release(uVar2);
    (**(code **)(local_c0 + 8))(lVar5,lVar3);
    (**(code **)(local_a8 + 8))(lVar4,lStack_a0);
    _swift_release(local_68);
  }
  return;
}

