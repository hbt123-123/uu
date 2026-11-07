// rea decompile_all
// name: FUN_1006131f4
// address: 0x1006131f4
// body: available
// range: 0x1006131f4-0x100613413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1006131f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined1 *puVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *unaff_x20;
  puVar1 = &DAT_100aaffc0;
  local_80 = param_2;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  puVar6 = auStack_78 +
           (-8 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar1 = &DAT_1009df320;
  _swift_allocObject(&DAT_1009df320,0x38,7);
  uVar8 = *(undefined8 *)(lVar7 + 0x50);
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  uVar2 = 0xff;
  __sSaMa(0xff,param_5);
  uVar3 = 0;
  FUN_100616218(0,uVar2);
  _swift_retain(param_4);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,lVar7);
  pTVar5 = &TargetProtocolConformanceDescriptor_1008488a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,uVar3);
  FUN_1006177ec(param_1,local_80,FUN_1006149d4,puVar1,lVar7,uVar3,pTVar4,pTVar5);
  _swift_release(puVar1);
  lVar7 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar6,1,1,lVar7);
  puVar1 = &DAT_1009df348;
  _swift_allocObject(&DAT_1009df348,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  if (DAT_100aafef8 != -1) {
    _swift_once(&DAT_100aafef8,FUN_10060f124);
  }
  _swift_beginAccess(&DAT_100b3a770,auStack_78,0,0);
  uVar2 = DAT_100b3a770;
  pTVar4 = &TargetProtocolConformanceDescriptor_1008488bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488bc,uVar3);
  FUN_10060a134(uVar2,puVar6,FUN_100614a04,puVar1,uVar3,pTVar4);
  _swift_release(param_1);
  _swift_release(puVar1);
  FUN_1006070b4(puVar6);
  return uVar2;
}

