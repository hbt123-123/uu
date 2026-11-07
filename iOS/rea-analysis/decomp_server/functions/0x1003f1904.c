// rea decompile_all
// name: FUN_1003f1904
// address: 0x1003f1904
// body: available
// range: 0x1003f1904-0x1003f1c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f1904(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_f0 [8];
  code *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  ulong local_c8;
  code *local_c0;
  long lStack_b8;
  long *local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [48];
  
  lVar9 = *param_2;
  puVar2 = &DAT_100a77040;
  local_d0 = param_1;
  local_b0 = param_2;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_f0 + -extraout_x8;
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c0 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  lStack_b8 = lVar3;
  (*local_c0)(puVar11,1,1,lVar3);
  uVar7 = *(undefined8 *)(lVar9 + 0x50);
  puVar2 = &DAT_100a75b40;
  FUN_100004c48(&DAT_100a75b40,&DAT_100809bd0);
  lVar3 = 0;
  local_e0 = uVar7;
  __sScCMa(0,uVar7,puVar2,PTR___ss5ErrorWS_100995c48);
  lVar12 = *(long *)(lVar3 + -8);
  lVar15 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_c8 = lVar15 + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)puVar11 - local_c8;
  local_d8 = *(code **)(lVar12 + 0x10);
  (*local_d8)(lVar8,param_1,lVar3);
  uVar14 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar14 + 0x18 & (uVar14 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009bb780;
  _swift_allocObject(&DAT_1009bb780,uVar13 + lVar15,uVar14 | 7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  local_e8 = *(code **)(lVar12 + 0x20);
  puVar4 = puVar2 + uVar13;
  (*local_e8)(puVar4,lVar8,lVar3);
  FUN_10060edd8();
  _swift_beginAccess();
  uVar7 = *(undefined8 *)(puVar4 + 8);
  pTVar5 = &TargetProtocolConformanceDescriptor_1008488a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,lVar9);
  FUN_1006170a4(uVar7,puVar11,FUN_1003f20d4,puVar2,lVar9,pTVar5);
  _swift_release(puVar2);
  FUN_100040bb4(puVar11,&DAT_100a77040,&DAT_10080e910);
  (*local_c0)(puVar11,1,1,lStack_b8);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = lVar8 - local_c8;
  (*local_d8)(lVar8,local_d0,lVar3);
  puVar2 = &DAT_1009bb7a8;
  _swift_allocObject(&DAT_1009bb7a8,uVar13 + lVar15,uVar14 | 7);
  *(undefined8 *)(puVar2 + 0x10) = local_e0;
  (*local_e8)(puVar2 + uVar13,lVar8,lVar3);
  _swift_beginAccess(puVar4,auStack_90,0,0);
  uVar10 = *(undefined8 *)(puVar4 + 8);
  _swift_beginAccess(puVar4,auStack_a8,0,0);
  uVar1 = puVar4[0x10];
  puVar4 = &DAT_100a77058;
  FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
  puVar6 = &DAT_100a77060;
  FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                &TargetProtocolConformanceDescriptor_1008488bc);
  FUN_10060913c(uVar10,puVar11,uVar1,FUN_1003f21d0,puVar2,puVar4,puVar6);
  _swift_release();
  _swift_release(uVar7);
  _swift_release(puVar2);
  FUN_100040bb4(puVar11,&DAT_100a77040,&DAT_10080e910);
  return;
}

