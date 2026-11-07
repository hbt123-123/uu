// rea decompile_all
// name: FUN_1005ccdb8
// address: 0x1005ccdb8
// body: available
// range: 0x1005ccdb8-0x1005cce17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005ccdb8(undefined8 *param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  char local_21;
  
  *param_1 = *(undefined8 *)(unaff_x20 + _TtC12NRDSecureLog12SecureLogger::handle);
  FUN_1005ce9c8();
  FUN_1005ca6c8(&local_21);
  if (local_21 != '\a') {
    *(char *)(param_1 + 1) = local_21;
    auVar2._8_8_ = param_1 + 1;
    auVar2._0_8_ = FUN_1005cce18;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005cce18);
  (*pcVar1)();
}

