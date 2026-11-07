// rea decompile_all
// name: FUN_100250d98
// address: 0x100250d98
// body: available
// range: 0x100250d98-0x100250e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100250d98(long param_1,undefined1 (*param_2) [16])

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((param_1 != 0) && (param_2 != (undefined1 (*) [16])0x0)) {
    auVar2 = NEON_ext(*param_2,*param_2,8,1);
    *(long *)(param_1 + 0xa0) = auVar2._8_8_;
    *(long *)(param_1 + 0x98) = auVar2._0_8_;
    lVar1 = param_1;
    FUN_10024f750(param_1,param_1 + 0xd0,param_1 + 0x168,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0xa8) = (ulong)((int)lVar1 == 0);
  }
  return;
}

