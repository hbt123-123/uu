// rea decompile_all
// name: FUN_1001d5c2c
// address: 0x1001d5c2c
// body: available
// range: 0x1001d5c2c-0x1001d5dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d5c2c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined1 auStack_58 [24];
  
  lVar3 = _TtC14UURemoteServer15TerminalManager::sessions;
  puVar2 = auStack_58;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,puVar2,0x20,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  local_70 = (int)param_1;
  if ((*(long *)(lVar3 + 0x10) == 0) ||
     (lVar1 = param_1, thunk_FUN_1001a2c34(), ((ulong)puVar2 & 1) == 0)) {
    _swift_endAccess(auStack_58);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_1001e4850,auStack_80,0xd000000000000095,0x8000000100889250,0xd000000000000012,
                  0x800000010089f8b0,0x30d,0);
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + lVar1 * 8);
    _swift_endAccess(auStack_58);
    _swift_retain(uVar4);
    FUN_1001e8d88();
    FUN_1001d9d5c(param_1,1);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_1001e4858,auStack_80,0xd000000000000095,0x8000000100889250,0xd000000000000012,
                  0x800000010089f8b0,0x312,0);
    _swift_release(uVar4);
  }
  return;
}

