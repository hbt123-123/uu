// rea decompile_all
// name: FUN_100221e60
// address: 0x100221e60
// body: available
// range: 0x100221e60-0x100221f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100221e60(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ID self;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_58;
  undefined *puStack_50;
  
  self = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::operatingSystemVersion(self,"operatingSystemVersion",&local_58);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar2 = PTR___sSiN_100995968;
  puVar3 = PTR___sSiN_100995968;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  local_58 = puVar3;
  puStack_50 = puVar4;
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  puVar3 = puVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  auVar1._8_8_ = puStack_50;
  auVar1._0_8_ = local_58;
  return auVar1;
}

