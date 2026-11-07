// rea decompile_all
// name: FUN_10031b2cc
// address: 0x10031b2cc
// body: available
// range: 0x10031b2cc-0x10031b5a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10031b2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 local_100 [5];
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar2 = 0;
  local_100[0] = param_1;
  local_100[1] = param_2;
  local_100[2] = param_3;
  local_100[3] = param_4;
  local_100[4] = param_5;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar2 + -8);
  lVar7 = (long)local_100 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_c8 = lVar7;
  lStack_c0 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_b8 = *(long *)(lVar3 + -8);
  lVar7 = lVar7 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a82c60;
  local_d8 = lVar7;
  lStack_b0 = lVar3;
  FUN_100004bb4(&DAT_100a82c60,&DAT_100817220);
  lVar3 = *(long *)(puVar4 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  uVar8 = lVar2 + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar7 - uVar8;
  puVar11 = (undefined8 *)(lVar7 - uVar8);
  *puVar11 = param_1;
  puVar11[1] = param_2;
  _swift_storeEnumTagMultiPayload(puVar11,puVar4,0);
  local_d0 = *(undefined8 *)(param_6 + _TtC9Alamofire7Request::underlyingQueue);
  FUN_10007f314(puVar11,lVar7,&DAT_100a82c60,&DAT_100817220);
  uVar8 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar10 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar9 = lVar2 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1009b1070;
  _swift_allocObject(&DAT_1009b1070,uVar9 + 0x20,uVar8 | 7);
  FUN_1000a00a8(lVar7,puVar4 + uVar10,&DAT_100a82c60,&DAT_100817220);
  uVar1 = local_100[4];
  *(undefined8 *)(puVar4 + uVar9) = local_100[2];
  *(undefined8 *)(puVar4 + uVar9 + 8) = local_100[3];
  *(undefined8 *)((long)(puVar4 + uVar9 + 8) + 8) = local_100[4];
  *(long *)(puVar4 + uVar9 + 0x18) = param_6;
  local_78 = FUN_10031cf44;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_1009b1088;
  local_70 = puVar4;
  aBlock = __Block_copy(&local_98);
  FUN_100008184(local_100[0],local_100[1]);
  _swift_retain(uVar1);
  _swift_retain(param_6);
  lVar2 = local_d8;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d8);
  local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar4 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar6 = puVar4;
  FUN_10028abfc();
  lVar7 = lStack_c0;
  lVar3 = local_c8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_c8,&local_a0,puVar4,puVar6,lStack_c0,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,lVar3,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a8 + 8))(lVar3,lVar7);
  (**(code **)(local_b8 + 8))(lVar2,lStack_b0);
  FUN_100040bb4(puVar11,&DAT_100a82c60,&DAT_100817220);
  _swift_release(local_70);
  return;
}

