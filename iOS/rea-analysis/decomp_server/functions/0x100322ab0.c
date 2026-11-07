// rea decompile_all
// name: FUN_100322ab0
// address: 0x100322ab0
// body: available
// range: 0x100322ab0-0x100322b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100322ab0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = param_3;
  FUN_100004bb4(param_3,param_4);
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  FUN_10007f314(param_1,&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3,
                param_4);
  FUN_100004bb4(param_5,param_6);
  __sScC6resume9returningyxn_tF
            (&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_5);
  return;
}

