// rea decompile_all
// name: FUN_1002355c8
// address: 0x1002355c8
// body: available
// range: 0x1002355c8-0x1002356b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002355c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [32];
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _swift_unknownObjectRetain(param_4);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_60);
  _swift_unknownObjectRelease(param_4);
  puVar1 = &DAT_100a7f178;
  FUN_100004bb4(&DAT_100a7f178,&DAT_100814010);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  FUN_10003e8bc(auStack_60,puVar1 + 0x30);
  puVar2 = puVar1;
  FUN_100234418(puVar1);
  _swift_setDeallocating(puVar1);
  FUN_100040bb4(puVar1 + 0x20,&DAT_100a7f180,&DAT_100813c98);
  FUN_100237ce0(param_5,puVar2,0);
  _swift_bridgeObjectRelease(puVar2);
  FUN_10003f094(auStack_60);
  return;
}

