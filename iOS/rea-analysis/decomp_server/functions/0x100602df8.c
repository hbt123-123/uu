// rea decompile_all
// name: FUN_100602df8
// address: 0x100602df8
// body: available
// range: 0x100602df8-0x100602fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100602df8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long local_58;
  undefined8 uStack_50;
  long local_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100602e8c);
    (*pcVar4)();
  }
  _FSEventStreamCopyPathsBeingWatched();
  local_58 = 0;
  uVar6 = 0;
  FUN_100602d8c(0);
  __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
            (lVar5,&local_58,uVar6);
  lVar2 = local_58;
  if (local_58 != 0) {
    lVar5 = local_58;
    FUN_100602bc8(local_58);
    _swift_bridgeObjectRelease(lVar2);
    return lVar5;
  }
  local_58 = 0;
  uStack_50 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x35);
  local_40 = local_58;
  uStack_38 = uStack_50;
  __sSS6appendyySSF(0xd000000000000021,0x80000001008beac0);
  uVar6 = 0;
  local_58 = lVar5;
  FUN_100603254(0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_58,&local_40,uVar6,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xd000000000000012,0x80000001008beaf0);
  uVar3 = uStack_38;
  lVar5 = local_40;
  _swift_beginAccess(&PTR_FUN_100aafed0,&local_58,0,0);
  uVar6 = DAT_100aafed8;
  puVar1 = PTR_FUN_100aafed0;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(uVar6);
  (*(code *)puVar1)(1,lVar5,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  _swift_release(uVar6);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"EonilFSEvents/EonilFSEventStream.swift",0x26,
             2,0xf2,0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100602fa8);
  (*pcVar4)();
}

