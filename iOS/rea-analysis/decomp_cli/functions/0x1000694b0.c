// rea decompile_all
// name: FUN_1000694b0
// address: 0x1000694b0
// body: available
// range: 0x1000694b0-0x1000695c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1000694b0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78 [3];
  
  puVar1 = &DAT_1000f83c8;
  _swift_allocObject(&DAT_1000f83c8,0x91,7);
  uVar5 = param_4[1];
  uVar4 = *param_4;
  uVar2 = param_4[2];
  *(undefined8 *)(puVar1 + 0x40) = param_4[3];
  *(undefined8 *)(puVar1 + 0x38) = uVar2;
  uVar2 = param_4[4];
  uVar7 = param_4[7];
  uVar6 = param_4[6];
  *(undefined8 *)(puVar1 + 0x50) = param_4[5];
  *(undefined8 *)(puVar1 + 0x48) = uVar2;
  *(undefined8 *)(puVar1 + 0x60) = uVar7;
  *(undefined8 *)(puVar1 + 0x58) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_9;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x68) = param_4[8];
  *(undefined8 *)(puVar1 + 0x30) = uVar5;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  puVar1[0x70] = param_3;
  *(undefined8 *)(puVar1 + 0x78) = param_1;
  *(undefined8 *)(puVar1 + 0x80) = param_5;
  *(undefined8 *)(puVar1 + 0x88) = param_6;
  puVar1[0x90] = param_7;
  uVar2 = 0;
  __sSaMa(0,param_8);
  FUN_100098b0c(&local_90,FUN_10006a6bc,puVar1,uVar2);
  uStack_a8 = uStack_88;
  local_b0 = local_90;
  local_a0 = local_80;
  lVar3 = 0;
  FUN_100098548(0,uVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(local_78,&local_b0,lVar3);
  return local_78[0];
}

