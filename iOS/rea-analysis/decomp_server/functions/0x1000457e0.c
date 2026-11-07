// rea decompile_all
// name: FUN_1000457e0
// address: 0x1000457e0
// body: available
// range: 0x1000457e0-0x1000458ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000457e0(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if ((long)param_1 < 1 || (long)param_2 < 1) {
    return 0;
  }
  dVar3 = 2.0;
  if ((param_3 & 1) == 0) {
    dVar3 = 1.0;
  }
  dVar4 = 3840.0 / (dVar3 * (double)param_1);
  dVar3 = 2400.0 / (dVar3 * (double)param_2);
  dVar5 = (double)NEON_fminnm(dVar3,0x3ff0000000000000);
  if (dVar4 <= dVar3) {
    dVar3 = dVar4;
  }
  if (1.0 <= dVar4) {
    dVar3 = dVar5;
  }
  dVar4 = (double)(long)(dVar3 * (double)param_1);
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000458ec);
    (*pcVar1)();
  }
  if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000458f0);
    (*pcVar1)();
  }
  if (dVar4 < 9.223372036854776e+18) {
    lVar2 = (long)dVar4;
    if (lVar2 < 2) {
      lVar2 = 1;
    }
    dVar3 = (double)(long)(dVar3 * (double)param_2);
    if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000458f8);
      (*pcVar1)();
    }
    if (dVar3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000458fc);
      (*pcVar1)();
    }
    if (dVar3 < 9.223372036854776e+18) {
      return lVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100045900);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000458f4);
  (*pcVar1)();
}

