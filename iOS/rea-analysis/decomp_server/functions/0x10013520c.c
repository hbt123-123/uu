// rea decompile_all
// name: FUN_10013520c
// address: 0x10013520c
// body: available
// range: 0x10013520c-0x1001354db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013520c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_180;
  undefined8 local_178;
  long local_170;
  long local_168;
  long local_160;
  undefined *local_158 [24];
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_160 = *(long *)(lVar3 + -8);
  local_180 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_160 + 0x40));
  lVar8 = (long)&local_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_170 = *(long *)(lVar3 + -8);
  local_168 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_170 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = 0;
  FUN_100004b70();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar5 = &DAT_10099e768;
  local_178 = uVar4;
  _swift_allocObject(&DAT_10099e768,0x118,7);
  uVar4 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  *(undefined8 *)(puVar5 + 0x18) = param_2[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar4;
  *(undefined8 *)(puVar5 + 0x28) = uVar11;
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  uVar4 = param_2[4];
  *(undefined8 *)(puVar5 + 0x38) = param_2[5];
  *(undefined8 *)(puVar5 + 0x30) = uVar4;
  *(undefined8 *)(puVar5 + 0x40) = uVar1;
  *(undefined8 *)(puVar5 + 0x48) = uVar2;
  uVar4 = param_3[0x10];
  uVar11 = param_3[0x13];
  uVar10 = param_3[0x12];
  *(undefined8 *)(puVar5 + 0xd8) = param_3[0x11];
  *(undefined8 *)(puVar5 + 0xd0) = uVar4;
  *(undefined8 *)(puVar5 + 0xe8) = uVar11;
  *(undefined8 *)(puVar5 + 0xe0) = uVar10;
  uVar4 = param_3[0x14];
  uVar11 = param_3[0x17];
  uVar10 = param_3[0x16];
  *(undefined8 *)(puVar5 + 0xf8) = param_3[0x15];
  *(undefined8 *)(puVar5 + 0xf0) = uVar4;
  *(undefined8 *)(puVar5 + 0x108) = uVar11;
  *(undefined8 *)(puVar5 + 0x100) = uVar10;
  uVar4 = param_3[8];
  uVar11 = param_3[0xb];
  uVar10 = param_3[10];
  *(undefined8 *)(puVar5 + 0x98) = param_3[9];
  *(undefined8 *)(puVar5 + 0x90) = uVar4;
  *(undefined8 *)(puVar5 + 0xa8) = uVar11;
  *(undefined8 *)(puVar5 + 0xa0) = uVar10;
  uVar4 = param_3[0xc];
  uVar11 = param_3[0xf];
  uVar10 = param_3[0xe];
  *(undefined8 *)(puVar5 + 0xb8) = param_3[0xd];
  *(undefined8 *)(puVar5 + 0xb0) = uVar4;
  *(undefined8 *)(puVar5 + 200) = uVar11;
  *(undefined8 *)(puVar5 + 0xc0) = uVar10;
  uVar4 = *param_3;
  uVar11 = param_3[3];
  uVar10 = param_3[2];
  *(undefined8 *)(puVar5 + 0x58) = param_3[1];
  *(undefined8 *)(puVar5 + 0x50) = uVar4;
  *(undefined8 *)(puVar5 + 0x68) = uVar11;
  *(undefined8 *)(puVar5 + 0x60) = uVar10;
  uVar4 = param_3[4];
  uVar11 = param_3[7];
  uVar10 = param_3[6];
  *(undefined8 *)(puVar5 + 0x78) = param_3[5];
  *(undefined8 *)(puVar5 + 0x70) = uVar4;
  *(undefined8 *)(puVar5 + 0x88) = uVar11;
  *(undefined8 *)(puVar5 + 0x80) = uVar10;
  *(undefined8 *)(puVar5 + 0x110) = param_4;
  local_78 = FUN_100135d50;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_10099e780;
  local_70 = puVar5;
  aBlock = __Block_copy(&local_98);
  puVar5 = local_70;
  FUN_100135bf4(param_2,local_158);
  FUN_100008184(uVar1,uVar2);
  FUN_1000408d0(param_3,local_158);
  _swift_retain(param_4);
  _swift_release(puVar5);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
  local_158[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  lVar3 = local_180;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar8,local_158,puVar5,puVar7,local_180,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar9,lVar8,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_160 + 8))(lVar8,lVar3);
  (**(code **)(local_170 + 8))(lVar9,local_168);
  return;
}

