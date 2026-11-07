// rea decompile_all
// name: _TtC6Sentry23SentryAppHangTypeMapper::getExceptionTypeWithAnrType:
// address: 0x1007bd470
// body: available
// range: 0x1007bd470-0x1007bd53b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007bd538 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry23SentryAppHangTypeMapper::getExceptionTypeWithAnrType_
             (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  char *pcVar2;
  ulong uVar3;
  
  IVar1 = 0xd00000000000001c;
  uVar3 = 0x80000001008da1e0;
  switch(param_3) {
  case 0:
    break;
  case 1:
    IVar1 = 0xd000000000000020;
    pcVar2 = "Fatal App Hang Non Fully Blocked";
    goto LAB_1007bd510;
  case 2:
    uVar3 = 0x80000001008da230;
    IVar1 = 0xd000000000000016;
    break;
  case 3:
    IVar1 = 0xd00000000000001a;
    pcVar2 = "App Hang Non Fully Blocked";
LAB_1007bd510:
    uVar3 = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
    break;
  default:
    uVar3 = 0xeb00000000676e69;
    IVar1 = 0x676e614820707041;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(IVar1,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  return IVar1;
}

