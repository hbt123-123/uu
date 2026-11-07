// rea decompile_all
// name: FUN_100687a98
// address: 0x100687a98
// body: available
// range: 0x100687a98-0x100687b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100687a98(undefined8 param_1,long param_2)

{
  undefined *self;
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_70;
  long lStack_68;
  undefined *local_58;
  ID local_50 [3];
  undefined8 local_38;
  
  if (param_2 == 0) {
    self = &_OBJC_CLASS___NSNull;
    _objc_allocWithZone();
    IVar1 = _objc_msgSend((ID)self,"init");
    uVar2 = 0;
    FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
    local_50[0] = IVar1;
    local_38 = uVar2;
  }
  else {
    local_58 = PTR___sSSN_1009957f8;
    local_70 = param_1;
    lStack_68 = param_2;
    FUN_10007f3d4(&local_70,local_50);
  }
  FUN_10067f3d8(local_50);
  return;
}

