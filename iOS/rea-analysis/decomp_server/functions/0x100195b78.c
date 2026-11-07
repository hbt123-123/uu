// rea decompile_all
// name: FUN_100195b78
// address: 0x100195b78
// body: available
// range: 0x100195b78-0x100195de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100195b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  undefined8 local_c0;
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
  
  lVar2 = 0;
  local_c0 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40;
  local_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar8 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100194070();
  puVar4 = &DAT_1009a1448;
  local_b8 = lVar3;
  _swift_allocObject(&DAT_1009a1448,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_2);
  puVar5 = &DAT_1009a1538;
  _swift_allocObject(&DAT_1009a1538,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_1;
  *(undefined8 *)(puVar5 + 0x28) = local_c0;
  *(undefined8 *)(puVar5 + 0x30) = param_5;
  local_70 = FUN_100198b64;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009a1550;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar4);
  _swift_retain(param_1);
  _swift_retain(param_5);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50)
  ;
  puVar5 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar8,&local_58,puVar5,puVar7,lVar2,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar9,lVar8,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar8,lVar2);
  (**(code **)(local_b0 + 8))(lVar9,lStack_a8);
  puVar5 = local_68;
  _swift_release(puVar4);
  _swift_release(puVar5);
  return;
}

