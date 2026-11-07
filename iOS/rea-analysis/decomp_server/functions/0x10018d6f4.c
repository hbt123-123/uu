// rea decompile_all
// name: FUN_10018d6f4
// address: 0x10018d6f4
// body: available
// range: 0x10018d6f4-0x10018d957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018d6f4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *aBlock;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
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
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar7 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar9 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar2 + -8);
  lVar12 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar9 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  FUN_10018c264();
  (**(code **)(lVar8 + 0x10))(lVar10,param_1,lVar2);
  uVar6 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar11 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009a12b8;
  _swift_allocObject(&DAT_1009a12b8,uVar11 + lVar12,uVar6 | 7);
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar11,lVar10,lVar2);
  local_70 = FUN_100191ea0;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009a12d0;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar3 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar5 = &DAT_100a75aa0;
  FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar7,&local_98,puVar3,puVar5,lVar1,puVar4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar9,lVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar7,lVar1);
  (**(code **)(local_b0 + 8))(lVar9,lStack_a8);
  _swift_release(local_68);
  return;
}

