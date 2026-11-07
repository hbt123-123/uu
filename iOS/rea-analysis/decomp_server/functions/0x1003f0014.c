// rea decompile_all
// name: FUN_1003f0014
// address: 0x1003f0014
// body: available
// range: 0x1003f0014-0x1003f032f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1003f0014(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100a77040;
  local_a0 = param_3;
  local_98 = param_4;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_b0 - extraout_x8;
  puVar1 = &DAT_100a8d540;
  FUN_100004bb4(&DAT_100a8d540,&DAT_100823850);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_00;
  lVar2 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + 2,auStack_78,1,0);
  FUN_1003f0330(lVar11);
  lVar3 = lVar11;
  (**(code **)(lVar9 + 0x30))(lVar11,1,lVar2);
  if ((int)lVar3 == 1) {
    FUN_100040bb4(lVar11,&DAT_100a8d540,&DAT_100823850);
    _swift_willThrow();
    _swift_errorRetain(param_1);
    lVar8 = lVar10;
  }
  else {
    local_a8 = lVar8;
    (**(code **)(lVar9 + 0x20))(lVar8,lVar11,lVar2);
    FUN_10061c930();
    lVar3 = 0;
    local_b0 = lVar8;
    __s8Dispatch0A13WorkItemFlagsVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar10,1,1,lVar3);
    puVar1 = &DAT_1009bb8c0;
    _swift_allocObject(&DAT_1009bb8c0,0x30,7);
    lVar3 = local_98;
    *(undefined8 *)(puVar1 + 0x10) = param_5;
    *(undefined8 *)(puVar1 + 0x18) = local_a0;
    *(long *)(puVar1 + 0x20) = local_98;
    *(long **)(puVar1 + 0x28) = param_2;
    puVar4 = &DAT_1009bb8e8;
    _swift_allocObject(&DAT_1009bb8e8,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = param_5;
    *(code **)(puVar4 + 0x18) = FUN_1003f23d0;
    *(undefined **)(puVar4 + 0x20) = puVar1;
    _swift_retain(lVar3);
    _swift_retain();
    FUN_10060edd8();
    _swift_beginAccess();
    lVar8 = *param_2;
    puVar1 = &DAT_100a8bc08;
    local_98 = lVar8;
    FUN_100004bb4(&DAT_100a8bc08,&DAT_1008209f8);
    uVar5 = 0;
    FUN_100616218(0,param_5);
    puVar6 = &DAT_100a8d538;
    FUN_10003f840(&DAT_100a8d538,&DAT_100a8bc08,&DAT_1008209f8,
                  &TargetProtocolConformanceDescriptor_1008487f8);
    pTVar7 = &TargetProtocolConformanceDescriptor_1008488a0;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,uVar5);
    lVar3 = local_b0;
    FUN_1006177ec(lVar8,lVar10,FUN_1003f2400,puVar4,puVar1,uVar5,puVar6,pTVar7);
    _swift_release(lVar3);
    _swift_release(puVar4);
    FUN_100040bb4(lVar10,&DAT_100a77040,&DAT_10080e910);
    (**(code **)(lVar9 + 8))(local_a8,lVar2);
  }
  return lVar8;
}

