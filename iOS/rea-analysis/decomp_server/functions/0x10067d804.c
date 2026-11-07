// rea decompile_all
// name: FUN_10067d804
// address: 0x10067d804
// body: available
// range: 0x10067d804-0x10067d833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10067d804(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  
  if (param_2 < 0x21) {
    uVar1 = 0;
    if (param_2 < 0x20) {
      uVar1 = param_1 >> (ulong)(param_2 & 0x1f);
    }
    uVar2 = 0;
    if (0x20 - param_2 < 0x20) {
      uVar2 = param_1 << (ulong)(0x20 - param_2 & 0x1f);
    }
    return uVar2 | uVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10067d834);
  (*pcVar3)();
}

