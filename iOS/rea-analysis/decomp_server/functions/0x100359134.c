// rea decompile_all
// name: FUN_100359134
// address: 0x100359134
// body: available
// range: 0x100359134-0x10035926f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_100359134(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *unaff_x20;
  _swift_unownedRetainStrong();
  _swift_unownedRetain();
  _swift_release();
  puVar1 = &DAT_1009b4988;
  _swift_allocObject(&DAT_1009b4988,0x20,7);
  *(undefined8 **)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  _swift_unownedRetainStrong();
  _swift_unownedRetain();
  _swift_unownedRetain();
  _swift_release();
  puVar2 = &DAT_1009b49b0;
  _swift_allocObject(&DAT_1009b49b0,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x20) = 300;
  *(undefined8 *)(puVar2 + 0x18) = 200;
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  pcVar3 = FUN_10035a4e4;
  FUN_100297b84(FUN_10035a4e4,puVar2);
  _swift_retain();
  _swift_unownedRelease();
  _swift_release(puVar2);
  puVar2 = &DAT_1009b49d8;
  _swift_allocObject(&DAT_1009b49d8,0x20,7);
  *(code **)(puVar2 + 0x10) = thunk_FUN_10035a5bc;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  _swift_retain(puVar1);
  pcVar4 = thunk_FUN_10035a460;
  FUN_1003593a4(thunk_FUN_10035a460,puVar2,&DAT_1009b4af0,FUN_10035b6b0,FUN_100297b84);
  _swift_release(puVar1);
  _swift_release(pcVar3);
  _swift_release(puVar2);
  return pcVar4;
}

