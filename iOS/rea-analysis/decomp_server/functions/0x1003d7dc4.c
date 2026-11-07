// rea decompile_all
// name: FUN_1003d7dc4
// address: 0x1003d7dc4
// body: available
// range: 0x1003d7dc4-0x1003d7e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003d7dc4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = _TtC8UUCommon14FileDataMapper::fileMonitor;
  uVar3 = *(undefined8 *)
           (*(long *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::fileMonitor) +
           _TtC8UUCommon11FileMonitor::dispatchSource);
  *(undefined8 *)
   (*(long *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::fileMonitor) +
   _TtC8UUCommon11FileMonitor::dispatchSource) = 0;
  _swift_release(uVar3);
  lVar1 = _TtC8UUCommon14FileDataMapper::fileURL;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(unaff_x20 + lVar1,lVar4);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::fileLock));
  _swift_release(*(undefined8 *)(unaff_x20 + lVar2));
  FUN_100006cc8(*(undefined8 *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::cache),
                ((undefined8 *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::cache))[1]);
  FUN_10008317c(*(undefined8 *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::fileChanged),
                ((undefined8 *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::fileChanged))[1]);
  return;
}

