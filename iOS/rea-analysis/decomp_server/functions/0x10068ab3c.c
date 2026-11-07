// rea decompile_all
// name: FUN_10068ab3c
// address: 0x10068ab3c
// body: available
// range: 0x10068ab3c-0x10068abbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10068abbc to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10068ab3c(undefined8 *param_1)

{
  ushort uVar1;
  undefined *self;
  ID IVar2;
  undefined8 uVar3;
  void *pvVar4;
  ID local_50 [3];
  undefined8 local_38;
  
  pvVar4 = (void *)*param_1;
  uVar1 = *(ushort *)((long)pvVar4 + 0x34);
  self = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"initWithUnsignedShort:",(ulong)uVar1);
  uVar3 = 0;
  FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
  local_50[0] = IVar2;
  local_38 = uVar3;
  FUN_10067f3d8(local_50);
  _free(pvVar4);
  return;
}

