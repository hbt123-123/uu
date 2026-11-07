// rea decompile_all
// name: FUN_1000cb3a0
// address: 0x1000cb3a0
// body: available
// range: 0x1000cb3a0-0x1000cb4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000cb3a0(void)

{
  ID IVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  IVar1 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  uVar2 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x8000000100885df0);
  IVar1 = NSProcessInfo::beginActivityWithOptions_reason_
                    (IVar1,"beginActivityWithOptions:reason:",0x10000000000,uVar2);
  *(ID *)(unaff_x20 + 0x10) = IVar1;
  FUN_1003e6e10(0);
  FUN_1003e6b94(0x100000000,0x20705520656b6157,0xef79616c70736944);
  FUN_1000cb574();
  return;
}

