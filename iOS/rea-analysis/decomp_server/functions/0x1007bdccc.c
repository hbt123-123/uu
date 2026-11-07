// rea decompile_all
// name: _TtC6Sentry21SentryMXCallStackTree::fromData:error:
// address: 0x1007bdccc
// body: available
// range: 0x1007bdccc-0x1007bdde3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007bdde0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007bdd8c) */
/* WARNING: Removing unreachable block (ram,0x0001007bddc0) */
/* WARNING: Removing unreachable block (ram,0x0001007bdd90) */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry21SentryMXCallStackTree::fromData_error_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ID local_48;
  
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
  uVar1 = 0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  uVar2 = uVar1;
  FUN_1007bdee8();
  puVar3 = &DAT_100abcd18;
  FUN_100240fdc(&DAT_100abcd18);
  __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
            (&local_48,uVar2,param_3,param_2,uVar2,puVar3);
  _swift_release(uVar1);
  FUN_100006cdc(param_3,param_2);
  return local_48;
}

