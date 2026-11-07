// rea decompile_all
// name: FUN_10005c490
// address: 0x10005c490
// body: available
// range: 0x10005c490-0x10005c5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005c490(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  lVar2 = 0;
  local_90 = param_2;
  local_88 = param_8;
  local_80 = param_4;
  local_78 = param_5;
  local_6c = param_6;
  local_68 = param_1;
  FUN_100098548(0,param_9);
  lVar6 = *(long *)(lVar2 + -8);
  lVar8 = (long)&local_90 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_9 + -8);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar9 = uVar4 + 0x70 & (uVar4 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(lVar7 + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_1000f70e8;
  _swift_allocObject(&DAT_1000f70e8,uVar10 + 0x11,uVar4 | 7);
  uVar12 = param_3[1];
  uVar11 = *param_3;
  uVar5 = param_3[2];
  *(undefined8 *)(puVar3 + 0x30) = param_3[3];
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  uVar5 = param_3[4];
  uVar14 = param_3[7];
  uVar13 = param_3[6];
  *(undefined8 *)(puVar3 + 0x40) = param_3[5];
  *(undefined8 *)(puVar3 + 0x38) = uVar5;
  *(undefined8 *)(puVar3 + 0x50) = uVar14;
  *(undefined8 *)(puVar3 + 0x48) = uVar13;
  *(long *)(puVar3 + 0x10) = param_9;
  uVar5 = param_3[8];
  *(undefined8 *)(puVar3 + 0x20) = uVar12;
  *(undefined8 *)(puVar3 + 0x18) = uVar11;
  *(undefined8 *)(puVar3 + 0x58) = uVar5;
  *(undefined8 *)(puVar3 + 0x60) = param_7;
  *(undefined8 *)(puVar3 + 0x68) = local_88;
  (**(code **)(lVar7 + 0x20))(puVar3 + uVar9,local_90,param_9);
  puVar1 = (undefined8 *)(puVar3 + uVar10);
  *puVar1 = local_80;
  puVar1[1] = local_78;
  *(char *)(puVar1 + 2) = (char)local_6c;
  FUN_100098b0c(lVar8,FUN_10005e394,puVar3,param_9);
  (**(code **)(lVar6 + 0x20))(local_68,lVar8,lVar2);
  return;
}

