// rea decompile_all
// name: FUN_1002828d0
// address: 0x1002828d0
// body: available
// range: 0x1002828d0-0x100282cbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100282a00) */

void FUN_1002828d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 auStack_130 [5];
  long local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  
  lVar2 = 0;
  auStack_130[2] = param_4;
  auStack_130[3] = param_3;
  auStack_130[4] = param_5;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e8 = *(long *)(lVar2 + -8);
  lVar8 = (long)auStack_130 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_f0 = lVar8;
  local_e0 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_100 = *(long *)(lVar3 + -8);
  lVar8 = lVar8 - (*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a82c60;
  local_108 = lVar8;
  lStack_f8 = lVar3;
  FUN_100004bb4(&DAT_100a82c60,&DAT_100817220);
  lVar3 = *(long *)(puVar4 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  uVar9 = lVar2 + 0xfU & 0xfffffffffffffff0;
  lVar8 = lVar8 - uVar9;
  puVar12 = (undefined8 *)(lVar8 - uVar9);
  IVar5 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::systemUptime(IVar5,"systemUptime");
  FUN_1002839dc(&local_d0,param_2,param_6);
  puVar12[1] = uStack_c8;
  *puVar12 = local_d0;
  _swift_storeEnumTagMultiPayload(puVar12,puVar4,0);
  IVar5 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  puVar7 = local_d0;
  NSProcessInfo::systemUptime(IVar5,"systemUptime");
  auStack_130[1] = *(undefined8 *)(param_6 + _TtC9Alamofire7Request::underlyingQueue);
  FUN_10007f314(puVar12,lVar8,&DAT_100a82c60,&DAT_100817220);
  uVar9 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar11 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  uVar10 = lVar2 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1009aad70;
  _swift_allocObject(&DAT_1009aad70,uVar10 + 0x20,uVar9 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar7;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  FUN_1000a00a8(lVar8,puVar4 + uVar11,&DAT_100a82c60,&DAT_100817220);
  uVar1 = auStack_130[4];
  *(undefined8 *)(puVar4 + uVar10) = auStack_130[3];
  *(undefined8 *)(puVar4 + uVar10 + 8) = auStack_130[2];
  *(undefined8 *)((long)(puVar4 + uVar10 + 8) + 8) = auStack_130[4];
  *(long *)(puVar4 + uVar10 + 0x18) = param_6;
  local_b0 = FUN_10028ce58;
  local_d0 = PTR___NSConcreteStackBlock_100995490;
  uStack_c8 = 0x42000000;
  local_c0 = FUN_1000acdb4;
  puStack_b8 = &DAT_1009aad88;
  local_a8 = puVar4;
  aBlock = __Block_copy(&local_d0);
  _swift_retain(uVar1);
  _swift_retain(param_6);
  lVar2 = local_108;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_108);
  local_d8 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar4 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar7 = puVar4;
  FUN_10028abfc();
  lVar8 = local_e0;
  lVar3 = local_f0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_f0,&local_d8,puVar4,puVar7,local_e0,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,lVar3,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_e8 + 8))(lVar3,lVar8);
  (**(code **)(local_100 + 8))(lVar2,lStack_f8);
  FUN_100040bb4(puVar12,&DAT_100a82c60,&DAT_100817220);
  _swift_release(local_a8);
  return;
}

