// rea decompile_all
// name: _TtC14UURemoteServer15StreamerManager::streamerDidReceiveNewControl:appData:length:negotiateResult:negotiateResultLength:
// address: 0x1001b445c
// body: available
// range: 0x1001b445c-0x1001b4543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001b4540 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x2c bytes */

void _TtC14UURemoteServer15StreamerManager::
     streamerDidReceiveNewControl_appData_length_negotiateResult_negotiateResultLength_
               (ID param_1,SEL param_2,unsigned_int param_3,ID param_4,int param_5,ID param_6,
               int param_7)

{
  SEL pcVar1;
  
  if (param_4 == 0) {
    pcVar1 = (SEL)0xf000000000000000;
  }
  else {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_4);
    pcVar1 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = (SEL)0xf000000000000000;
  }
  else {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_6);
  }
  FUN_1001b4e74(param_3,param_4,pcVar1,param_6,param_2);
  FUN_100006cc8(param_6,param_2);
  FUN_100006cc8(param_4,pcVar1);
  return;
}

