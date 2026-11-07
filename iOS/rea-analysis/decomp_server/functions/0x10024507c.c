// rea decompile_all
// name: FUN_10024507c
// address: 0x10024507c
// body: available
// range: 0x10024507c-0x10024518f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100245174 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_10024507c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  uVar2 = DAT_100a7fa08;
  uVar3 = DAT_100a7fa00;
  lVar1 = DAT_100a7ddd8;
  _swift_bridgeObjectRetain(DAT_100a7fa08);
  if (lVar1 != -1) {
    _swift_once(&DAT_100a7ddd8,FUN_1002230c8);
  }
  IVar4 = DAT_100a7e490;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  _objc_msgSend(IVar4,"removeObjectForKey:",uVar3);
  _objc_msgSend(IVar4,"synchronize");
  IVar4 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar2 = DAT_100a7fa18;
  uVar3 = DAT_100a7fa10;
  _swift_bridgeObjectRetain(DAT_100a7fa18);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  NSUserDefaults::removeObjectForKey_(IVar4,"removeObjectForKey:",uVar3);
  return 0;
}

