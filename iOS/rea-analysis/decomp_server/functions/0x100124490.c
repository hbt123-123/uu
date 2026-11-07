// rea decompile_all
// name: FUN_100124490
// address: 0x100124490
// body: available
// range: 0x100124490-0x100124627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100124490(void)

{
  uint uVar1;
  ID IVar2;
  long unaff_x20;
  undefined1 auStack_80 [16];
  uint local_70;
  undefined4 uStack_6c;
  
  _swift_getObjectType();
  uVar1 = *(uint *)(*(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::room) + 0x10);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  IVar2 = _objc_msgSend(*(ID *)(*(long *)(DAT_100b360a8 + 0x28) +
                               _TtC14UURemoteServer15StreamerManager::controlled),
                        "ControlledDestroyRoom:",(ulong)uVar1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uStack_6c = (undefined4)IVar2;
  local_70 = uVar1;
  FUN_1003fb48c(FUN_10003f65c,auStack_80,0xd000000000000095,0x8000000100877f50,0x52796f7274736564,
                0xef293a5f286d6f6f,0x16d,0);
  FUN_1003fb48c(FUN_100124628,0,0xd000000000000098,0x800000010088de90,0x74696e696564,
                0xe600000000000000,0x1e,0);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"dealloc");
  return;
}

