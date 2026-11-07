// rea decompile_all
// name: FUN_100613550
// address: 0x100613550
// body: available
// range: 0x100613550-0x10061387f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100613550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long *unaff_x20;
  code *pcVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar12 = *unaff_x20;
  puVar1 = &DAT_100aaffc0;
  local_a0 = param_1;
  uStack_98 = param_2;
  local_88 = param_8;
  local_80 = param_6;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  puVar10 = auStack_c0 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_1009df370;
  _swift_allocObject(&DAT_1009df370,0x48,7);
  local_90 = *(undefined8 *)(lVar12 + 0x50);
  *(undefined8 *)(puVar1 + 0x10) = local_90;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_8;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  uVar2 = 0xff;
  local_b8 = param_5;
  local_a8 = param_7;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_5,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar3 = 0xff;
  local_b0 = uVar2;
  __sSaMa(0xff,uVar2);
  uVar4 = 0;
  FUN_100616218(0,uVar3);
  _swift_retain(param_4);
  pTVar5 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,lVar12);
  pTVar6 = &TargetProtocolConformanceDescriptor_1008488a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,uVar4);
  uVar7 = local_a0;
  FUN_1006177ec(local_a0,uStack_98,FUN_100614a34,puVar1,lVar12,uVar4,pTVar5,pTVar6);
  _swift_release(puVar1);
  lVar12 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  pcVar11 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
  (*pcVar11)(puVar10,1,1,lVar12);
  puVar1 = &DAT_1009df398;
  _swift_allocObject(&DAT_1009df398,0x38,7);
  uVar3 = local_90;
  uVar2 = local_a8;
  *(undefined8 *)(puVar1 + 0x10) = local_90;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = local_80;
  *(undefined8 *)(puVar1 + 0x28) = local_a8;
  *(undefined8 *)(puVar1 + 0x30) = local_88;
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,local_88,local_b0,PTR___sSTTL_100995860,PTR___s7ElementSTTl_1009956f8);
  uVar9 = 0;
  __sSaMa(0,uVar8);
  uVar8 = 0;
  FUN_100617950(0,puVar10,FUN_100614a68,puVar1,uVar4,uVar9,pTVar6);
  _swift_release(uVar7);
  _swift_release(puVar1);
  FUN_1006070b4(puVar10);
  (*pcVar11)(puVar10,1,1,lVar12);
  puVar1 = &DAT_1009df3c0;
  _swift_allocObject(&DAT_1009df3c0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = local_b8;
  *(undefined8 *)(puVar1 + 0x20) = local_80;
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
  *(undefined8 *)(puVar1 + 0x30) = local_88;
  if (DAT_100aafef8 != -1) {
    _swift_once(&DAT_100aafef8,FUN_10060f124);
  }
  _swift_beginAccess(&DAT_100b3a770,auStack_78,0,0);
  uVar2 = DAT_100b3a770;
  uVar3 = 0;
  FUN_100616218(0,uVar9);
  pTVar5 = &TargetProtocolConformanceDescriptor_1008488bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488bc,uVar3);
  FUN_10060a134(uVar2,puVar10,FUN_100614a88,puVar1,uVar3,pTVar5);
  _swift_release(uVar8);
  _swift_release(puVar1);
  FUN_1006070b4(puVar10);
  return uVar2;
}

