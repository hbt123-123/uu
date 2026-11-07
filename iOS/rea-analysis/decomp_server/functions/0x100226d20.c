// rea decompile_all
// name: FUN_100226d20
// address: 0x100226d20
// body: available
// range: 0x100226d20-0x100226e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100226d20(void)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined1 auVar4 [16];
  
  IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x80000001008a6640);
  IVar3 = NSFileManager::fileExistsAtPath_(IVar1,"fileExistsAtPath:",uVar2);
  if ((IVar3 & 1) == 0) {
    uVar2 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x80000001008a6660);
    IVar1 = NSFileManager::fileExistsAtPath_(IVar1,"fileExistsAtPath:",uVar2);
    uVar2 = 0x30;
    if ((int)IVar1 != 0) {
      uVar2 = 0x31;
    }
  }
  else {
    uVar2 = 0x31;
  }
  auVar4._8_8_ = 0xe100000000000000;
  auVar4._0_8_ = uVar2;
  return auVar4;
}

