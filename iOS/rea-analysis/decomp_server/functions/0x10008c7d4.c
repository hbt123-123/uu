// rea decompile_all
// name: FUN_10008c7d4
// address: 0x10008c7d4
// body: available
// range: 0x10008c7d4-0x10008c8c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008c7d4(long *param_1,double param_2,ID *param_3)

{
  code *pcVar1;
  ID self;
  double dVar2;
  
  self = *param_3;
  _objc_msgSend(self,"frame");
  _CGRectGetWidth();
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10008c8b4);
    (*pcVar1)();
  }
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10008c8b8);
    (*pcVar1)();
  }
  dVar2 = 9.223372036854776e+18;
  if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10008c8bc);
    (*pcVar1)();
  }
  _objc_msgSend(self,"frame");
  _CGRectGetHeight();
  if ((ulong)ABS(dVar2) < 0x7ff0000000000000) {
    if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10008c8c4);
      (*pcVar1)();
    }
    if (dVar2 < 9.223372036854776e+18) {
      *param_1 = (long)param_2;
      param_1[1] = (long)dVar2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10008c8c8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10008c8c0);
  (*pcVar1)();
}

