// rea decompile_all
// name: FUN_100067ecc
// address: 0x100067ecc
// body: available
// range: 0x100067ecc-0x100068017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100067ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  local_a0 = param_10;
  lVar2 = 0;
  local_94 = param_4;
  local_90 = param_2;
  local_88 = param_9;
  local_80 = param_6;
  local_78 = param_7;
  local_6c = param_8;
  local_68 = param_1;
  FUN_100098548(0,param_11);
  lVar6 = *(long *)(lVar2 + -8);
  lVar8 = (long)&local_a0 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_11 + -8);
  uVar4 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar5 = uVar4 + 0x80 & (uVar4 ^ 0xffffffffffffffff);
  uVar7 = *(long *)(lVar9 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_1000f8288;
  _swift_allocObject(&DAT_1000f8288,uVar7 + 0x11,uVar4 | 7);
  *(long *)(puVar3 + 0x10) = param_11;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  uVar10 = param_5[4];
  uVar12 = param_5[7];
  uVar11 = param_5[6];
  *(undefined8 *)(puVar3 + 0x48) = param_5[5];
  *(undefined8 *)(puVar3 + 0x40) = uVar10;
  *(undefined8 *)(puVar3 + 0x58) = uVar12;
  *(undefined8 *)(puVar3 + 0x50) = uVar11;
  *(undefined8 *)(puVar3 + 0x60) = param_5[8];
  uVar12 = *param_5;
  uVar11 = param_5[3];
  uVar10 = param_5[2];
  *(undefined8 *)(puVar3 + 0x28) = param_5[1];
  *(undefined8 *)(puVar3 + 0x20) = uVar12;
  *(undefined8 *)(puVar3 + 0x38) = uVar11;
  *(undefined8 *)(puVar3 + 0x30) = uVar10;
  puVar3[0x68] = (char)local_94;
  *(undefined8 *)(puVar3 + 0x70) = local_88;
  *(undefined8 *)(puVar3 + 0x78) = local_a0;
  (**(code **)(lVar9 + 0x20))(puVar3 + uVar5,local_90,param_11);
  puVar1 = (undefined8 *)(puVar3 + uVar7);
  *puVar1 = local_80;
  puVar1[1] = local_78;
  *(char *)(puVar1 + 2) = (char)local_6c;
  FUN_100098b0c(lVar8,FUN_10006a26c,puVar3,param_11);
  (**(code **)(lVar6 + 0x20))(local_68,lVar8,lVar2);
  return;
}

