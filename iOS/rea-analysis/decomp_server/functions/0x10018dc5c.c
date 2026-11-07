// rea decompile_all
// name: FUN_10018dc5c
// address: 0x10018dc5c
// body: available
// range: 0x10018dc5c-0x10018df4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018dc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  undefined *local_58;
  
  lVar3 = 0;
  local_e0 = param_1;
  local_d8 = param_4;
  uStack_d0 = param_5;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar3 + -8);
  local_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar14 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_c0 = lVar14;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar4 + -8);
  lVar10 = *(long *)(lVar13 + 0x40);
  lVar3 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar15 = lVar14 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  FUN_10018c264();
  puVar5 = &DAT_1009a11f0;
  local_c8 = lVar3;
  _swift_allocObject(&DAT_1009a11f0,0x18,7);
  _swift_weakInit(puVar5 + 0x10,param_2);
  (**(code **)(lVar13 + 0x10))(lVar15,param_3,lVar4);
  uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar11 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
  uVar12 = lVar10 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_1009a1268;
  _swift_allocObject(&DAT_1009a1268,uVar12 + 0x18,uVar9 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  (**(code **)(lVar13 + 0x20))(puVar6 + uVar11,lVar15,lVar4);
  uVar2 = uStack_d0;
  uVar1 = local_e0;
  *(undefined8 *)(puVar6 + uVar12) = local_d8;
  *(undefined8 *)((long)(puVar6 + uVar12) + 8) = uStack_d0;
  *(undefined8 *)(puVar6 + uVar12 + 0x10) = local_e0;
  local_70 = FUN_100191368;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009a1280;
  local_68 = puVar6;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar5);
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar1);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar7 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar6 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar8 = &DAT_100a75aa0;
  FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
  lVar4 = local_b8;
  lVar3 = local_c0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_c0,&local_58,puVar6,puVar8,local_b8,puVar7);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar14,lVar3,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar3,lVar4);
  (**(code **)(local_b0 + 8))(lVar14,lStack_a8);
  puVar6 = local_68;
  _swift_release(puVar5);
  _swift_release(puVar6);
  return;
}

