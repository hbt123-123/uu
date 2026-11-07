// rea decompile_all
// name: FUN_10018d958
// address: 0x10018d958
// body: available
// range: 0x10018d958-0x10018da6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018d958(undefined8 param_1)

{
  ID self;
  ID IVar1;
  char *pcVar2;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  pcVar2 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar1 = self;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar2);
  IVar1 = NSFileManager::fileExistsAtPath_(self,"fileExistsAtPath:",IVar1);
  if ((int)IVar1 != 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_40 = param_1;
    FUN_1003fb45c(FUN_100191ecc,auStack_50,0xd0000000000000ad,0x8000000100890a70,0xd00000000000001f,
                  0x8000000100898ba0,0x90,7);
    FUN_10021a470(param_1);
  }
  return;
}

