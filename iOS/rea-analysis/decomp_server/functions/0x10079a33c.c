// rea decompile_all
// name: FUN_10079a33c
// address: 0x10079a33c
// body: available
// range: 0x10079a33c-0x10079a3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_10079a33c(char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    __dyld_image_count();
    if ((uint)pcVar3 != 0) {
      pcVar5 = (char *)0x0;
      do {
        pcVar4 = pcVar5;
        __dyld_get_image_name();
        if (param_2 == 0) {
          pcVar4 = _strstr(pcVar4,param_1);
          if (pcVar4 != (char *)0x0) {
            return pcVar5;
          }
        }
        else {
          iVar2 = _strcmp(pcVar4,param_1);
          if (iVar2 == 0) {
            return pcVar5;
          }
        }
        uVar1 = (int)pcVar5 + 1;
        pcVar5 = (char *)(ulong)uVar1;
      } while ((uint)pcVar3 != uVar1);
    }
  }
  return (char *)0xffffffff;
}

