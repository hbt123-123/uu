// rea decompile_all
// name: FUN_1002fead8
// address: 0x1002fead8
// body: available
// range: 0x1002fead8-0x1002fed27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002fead8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar2 = 0;
  local_c0 = param_4;
  uStack_b8 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar2 + -8);
  lVar9 = (long)&local_c0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar3 + -8);
  lVar10 = lVar9 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_a8 = lVar3;
  FUN_10030da10();
  lVar11 = *(long *)(lVar4 + -8);
  lVar3 = *(long *)(lVar11 + 0x40);
  lVar4 = lVar10 - (lVar3 + 0xfU & 0xfffffffffffffff0);
  _swift_unownedRetainStrong(param_2);
  _swift_release(param_2);
  FUN_100082394(param_1,lVar4,FUN_10030da10);
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  puVar5 = &DAT_1009afda8;
  _swift_allocObject(&DAT_1009afda8,uVar12 + lVar3,uVar8 | 7);
  uVar1 = local_c0;
  *(undefined8 *)(puVar5 + 0x10) = uStack_b8;
  *(undefined8 *)(puVar5 + 0x18) = local_c0;
  FUN_1000823d8(lVar4,puVar5 + uVar12,FUN_10030da10);
  local_70 = FUN_10030e338;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009afdc0;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  _swift_retain(uVar1);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar7 = puVar5;
  FUN_10028abfc();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar9,&local_98,puVar5,puVar7,lVar2,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar10,lVar9,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar9,lVar2);
  (**(code **)(local_b0 + 8))(lVar10,lStack_a8);
  _swift_release(local_68);
  return;
}

