// rea decompile_all
// name: FUN_10017006c
// address: 0x10017006c
// body: available
// range: 0x10017006c-0x10017019b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10017006c(ID param_1)

{
  ID IVar1;
  undefined *self;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  ID local_50;
  
  IVar1 = param_1;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  IVar1 = _objc_msgSend(IVar1,"code");
  self = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x8000000100895980);
  IVar1 = _objc_msgSend((ID)self,"initWithDomain:code:userInfo:",uVar2,IVar1,0);
  uVar2 = 0;
  FUN_100401b14(0);
  local_50 = param_1;
  FUN_1003fb4ec(uVar2,FUN_100170398,auStack_60,0xd0000000000000b1,0x8000000100895d70,
                0xd000000000000029,0x8000000100895e30,0x38,7);
  FUN_100616260(IVar1);
  return 0;
}

