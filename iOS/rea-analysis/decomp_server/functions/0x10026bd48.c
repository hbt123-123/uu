// rea decompile_all
// name: FUN_10026bd48
// address: 0x10026bd48
// body: available
// range: 0x10026bd48-0x10026be3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026bd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined *self;
  ID IVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100264e38();
  puVar3 = &DAT_100a813a8;
  FUN_100004bb4(&DAT_100a813a8,&DAT_100815528);
  _swift_allocObject();
  self = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"init");
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  puVar3 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)puVar3,"init");
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined1 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_7;
  *(ID *)(unaff_x20 + 0x68) = IVar2;
  return;
}

