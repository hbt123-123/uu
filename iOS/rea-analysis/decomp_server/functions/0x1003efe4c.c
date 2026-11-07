// rea decompile_all
// name: FUN_1003efe4c
// address: 0x1003efe4c
// body: available
// range: 0x1003efe4c-0x1003f0013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003efe4c(code *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [48];
  
  puVar2 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + -extraout_x8;
  (*param_1)();
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar8,1,1,lVar3);
  puVar4 = &DAT_1009bb898;
  _swift_allocObject(&DAT_1009bb898,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(code **)(puVar4 + 0x20) = param_1;
  *(undefined8 **)(puVar4 + 0x28) = param_2;
  _swift_retain(param_3);
  _swift_retain();
  FUN_10060edd8();
  _swift_beginAccess();
  uVar9 = *param_2;
  _swift_beginAccess(param_2,auStack_90,0,0);
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar5 = 0;
  FUN_100616218(0,param_4);
  pTVar6 = &TargetProtocolConformanceDescriptor_1008488bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488bc,uVar5);
  pTVar7 = &TargetProtocolConformanceDescriptor_1008488a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,uVar5);
  *(TargetProtocolConformanceDescriptor **)((long)auStack_a0 + -extraout_x8) = pTVar7;
  FUN_1006098bc(uVar9,puVar8,uVar1,FUN_1003f2388,puVar4,uVar5,uVar5,pTVar6);
  _swift_release(puVar2);
  _swift_release(puVar4);
  FUN_100040bb4(puVar8,&DAT_100a77040,&DAT_10080e910);
  return uVar9;
}

