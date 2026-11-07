// rea decompile_all
// name: FUN_10004e158
// address: 0x10004e158
// body: available
// range: 0x10004e158-0x10004e28b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004e288 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004e158(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_1009992f0;
  _swift_allocObject(&DAT_1009992f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  puVar2 = &DAT_100a76440;
  FUN_100004bb4(&DAT_100a76440,&DAT_10080ac98);
  _swift_allocObject();
  puVar2[0x10] = 0;
  *(code **)(puVar2 + 0x18) = FUN_1000826b0;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  puVar1 = &DAT_1009985d0;
  _swift_allocObject(&DAT_1009985d0,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar3 = &DAT_100999318;
  _swift_allocObject(&DAT_100999318,0x31,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  puVar3[0x30] = param_3;
  _swift_retain_n(puVar2,2);
  _swift_retain(param_5);
  _swift_retain(puVar1);
  _swift_bridgeObjectRetain(param_2);
  FUN_10004e434(FUN_1000826d8,puVar2,FUN_100082714,puVar3);
  _swift_release_n(puVar2,2);
  _swift_release(puVar1);
  _swift_release(puVar3);
  return;
}

