// rea decompile_all
// name: FUN_10021c100
// address: 0x10021c100
// body: available
// range: 0x10021c100-0x10021c20f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021c100(void)

{
  undefined8 uVar1;
  char *pcVar2;
  ID IVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  IVar3 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = DAT_100a7ddb8;
  uVar4 = DAT_100a7ddb0;
  _swift_bridgeObjectRetain(DAT_100a7ddb8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  pcVar5 = "stringForKey:";
  IVar3 = NSUserDefaults::stringForKey_(IVar3,"stringForKey:",uVar4);
  if (IVar3 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _swift_beginAccess(&DAT_100b36309,auStack_48,1,0);
    DAT_100b36309 = 1;
    _swift_beginAccess(&DAT_100b36310,auStack_60,1,0);
    pcVar2 = DAT_100b36318;
    DAT_100b36310 = IVar3;
    DAT_100b36318 = pcVar5;
    _swift_bridgeObjectRelease(pcVar2);
  }
  return;
}

