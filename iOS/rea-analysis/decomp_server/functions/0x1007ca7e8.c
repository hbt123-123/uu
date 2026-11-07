// rea decompile_all
// name: _TtC6Sentry19SentryReplayOptions::replayBitRate
// address: 0x1007ca7e8
// body: available
// range: 0x1007ca7e8-0x1007ca853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry19SentryReplayOptions::replayBitRate(ID param_1,SEL param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  plVar1 = (long *)(param_1 + quality);
  _swift_beginAccess(plVar1,auStack_38,0,0);
  lVar4 = *plVar1;
  lVar3 = lVar4 * 20000;
  if (SUB168(SEXT816(lVar4) * SEXT816(20000),8) != lVar3 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ca850);
    (*pcVar2)();
  }
  if (!SCARRY8(lVar3,20000)) {
    return lVar3 + 20000;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ca854);
  (*pcVar2)();
}

