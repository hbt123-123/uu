// rea decompile_all
// name: FUN_10031b5a8
// address: 0x10031b5a8
// body: available
// range: 0x10031b5a8-0x10031b8fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010031b68c) */

void FUN_10031b5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long local_120 [5];
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  
  lVar2 = 0;
  local_120[2] = param_4;
  local_120[4] = param_3;
  local_f8 = param_5;
  local_f0 = param_6;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d8 = *(long *)(lVar2 + -8);
  lVar7 = (long)local_120 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_120[3] = lVar7;
  local_d0 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_e8 = *(long *)(lVar3 + -8);
  lVar7 = lVar7 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a82c50;
  local_120[1] = lVar7;
  lStack_e0 = lVar3;
  FUN_100004bb4(&DAT_100a82c50,&DAT_100817210);
  lVar3 = *(long *)(puVar4 + -8);
  lVar12 = *(long *)(lVar3 + 0x40);
  uVar8 = lVar12 + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar7 - uVar8;
  puVar10 = (undefined8 *)(lVar7 - uVar8);
  FUN_100297fb0();
  *puVar10 = param_1;
  puVar10[1] = param_2;
  _swift_storeEnumTagMultiPayload(puVar10,puVar4,0);
  lVar2 = local_f0;
  local_120[0] = *(long *)(local_f0 + _TtC9Alamofire7Request::underlyingQueue);
  FUN_10007f314(puVar10,lVar7,&DAT_100a82c50,&DAT_100817210);
  uVar8 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar9 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar11 = lVar12 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1009b0f30;
  _swift_allocObject(&DAT_1009b0f30,uVar11 + 0x20,uVar8 | 7);
  FUN_1000a00a8(lVar7,puVar4 + uVar9,&DAT_100a82c50,&DAT_100817210);
  uVar1 = local_f8;
  *(long *)(puVar4 + uVar11) = local_120[4];
  *(long *)(puVar4 + uVar11 + 8) = local_120[2];
  *(undefined8 *)((long)(puVar4 + uVar11 + 8) + 8) = local_f8;
  *(long *)(puVar4 + uVar11 + 0x18) = lVar2;
  local_a0 = FUN_10031c7d4;
  local_c0 = PTR___NSConcreteStackBlock_100995490;
  local_b8 = 0x42000000;
  local_b0 = FUN_1000acdb4;
  puStack_a8 = &DAT_1009b0f48;
  local_98 = puVar4;
  aBlock = __Block_copy(&local_c0);
  _swift_retain(uVar1);
  _swift_retain(lVar2);
  lVar2 = local_120[1];
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_120[1]);
  local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar4 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar6 = puVar4;
  FUN_10028abfc();
  lVar7 = local_d0;
  lVar3 = local_120[3];
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_120[3],&local_c8,puVar4,puVar6,local_d0,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,lVar3,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_d8 + 8))(lVar3,lVar7);
  (**(code **)(local_e8 + 8))(lVar2,lStack_e0);
  FUN_100040bb4(puVar10,&DAT_100a82c50,&DAT_100817210);
  _swift_release(local_98);
  return;
}

