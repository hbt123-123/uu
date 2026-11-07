// rea decompile_all
// name: FUN_1001310d0
// address: 0x1001310d0
// body: available
// range: 0x1001310d0-0x10013118b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001310d0(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *self;
  ulong uVar4;
  long lVar5;
  ID IVar6;
  long *unaff_x20;
  
  if (*unaff_x20 == 2) {
    uVar4 = unaff_x20[5];
    uVar2 = unaff_x20[6];
    uVar1 = uVar4 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lVar5 = unaff_x20[7];
      lVar3 = unaff_x20[8];
      self = &_OBJC_CLASS___NSURLCredential;
      _objc_allocWithZone();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar2);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar5,lVar3);
      IVar6 = _objc_msgSend((ID)self,"initWithUser:password:persistence:",uVar4,lVar5,1);
      return IVar6;
    }
  }
  return 0;
}

