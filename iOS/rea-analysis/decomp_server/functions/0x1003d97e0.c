// rea decompile_all
// name: FUN_1003d97e0
// address: 0x1003d97e0
// body: available
// range: 0x1003d97e0-0x1003d98b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1003d97e0(void)

{
  uint uVar1;
  ID IVar2;
  char *pcVar3;
  long local_58;
  long local_50;
  
  IVar2 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::operatingSystemVersion(IVar2,"operatingSystemVersion",&local_58);
  IVar2 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  pcVar3 = "operatingSystemVersion";
  NSProcessInfo::operatingSystemVersion(IVar2,"operatingSystemVersion",&local_58);
  uVar1 = 0;
  if ((local_58 == 0xf) && (local_50 == 0)) {
    FUN_1003d9b04(0);
    FUN_1003d9bf4();
    _swift_bridgeObjectRelease(pcVar3);
    uVar1 = uVar1 & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

