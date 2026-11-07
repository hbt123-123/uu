// rea decompile_all
// name: FUN_10005ecc8
// address: 0x10005ecc8
// body: available
// range: 0x10005ecc8-0x10005edef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005ecc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x88,auStack_80,0x21,0);
    uVar4 = *(ulong *)(param_1 + 0x88);
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(param_1 + 0x88) = uVar4;
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_1000346dc(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
      *(ulong *)(param_1 + 0x88) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1000346dc(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    lVar1 = uVar4 + uVar2 * 0x20;
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    *(undefined8 *)(lVar1 + 0x30) = param_4;
    *(undefined8 *)(lVar1 + 0x38) = param_5;
    *(ulong *)(param_1 + 0x88) = uVar4;
    _swift_endAccess(auStack_80);
    _swift_retain(param_3);
    _swift_retain(param_5);
    FUN_10005edf0();
    _swift_release(param_1);
  }
  return;
}

