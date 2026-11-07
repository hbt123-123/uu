// rea decompile_all
// name: SAIdentifier::serialNumber
// address: 0x10070b440
// body: available
// range: 0x10070b440-0x10070b4df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070b4dc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAIdentifier::serialNumber(ID param_1,SEL param_2)

{
  char *pcVar1;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(uint *)PTR__kIOMasterPortDefault_100995608;
  pcVar1 = "IOPlatformExpertDevice";
  _IOServiceMatching("IOPlatformExpertDevice");
  _IOServiceGetMatchingService(uVar4,pcVar1);
  if ((int)uVar4 != 0) {
    uVar2 = uVar4;
    _IORegistryEntryCreateCFProperty();
    _IOObjectRelease(uVar4);
    if (uVar2 != 0) {
      IVar3 = NSString::stringWithString_((ID)&_OBJC_CLASS___NSString,uVar2);
      _CFRelease(uVar2);
      return IVar3;
    }
  }
  return 0;
}

