// rea decompile_all
// name: FUN_100688c64
// address: 0x100688c64
// body: available
// range: 0x100688c64-0x100688d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100688c64(undefined8 *param_1)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  ID local_60 [3];
  undefined8 local_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar3 = *param_1;
    ppuVar4 = &PTR__OBJC_CLASS___NSNumber_100a65780;
    puVar1 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar2 = _objc_msgSend((ID)puVar1,"initWithDouble:",uVar3);
    puVar1 = &DAT_100ab9e90;
  }
  else {
    ppuVar4 = &PTR__OBJC_CLASS___NSNull_100a659f8;
    puVar1 = &_OBJC_CLASS___NSNull;
    _objc_allocWithZone();
    IVar2 = _objc_msgSend((ID)puVar1,"init");
    puVar1 = &DAT_100ab9e80;
  }
  uVar3 = 0;
  FUN_10004003c(0,puVar1,ppuVar4);
  local_60[0] = IVar2;
  local_48 = uVar3;
  FUN_10067f3d8(local_60);
  return;
}

