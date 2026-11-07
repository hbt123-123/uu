// rea decompile_all
// name: FUN_100687e64
// address: 0x100687e64
// body: available
// range: 0x100687e64-0x100687ecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100687e64(ID param_1)

{
  undefined8 uVar1;
  undefined *self;
  ID local_40 [3];
  undefined8 local_28;
  
  uVar1 = 0;
  FUN_10004003c(0,&DAT_100ab9ed8,&PTR__OBJC_CLASS___NSObject_100a65960);
  local_28 = uVar1;
  if (param_1 == 0) {
    self = &_OBJC_CLASS___NSNull;
    _objc_allocWithZone();
    param_1 = _objc_msgSend((ID)self,"init");
  }
  local_40[0] = param_1;
  FUN_10067f3d8(local_40);
  return;
}

