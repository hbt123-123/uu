// rea decompile_all
// name: FUN_1001a56d8
// address: 0x1001a56d8
// body: available
// range: 0x1001a56d8-0x1001a57b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a56d8(double param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation4DateVACycfC(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  lVar1 = _TtC14UURemoteServer14AppListManager::refreshTimer;
  if (20.0 <= param_1 - *(double *)
                         (unaff_x20 + _TtC14UURemoteServer14AppListManager::lastUpdateRemoteTime)) {
    if (*(ID *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::refreshTimer) != 0) {
      _objc_msgSend(*(ID *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::refreshTimer),
                    "invalidate");
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
    }
    FUN_1001a4294(0);
  }
  return;
}

