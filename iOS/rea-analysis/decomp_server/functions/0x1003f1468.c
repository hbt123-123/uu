// rea decompile_all
// name: FUN_1003f1468
// address: 0x1003f1468
// body: available
// range: 0x1003f1468-0x1003f16c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f1468(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined *puVar6;
  long extraout_x8;
  code *pcVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [48];
  
  lVar10 = *param_2;
  puVar2 = &DAT_100a77040;
  local_b0 = param_1;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_a8 + (-8 - extraout_x8);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar7)(puVar8,1,1,lVar3);
  puVar2 = &DAT_1009bb730;
  _swift_allocObject(&DAT_1009bb730,0x20,7);
  uVar9 = *(undefined8 *)(lVar10 + 0x50);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  puVar4 = puVar2;
  FUN_10060edd8();
  _swift_beginAccess();
  uVar11 = *(undefined8 *)(puVar4 + 8);
  pTVar5 = &TargetProtocolConformanceDescriptor_1008488a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,lVar10);
  FUN_1006170a4(uVar11,puVar8,FUN_1003f20b0,puVar2,lVar10,pTVar5);
  _swift_release(puVar2);
  FUN_100040bb4(puVar8,&DAT_100a77040,&DAT_10080e910);
  (*pcVar7)(puVar8,1,1,lVar3);
  puVar2 = &DAT_1009bb758;
  _swift_allocObject(&DAT_1009bb758,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = local_b0;
  _swift_beginAccess(puVar4,auStack_90,0,0);
  uVar9 = *(undefined8 *)(puVar4 + 8);
  _swift_beginAccess(puVar4,auStack_a8,0,0);
  uVar1 = puVar4[0x10];
  puVar4 = &DAT_100a77058;
  FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
  puVar6 = &DAT_100a77060;
  FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                &TargetProtocolConformanceDescriptor_1008488bc);
  FUN_10060913c(uVar9,puVar8,uVar1,FUN_1003f20c8,puVar2,puVar4,puVar6);
  _swift_release();
  _swift_release(uVar11);
  _swift_release(puVar2);
  FUN_100040bb4(puVar8,&DAT_100a77040,&DAT_10080e910);
  return;
}

