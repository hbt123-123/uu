// rea decompile_all
// name: FUN_1002aa500
// address: 0x1002aa500
// body: available
// range: 0x1002aa500-0x1002aa9d7 inclusive
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
/* WARNING: Removing unreachable block (ram,0x0001002aa684) */

void FUN_1002aa500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined8 *puVar7;
  void *aBlock;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_160 [16];
  undefined8 auStack_150 [2];
  long alStack_140 [4];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
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
  undefined1 local_a0 [8];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  local_120 = param_3;
  local_118 = param_2;
  local_110 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e8 = *(long *)(lVar2 + -8);
  lVar8 = (long)alStack_140 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_f0 = lVar8;
  local_e0 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_100 = *(long *)(lVar3 + -8);
  lVar8 = lVar8 - (*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a838e8;
  local_108 = lVar8;
  lStack_f8 = lVar3;
  FUN_100004bb4(&DAT_100a838e8,&DAT_100817e10);
  uVar9 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = lVar8 - uVar9;
  lVar2 = lVar8 - uVar9;
  puVar11 = (undefined8 *)(lVar2 - uVar9);
  puVar5 = &DAT_100a838c8;
  FUN_100004bb4(&DAT_100a838c8,&DAT_100819010);
  alStack_140[2] = *(long *)(puVar5 + -8);
  alStack_140[3] = *(long *)(alStack_140[2] + 0x40);
  uVar9 = alStack_140[3] + 0xfU & 0xfffffffffffffff0;
  lVar3 = (long)puVar11 - uVar9;
  lVar14 = lVar3 - uVar9;
  IVar6 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::systemUptime(IVar6,"systemUptime");
  uVar15 = param_1;
  FUN_1002abae4(lVar8,param_5);
  _swift_storeEnumTagMultiPayload(lVar8,puVar4,0);
  FUN_1000a00a8(lVar8,lVar2,&DAT_100a838e8,&DAT_100817e10);
  FUN_1000a00a8(lVar2,puVar11,&DAT_100a838e8,&DAT_100817e10);
  puVar7 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,puVar4);
  bVar1 = (int)puVar7 != 1;
  if (bVar1) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(lVar14,puVar11,lVar2);
  }
  else {
    uVar10 = *puVar11;
    _swift_getErrorValue(uVar10,auStack_88,local_a0);
    *(undefined8 *)(lVar14 + -0x10) = uVar10;
    FUN_100277c6c(lVar14,thunk_FUN_10028acd4,lVar14 + -0x20,uStack_98,local_90);
    _swift_errorRelease(uVar10);
  }
  _swift_storeEnumTagMultiPayload(lVar14,puVar5,!bVar1);
  IVar6 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::systemUptime(IVar6,"systemUptime");
  alStack_140[1] = *(undefined8 *)(param_5 + _TtC9Alamofire7Request::underlyingQueue);
  FUN_10007f314(lVar14,lVar3,&DAT_100a838c8,&DAT_100819010);
  uVar9 = (ulong)*(byte *)(alStack_140[2] + 0x50);
  uVar12 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  uVar13 = alStack_140[3] + uVar12 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1009ac880;
  _swift_allocObject(&DAT_1009ac880,uVar13 + 0x20,uVar9 | 7);
  *(undefined8 *)(puVar4 + 0x10) = uVar15;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  FUN_1000a00a8(lVar3,puVar4 + uVar12,&DAT_100a838c8,&DAT_100819010);
  uVar15 = local_110;
  *(undefined8 *)(puVar4 + uVar13) = local_118;
  *(undefined8 *)(puVar4 + uVar13 + 8) = local_120;
  *(undefined8 *)((long)(puVar4 + uVar13 + 8) + 8) = local_110;
  *(long *)(puVar4 + uVar13 + 0x18) = param_5;
  local_b0 = FUN_1002b8828;
  local_d0 = PTR___NSConcreteStackBlock_100995490;
  local_c8 = 0x42000000;
  local_c0 = FUN_1000acdb4;
  puStack_b8 = &DAT_1009ac898;
  local_a8 = puVar4;
  aBlock = __Block_copy(&local_d0);
  _swift_retain(uVar15);
  _swift_retain(param_5);
  lVar2 = local_108;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_108);
  local_d8 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar7 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar4 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar5 = puVar4;
  FUN_10028abfc();
  lVar8 = local_e0;
  lVar3 = local_f0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_f0,&local_d8,puVar4,puVar5,local_e0,puVar7);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,lVar3,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_e8 + 8))(lVar3,lVar8);
  (**(code **)(local_100 + 8))(lVar2,lStack_f8);
  FUN_100040bb4(lVar14,&DAT_100a838c8,&DAT_100819010);
  _swift_release(local_a8);
  return;
}

