// rea decompile_all
// name: _TtC6FCount6FCount::getCurrentDeviceID
// address: 0x100234e60
// body: available
// range: 0x100234e60-0x100234ed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100234ed0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6FCount6FCount::getCurrentDeviceID(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  
  lVar2 = 0;
  FUN_100227a8c();
  _swift_initStackObject();
  FUN_100226e0c();
  IVar3 = *(ID *)(lVar2 + 0xa8);
  uVar1 = *(undefined8 *)(lVar2 + 0xb0);
  _swift_bridgeObjectRetain(uVar1);
  _swift_release(lVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(IVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  return IVar3;
}

