// rea decompile_all
// name: FUN_1000a0144
// address: 0x1000a0144
// body: available
// range: 0x1000a0144-0x1000a01f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a0144(long param_1)

{
  undefined *self;
  ID IVar1;
  undefined8 *puVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  puVar2 = &local_80;
  FUN_1000a0224();
  _swift_allocObject();
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar1 = _objc_msgSend((ID)self,"init");
  *(ID *)(param_1 + 0x10) = IVar1;
  if (DAT_100a73b88 != -1) {
    _swift_once(&DAT_100a73b88,FUN_10013118c);
  }
  uStack_58 = DAT_100b36138;
  local_60 = DAT_100b36130;
  uStack_48 = DAT_100b36148;
  uStack_50 = DAT_100b36140;
  uStack_38 = DAT_100b36158;
  local_40 = DAT_100b36150;
  local_30 = DAT_100b36160;
  uStack_78 = DAT_100b36118;
  local_80 = DAT_100b36110;
  uStack_68 = DAT_100b36128;
  uStack_70 = DAT_100b36120;
  FUN_1000a0244();
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  DAT_100b36090 = param_1;
  return;
}

