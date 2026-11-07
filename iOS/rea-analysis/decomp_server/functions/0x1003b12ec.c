// rea decompile_all
// name: FUN_1003b12ec
// address: 0x1003b12ec
// body: available
// range: 0x1003b12ec-0x1003b149f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b12ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  puVar1 = &DAT_100a78700;
  FUN_100004bb4(&DAT_100a78700,&DAT_10080d560);
  pcVar5 = (code *)0x98;
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 6;
  *(undefined8 *)(puVar1 + 0x10) = 3;
  if (DAT_100a89248 != -1) {
    pcVar5 = FUN_1003ab4b8;
    _swift_once(&DAT_100a89248);
  }
  uVar2 = 0;
  FUN_10070613c();
  FUN_100706078();
  uVar3 = uVar2;
  FUN_100260d74();
  _swift_release(uVar2);
  *(undefined **)(puVar1 + 0x38) = &DAT_1009bc708;
  *(undefined ***)(puVar1 + 0x40) = &PTR_PTR_1009bc678;
  puVar4 = &DAT_1009b8310;
  _swift_allocObject(&DAT_1009b8310,0x40,7);
  *(undefined **)(puVar1 + 0x20) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = 0x2d6d617261502d58;
  *(undefined8 *)(puVar4 + 0x18) = 0xec0000004e474953;
  *(undefined8 *)(puVar4 + 0x20) = 0x2d6d617261702d78;
  *(undefined8 *)(puVar4 + 0x28) = 0xe800000000000000;
  *(undefined8 *)(puVar4 + 0x30) = uVar3;
  *(code **)(puVar4 + 0x38) = pcVar5;
  puVar4 = &DAT_100a8bc50;
  FUN_100004bb4(&DAT_100a8bc50,&DAT_100820a38);
  *(undefined **)(puVar1 + 0x60) = puVar4;
  *(undefined ***)(puVar1 + 0x68) = &PTR_PTR_1009b7c10;
  *(undefined **)(puVar1 + 0x88) = &DAT_1009b8348;
  *(undefined ***)(puVar1 + 0x90) = &PTR_PTR_1009b8358;
  FUN_100004bb4(&DAT_100a8bc58,&DAT_100820a40);
  _swift_allocObject();
  _swift_retain(param_1);
  FUN_10026bd48(FUN_1003b129c,0,FUN_1003b1244,0,FUN_1000103d0,0,0,param_1,puVar1,0);
  return;
}

