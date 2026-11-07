// rea decompile_all
// name: FUN_1003b1a40
// address: 0x1003b1a40
// body: available
// range: 0x1003b1a40-0x1003b1ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b1b8c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003b1a40(undefined8 param_1)

{
  ID self;
  ID IVar1;
  undefined *puVar2;
  char *pcVar3;
  
  if (DAT_100a89268 != -1) {
    _swift_once(&DAT_100a89268,FUN_1003b18c0);
  }
  __s10Foundation3URLVMa(0);
  FUN_10021bec0();
  __s10Foundation3URLV22appendingPathComponentyACSSF(param_1,0x646572616853,0xe600000000000000);
  pcVar3 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar1 = self;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar3);
  IVar1 = NSFileManager::fileExistsAtPath_(self,"fileExistsAtPath:",IVar1);
  if ((IVar1 & 1) != 0) {
    return (undefined *)0x0;
  }
  puVar2 = &DAT_100a8af50;
  FUN_100004bb4(&DAT_100a8af50,&DAT_10081f7e0);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x38) = PTR___sSSN_1009957f8;
  *(undefined8 *)(puVar2 + 0x20) = 0xd000000000000017;
  *(undefined8 *)(puVar2 + 0x28) = 0x80000001008b3b20;
  __ss5print_9separator10terminatoryypd_S2StF();
  _swift_bridgeObjectRelease(puVar2);
  return puVar2;
}

