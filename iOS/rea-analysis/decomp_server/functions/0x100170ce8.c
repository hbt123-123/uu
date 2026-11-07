// rea decompile_all
// name: FUN_100170ce8
// address: 0x100170ce8
// body: available
// range: 0x100170ce8-0x100170fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100170ce8(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined1 auStack_c0 [16];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [48];
  
  puVar2 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffff30 + -extraout_x8;
  puVar2 = &DAT_100a77058;
  FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
  puVar3 = &DAT_100a79fd8;
  FUN_10003f840(&DAT_100a79fd8,&DAT_100a77058,&DAT_10080e920,
                &TargetProtocolConformanceDescriptor_1008488a0);
  pcVar4 = FUN_100177dcc;
  FUN_10061cca0(FUN_100177dcc,auStack_c0,puVar2,puVar3);
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  pcVar11 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar11)(puVar10,1,1,lVar5);
  puVar6 = &DAT_1009a0550;
  _swift_allocObject(&DAT_1009a0550,0x18,7);
  *(long *)(puVar6 + 0x10) = unaff_x20;
  puVar7 = &DAT_1009a0578;
  _swift_allocObject(&DAT_1009a0578,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_100177e08;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  lVar8 = unaff_x20;
  FUN_10060edd8();
  _swift_beginAccess();
  uVar9 = *(undefined8 *)(lVar8 + 8);
  FUN_1006170a4(uVar9,puVar10,FUN_100177e34,puVar7,puVar2,puVar3);
  _swift_release(pcVar4);
  _swift_release(puVar7);
  FUN_100040bb4(puVar10,&DAT_100a77040,&DAT_10080e910);
  (*pcVar11)(puVar10,1,1,lVar5);
  puVar3 = &DAT_1009a05a0;
  _swift_allocObject(&DAT_1009a05a0,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  _swift_beginAccess(lVar8,auStack_90,0,0);
  uVar12 = *(undefined8 *)(lVar8 + 8);
  _swift_beginAccess(lVar8,auStack_a8,0,0);
  uVar1 = *(undefined1 *)(lVar8 + 0x10);
  puVar6 = &DAT_100a77060;
  FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                &TargetProtocolConformanceDescriptor_1008488bc);
  FUN_10060913c(uVar12,puVar10,uVar1,FUN_100177e5c,puVar3,puVar2,puVar6);
  _swift_release();
  _swift_release(uVar9);
  _swift_release(puVar3);
  FUN_100040bb4(puVar10,&DAT_100a77040,&DAT_10080e910);
  return;
}

