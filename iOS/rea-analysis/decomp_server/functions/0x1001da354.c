// rea decompile_all
// name: FUN_1001da354
// address: 0x1001da354
// body: available
// range: 0x1001da354-0x1001da5b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001da354(undefined8 param_1,byte param_2,long param_3,ulong param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long extraout_x12;
  undefined1 auStack_d0 [16];
  undefined4 local_c0;
  undefined4 uStack_bc;
  byte local_b8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    _swift_beginAccess(param_3 + _TtC14UURemoteServer15TerminalManager::sessions,auStack_90,0x21,0);
    uVar2 = param_4;
    FUN_1001de2ac(param_4,thunk_FUN_1001a2c34,thunk_FUN_10006cc48,FUN_100064e48);
    _swift_endAccess(auStack_90);
    _swift_release(uVar2);
    FUN_1001d9d5c(param_4,2);
    lVar1 = _TtC14UURemoteServer15TerminalManager::closingSessionIds;
    _swift_beginAccess(param_3 + _TtC14UURemoteServer15TerminalManager::closingSessionIds,auStack_90
                       ,0,0);
    uVar2 = param_4;
    thunk_FUN_100152fd0(param_4,*(undefined8 *)(param_3 + lVar1));
    local_c0 = (int)param_4;
    uStack_bc = (int)param_1;
    if ((uVar2 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_b8 = param_2 & 1;
      FUN_1003fb48c(param_8,auStack_d0,extraout_x12 + 0x58,0x8000000100889250,0xd00000000000003d,
                    0x800000010089e7c0,0x32b,0);
      (*param_5)(param_4,param_1,param_2 & 1);
    }
    else {
      _swift_beginAccess(param_3 + lVar1,auStack_a8,0x21,0);
      FUN_1001df660(param_4,FUN_10006e074);
      _swift_endAccess(auStack_a8);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb48c(param_7,auStack_d0,0xd000000000000095,0x8000000100889250,0xd00000000000003d,
                    0x800000010089e7c0,0x326,0);
    }
  }
  return;
}

