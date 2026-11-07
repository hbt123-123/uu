// rea decompile_all
// name: FUN_1007bccc8
// address: 0x1007bccc8
// body: available
// range: 0x1007bccc8-0x1007bcecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007bce94 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 *
FUN_1007bccc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ID param_4,
             undefined8 param_5)

{
  code *pcVar1;
  ID IVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined *puVar5;
  
  puVar3 = param_1;
  if (param_1 != (undefined8 *)0x0) {
    if (DAT_100abba18 != -1) {
      puVar3 = &DAT_100abba18;
      _swift_once(&DAT_100abba18,FUN_1007bc824);
    }
    if (DAT_100b3a8b8 <= param_1) {
LAB_1007bcd74:
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
      IVar2 = _objc_msgSend(param_4,"lastPathComponent");
      if (IVar2 != 0) {
        pcVar4 = "stringByDeletingPathExtension";
        IVar2 = _objc_msgSend(IVar2,"stringByDeletingPathExtension");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar2);
        __sSS6appendyySSF(IVar2,pcVar4);
        __sSS6appendyySSF(0x3a,0xe100000000000000);
        puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar5);
        __sSS6appendyySSF(0x205d,0xe200000000000000);
        __sSS6appendyySSF(param_2,param_3);
        FUN_1007bc9ac(0x5b,0xe100000000000000,param_1);
        _swift_bridgeObjectRelease(pcVar4);
        _swift_bridgeObjectRelease(0xe100000000000000);
        return (undefined8 *)0x0;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007bcecc);
      (*pcVar1)();
    }
    if (DAT_100abcb40 == '\x01') {
      if (DAT_100abba10 != -1) {
        puVar3 = &DAT_100abba10;
        _swift_once(&DAT_100abba10,FUN_1007bc814);
      }
      if (DAT_100b3a8b0 <= param_1) goto LAB_1007bcd74;
    }
  }
  return puVar3;
}

