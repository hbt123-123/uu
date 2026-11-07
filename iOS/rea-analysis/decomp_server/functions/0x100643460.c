// rea decompile_all
// name: FUN_100643460
// address: 0x100643460
// body: available
// range: 0x100643460-0x10064349f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100643460(long *param_1,byte param_2,long param_3,long param_4,char param_5,long param_6)

{
  if (param_5 == '\0') {
    if (param_3 != 0 || param_4 != 0) goto LAB_100643488;
  }
  else if ((param_5 == '\x01') || (*(long *)(param_6 + 0x10) != 0)) goto LAB_100643488;
  param_2 = 0;
LAB_100643488:
  *param_1 = param_3;
  param_1[1] = param_4;
  *(char *)(param_1 + 2) = param_5;
  param_1[3] = param_6;
  *(byte *)(param_1 + 4) = param_2 & 1;
  return;
}

