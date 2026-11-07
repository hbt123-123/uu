// rea decompile_all
// name: FUN_1001fbb88
// address: 0x1001fbb88
// body: available
// range: 0x1001fbb88-0x1001fbe27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001fbb88(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_170 [8];
  long local_168;
  long local_160;
  undefined *local_158 [24];
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_160 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_160 + 0x40));
  puVar6 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar7 = *(long *)(lVar2 + -8);
  local_168 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  lVar2 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100004b70(0);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar3 = &DAT_1009a4ee0;
  _swift_allocObject(&DAT_1009a4ee0,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &DAT_1009a4f08;
  _swift_allocObject(&DAT_1009a4f08,0x128,7);
  uVar11 = param_3[1];
  uVar10 = *param_3;
  uVar8 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[3];
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  uVar8 = param_3[4];
  uVar13 = param_3[7];
  uVar12 = param_3[6];
  *(undefined8 *)(puVar4 + 0x40) = param_3[5];
  *(undefined8 *)(puVar4 + 0x38) = uVar8;
  uVar14 = param_2[0x14];
  uVar9 = param_2[0x17];
  uVar8 = param_2[0x16];
  *(undefined8 *)(puVar4 + 0x110) = param_2[0x15];
  *(undefined8 *)(puVar4 + 0x108) = uVar14;
  *(undefined8 *)(puVar4 + 0x120) = uVar9;
  *(undefined8 *)(puVar4 + 0x118) = uVar8;
  *(undefined8 *)(puVar4 + 0x50) = uVar13;
  *(undefined8 *)(puVar4 + 0x48) = uVar12;
  *(undefined8 *)(puVar4 + 0x20) = uVar11;
  *(undefined8 *)(puVar4 + 0x18) = uVar10;
  uVar10 = param_2[0x11];
  uVar9 = param_2[0x10];
  uVar8 = param_2[0x12];
  *(undefined8 *)(puVar4 + 0x100) = param_2[0x13];
  *(undefined8 *)(puVar4 + 0xf8) = uVar8;
  *(undefined8 *)(puVar4 + 0xf0) = uVar10;
  *(undefined8 *)(puVar4 + 0xe8) = uVar9;
  uVar10 = param_2[0xd];
  uVar9 = param_2[0xc];
  uVar8 = param_2[0xe];
  *(undefined8 *)(puVar4 + 0xe0) = param_2[0xf];
  *(undefined8 *)(puVar4 + 0xd8) = uVar8;
  *(undefined8 *)(puVar4 + 0xd0) = uVar10;
  *(undefined8 *)(puVar4 + 200) = uVar9;
  uVar10 = param_2[9];
  uVar9 = param_2[8];
  uVar8 = param_2[10];
  *(undefined8 *)(puVar4 + 0xc0) = param_2[0xb];
  *(undefined8 *)(puVar4 + 0xb8) = uVar8;
  *(undefined8 *)(puVar4 + 0xb0) = uVar10;
  *(undefined8 *)(puVar4 + 0xa8) = uVar9;
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar8 = param_2[6];
  *(undefined8 *)(puVar4 + 0xa0) = param_2[7];
  *(undefined8 *)(puVar4 + 0x98) = uVar8;
  *(undefined8 *)(puVar4 + 0x90) = uVar10;
  *(undefined8 *)(puVar4 + 0x88) = uVar9;
  uVar10 = param_2[1];
  uVar9 = *param_2;
  uVar8 = param_2[2];
  *(undefined8 *)(puVar4 + 0x80) = param_2[3];
  *(undefined8 *)(puVar4 + 0x78) = uVar8;
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x58) = param_3[8];
  *(undefined4 *)(puVar4 + 0x60) = param_1;
  *(undefined8 *)(puVar4 + 0x70) = uVar10;
  *(undefined8 *)(puVar4 + 0x68) = uVar9;
  local_78 = FUN_100202108;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_1009a4f20;
  local_70 = puVar4;
  aBlock = __Block_copy(&local_98);
  puVar4 = local_70;
  FUN_100202134(param_3,local_158);
  FUN_1000408d0(param_2,local_158);
  _swift_release(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  local_158[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar3 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar5 = puVar3;
  FUN_10004eec4();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar6,local_158,puVar3,puVar5,lVar1,puVar4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,puVar6,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_160 + 8))(puVar6,lVar1);
  (**(code **)(lVar7 + 8))(lVar2,local_168);
  return;
}

