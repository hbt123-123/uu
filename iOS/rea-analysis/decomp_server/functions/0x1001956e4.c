// rea decompile_all
// name: FUN_1001956e4
// address: 0x1001956e4
// body: available
// range: 0x1001956e4-0x10019584f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1001956e4(ID param_1,long param_2)

{
  ID IVar1;
  undefined *self;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  ID local_60;
  undefined1 auStack_58 [24];
  
  IVar1 = param_1;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  IVar1 = _objc_msgSend(IVar1,"code");
  self = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  uVar2 = 0x656c7069746c756d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c7069746c756d,0xec00000061746144);
  IVar1 = _objc_msgSend((ID)self,"initWithDomain:code:userInfo:",uVar2,IVar1,0);
  uVar2 = 0;
  FUN_100401b14(0);
  local_60 = param_1;
  FUN_1003fb45c(uVar2,FUN_100198b28,auStack_70,0xd0000000000000b0,0x8000000100899320,
                0xd00000000000001a,0x80000001008994d0,0x3f,7);
  _swift_beginAccess(param_2 + 0x10,auStack_58,1,0);
  *(ID *)(param_2 + 0x10) = IVar1;
  FUN_100616260(IVar1);
  return 0;
}

