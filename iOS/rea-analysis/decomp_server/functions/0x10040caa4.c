// rea decompile_all
// name: FUN_10040caa4
// address: 0x10040caa4
// body: available
// range: 0x10040caa4-0x10040cb7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_10040caa4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined1 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_31;
  
  local_31 = 0;
  if (DAT_100a892d8 != -1) {
    _swift_once(&DAT_100a892d8,FUN_1003db0ac);
  }
  uVar1 = DAT_100a8cce0;
  (*(code *)PTR____chkstk_darwin_100995498)(param_1 >> 0x20);
  local_60 = &local_31;
  local_58 = (undefined4)param_1;
  local_50 = param_2;
  uStack_48 = param_3;
  _swift_retain(uVar1);
  FUN_10040c1ec(FUN_10040cc34,auStack_70);
  _swift_release(uVar1);
  return local_31;
}

