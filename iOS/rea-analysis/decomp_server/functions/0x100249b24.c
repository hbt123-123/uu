// rea decompile_all
// name: FUN_100249b24
// address: 0x100249b24
// body: available
// range: 0x100249b24-0x100249c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100249b24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  if (DAT_100a7fa78 != -1) {
    _swift_once(&DAT_100a7fa78,FUN_1002490bc);
  }
  _swift_beginAccess(&DAT_100b363f0,auStack_48,0,0);
  uVar1 = DAT_100b363f0;
  puVar2 = &DAT_100a7fb58;
  FUN_100004bb4(&DAT_100a7fb58,&DAT_1008143d8);
  _swift_initStaticObject();
  _swift_bridgeObjectRetain(uVar1);
  FUN_10024a7a8(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,2,PTR___sSSN_1009957f8);
  FUN_100153074(param_1,param_2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  return (uint)param_1 & 1;
}

