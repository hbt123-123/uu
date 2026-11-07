// rea decompile_all
// name: FUN_100775cbc
// address: 0x100775cbc
// body: available
// range: 0x100775cbc-0x100775de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100775d68 to 0x1007b02e4 FUN_1007b02e4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100775de0 to 0x1007de2fc _close (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100775cbc(void)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (DAT_100b2de10 == 0) {
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySessionReplaySyncC.c"
                  ,0x2f,"There is no path to write replay information");
    return;
  }
  uVar1 = DAT_100b2de10;
  _open(DAT_100b2de10,0x602);
  if ((int)uVar1 < 1) {
    piVar3 = ___error();
    _strerror(*piVar3);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySessionReplaySyncC.c"
                  ,0x37,"Could not open replay info crash for file %s: %s");
    return;
  }
  uVar2 = uVar1;
  FUN_10074a3cc();
  if ((uVar2 & 1) == 0) {
    uVar4 = 0x3d;
  }
  else {
    uVar2 = uVar1;
    FUN_10074a3cc(uVar1,&DAT_100b2de08,8);
    if ((uVar2 & 1) != 0) goto LAB_100775dd0;
    uVar4 = 0x44;
  }
  FUN_1007b02e4("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySessionReplaySyncC.c"
                ,uVar4,"Error writing replay info for crash.");
LAB_100775dd0:
  _close(uVar1);
  return;
}

