// rea decompile_all
// name: _TtC6Sentry17SentryLevelHelper::nameForLevel:
// address: 0x1007cdef0
// body: available
// range: 0x1007cdef0-0x1007cdf7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007cdf5c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry17SentryLevelHelper::nameForLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  ID IVar4;
  
  if (DAT_100abba58 != -1) {
    _swift_once(&DAT_100abba58,FUN_1007cdd44);
  }
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007cdf7c);
    (*pcVar3)();
  }
  if (param_3 < *(ulong *)(DAT_100b3a970 + 0x10)) {
    lVar1 = DAT_100b3a970 + param_3 * 0x10;
    IVar4 = *(ID *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    _swift_bridgeObjectRetain(uVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(IVar4,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    return IVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007cdf80);
  (*pcVar3)();
}

