// rea decompile_all
// name: FUN_100015eb0
// address: 0x100015eb0
// body: available
// range: 0x100015eb0-0x100015fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100015eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  FUN_100401b14(0);
  local_70 = param_1;
  uStack_68 = param_2;
  local_60 = param_3;
  FUN_1003fb48c(FUN_100033cc8,auStack_80,0xd0000000000000a9,0x8000000100877660,0xd000000000000034,
                0x8000000100877710,0x1f8,0);
  puVar1 = &DAT_100997520;
  _swift_allocObject(&DAT_100997520,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &DAT_100997548;
  _swift_allocObject(&DAT_100997548,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _swift_retain(puVar1);
  _swift_retain(param_5);
  FUN_10004e8b8(param_1,param_2,param_3,FUN_100033cfc,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}

