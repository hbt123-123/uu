// rea decompile_all
// name: StreamerWrapper::init
// address: 0x10037588c
// body: available
// range: 0x10037588c-0x10037597f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID StreamerWrapper::init(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 *puVar2;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::StreamerWrapper;
  local_30 = param_1;
  IVar1 = NSObject::init((ID)&local_30,"init");
  if (IVar1 != 0) {
    puVar2 = (undefined8 *)(IVar1 + 0x10);
    *puVar2 = FUN_100375994;
    *(code **)(IVar1 + 0x18) = FUN_100375a80;
    *(code **)(IVar1 + 0x20) = FUN_100375b6c;
    *(code **)(IVar1 + 0x28) = FUN_100375c58;
    *(code **)(IVar1 + 0x30) = FUN_100375d44;
    *(code **)(IVar1 + 0x38) = FUN_100375df4;
    *(code **)(IVar1 + 0x40) = FUN_100375ee0;
    *(code **)(IVar1 + 0x48) = FUN_100375fcc;
    *(code **)(IVar1 + 0x50) = FUN_100376148;
    *(code **)(IVar1 + 0x58) = FUN_100376220;
    *(code **)(IVar1 + 0x78) = FUN_100376500;
    *(code **)(IVar1 + 0x80) = FUN_100376634;
    *(code **)(IVar1 + 0x60) = FUN_100376330;
    *(code **)(IVar1 + 0x68) = FUN_100376450;
    *(code **)(IVar1 + 0x70) = FUN_100376720;
    _ExchangeControlledInterface();
    *(undefined8 **)(IVar1 + 8) = puVar2;
  }
  return IVar1;
}

