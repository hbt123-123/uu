// rea decompile_all
// name: FUN_10026ed78
// address: 0x10026ed78
// body: available
// range: 0x10026ed78-0x10026ee2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10026ed78(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  
  (**(code **)(*unaff_x20 + 0x10))();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_10003f030(param_1,lVar1);
    lVar4 = *(long *)(lVar1 + -8);
    lVar3 = *(long *)(lVar4 + 0x40);
    (**(code **)(lVar2 + 0x20))
              (&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2,lVar1,lVar2);
    (**(code **)(lVar4 + 8))(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar1);
  }
  return;
}

