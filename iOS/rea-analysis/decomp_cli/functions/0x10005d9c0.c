// rea decompile_all
// name: FUN_10005d9c0
// address: 0x10005d9c0
// body: available
// range: 0x10005d9c0-0x10005dab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10005d9c0(undefined1 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68 [3];
  
  puVar1 = &DAT_1000f7250;
  _swift_allocObject(&DAT_1000f7250,0x81,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  uVar2 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  *(undefined8 *)(puVar1 + 0x48) = param_2[5];
  *(undefined8 *)(puVar1 + 0x40) = uVar2;
  *(undefined8 *)(puVar1 + 0x58) = uVar5;
  *(undefined8 *)(puVar1 + 0x50) = uVar4;
  *(undefined8 *)(puVar1 + 0x60) = param_2[8];
  uVar5 = *param_2;
  uVar4 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(puVar1 + 0x28) = param_2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  *(undefined8 *)(puVar1 + 0x38) = uVar4;
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  puVar1[0x68] = param_1;
  *(undefined8 *)(puVar1 + 0x70) = param_3;
  *(undefined8 *)(puVar1 + 0x78) = param_4;
  puVar1[0x80] = param_5;
  uVar2 = 0;
  __sSaMa(0,param_6);
  FUN_100098b0c(&local_80,FUN_10005e8e8,puVar1,uVar2);
  uStack_98 = uStack_78;
  local_a0 = local_80;
  local_90 = local_70;
  lVar3 = 0;
  FUN_100098548(0,uVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(local_68,&local_a0,lVar3);
  return local_68[0];
}

