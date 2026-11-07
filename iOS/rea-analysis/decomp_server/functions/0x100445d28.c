// rea decompile_all
// name: FUN_100445d28
// address: 0x100445d28
// body: available
// range: 0x100445d28-0x10044603f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100445f48) */

void FUN_100445d28(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  bool bVar11;
  ulong uVar12;
  uint5 uVar13;
  ulong uVar14;
  uint5 uVar15;
  undefined4 uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  ulong *puVar20;
  long unaff_x21;
  code *pcVar21;
  ulong uVar22;
  ulong uVar23;
  byte local_118 [56];
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  byte local_ac;
  byte local_a4;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  uint5 uStack_78;
  undefined3 local_73;
  undefined4 uStack_70;
  byte bStack_6c;
  
  uStack_70 = 0;
  bStack_6c = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_73 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uVar1 = param_1[3];
  uVar5 = param_1[4];
  uVar23 = param_1[5];
  bVar10 = *(byte *)((long)param_1 + 0x34);
  bVar17 = ((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  bVar18 = uVar5 >> 0x21 != 0x3fffffff;
  bVar19 = uVar23 >> 0x21 != 0;
  bVar11 = bVar10 >> 1 != 0;
  puVar20 = param_1;
  if (bVar10 >> 6 == 0 && (((bVar17 || bVar18) || bVar19) || bVar11)) {
    uVar12 = param_1[6];
    uVar2 = param_1[1];
    uVar6 = param_1[2];
    uVar22 = *param_1;
    local_e0 = CONCAT71(local_e0._1_7_,(char)(uVar5 >> 0x20)) & 0xffffffffffffff01;
    local_118[0] = (byte)(uVar23 >> 0x20) & 1;
    FUN_10017ac64(uVar22,uVar2,uVar6,uVar1,uVar5,uVar23,(ulong)CONCAT14(bVar10,(int)uVar12));
    puVar20 = (ulong *)0x0;
    FUN_1004338a4(0,0,0,0,0,0,0);
    local_80 = uVar5 & 0xffffffff | (local_e0 & 0xff) << 0x20;
    uStack_78 = (uint5)uVar23 & 0xffffffff | (uint5)local_118[0] << 0x20;
    local_a0 = uVar22 & 0xffffffff;
    uStack_98 = uVar2;
    local_90 = uVar6;
    uStack_88 = uVar1;
    uStack_70 = (int)uVar12;
    bStack_6c = bVar10 & 1;
  }
  local_73 = 0;
  pcVar21 = *(code **)(param_4 + 0x198);
  FUN_10044836c();
  (*pcVar21)(&local_a0,&DAT_1009c1330,puVar20,param_3,param_4);
  uVar16 = uStack_70;
  uVar15 = uStack_78;
  uVar6 = local_80;
  uVar2 = uStack_88;
  uVar23 = local_90;
  uVar5 = uStack_98;
  uVar1 = local_a0;
  uStack_b8 = CONCAT35(local_73,uStack_78);
  if ((unaff_x21 == 0) && (uStack_98 != 0)) {
    uVar12 = local_80 >> 0x20;
    uVar13 = uStack_78 >> 0x20;
    local_a4 = bStack_6c & 1;
    if (((bVar17 || bVar18) || bVar19) || bVar11) {
      pcVar21 = *(code **)(param_4 + 8);
      local_e0 = local_a0;
      uStack_d8 = uStack_98;
      local_d0 = local_90;
      uStack_c8 = uStack_88;
      local_c0 = local_80;
      local_b0 = uStack_70;
      local_ac = bStack_6c;
      FUN_100442f48(&local_e0,local_118);
      (*pcVar21)(param_3,param_4);
    }
    else {
      local_e0 = local_a0;
      uStack_d8 = uStack_98;
      local_d0 = local_90;
      uStack_c8 = uStack_88;
      local_c0 = local_80;
      local_b0 = uStack_70;
      local_ac = bStack_6c;
      FUN_100442f48(&local_e0,local_118);
    }
    FUN_1004338a4(local_a0,uStack_98,local_90,uStack_88,local_80,CONCAT35(local_73,uStack_78),
                  (ulong)CONCAT14(bStack_6c,uStack_70));
    uVar22 = *param_1;
    uVar7 = param_1[1];
    uVar3 = param_1[2];
    uVar8 = param_1[3];
    uVar4 = param_1[4];
    uVar9 = param_1[5];
    uVar14 = param_1[6];
    *param_1 = uVar1 & 0xffffffff;
    param_1[1] = uVar5;
    param_1[2] = uVar23;
    param_1[3] = uVar2 & 0xcfffffffffffffff;
    param_1[4] = uVar6 & 0xffffffff | (ulong)((byte)uVar12 & 1) << 0x20;
    param_1[5] = (ulong)uVar15 & 0xffffffff | (ulong)((byte)uVar13 & 1) << 0x20;
    *(undefined4 *)(param_1 + 6) = uVar16;
    *(byte *)((long)param_1 + 0x34) = local_a4 & 1;
    FUN_1000407fc(uVar22,uVar7,uVar3,uVar8,uVar4,uVar9,(ulong)(uint5)uVar14);
  }
  else {
    FUN_1004338a4(local_a0,uStack_98,local_90,uStack_88,local_80,uStack_b8,
                  (ulong)CONCAT14(bStack_6c,uStack_70));
  }
  return;
}

