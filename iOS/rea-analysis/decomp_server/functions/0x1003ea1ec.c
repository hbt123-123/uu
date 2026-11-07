// rea decompile_all
// name: FUN_1003ea1ec
// address: 0x1003ea1ec
// body: available
// range: 0x1003ea1ec-0x1003ea2d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ea1ec(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [16];
  undefined8 local_60;
  char local_50 [32];
  
  if (DAT_100a89350 != -1) {
    _swift_once(&DAT_100a89350,FUN_1003e8da0);
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_60 = param_2;
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (local_50,FUN_1003ead54,auStack_70,PTR___sSbN_1009958c8);
  if (local_50[0] == '\x01') {
    _swift_beginAccess(param_1 + 0x10,local_50,0,0);
    param_1 = param_1 + 0x10;
    _swift_weakLoadStrong();
    if (param_1 != 0) {
      FUN_1003e91b4();
      _swift_release(param_1);
    }
  }
  return;
}

