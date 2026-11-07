// rea decompile_all
// name: FUN_1003e9bec
// address: 0x1003e9bec
// body: available
// range: 0x1003e9bec-0x1003e9d73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 * FUN_1003e9bec(undefined8 param_1,ulong param_2)

{
  ID self;
  ID IVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *self_00;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 *unaff_x20;
  long unaff_x21;
  
  if (((param_2 & 1) == 0) || (FUN_1003ea2d8(param_1), unaff_x21 == 0)) {
    pcVar4 = "defaultManager";
    self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    IVar1 = self;
    __s10Foundation3URLV4pathSSvg();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar4);
    pcVar4 = "fileExistsAtPath:";
    IVar1 = NSFileManager::fileExistsAtPath_(self,"fileExistsAtPath:",IVar1);
    lVar2 = 0;
    if ((int)IVar1 == 0) {
      self_00 = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      uVar5 = 0x80000001008b4fd0;
      unaff_x20 = &DAT_d000000000000010;
    }
    else {
      __s10Foundation3URLV4pathSSvg();
      __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg();
      _swift_bridgeObjectRelease(pcVar4);
      puVar3 = (undefined1 *)(lVar2 + 0x20);
      __s6Darwin4openys5Int32VSPys4Int8VG_ADtF(puVar3,0x8000);
      _swift_release(lVar2);
      if (-1 < (int)puVar3) {
        return puVar3;
      }
      self_00 = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      unaff_x20 = (undefined1 *)0x656c69466e65704f;
      uVar5 = 0xed0000726f727245;
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(unaff_x20,uVar5);
    _objc_msgSend((ID)self_00,"initWithDomain:code:userInfo:",unaff_x20,0xffffffffffffffff,0);
    _swift_willThrow(0);
  }
  return unaff_x20;
}

