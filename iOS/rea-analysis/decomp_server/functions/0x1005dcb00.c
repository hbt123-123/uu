// rea decompile_all
// name: FUN_1005dcb00
// address: 0x1005dcb00
// body: available
// range: 0x1005dcb00-0x1005dce87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005dcb00(byte *param_1,byte *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong local_1b0;
  long lStack_1a8;
  ulong local_1a0;
  long lStack_198;
  ulong local_190;
  long lStack_188;
  ulong local_180;
  long lStack_178;
  ulong local_170;
  long lStack_168;
  ulong local_160;
  long lStack_158;
  ulong local_150;
  long lStack_148;
  ulong local_140;
  long lStack_138;
  ulong local_130;
  long lStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  long lStack_a8;
  ulong local_a0;
  long lStack_98;
  ulong local_90;
  long lStack_88;
  ulong local_80;
  long lStack_78;
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  uVar5 = *(ulong *)(param_1 + 8);
  lVar16 = *(long *)(param_1 + 0x20);
  uVar13 = *(ulong *)(param_1 + 0x18);
  lVar10 = *(long *)(param_1 + 0x30);
  uVar6 = *(ulong *)(param_1 + 0x28);
  lVar17 = *(long *)(param_1 + 0x40);
  uVar14 = *(ulong *)(param_1 + 0x38);
  lStack_e8 = *(long *)(param_2 + 0x10);
  local_f0 = *(ulong *)(param_2 + 8);
  uStack_d8 = *(undefined8 *)(param_2 + 0x20);
  uStack_e0 = *(undefined8 *)(param_2 + 0x18);
  uStack_c8 = *(undefined8 *)(param_2 + 0x30);
  local_d0 = *(undefined8 *)(param_2 + 0x28);
  uStack_b8 = *(undefined8 *)(param_2 + 0x40);
  uStack_c0 = *(undefined8 *)(param_2 + 0x38);
  local_b0 = uVar5;
  lStack_a8 = lVar9;
  local_a0 = uVar13;
  lStack_98 = lVar16;
  local_90 = uVar6;
  lStack_88 = lVar10;
  local_80 = uVar14;
  lStack_78 = lVar17;
  if (lVar9 == 0) {
    if (lStack_e8 == 0) {
      FUN_1005dd6e0(&local_b0,&local_170);
      FUN_1005dd6e0(&local_f0,&local_170);
      goto LAB_1005dcdc4;
    }
  }
  else if (lStack_e8 != 0) {
    lVar11 = *(long *)(param_2 + 0x20);
    uVar7 = *(ulong *)(param_2 + 0x18);
    lVar18 = *(long *)(param_2 + 0x30);
    uVar15 = *(ulong *)(param_2 + 0x28);
    lVar12 = *(long *)(param_2 + 0x40);
    uVar8 = *(ulong *)(param_2 + 0x38);
    local_1b0 = uVar5;
    lStack_1a8 = lVar9;
    local_1a0 = uVar13;
    lStack_198 = lVar16;
    local_190 = uVar6;
    lStack_188 = lVar10;
    local_180 = uVar14;
    lStack_178 = lVar17;
    local_170 = local_f0;
    lStack_168 = lStack_e8;
    local_160 = uVar7;
    lStack_158 = lVar11;
    local_150 = uVar15;
    lStack_148 = lVar18;
    local_140 = uVar8;
    lStack_138 = lVar12;
    if ((((uVar5 == local_f0) && (lStack_e8 == lVar9)) ||
        (uVar1 = uVar5,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar5,lVar9,local_f0,lStack_e8,0), (uVar1 & 1) != 0)) &&
       ((((uVar13 == uVar7 && (lVar16 == lVar11)) ||
         (uVar1 = uVar13,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar13,lVar16,uVar7,lVar11,0), (uVar1 & 1) != 0)) &&
        (((uVar6 == uVar15 && (lVar10 == lVar18)) ||
         (uVar7 = uVar6,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar6,lVar10,uVar15,lVar18,0), (uVar7 & 1) != 0)))))) {
      if ((uVar14 == uVar8) && (lVar17 == lVar12)) {
        FUN_1005dd6e0(&local_b0,&local_1b0);
        FUN_1005dd6e0(&local_f0,&local_1b0);
        FUN_100040bb4(&local_170,&DAT_100aae120,&DAT_10083f710);
      }
      else {
        uVar7 = uVar14;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar14,lVar17,uVar8,lVar12,0);
        FUN_1005dd6e0(&local_b0,&local_1b0);
        FUN_1005dd6e0(&local_f0,&local_1b0);
        FUN_100040bb4(&local_170,&DAT_100aae120,&DAT_10083f710);
        if ((uVar7 & 1) == 0) {
          puVar3 = &DAT_100aae120;
          puVar4 = &DAT_10083f710;
          puVar2 = &local_1b0;
          goto LAB_1005dcd34;
        }
      }
LAB_1005dcdc4:
      local_170 = uVar5;
      lStack_168 = lVar9;
      local_160 = uVar13;
      lStack_158 = lVar16;
      local_150 = uVar6;
      lStack_148 = lVar10;
      local_140 = uVar14;
      lStack_138 = lVar17;
      FUN_100040bb4(&local_170,&DAT_100aae120,&DAT_10083f710);
      if (*(long *)(param_1 + 0x48) != *(long *)(param_2 + 0x48)) {
        return 0;
      }
      uVar5 = *(ulong *)(param_1 + 0x50);
      if (((uVar5 != *(ulong *)(param_2 + 0x50)) ||
          (*(long *)(param_1 + 0x58) != *(long *)(param_2 + 0x58))) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar5 & 1) == 0)) {
        return 0;
      }
      uVar5 = *(ulong *)(param_1 + 0x60);
      if (((uVar5 != *(ulong *)(param_2 + 0x60)) ||
          (*(long *)(param_1 + 0x68) != *(long *)(param_2 + 0x68))) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar5 & 1) == 0)) {
        return 0;
      }
      return 1;
    }
    FUN_1005dd6e0(&local_b0,&local_1b0);
    FUN_1005dd6e0(&local_f0,&local_1b0);
    puVar3 = &DAT_100aae120;
    puVar4 = &DAT_10083f710;
    FUN_100040bb4(&local_170,&DAT_100aae120,&DAT_10083f710);
    puVar2 = &local_1b0;
    goto LAB_1005dcd34;
  }
  uStack_118 = *(undefined8 *)(param_2 + 0x20);
  local_120 = *(undefined8 *)(param_2 + 0x18);
  uStack_108 = *(undefined8 *)(param_2 + 0x30);
  uStack_110 = *(undefined8 *)(param_2 + 0x28);
  uStack_f8 = *(undefined8 *)(param_2 + 0x40);
  local_100 = *(undefined8 *)(param_2 + 0x38);
  local_170 = uVar5;
  lStack_168 = lVar9;
  local_160 = uVar13;
  lStack_158 = lVar16;
  local_150 = uVar6;
  lStack_148 = lVar10;
  local_140 = uVar14;
  lStack_138 = lVar17;
  local_130 = local_f0;
  lStack_128 = lStack_e8;
  FUN_1005dd6e0(&local_b0,&local_1b0);
  FUN_1005dd6e0(&local_f0,&local_1b0);
  puVar3 = &DAT_100aae280;
  puVar4 = &DAT_100840448;
  puVar2 = &local_170;
LAB_1005dcd34:
  FUN_100040bb4(puVar2,puVar3,puVar4);
  return 0;
}

