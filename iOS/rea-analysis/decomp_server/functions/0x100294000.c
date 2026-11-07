// rea decompile_all
// name: FUN_100294000
// address: 0x100294000
// body: available
// range: 0x100294000-0x10029444b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100294000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *aBlock;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_170 [8];
  long local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  long local_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 *local_118;
  long local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  local_e8 = param_9;
  lVar2 = 0;
  local_160 = param_3;
  local_158 = param_1;
  local_150 = param_2;
  local_140 = param_7;
  local_138 = param_4;
  local_128 = param_5;
  local_120 = param_6;
  local_f0 = param_8;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f8 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(local_f8 + 0x40);
  lVar3 = 0;
  local_118 = auStack_170 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_108 = *(long *)(lVar3 + -8);
  lVar9 = (long)(auStack_170 + -(lVar9 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0xff;
  local_130 = lVar9;
  lStack_100 = lVar3;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_8,0x1008f871c,&TargetProtocolRequirement_1008f8724);
  puVar5 = &DAT_100a82488;
  FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
  lVar2 = 0;
  __ss6ResultOMa(0,uVar4,puVar5,PTR___ss5ErrorWS_100995c48);
  lVar9 = lVar9 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0xff;
  FUN_100277ad0(0xff);
  puVar7 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar3 = 0;
  __ss6ResultOMa(0,uVar4,uVar6,puVar7);
  lVar11 = *(long *)(lVar3 + -8);
  lVar14 = *(long *)(lVar11 + 0x40);
  uVar10 = lVar14 + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar9 - uVar10;
  lVar16 = lVar15 - uVar10;
  local_d0 = local_f0;
  uStack_c8 = local_e8;
  local_c0 = local_158;
  uStack_b8 = local_150;
  local_b0 = local_160;
  local_168 = lVar3;
  local_148 = lVar16;
  FUN_1002a709c(lVar9,FUN_1002a64e0,auStack_e0,uVar4,puVar5,PTR___ss5ErrorWS_100995c48);
  FUN_1002d9be4(lVar16,FUN_10029444c,0,lVar2,uVar6,puVar7);
  lVar3 = local_140;
  lVar2 = local_168;
  local_150 = *(undefined8 *)(local_140 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar11 + 0x10))(lVar15,lVar16,local_168);
  uVar10 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  uVar13 = lVar14 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_1009abde8;
  _swift_allocObject(&DAT_1009abde8,uVar13 + 0x20,uVar10 | 7);
  *(undefined8 *)(puVar5 + 0x10) = local_f0;
  *(undefined8 *)(puVar5 + 0x18) = local_e8;
  (**(code **)(lVar11 + 0x20))(puVar5 + uVar12,lVar15,lVar2);
  uVar4 = local_120;
  *(undefined8 *)(puVar5 + uVar13) = local_138;
  *(undefined8 *)(puVar5 + uVar13 + 8) = local_128;
  *(undefined8 *)((long)(puVar5 + uVar13 + 8) + 8) = local_120;
  *(long *)(puVar5 + uVar13 + 0x18) = lVar3;
  local_78 = FUN_1002a68b0;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_1009abe00;
  local_70 = puVar5;
  aBlock = __Block_copy(&local_98);
  _swift_retain(uVar4);
  _swift_retain(lVar3);
  lVar3 = local_130;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_130);
  local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar7 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar8 = puVar5;
  FUN_10028abfc();
  lVar9 = local_110;
  puVar1 = local_118;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_118,&local_a0,puVar5,puVar8,local_110,puVar7);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar3,puVar1,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_f8 + 8))(puVar1,lVar9);
  (**(code **)(local_108 + 8))(lVar3,lStack_100);
  (**(code **)(lVar11 + 8))(local_148,lVar2);
  _swift_release(local_70);
  return;
}

