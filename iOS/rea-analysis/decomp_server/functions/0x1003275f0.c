// rea decompile_all
// name: FUN_1003275f0
// address: 0x1003275f0
// body: available
// range: 0x1003275f0-0x100327723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003275f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  
  puVar2 = &DAT_1009b16d8;
  _swift_allocObject(&DAT_1009b16d8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  FUN_1000b142c(param_4,auStack_88);
  puVar3 = &DAT_1009b1700;
  _swift_allocObject(&DAT_1009b1700,0x50,7);
  *(undefined8 *)(puVar3 + 0x10) = param_7;
  *(undefined8 *)(puVar3 + 0x18) = param_8;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  FUN_1000a0074(auStack_88,puVar3 + 0x28);
  _swift_retain(param_6);
  puVar4 = &DAT_100a82488;
  FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
  puVar1 = PTR___ss5ErrorWS_100995c48;
  uVar5 = 0;
  FUN_10030528c(0,param_7,puVar4,PTR___ss5ErrorWS_100995c48);
  FUN_100327064(param_1,param_3,param_5,FUN_10032b540,puVar2,thunk_FUN_10032b580,puVar3,param_6,
                param_7,uVar5,puVar4,puVar1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  return;
}

