// rea decompile_all
// name: FUN_1000b8844
// address: 0x1000b8844
// body: available
// range: 0x1000b8844-0x1000b8953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b8844(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x50) = 0;
    _swift_beginAccess(param_1 + 0x10,auStack_50,0,0);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (uVar2 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar2 & 0xffffffffffffff8;
      if ((long)uVar2 < 0) {
        uVar1 = uVar2;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar1 == 0) {
      *(undefined1 *)(param_1 + 0x51) = 0;
      FUN_100401b14();
      FUN_1003fb48c(FUN_1000b895c,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000020,
                    0x8000000100882e30,0xc9,0);
    }
    else {
      FUN_1000b8988();
      if (*(char *)(param_1 + 0x51) == '\x01') {
        *(undefined1 *)(param_1 + 0x51) = 0;
        FUN_1000b7ee0();
      }
    }
    _swift_release(param_1);
    return;
  }
  return;
}

