// rea decompile_all
// name: FUN_1003c57f4
// address: 0x1003c57f4
// body: available
// range: 0x1003c57f4-0x1003c5907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c57f4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = _TtC8UUCommon18IPSReportCollector::timer;
  lVar3 = *(long *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::timer);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    _swift_getObjectType(lVar3);
    _swift_unknownObjectRetain(lVar3);
    __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar2);
    _swift_unknownObjectRelease(lVar3);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = _TtC8UUCommon18IPSReportCollector::startup;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar3,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::roots));
  FUN_1000d27dc(unaff_x20 + _TtC8UUCommon18IPSReportCollector::state,FUN_1003c5a40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + lVar1));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::pendingReports));
  FUN_10007ed2c(*(undefined8 *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::submission),
                ((undefined8 *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::submission))[1]);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::retryDelays));
  return;
}

