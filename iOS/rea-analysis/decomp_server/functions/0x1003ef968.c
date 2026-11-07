// rea decompile_all
// name: FUN_1003ef968
// address: 0x1003ef968
// body: available
// range: 0x1003ef968-0x1003efbe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ef968(undefined8 param_1,long param_2,long *param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  code *local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [48];
  
  lVar11 = *param_3;
  puVar2 = &DAT_100a77040;
  local_b8 = param_1;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*local_b0)(puVar9,1,1,lVar3);
  puVar2 = &DAT_1009bb910;
  _swift_allocObject(&DAT_1009bb910,0x28,7);
  uVar10 = *(undefined8 *)(lVar11 + 0x50);
  *(undefined8 *)(puVar2 + 0x10) = uVar10;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(long *)(puVar2 + 0x20) = param_2;
  lVar4 = param_2;
  _swift_retain();
  FUN_10060edd8();
  _swift_beginAccess();
  uVar8 = *(undefined8 *)(lVar4 + 8);
  pTVar5 = &TargetProtocolConformanceDescriptor_1008488a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,lVar11);
  FUN_1006170a4(uVar8,puVar9,FUN_1003f2420,puVar2,lVar11,pTVar5);
  _swift_release(puVar2);
  FUN_100040bb4(puVar9,&DAT_100a77040,&DAT_10080e910);
  (*local_b0)(puVar9,1,1,lVar3);
  puVar2 = &DAT_1009bb938;
  _swift_allocObject(&DAT_1009bb938,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar10;
  *(undefined8 *)(puVar2 + 0x18) = local_b8;
  *(long *)(puVar2 + 0x20) = param_2;
  _swift_beginAccess(lVar4,auStack_90,0,0);
  uVar10 = *(undefined8 *)(lVar4 + 8);
  _swift_beginAccess(lVar4,auStack_a8,0,0);
  uVar1 = *(undefined1 *)(lVar4 + 0x10);
  _swift_retain(param_2);
  puVar6 = &DAT_100a77058;
  FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
  puVar7 = &DAT_100a77060;
  FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                &TargetProtocolConformanceDescriptor_1008488bc);
  FUN_10060913c(uVar10,puVar9,uVar1,FUN_1003f243c,puVar2,puVar6,puVar7);
  _swift_release();
  _swift_release(uVar8);
  _swift_release(puVar2);
  FUN_100040bb4(puVar9,&DAT_100a77040,&DAT_10080e910);
  return;
}

