// rea decompile_all
// name: FUN_10079aa64
// address: 0x10079aa64
// body: available
// range: 0x10079aa64-0x10079aabf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10079aa64(char *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  ulong uVar4;
  
  bVar2 = false;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    FUN_1007ae37c(param_1,0x401);
    if ((int)pcVar3 < 1) {
      bVar2 = false;
    }
    else {
      uVar4 = (ulong)pcVar3 & 0xffffffff;
      do {
        uVar4 = uVar4 - 1;
        cVar1 = *param_1;
        bVar2 = cVar1 == '\0';
        param_1 = param_1 + 1;
      } while (cVar1 != '\0' && uVar4 != 0);
    }
  }
  return bVar2;
}

