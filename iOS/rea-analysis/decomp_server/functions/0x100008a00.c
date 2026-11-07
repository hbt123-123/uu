// rea decompile_all
// name: FUN_100008a00
// address: 0x100008a00
// body: available
// range: 0x100008a00-0x100008bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100008a00(ID *param_1,double param_2,double param_3,ID param_4)

{
  code *pcVar1;
  ID IVar2;
  ulong uVar3;
  undefined1 uVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = param_2;
  dVar6 = param_3;
  _objc_msgSend(param_4,"size");
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100008b98);
    (*pcVar1)();
  }
  if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100008b9c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100008ba0);
    (*pcVar1)();
  }
  uVar3 = 0;
  IVar2 = _objc_msgSend(param_4,"size");
  if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100008ba4);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100008ba8);
    (*pcVar1)();
  }
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100008bac);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100008bb0);
    (*pcVar1)();
  }
  if ((((ulong)ABS(param_3) < 0x7ff0000000000000) && ((ulong)ABS(param_2) < 0x7ff0000000000000)) &&
     ((ulong)ABS(dVar6) < 0x7ff0000000000000)) {
    if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100008bb8);
      (*pcVar1)();
    }
    if (param_3 < 9.223372036854776e+18) {
      FUN_100009afc();
      if ((IVar2 == 0) || (FUN_10000873c(), (uVar3 & 1) != 0)) {
        IVar2 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *param_1 = IVar2;
      param_1[1] = (long)dVar5;
      param_1[2] = (long)dVar6;
      param_1[3] = (long)param_2;
      param_1[4] = (long)param_3;
      *(undefined1 *)(param_1 + 5) = uVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100008bbc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100008bb4);
  (*pcVar1)();
}

