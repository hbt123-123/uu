// rea decompile_all
// name: FUN_1000f4de4
// address: 0x1000f4de4
// body: available
// range: 0x1000f4de4-0x1000f4e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f4de4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC14UURemoteServer10InputQueue::events;
  _swift_beginAccess(param_1 + _TtC14UURemoteServer10InputQueue::events,auStack_38,0,0);
  uVar3 = *(ulong *)(param_1 + lVar1);
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if ((long)uVar3 < 0) {
      uVar2 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (0 < (long)uVar2) {
    param_1 = param_1 + lVar1;
    _swift_beginAccess(param_1,auStack_50,0x21,0);
    FUN_1000f45c0();
    _swift_endAccess(auStack_50);
    _CGEventPost(0,param_1);
  }
  return;
}

