// rea decompile_all
// name: FUN_100338e34
// address: 0x100338e34
// body: available
// range: 0x100338e34-0x100338f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100338e34(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1;
  FUN_10033b090();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x10) = param_3;
  *(long *)(lVar2 + 0x18) = param_1;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  _swift_beginAccess(unaff_x20 + 0x38,auStack_58,0x21,0);
  _swift_bridgeObjectRetain(param_3);
  _swift_retain(lVar2);
  FUN_100339e5c(FUN_100297444);
  uVar3 = *(ulong *)(unaff_x20 + 0x38);
  uVar4 = uVar3 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar4 + 0x10);
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_100297444(uVar3,uVar1 + 1,1);
    uVar4 = uVar3 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  *(long *)(uVar4 + uVar1 * 8 + 0x20) = lVar2;
  *(ulong *)(unaff_x20 + 0x38) = uVar3;
  _swift_endAccess(auStack_58);
  _swift_release(lVar2);
  return;
}

