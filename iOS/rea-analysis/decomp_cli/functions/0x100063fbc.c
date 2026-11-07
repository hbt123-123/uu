// rea decompile_all
// name: FUN_100063fbc
// address: 0x100063fbc
// body: available
// range: 0x100063fbc-0x100064093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100063fbc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58 [3];
  
  puVar1 = &DAT_1000f7e60;
  _swift_allocObject(&DAT_1000f7e60,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  uVar3 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  *(undefined8 *)(puVar1 + 0x48) = param_2[5];
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  *(undefined8 *)(puVar1 + 0x58) = uVar5;
  *(undefined8 *)(puVar1 + 0x50) = uVar4;
  uVar3 = param_2[8];
  uVar6 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  *(undefined8 *)(puVar1 + 0x28) = param_2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x38) = uVar5;
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined8 *)(puVar1 + 0x60) = uVar3;
  *(undefined8 *)(puVar1 + 0x68) = param_1;
  uVar3 = 0;
  __sSaMa(0,param_3);
  FUN_100098b0c(&local_70,FUN_100064ab8,puVar1,uVar3);
  uStack_88 = uStack_68;
  local_90 = local_70;
  local_80 = local_60;
  lVar2 = 0;
  FUN_100098548(0,uVar3);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(local_58,&local_90,lVar2);
  return local_58[0];
}

