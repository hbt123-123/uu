// rea decompile_all
// name: FUN_1000c60c8
// address: 0x1000c60c8
// body: available
// range: 0x1000c60c8-0x1000c6187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c60c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  uVar1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    (**(code **)(uVar1 + 0x10))();
    if (uVar2 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      _swift_bridgeObjectRelease();
    }
    else {
      uVar3 = uVar2 & 0xffffffffffffff8;
      if ((long)uVar2 < 0) {
        uVar3 = uVar2;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      _swift_bridgeObjectRelease();
    }
    if (((uVar3 != 0) && ((*(byte *)(uVar1 + 0x50) & 1) == 0)) &&
       (FUN_1000c6188(), (uVar2 & 1) != 0)) {
      FUN_1000c6b58();
    }
    _swift_release(uVar1);
  }
  return;
}

