// rea decompile_all
// name: FUN_10067d424
// address: 0x10067d424
// body: available
// range: 0x10067d424-0x10067d463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10067d424(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  
  uVar3 = 8 - (param_2 & 0xff);
  if ((uVar3 & 0xffffff00) == 0) {
    uVar1 = 0;
    if ((param_2 & 0xf8) == 0) {
      uVar1 = param_1 << ((ulong)param_2 & 7);
    }
    uVar2 = 0;
    if ((uVar3 & 0xf8) == 0) {
      uVar2 = (param_1 & 0xff) >> (ulong)(uVar3 & 7);
    }
    return uVar2 | uVar1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10067d464);
  (*pcVar4)();
}

