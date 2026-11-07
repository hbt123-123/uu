// rea decompile_all
// name: FUN_100264fdc
// address: 0x100264fdc
// body: available
// range: 0x100264fdc-0x100265097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100264fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *self;
  ID IVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar3 = &DAT_100a81300;
  FUN_100004bb4(&DAT_100a81300,&DAT_1008153c8);
  _swift_allocObject();
  self = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar4 = _objc_msgSend((ID)self,"init");
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(ID *)(puVar3 + 0x10) = IVar4;
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_10004090c(param_1,param_2);
  FUN_10007ed2c(uVar1,uVar2);
  FUN_100264f2c(param_3,param_4);
  return;
}

