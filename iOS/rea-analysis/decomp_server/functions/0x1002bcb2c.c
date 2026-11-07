// rea decompile_all
// name: FUN_1002bcb2c
// address: 0x1002bcb2c
// body: available
// range: 0x1002bcb2c-0x1002bcb5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bcb2c(ulong *param_1,ulong *param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002bcb58);
    (*pcVar1)();
  }
  uVar2 = *param_2;
  if (param_3 != 0) {
    if ((uVar2 ^ 0x7fffffffffffffff) <= param_3 - 1U) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002bcb5c);
      (*pcVar1)();
    }
    uVar2 = uVar2 + param_3;
  }
  *param_1 = uVar2;
  return;
}

