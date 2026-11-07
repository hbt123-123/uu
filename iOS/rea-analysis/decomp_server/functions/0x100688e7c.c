// rea decompile_all
// name: FUN_100688e7c
// address: 0x100688e7c
// body: available
// range: 0x100688e7c-0x100688f07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100688f04 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100688e7c(undefined8 *param_1)

{
  undefined *self;
  ID IVar1;
  void *pvVar2;
  undefined8 uVar3;
  ID local_60 [3];
  undefined8 local_48;
  
  pvVar2 = (void *)*param_1;
  uVar3 = *(undefined8 *)((long)pvVar2 + 0x38);
  self = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar1 = _objc_msgSend((ID)self,"initWithDouble:",uVar3);
  uVar3 = 0;
  FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
  local_60[0] = IVar1;
  local_48 = uVar3;
  FUN_10067f3d8(local_60);
  _free(pvVar2);
  return;
}

