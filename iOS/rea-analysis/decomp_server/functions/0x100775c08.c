// rea decompile_all
// name: FUN_100775c08
// address: 0x100775c08
// body: available
// range: 0x100775c08-0x100775ca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100775c6c to 0x1007df01c _strlcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100775c08(char *param_1)

{
  size_t sVar1;
  
  DAT_100b2de08 = 0;
  DAT_100b2de00 = 0;
  if (DAT_100b2de10 != (void *)0x0) {
    _free(DAT_100b2de10);
  }
  sVar1 = _strlen(param_1);
  DAT_100b2de10 = _malloc(sVar1 + 1);
  if (DAT_100b2de10 != (char *)0x0) {
    _strlcpy(DAT_100b2de10,param_1,sVar1 + 1);
    return;
  }
  DAT_100b2de10 = (char *)0x0;
  FUN_1007b02e4("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySessionReplaySyncC.c"
                ,0x20,
                "Could not copy the path to save session replay in case of an error. File path: %s")
  ;
  return;
}

