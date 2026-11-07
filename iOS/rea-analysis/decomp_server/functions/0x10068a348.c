// rea decompile_all
// name: FUN_10068a348
// address: 0x10068a348
// body: available
// range: 0x10068a348-0x10068a3ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10068a348(uint param_1)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID local_50 [3];
  undefined8 local_38;
  
  if ((param_1 >> 0x10 & 1) == 0) {
    puVar1 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar2 = _objc_msgSend((ID)puVar1,"initWithShort:",(ulong)(uint)(int)(short)param_1);
    uVar3 = 0;
    FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
    local_50[0] = IVar2;
    local_38 = uVar3;
  }
  else {
    puVar1 = &_OBJC_CLASS___NSNull;
    _objc_allocWithZone();
    IVar2 = _objc_msgSend((ID)puVar1,"init");
    uVar3 = 0;
    FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
    local_50[0] = IVar2;
    local_38 = uVar3;
  }
  FUN_10067f3d8(local_50);
  return;
}

