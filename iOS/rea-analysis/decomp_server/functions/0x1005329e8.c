// rea decompile_all
// name: FUN_1005329e8
// address: 0x1005329e8
// body: available
// range: 0x1005329e8-0x100532aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005329e8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (param_2 == 1) {
    if ((*(byte *)((long)unaff_x20 + 0x11) & 1) == 0) {
      if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100532aa8);
        (*pcVar1)();
      }
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100532aac);
        (*pcVar1)();
      }
      FUN_1004f9e80(*unaff_x20,unaff_x20[1]);
    }
    else {
      *unaff_x20 = (long)",";
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
    }
  }
  else {
    FUN_1004f9e80(":",1);
    if (*(char *)((long)unaff_x20 + 0x22) == '\x01') {
      FUN_10052badc(param_1);
      return;
    }
  }
  FUN_10052bf38(param_1);
  return;
}

