// rea decompile_all
// name: FUN_100694548
// address: 0x100694548
// body: available
// range: 0x100694548-0x100694597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100694548(byte *param_1)

{
  byte *pbVar1;
  __darwin_ct_rune_t _Var2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)param_1;
  pbVar1 = *(byte **)param_1 + *(long *)(param_1 + 8);
  if (-1 < (char)param_1[0x17]) {
    pbVar3 = param_1;
    pbVar1 = param_1 + param_1[0x17];
  }
  for (; pbVar3 != pbVar1; pbVar3 = pbVar3 + 1) {
    _Var2 = ___tolower((uint)*pbVar3);
    *pbVar3 = (byte)_Var2;
  }
  return;
}

