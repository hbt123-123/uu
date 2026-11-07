// rea decompile_all
// name: FUN_1007a6bc8
// address: 0x1007a6bc8
// body: available
// range: 0x1007a6bc8-0x1007a6d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

byte FUN_1007a6bc8(ID param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ID IVar4;
  ID IVar5;
  
  iVar3 = 1;
  FUN_1007070fc(1,0xb,3,0);
  if (iVar3 != 0) {
    IVar4 = objc_stub::FUN_1007f79a0(param_1);
    IVar4 = objc_stub::firstObject(IVar4);
    if (IVar4 != 0) goto LAB_1007a6c98;
  }
  IVar4 = objc_stub::userInfo(param_1);
  IVar4 = objc_stub::valueForKey_(IVar4,*(undefined8 *)PTR__NSUnderlyingErrorKey_100995328);
  if (IVar4 != 0) {
    IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSError);
    IVar5 = objc_stub::isKindOfClass_(IVar4,IVar5);
    if ((IVar5 & 1) != 0) goto LAB_1007a6c98;
  }
  IVar4 = param_1;
LAB_1007a6c98:
  IVar5 = objc_stub::domain(IVar4);
  if (IVar5 == *(ID *)PTR__NSPOSIXErrorDomain_100995308) {
    IVar5 = objc_stub::code(IVar4);
    bVar1 = IVar5 == 0x3f;
  }
  else {
    bVar1 = false;
  }
  IVar5 = objc_stub::domain(IVar4);
  if (IVar5 == *(ID *)PTR__NSCocoaErrorDomain_1009952a0) {
    IVar4 = objc_stub::code(IVar4);
    bVar2 = IVar4 == 0x200;
  }
  else {
    bVar2 = false;
  }
  return bVar1 | bVar2;
}

