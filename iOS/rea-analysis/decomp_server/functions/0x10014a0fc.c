// rea decompile_all
// name: FUN_10014a0fc
// address: 0x10014a0fc
// body: available
// range: 0x10014a0fc-0x10014a3bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014a0fc(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 *puVar10;
  undefined1 auStack_d0 [8];
  code *local_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [48];
  
  puVar2 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_d0 + -extraout_x8;
  puVar2 = &DAT_100a7a2e8;
  FUN_100004bb4(&DAT_100a7a2e8,&DAT_10080ec60);
  puVar3 = &DAT_100a7a2f0;
  FUN_10003f840(&DAT_100a7a2f0,&DAT_100a7a2e8,&DAT_10080ec60,
                &TargetProtocolConformanceDescriptor_1008488a0);
  pcVar4 = FUN_1001524f0;
  FUN_10061cca0(FUN_1001524f0,auStack_c0,puVar2,puVar3);
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c8 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*local_c8)(puVar10,1,1,lVar5);
  puVar6 = &DAT_10099ed08;
  _swift_allocObject(&DAT_10099ed08,0x18,7);
  *(long *)(puVar6 + 0x10) = unaff_x20;
  lVar7 = unaff_x20;
  FUN_10060edd8();
  _swift_beginAccess();
  uVar8 = *(undefined8 *)(lVar7 + 8);
  FUN_1006170a4(uVar8,puVar10,FUN_100152508,puVar6,puVar2,puVar3);
  _swift_release(pcVar4);
  _swift_release(puVar6);
  FUN_100040bb4(puVar10,&DAT_100a77040,&DAT_10080e910);
  (*local_c8)(puVar10,1,1,lVar5);
  puVar2 = &DAT_10099ed30;
  _swift_allocObject(&DAT_10099ed30,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  _swift_beginAccess(lVar7,auStack_90,0,0);
  uVar9 = *(undefined8 *)(lVar7 + 8);
  _swift_beginAccess(lVar7,auStack_a8,0,0);
  uVar1 = *(undefined1 *)(lVar7 + 0x10);
  puVar3 = &DAT_100a77058;
  FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
  puVar6 = &DAT_100a77060;
  FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                &TargetProtocolConformanceDescriptor_1008488bc);
  FUN_10060913c(uVar9,puVar10,uVar1,FUN_100152520,puVar2,puVar3,puVar6);
  _swift_release();
  _swift_release(uVar8);
  _swift_release(puVar2);
  FUN_100040bb4(puVar10,&DAT_100a77040,&DAT_10080e910);
  return;
}

