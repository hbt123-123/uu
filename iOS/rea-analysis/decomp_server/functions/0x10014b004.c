// rea decompile_all
// name: FUN_10014b004
// address: 0x10014b004
// body: available
// range: 0x10014b004-0x10014b12b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10014b004(ID param_1)

{
  ID IVar1;
  undefined *self;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  ID local_40;
  
  FUN_100401b14(0);
  local_40 = param_1;
  FUN_1003fb45c(FUN_100152658,auStack_50,0xd0000000000000b5,0x8000000100891cf0,0xd00000000000002f,
                0x8000000100892850,0x57,7);
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  IVar1 = _objc_msgSend(param_1,"code");
  self = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x8000000100892880);
  IVar1 = _objc_msgSend((ID)self,"initWithDomain:code:userInfo:",uVar2,IVar1,0);
  FUN_100616260(IVar1);
  return 0;
}

