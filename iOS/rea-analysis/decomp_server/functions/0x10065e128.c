// rea decompile_all
// name: FUN_10065e128
// address: 0x10065e128
// body: available
// range: 0x10065e128-0x10065e1af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065e128(long param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(param_5 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_2)(param_1,param_1 + *(long *)(*(long *)(param_4 + -8) + 0x40),
             &stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (param_8,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_5);
  }
  return;
}

