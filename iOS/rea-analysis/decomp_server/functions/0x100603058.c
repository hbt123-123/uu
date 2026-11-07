// rea decompile_all
// name: FUN_100603058
// address: 0x100603058
// body: available
// range: 0x100603058-0x1006030bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100603058(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined1 **)(unaff_x20 + 0x10);
  if (puVar2 != (undefined1 *)0x0) {
    _FSEventStreamStart();
    if ((int)puVar2 == 0) {
      FUN_100603214();
      _swift_allocError(&DAT_1009ddb58,puVar2,0,0);
      *puVar2 = 1;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 0x10) = 0;
      _swift_willThrow();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006030c0);
  (*pcVar1)();
}

