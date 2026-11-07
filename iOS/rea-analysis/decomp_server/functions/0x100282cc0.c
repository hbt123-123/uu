// rea decompile_all
// name: FUN_100282cc0
// address: 0x100282cc0
// body: available
// range: 0x100282cc0-0x10028309b inclusive
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
/* WARNING: Removing unreachable block (ram,0x000100282dec) */

void FUN_100282cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long alStack_130 [5];
  long local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  
  lVar1 = 0;
  alStack_130[2] = param_4;
  alStack_130[3] = param_3;
  alStack_130[4] = param_5;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e8 = *(long *)(lVar1 + -8);
  lVar7 = (long)alStack_130 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_f0 = lVar7;
  local_e0 = lVar1;
  __s8Dispatch0A3QoSVMa();
  local_100 = *(long *)(lVar2 + -8);
  lVar7 = lVar7 - (*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c50;
  local_108 = lVar7;
  lStack_f8 = lVar2;
  FUN_100004bb4(&DAT_100a82c50,&DAT_100817210);
  lVar10 = *(long *)(puVar3 + -8);
  lVar2 = *(long *)(lVar10 + 0x40);
  uVar8 = lVar2 + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar7 - uVar8;
  puVar12 = (undefined8 *)(lVar7 - uVar8);
  IVar4 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::systemUptime(IVar4,"systemUptime");
  lVar1 = param_6;
  uVar13 = param_1;
  FUN_100283ee0();
  *puVar12 = param_2;
  puVar12[1] = lVar1;
  _swift_storeEnumTagMultiPayload(puVar12,puVar3,0);
  IVar4 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::systemUptime(IVar4,"systemUptime");
  alStack_130[1] = *(undefined8 *)(param_6 + _TtC9Alamofire7Request::underlyingQueue);
  FUN_10007f314(puVar12,lVar7,&DAT_100a82c50,&DAT_100817210);
  uVar8 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  uVar9 = lVar2 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_1009aab90;
  _swift_allocObject(&DAT_1009aab90,uVar9 + 0x20,uVar8 | 7);
  *(undefined8 *)(puVar3 + 0x10) = uVar13;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  FUN_1000a00a8(lVar7,puVar3 + uVar11,&DAT_100a82c50,&DAT_100817210);
  lVar1 = alStack_130[4];
  *(long *)(puVar3 + uVar9) = alStack_130[3];
  *(long *)(puVar3 + uVar9 + 8) = alStack_130[2];
  *(long *)((long)(puVar3 + uVar9 + 8) + 8) = alStack_130[4];
  *(long *)(puVar3 + uVar9 + 0x18) = param_6;
  local_b0 = FUN_10028bf04;
  local_d0 = PTR___NSConcreteStackBlock_100995490;
  local_c8 = 0x42000000;
  local_c0 = FUN_1000acdb4;
  puStack_b8 = &DAT_1009aaba8;
  local_a8 = puVar3;
  aBlock = __Block_copy(&local_d0);
  _swift_retain(lVar1);
  _swift_retain(param_6);
  lVar1 = local_108;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_108);
  local_d8 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar3 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar6 = puVar3;
  FUN_10028abfc();
  lVar7 = local_e0;
  lVar2 = local_f0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_f0,&local_d8,puVar3,puVar6,local_e0,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar1,lVar2,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_e8 + 8))(lVar2,lVar7);
  (**(code **)(local_100 + 8))(lVar1,lStack_f8);
  FUN_100040bb4(puVar12,&DAT_100a82c50,&DAT_100817210);
  _swift_release(local_a8);
  return;
}

