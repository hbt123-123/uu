// rea decompile_all
// name: FUN_10005d110
// address: 0x10005d110
// body: available
// range: 0x10005d110-0x10005d25f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005d110(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  lVar2 = 0xff;
  local_98 = param_7;
  uStack_90 = param_2;
  local_88 = param_8;
  local_80 = param_4;
  local_78 = param_5;
  local_6c = param_6;
  local_68 = param_1;
  __sSqMa(0xff,param_9);
  lVar3 = 0;
  FUN_100098548(0,lVar2);
  lVar8 = *(long *)(lVar3 + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  lVar9 = *(long *)(lVar2 + -8);
  uVar6 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar6 + 0x70 & (uVar6 ^ 0xffffffffffffffff);
  uVar11 = *(long *)(lVar9 + 0x40) + uVar10 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1000f71d8;
  _swift_allocObject(&DAT_1000f71d8,uVar11 + 0x11,uVar6 | 7);
  uVar13 = param_3[1];
  uVar12 = *param_3;
  uVar7 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[3];
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  uVar7 = param_3[4];
  uVar15 = param_3[7];
  uVar14 = param_3[6];
  *(undefined8 *)(puVar4 + 0x40) = param_3[5];
  *(undefined8 *)(puVar4 + 0x38) = uVar7;
  *(undefined8 *)(puVar4 + 0x50) = uVar15;
  *(undefined8 *)(puVar4 + 0x48) = uVar14;
  *(undefined8 *)(puVar4 + 0x10) = param_9;
  uVar7 = param_3[8];
  *(undefined8 *)(puVar4 + 0x20) = uVar13;
  *(undefined8 *)(puVar4 + 0x18) = uVar12;
  *(undefined8 *)(puVar4 + 0x58) = uVar7;
  *(undefined8 *)(puVar4 + 0x60) = local_98;
  *(undefined8 *)(puVar4 + 0x68) = local_88;
  (**(code **)(lVar9 + 0x20))(puVar4 + uVar10,uStack_90,lVar2);
  puVar1 = (undefined8 *)(puVar4 + uVar11);
  *puVar1 = local_80;
  puVar1[1] = local_78;
  *(char *)(puVar1 + 2) = (char)local_6c;
  FUN_100098b0c(auStack_a0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),FUN_10005e718,puVar4,lVar2);
  (**(code **)(lVar8 + 0x20))(local_68,auStack_a0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),lVar3);
  return;
}

