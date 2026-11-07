// rea decompile_all
// name: FUN_1001daf2c
// address: 0x1001daf2c
// body: available
// range: 0x1001daf2c-0x1001db093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001daf2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  code *param_5)

{
  undefined1 auStack_b0 [16];
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a0 = (undefined4)param_4;
    local_98 = param_1;
    uStack_90 = param_2;
    FUN_1003fb4ec(FUN_1001e02f4,auStack_b0,0xd000000000000095,0x8000000100889250,0xd000000000000064,
                  0x800000010089e430,0x21e,0);
    _swift_beginAccess(param_3 + _TtC14UURemoteServer15TerminalManager::sessions,auStack_80,0x21,0);
    FUN_1001de2ac(param_4,thunk_FUN_1001a2c34,thunk_FUN_10006cc48,FUN_100064e48);
    _swift_endAccess(auStack_80);
    _swift_release(param_4);
    (*param_5)(500,param_1,param_2,1);
  }
  return;
}

