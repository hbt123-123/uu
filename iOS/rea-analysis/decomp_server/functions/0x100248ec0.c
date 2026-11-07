// rea decompile_all
// name: FUN_100248ec0
// address: 0x100248ec0
// body: available
// range: 0x100248ec0-0x10024900b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100248ec0(char param_1)

{
  ID IVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (param_1 == '\0') {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    puVar2 = (undefined1 *)0x746f6e20656c6946;
    uVar3 = 0xef2e646e756f6620;
  }
  else if (param_1 == '\x01') {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    puVar2 = (undefined1 *)0xd000000000000015;
    uVar3 = 0x80000001008a7990;
  }
  else {
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar3 = 0x80000001008a7970;
    puVar2 = &DAT_d000000000000013;
  }
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (puVar2,uVar3,0,0,IVar1,0,0xe000000000000000,0,0xe000000000000000);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = puVar2;
  return auVar4;
}

