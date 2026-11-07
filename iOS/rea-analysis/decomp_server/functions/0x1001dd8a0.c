// rea decompile_all
// name: FUN_1001dd8a0
// address: 0x1001dd8a0
// body: available
// range: 0x1001dd8a0-0x1001dd9bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001dd8a0(long param_1,undefined8 param_2,dispatch_group_t param_3)

{
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _TtC14UURemoteServer15TerminalManager::closingSessionIds,auStack_60
                       ,0x21,0);
    FUN_1001df660(param_2,FUN_10006e074);
    _swift_endAccess(auStack_60);
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_70 = (undefined4)param_2;
  FUN_1003fb48c(FUN_1001e4544,auStack_80,0xd000000000000095,0x8000000100889250,0xd000000000000012,
                0x800000010089eef0,0x368,0);
  _dispatch_group_leave(param_3);
  return;
}

