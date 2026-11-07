// rea decompile_all
// name: FUN_100688040
// address: 0x100688040
// body: available
// range: 0x100688040-0x1006881f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006880e4 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006880fc to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100688128 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_100688040(void)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  uVar3 = 0;
  cVar1 = *(char *)(unaff_x20 + 0x31);
  if (cVar1 == '\0') {
    return *(ID *)(unaff_x20 + 0x20);
  }
  if (cVar1 == '\x02') {
    bVar2 = *(byte *)(unaff_x20 + 0x30);
    puVar5 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar4 = _objc_msgSend((ID)puVar5,"initWithInteger:",(ulong)bVar2 & 1);
    return IVar4;
  }
  if (cVar1 != '\x01') {
    puVar5 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar4 = _objc_msgSend((ID)puVar5,"initWithDouble:",0);
    return IVar4;
  }
  thunk_FUN_100686184(auStack_50);
  _swift_dynamicCast(&local_60,auStack_50,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
  if ((uVar3 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = local_60;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(local_60,uStack_58);
    _swift_bridgeObjectRelease(uStack_58);
  }
  puVar5 = &_OBJC_CLASS___NSDecimalNumber;
  _objc_allocWithZone();
  IVar6 = _objc_msgSend((ID)puVar5,"initWithString:",uVar8);
  FUN_10004003c(0,&DAT_100ab9ee0,&PTR__OBJC_CLASS___NSDecimalNumber_100a65ad8);
  IVar7 = NSDecimalNumber::notANumber((ID)&_OBJC_CLASS___NSDecimalNumber,"notANumber");
  IVar4 = IVar6;
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(IVar6,IVar7);
  if ((IVar4 & 1) != 0) {
    IVar6 = NSDecimalNumber::zero((ID)&_OBJC_CLASS___NSDecimalNumber,"zero");
  }
  return IVar6;
}

