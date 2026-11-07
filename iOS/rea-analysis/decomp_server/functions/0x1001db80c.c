// rea decompile_all
// name: FUN_1001db80c
// address: 0x1001db80c
// body: available
// range: 0x1001db80c-0x1001db9f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001db80c(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [16];
  undefined4 local_a0;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    _swift_beginAccess(lVar1 + _TtC14UURemoteServer15TerminalManager::sessions,auStack_70,0x21,0);
    uVar2 = param_2;
    FUN_1001de2ac(param_2,thunk_FUN_1001a2c34,thunk_FUN_10006cc48,FUN_100064e48);
    _swift_endAccess(auStack_70);
    _swift_release(uVar2);
  }
  _swift_beginAccess(param_1 + 0x10,auStack_70,0,0);
  lVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    _swift_beginAccess(lVar1 + _TtC14UURemoteServer15TerminalManager::closingSessionIds,auStack_88,
                       0x21,0);
    FUN_1001df660(param_2,FUN_10006e074);
    _swift_endAccess(auStack_88);
  }
  _swift_beginAccess(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_1001d9d5c(param_2,2);
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_a0 = (undefined4)param_2;
  FUN_1003fb48c(FUN_1001e0734,auStack_b0,0xd000000000000095,0x8000000100889250,0xd000000000000022,
                0x800000010089d930,0x27b,0);
  (*param_3)(0,0x6b6f,0xe200000000000000);
  return;
}

