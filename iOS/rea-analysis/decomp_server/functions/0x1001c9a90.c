// rea decompile_all
// name: FUN_1001c9a90
// address: 0x1001c9a90
// body: available
// range: 0x1001c9a90-0x1001c9c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001c9a90(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined1 auStack_68 [24];
  
  uVar4 = param_1 >> 0x20;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar2 = _TtC14UURemoteServer15TerminalManager::sessions;
  lVar5 = *(long *)(DAT_100b360a8 + 0x90);
  puVar1 = auStack_68;
  _swift_beginAccess(lVar5 + _TtC14UURemoteServer15TerminalManager::sessions,puVar1,0x20,0);
  lVar2 = *(long *)(lVar5 + lVar2);
  if ((*(long *)(lVar2 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar1 & 1) == 0)) {
    _swift_endAccess(auStack_68);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_80 = (undefined4)(param_1 >> 0x20);
    FUN_1003fb48c(FUN_1001cbe10,auStack_90,0xd000000000000095,0x8000000100889250,0xd00000000000001b,
                  0x800000010089d6e0,0x2f1,0);
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + uVar4 * 8);
    _swift_endAccess(auStack_68);
    _swift_retain(uVar3);
    FUN_1001e869c(param_2,param_3);
    _swift_release(uVar3);
  }
  return 0;
}

