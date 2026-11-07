// rea decompile_all
// name: FUN_10017318c
// address: 0x10017318c
// body: available
// range: 0x10017318c-0x1001733f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10017318c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long local_f0;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40;
  local_e8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e8 + 0x40));
  lVar7 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar8 = *(long *)(lVar3 + -8);
  local_f0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar3 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  _swift_beginAccess(param_3 + 0x10,auStack_90,0,0);
  FUN_1001765f4(uVar9,*(undefined8 *)(param_3 + 0x10));
  _swift_beginAccess(param_1 + 0x10,auStack_a8,1,0);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  FUN_1001707b0();
  puVar4 = &DAT_1009a0938;
  _swift_allocObject(&DAT_1009a0938,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  local_b8 = thunk_FUN_1000a9f7c;
  local_d8 = PTR___NSConcreteStackBlock_100995490;
  local_d0 = 0x42000000;
  local_c8 = FUN_1000acdb4;
  puStack_c0 = &DAT_1009a0950;
  local_b0 = puVar4;
  aBlock = __Block_copy(&local_d8);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3,param_4);
  local_e0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50)
  ;
  puVar4 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar6 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar7,&local_e0,puVar4,puVar6,lVar2,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar3,lVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_e8 + 8))(lVar7,lVar2);
  (**(code **)(lVar8 + 8))(lVar3,local_f0);
  _swift_release(local_b0);
  return;
}

