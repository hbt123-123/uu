// rea decompile_all
// name: FUN_10051b270
// address: 0x10051b270
// body: available
// range: 0x10051b270-0x10051b27f inclusive
// range: 0x10051b29c-0x10051b2a3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051b270(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  int param_6)

{
  code *pcVar1;
  
  if (SCARRY8(param_1,param_5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10051b2a0);
    (*pcVar1)();
  }
  if (!SCARRY4(param_2,param_6)) {
    FUN_10051ac80(param_1 + param_5,param_2 + param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10051b2a4);
  (*pcVar1)();
}

