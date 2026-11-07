// rea decompile_all
// name: FUN_100122464
// address: 0x100122464
// body: available
// range: 0x100122464-0x1001225f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100122464(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_50 [16];
  undefined1 local_40;
  long *local_28;
  
  FUN_1003dab3c();
  (**(code **)(*param_1 + 0x108))(&local_28);
  _swift_release(param_1);
  if (local_28 != (long *)0x0) {
    pcVar2 = *(code **)(*local_28 + 0x80);
    _swift_retain(local_28);
    (*pcVar2)();
    if (param_2 != 0) {
      _swift_bridgeObjectRelease(param_2);
      (**(code **)(*local_28 + 0xb0))();
      if (param_2 != 0) {
        _swift_bridgeObjectRelease(param_2);
        (**(code **)(*local_28 + 0x98))();
        if (param_2 != 0) {
          _swift_release_n(local_28,2);
          _swift_bridgeObjectRelease(param_2);
          local_40 = 1;
          goto LAB_100122574;
        }
      }
    }
    lVar1 = 0;
    (**(code **)(*local_28 + 0xf8))();
    if (lVar1 != 0) {
      _swift_bridgeObjectRelease(lVar1);
      (**(code **)(*local_28 + 0xe0))();
      if (lVar1 != 0) {
        _swift_bridgeObjectRelease(lVar1);
        (**(code **)(*local_28 + 0xb0))();
        _swift_release_n(local_28,2);
        local_40 = 0;
        if (lVar1 != 0) {
          _swift_bridgeObjectRelease(lVar1);
          local_40 = 2;
        }
        goto LAB_100122574;
      }
    }
    _swift_release_n(local_28,2);
  }
  local_40 = 0;
LAB_100122574:
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  FUN_1003fb48c(thunk_FUN_10012278c,auStack_50,0xd00000000000008d,0x800000010088dd30,
                0xd000000000000014,0x800000010088ddc0,0x30,0);
  return;
}

