// rea decompile_all
// name: FUN_100360750
// address: 0x100360750
// body: available
// range: 0x100360750-0x10036080b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100360750(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = param_2;
    FUN_1003618e4();
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_100372370();
      }
      FUN_100361914(param_2,uVar2);
      *unaff_x20 = uVar2;
    }
  }
  else {
    uVar2 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    uVar4 = *unaff_x20;
    FUN_1003720d4(param_1,param_2,uVar2);
    *unaff_x20 = uVar4;
  }
  return;
}

