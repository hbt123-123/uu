// rea decompile_all
// name: FUN_1004478c8
// address: 0x1004478c8
// body: available
// range: 0x1004478c8-0x100447bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004478c8(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined1 auStack_198 [56];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulong uStack_148;
  ulong local_140;
  undefined5 uStack_138;
  undefined3 local_133;
  undefined4 uStack_130;
  byte bStack_12c;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  ulong local_100;
  undefined5 uStack_f8;
  undefined3 local_f3;
  undefined4 uStack_f0;
  byte bStack_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined4 local_b0;
  byte local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  undefined4 local_78;
  byte local_74;
  
  uVar7 = *(ulong *)((long)param_1 + 0x2d);
  uStack_f0 = (undefined4)(uVar7 >> 0x18);
  bStack_ec = (byte)(uVar7 >> 0x38);
  uVar12 = param_1[1];
  uVar9 = *param_1;
  uVar18 = param_1[3];
  uVar15 = param_1[2];
  uVar13 = param_1[5];
  uVar10 = param_1[4];
  uStack_f8 = (undefined5)uVar13;
  local_f3 = (undefined3)(uVar13 >> 0x28);
  uVar8 = *(ulong *)((long)param_2 + 0x2d);
  uStack_130 = (undefined4)(uVar8 >> 0x18);
  bStack_12c = (byte)(uVar8 >> 0x38);
  uVar14 = param_2[3];
  uVar11 = param_2[2];
  uVar19 = param_2[5];
  uVar16 = param_2[4];
  uStack_138 = (undefined5)uVar19;
  local_133 = (undefined3)(uVar19 >> 0x28);
  uVar20 = param_2[1];
  uVar17 = *param_2;
  uVar7 = uVar7 >> 0x18;
  bVar2 = ((uVar14 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  bVar3 = uVar16 >> 0x21 == 0x3fffffff;
  bVar4 = uVar19 >> 0x21 == 0;
  bVar1 = bStack_12c >> 1 == 0;
  local_160 = uVar17;
  uStack_158 = uVar20;
  local_150 = uVar11;
  uStack_148 = uVar14;
  local_140 = uVar16;
  local_120 = uVar9;
  uStack_118 = uVar12;
  local_110 = uVar15;
  uStack_108 = uVar18;
  local_100 = uVar10;
  if ((((bStack_ec >> 1 == 0) && (uVar13 >> 0x21 == 0)) &&
      ((uVar18 & 0x3000000000000000) == 0x3000000000000000)) &&
     ((uVar10 & 0xfffffffe00000000) == 0x7ffffffe00000000)) {
    if (((bVar2 && bVar3) && bVar4) && bVar1) {
      FUN_10007f314(&local_120,&local_a8,&DAT_100a9fb28,&DAT_1008325f0);
      FUN_10007f314(&local_160,&local_a8,&DAT_100a9fb28,&DAT_1008325f0);
      FUN_1000407fc(uVar9,uVar12,uVar15,uVar18,uVar10,uVar13,uVar7);
LAB_100447b84:
      uVar9 = param_1[7];
      FUN_1000094a4(uVar9,param_1[8],param_2[7],param_2[8]);
      uVar5 = (uint)uVar9;
      goto LAB_100447b90;
    }
LAB_100447a1c:
    FUN_10007f314(&local_120,&local_a8,&DAT_100a9fb28,&DAT_1008325f0);
    FUN_10007f314(&local_160,&local_a8,&DAT_100a9fb28,&DAT_1008325f0);
    FUN_1000407fc(uVar9,uVar12,uVar15,uVar18,uVar10,uVar13,uVar7);
    FUN_1000407fc(uVar17,uVar20,uVar11,uVar14,uVar16,uVar19,uVar8 >> 0x18);
  }
  else {
    if (((bVar2 && bVar3) && bVar4) && bVar1) goto LAB_100447a1c;
    local_74 = bStack_12c;
    local_ac = bStack_ec;
    local_e0 = uVar9;
    uStack_d8 = uVar12;
    local_d0 = uVar15;
    uStack_c8 = uVar18;
    local_c0 = uVar10;
    uStack_b8 = uVar13;
    local_b0 = uStack_f0;
    local_a8 = uVar17;
    uStack_a0 = uVar20;
    local_98 = uVar11;
    uStack_90 = uVar14;
    local_88 = uVar16;
    uStack_80 = uVar19;
    local_78 = uStack_130;
    FUN_10007f314(&local_120,auStack_198,&DAT_100a9fb28,&DAT_1008325f0);
    FUN_10007f314(&local_160,auStack_198,&DAT_100a9fb28,&DAT_1008325f0);
    puVar6 = &local_e0;
    FUN_1004476ac(puVar6,&local_a8);
    FUN_1000407fc(uVar17,uVar20,uVar11,uVar14,uVar16,uVar19,uVar8 >> 0x18);
    FUN_1000407fc(uVar9,uVar12,uVar15,uVar18,uVar10,uVar13,uVar7);
    if (((ulong)puVar6 & 1) != 0) goto LAB_100447b84;
  }
  uVar5 = 0;
LAB_100447b90:
  return uVar5 & 1;
}

