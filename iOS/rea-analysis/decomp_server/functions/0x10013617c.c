// rea decompile_all
// name: FUN_10013617c
// address: 0x10013617c
// body: available
// range: 0x10013617c-0x100136473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013617c(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined1 *puVar11;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined *local_e0;
  undefined1 auStack_c0 [16];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [48];
  
  puVar2 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_f0 + -extraout_x8;
  puVar2 = &DAT_100a79fc8;
  FUN_100004bb4(&DAT_100a79fc8,&DAT_10080eaa8);
  puVar3 = &DAT_100a79fd0;
  local_e8 = puVar2;
  FUN_10003f840(&DAT_100a79fd0,&DAT_100a79fc8,&DAT_10080eaa8,
                &TargetProtocolConformanceDescriptor_1008488a0);
  pcVar4 = FUN_100139acc;
  local_e0 = puVar3;
  FUN_10061cca0(FUN_100139acc,auStack_c0,puVar2,puVar3);
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar8)(puVar11,1,1,lVar5);
  puVar2 = &DAT_10099e7b8;
  _swift_allocObject(&DAT_10099e7b8,0x18,7);
  *(undefined8 **)(puVar2 + 0x10) = unaff_x20;
  puVar6 = unaff_x20;
  FUN_10060edd8();
  _swift_beginAccess();
  uVar9 = *puVar6;
  puVar3 = &DAT_100a77058;
  FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
  puVar7 = &DAT_100a79fd8;
  FUN_10003f840(&DAT_100a79fd8,&DAT_100a77058,&DAT_10080e920,
                &TargetProtocolConformanceDescriptor_1008488a0);
  FUN_1006177ec(uVar9,puVar11,FUN_100139b08,puVar2,local_e8,puVar3,local_e0,puVar7);
  _swift_release(pcVar4);
  _swift_release(puVar2);
  FUN_100040bb4(puVar11,&DAT_100a77040,&DAT_10080e910);
  (*pcVar8)(puVar11,1,1,lVar5);
  puVar2 = &DAT_10099e7e0;
  _swift_allocObject(&DAT_10099e7e0,0x18,7);
  *(undefined8 **)(puVar2 + 0x10) = unaff_x20;
  _swift_beginAccess(puVar6,auStack_90,0,0);
  uVar10 = puVar6[1];
  _swift_beginAccess(puVar6,auStack_a8,0,0);
  uVar1 = *(undefined1 *)(puVar6 + 2);
  puVar7 = &DAT_100a77060;
  FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                &TargetProtocolConformanceDescriptor_1008488bc);
  FUN_10060913c(uVar10,puVar11,uVar1,FUN_100139b20,puVar2,puVar3,puVar7);
  _swift_release();
  _swift_release(uVar9);
  _swift_release(puVar2);
  FUN_100040bb4(puVar11,&DAT_100a77040,&DAT_10080e910);
  return;
}

