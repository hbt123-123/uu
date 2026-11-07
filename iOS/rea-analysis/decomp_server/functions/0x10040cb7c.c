// rea decompile_all
// name: FUN_10040cb7c
// address: 0x10040cb7c
// body: available
// range: 0x10040cb7c-0x10040cc03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040cb7c(int *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((((*(byte *)(param_1 + 1) & 1) == 0) && (0 < param_3)) && (*param_1 == param_3)) {
    iVar1 = _kill(param_3,0);
    if ((iVar1 == -1) && (__s6Darwin5errnos5Int32Vvg(), iVar1 == 3)) {
      *param_1 = 0;
      uVar2 = 1;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  *param_2 = uVar2;
  return;
}

