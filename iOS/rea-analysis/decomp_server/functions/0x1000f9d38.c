// rea decompile_all
// name: FUN_1000f9d38
// address: 0x1000f9d38
// body: available
// range: 0x1000f9d38-0x1000f9fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f9d38(undefined4 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined8 *in_x4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_130 [12];
  undefined4 local_124;
  long local_120;
  long local_118;
  long local_110;
  undefined *local_108 [14];
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar1 = 0;
  local_124 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_110 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_110 + 0x40));
  puVar5 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_120 = *(long *)(lVar2 + -8);
  local_118 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_120 + 0x40));
  lVar7 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_100004b70(0);
  (**(code **)(lVar6 + 0x68))
            (lVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_100995f60,lVar2)
  ;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar8);
  (**(code **)(lVar6 + 8))(lVar8,lVar2);
  puVar3 = &DAT_10099ca48;
  _swift_allocObject(&DAT_10099ca48,0x8c,7);
  uVar11 = in_x4[5];
  uVar10 = in_x4[4];
  uVar9 = in_x4[6];
  *(undefined8 *)(puVar3 + 0x50) = in_x4[7];
  *(undefined8 *)(puVar3 + 0x48) = uVar9;
  uVar9 = in_x4[8];
  uVar13 = in_x4[0xb];
  uVar12 = in_x4[10];
  *(undefined8 *)(puVar3 + 0x60) = in_x4[9];
  *(undefined8 *)(puVar3 + 0x58) = uVar9;
  *(undefined8 *)(puVar3 + 0x70) = uVar13;
  *(undefined8 *)(puVar3 + 0x68) = uVar12;
  uVar9 = in_x4[0xc];
  *(undefined8 *)(puVar3 + 0x80) = in_x4[0xd];
  *(undefined8 *)(puVar3 + 0x78) = uVar9;
  uVar9 = *in_x4;
  uVar13 = in_x4[3];
  uVar12 = in_x4[2];
  *(undefined8 *)(puVar3 + 0x20) = in_x4[1];
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x30) = uVar13;
  *(undefined8 *)(puVar3 + 0x28) = uVar12;
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x40) = uVar11;
  *(undefined8 *)(puVar3 + 0x38) = uVar10;
  *(undefined4 *)(puVar3 + 0x88) = local_124;
  local_78 = FUN_1000fbcc0;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_10099ca60;
  local_70 = puVar3;
  aBlock = __Block_copy(&local_98);
  _swift_retain();
  FUN_1000fbc24(in_x4,local_108);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar7);
  local_108[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar3 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar4 = puVar3;
  FUN_10004eec4();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar5,local_108,puVar3,puVar4,lVar1,in_x4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar7,puVar5,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_110 + 8))(puVar5,lVar1);
  (**(code **)(local_120 + 8))(lVar7,local_118);
  _swift_release(local_70);
  return;
}

