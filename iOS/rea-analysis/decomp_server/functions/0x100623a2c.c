// rea decompile_all
// name: FUN_100623a2c
// address: 0x100623a2c
// body: available
// range: 0x100623a2c-0x100623adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100623a2c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  lVar2 = 0xff;
  FUN_100616300();
  lVar3 = 0;
  __sSqMa(0,lVar2);
  puVar5 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10061533c(puVar5);
  lVar3 = *(long *)(lVar2 + -8);
  puVar4 = puVar5;
  (**(code **)(lVar3 + 0x30))(puVar5,1,lVar2);
  if ((int)puVar4 != 1) {
    (**(code **)(lVar3 + 0x20))(param_1,puVar5,lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100623ae0);
  (*pcVar1)();
}

