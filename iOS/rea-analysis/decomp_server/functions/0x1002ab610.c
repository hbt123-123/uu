// rea decompile_all
// name: FUN_1002ab610
// address: 0x1002ab610
// body: available
// range: 0x1002ab610-0x1002abae3 inclusive
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

void FUN_1002ab610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ID IVar8;
  void *aBlock;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 local_170;
  undefined *local_168;
  long local_160;
  undefined8 local_158;
  long local_150;
  long local_148;
  long local_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  
  lVar2 = 0;
  local_158 = param_8;
  local_138 = param_2;
  local_130 = param_6;
  local_128 = param_3;
  local_120 = param_4;
  local_110 = param_5;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e8 = *(long *)(lVar2 + -8);
  lVar10 = (long)&local_170 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_108 = lVar10;
  lStack_100 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_f8 = *(long *)(lVar3 + -8);
  lVar10 = lVar10 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0xff;
  local_170 = param_7;
  local_118 = lVar10;
  lStack_f0 = lVar3;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_7,0x1008fab88,&TargetProtocolRequirement_1008fab90);
  puVar5 = &DAT_100a82488;
  FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
  lVar2 = 0;
  local_168 = puVar5;
  __ss6ResultOMa(0,uVar4,puVar5,PTR___ss5ErrorWS_100995c48);
  lVar10 = lVar10 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0xff;
  local_160 = lVar2;
  FUN_100277ad0(0xff);
  puVar7 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar2 = 0;
  __ss6ResultOMa(0,uVar4,uVar6,puVar7);
  lVar14 = *(long *)(lVar2 + -8);
  local_148 = *(long *)(lVar14 + 0x40);
  uVar11 = local_148 + 0xfU & 0xfffffffffffffff0;
  lVar16 = lVar10 - uVar11;
  lVar12 = lVar16 - uVar11;
  local_150 = lVar2;
  IVar8 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::systemUptime(IVar8,"systemUptime");
  lVar3 = local_130;
  uVar1 = local_158;
  local_c8 = local_158;
  uStack_c0 = local_138;
  local_b8 = local_130;
  uVar17 = param_1;
  local_d0 = param_7;
  FUN_1002a709c(lVar10,FUN_1002b94d0,auStack_e0,uVar4,local_168,PTR___ss5ErrorWS_100995c48);
  local_140 = lVar12;
  FUN_1002d9be4(lVar12,FUN_100284d5c,0,local_160,uVar6,puVar7);
  IVar8 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::systemUptime(IVar8,"systemUptime");
  lVar2 = local_150;
  local_138 = *(undefined8 *)(lVar3 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar14 + 0x10))(lVar16,lVar12,local_150);
  uVar11 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar13 = uVar11 + 0x30 & (uVar11 ^ 0xffffffffffffffff);
  uVar15 = local_148 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_1009aca60;
  _swift_allocObject(&DAT_1009aca60,uVar15 + 0x20,uVar11 | 7);
  *(undefined8 *)(puVar5 + 0x10) = local_170;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar17;
  *(undefined8 *)(puVar5 + 0x28) = param_1;
  (**(code **)(lVar14 + 0x20))(puVar5 + uVar13,lVar16,lVar2);
  uVar1 = local_110;
  *(undefined8 *)(puVar5 + uVar15) = local_128;
  *(undefined8 *)(puVar5 + uVar15 + 8) = local_120;
  *(undefined8 *)((long)(puVar5 + uVar15 + 8) + 8) = local_110;
  *(long *)(puVar5 + uVar15 + 0x18) = lVar3;
  local_88 = FUN_1002b9880;
  local_a8 = PTR___NSConcreteStackBlock_100995490;
  local_a0 = 0x42000000;
  local_98 = FUN_1000acdb4;
  puStack_90 = &DAT_1009aca78;
  local_80 = puVar5;
  aBlock = __Block_copy(&local_a8);
  _swift_retain(uVar1);
  _swift_retain(lVar3);
  lVar3 = local_118;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_118);
  local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar7 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar9 = puVar5;
  FUN_10028abfc();
  lVar12 = lStack_100;
  lVar10 = local_108;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_108,&local_b0,puVar5,puVar9,lStack_100,puVar7);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar3,lVar10,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_e8 + 8))(lVar10,lVar12);
  (**(code **)(local_f8 + 8))(lVar3,lStack_f0);
  (**(code **)(lVar14 + 8))(local_140,lVar2);
  _swift_release(local_80);
  return;
}

