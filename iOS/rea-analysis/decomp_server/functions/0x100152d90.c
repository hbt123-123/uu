// rea decompile_all
// name: FUN_100152d90
// address: 0x100152d90
// body: available
// range: 0x100152d90-0x100152e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100152d90(code *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x21;
  uint uVar3;
  
  lVar2 = *(long *)(param_3 + 0x10);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    do {
      lVar2 = lVar2 + -1;
      uVar1 = 0;
      (*param_1)();
      uVar3 = (uint)uVar1;
      if (unaff_x21 != 0) break;
    } while ((uVar1 & 1) == 0 && lVar2 != 0);
  }
  return uVar3 & 1;
}

