// rea decompile_all
// name: FUN_10006c2b0
// address: 0x10006c2b0
// body: available
// range: 0x10006c2b0-0x10006c33b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006c2b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  FUN_100098548(0,param_2);
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  FUN_100098b0c(&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),FUN_10006c33c,0,
                param_2);
  (**(code **)(lVar3 + 0x20))
            (param_1,&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}

