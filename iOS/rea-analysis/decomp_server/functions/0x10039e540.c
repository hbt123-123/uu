// rea decompile_all
// name: FUN_10039e540
// address: 0x10039e540
// body: available
// range: 0x10039e540-0x10039e61b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10039e540(undefined8 param_1)

{
  ulong uVar1;
  ID self;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  self = *(ID *)(unaff_x20 + 0x18);
  _objc_msgSend(self,"lock");
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0x21,0);
  FUN_10039e61c();
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  uVar3 = uVar2 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar3 + 0x10);
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_10039e68c(uVar2,uVar1 + 1,1);
    uVar3 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = param_1;
  *(ulong *)(unaff_x20 + 0x10) = uVar2;
  _swift_endAccess(auStack_58);
  _swift_unknownObjectRetain(param_1);
  _objc_msgSend(self,"unlock");
  return 0;
}

