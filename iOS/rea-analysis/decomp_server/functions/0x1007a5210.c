// rea decompile_all
// name: FUN_1007a5210
// address: 0x1007a5210
// body: available
// range: 0x1007a5210-0x1007a5293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a5210(undefined8 *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char local_32;
  char local_31;
  
  if (0 < param_3) {
    pbVar1 = param_2 + param_3;
    do {
      local_32 = "0123456789ABCDEF"[*param_2 >> 4];
      local_31 = "0123456789ABCDEF"[(ulong)*param_2 & 0xf];
      pcVar2 = &local_32;
      (*(code *)*param_1)(pcVar2,2,param_1[1]);
      if ((int)pcVar2 != 0) {
        return;
      }
      param_2 = param_2 + 1;
    } while (param_2 < pbVar1);
  }
  return;
}

