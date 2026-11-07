// rea decompile_all
// name: FUN_100529cec
// address: 0x100529cec
// body: available
// range: 0x100529cec-0x100529d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100529cec(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  
  FUN_10053320c();
  if (((param_1 & 1) == 0) &&
     ((lVar3 = *(long *)(unaff_x20 + 0x70), lVar3 < 1 || (FUN_1005363c8(0x2c), unaff_x21 == 0)))) {
    if (*(long *)(unaff_x20 + 0x80) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100529d84);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(unaff_x20 + 0x60);
    FUN_10053716c(*(undefined8 *)(unaff_x20 + 0x98),uVar2,*(undefined8 *)(unaff_x20 + 0x68));
    if ((unaff_x21 == 0) && ((uVar2 & 1) == 0)) {
      if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100529d80);
        (*pcVar1)();
      }
      *(long *)(unaff_x20 + 0x70) = lVar3 + 1;
    }
  }
  return;
}

