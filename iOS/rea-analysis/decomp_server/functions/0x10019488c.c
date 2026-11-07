// rea decompile_all
// name: FUN_10019488c
// address: 0x10019488c
// body: available
// range: 0x10019488c-0x100194a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019488c(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_90 [48];
  
  puVar2 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_b0 + -extraout_x8;
  puVar2 = &DAT_100a77058;
  FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
  puVar3 = &DAT_100a79fd8;
  FUN_10003f840(&DAT_100a79fd8,&DAT_100a77058,&DAT_10080e920,
                &TargetProtocolConformanceDescriptor_1008488a0);
  pcVar4 = FUN_100198a14;
  FUN_10061cca0(FUN_100198a14,auStack_b0,puVar2,puVar3);
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar7,1,1,lVar5);
  puVar3 = &DAT_1009a1420;
  _swift_allocObject(&DAT_1009a1420,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  FUN_10060edd8();
  _swift_beginAccess();
  uVar8 = *(undefined8 *)(unaff_x20 + 8);
  _swift_beginAccess(unaff_x20,auStack_90,0,0);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x10);
  puVar6 = &DAT_100a77060;
  FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                &TargetProtocolConformanceDescriptor_1008488bc);
  FUN_10060913c(uVar8,puVar7,uVar1,FUN_100198a50,puVar3,puVar2,puVar6);
  _swift_release();
  _swift_release(pcVar4);
  _swift_release(puVar3);
  FUN_100040bb4(puVar7,&DAT_100a77040,&DAT_10080e910);
  return;
}

