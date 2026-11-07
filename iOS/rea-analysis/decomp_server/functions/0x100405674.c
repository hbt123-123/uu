// rea decompile_all
// name: FUN_100405674
// address: 0x100405674
// body: available
// range: 0x100405674-0x100405763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004056c8 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100405674(double param_1,ID param_2)

{
  code *pcVar1;
  ulong uVar2;
  ID IVar3;
  
  uVar2 = 0xc;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xc,0,0);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = _objc_msgSend(param_2,"maximumFramesPerSecond"), 0 < (long)uVar2)) {
    IVar3 = _objc_msgSend(param_2,"maximumFramesPerSecond");
    return IVar3;
  }
  FUN_1003d541c();
  _CGDisplayCopyDisplayMode();
  if ((uVar2 == 0) || (_CGDisplayModeGetRefreshRate(), param_1 <= 0.0)) {
    IVar3 = 0x1e;
  }
  else {
    _CGDisplayModeGetRefreshRate(uVar2);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10040575c);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100405760);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100405764);
      (*pcVar1)();
    }
    IVar3 = (ID)param_1;
  }
  return IVar3;
}

