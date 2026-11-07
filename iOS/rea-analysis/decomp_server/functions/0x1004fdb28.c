// rea decompile_all
// name: FUN_1004fdb28
// address: 0x1004fdb28
// body: available
// range: 0x1004fdb28-0x1004fdbbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fdb28(undefined1 *param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  
  if (unaff_x20[3] == 0) {
    lVar2 = *unaff_x20 - unaff_x20[2];
    if (SCARRY8(unaff_x20[1],lVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004fdbc0);
      (*pcVar1)();
    }
    *unaff_x20 = unaff_x20[2];
    unaff_x20[1] = unaff_x20[1] + lVar2;
    FUN_100505214();
    if (unaff_x21 == 0) {
      if (((ulong)param_1 >> 0x20 & 1) == 0) {
        FUN_100504f64();
        unaff_x20[3] = *unaff_x20;
      }
      else {
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,param_1,0,0);
        *param_1 = 1;
        _swift_willThrow();
      }
    }
  }
  else {
    *unaff_x20 = unaff_x20[3];
  }
  return;
}

