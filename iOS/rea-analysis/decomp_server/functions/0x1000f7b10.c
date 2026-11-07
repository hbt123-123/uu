// rea decompile_all
// name: FUN_1000f7b10
// address: 0x1000f7b10
// body: available
// range: 0x1000f7b10-0x1000f7be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f7b10(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  FUN_1000fa2d4();
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar1 = 0;
  FUN_1000b35b4(0);
  FUN_1000b3ea8(param_1,uVar1 & 1);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    FUN_1000c82e4();
    FUN_1001a1518(param_1);
    _swift_release(lVar2);
  }
  return;
}

