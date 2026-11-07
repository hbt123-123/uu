// rea decompile_all
// name: FUN_10012d6c0
// address: 0x10012d6c0
// body: available
// range: 0x10012d6c0-0x10012d8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012d6c0(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_1d8 [88];
  long local_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  long local_128;
  long local_120;
  long lStack_118;
  long local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x50);
  lVar5 = *(long *)(unaff_x20 + 0x48);
  lVar11 = *(long *)(unaff_x20 + 0x60);
  lVar10 = *(long *)(unaff_x20 + 0x58);
  lVar1 = *(long *)(unaff_x20 + 0x68);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  local_d0 = lVar4;
  lStack_c8 = lVar9;
  local_c0 = lVar6;
  local_b8 = lVar3;
  local_b0 = lVar7;
  lStack_a8 = lVar2;
  local_a0 = lVar5;
  lStack_98 = lVar8;
  local_90 = lVar10;
  lStack_88 = lVar11;
  local_80 = lVar1;
  if ((lVar3 == 0) &&
     (FUN_10012ec8c(&local_128), lVar2 = lStack_100, lVar3 = local_110, lVar1 = local_d8,
     lVar4 = local_128, lVar5 = local_f8, lVar6 = lStack_118, lVar7 = local_108, lVar8 = lStack_f0,
     lVar9 = local_120, lVar10 = local_e8, lVar11 = lStack_e0, local_110 == 0)) {
    if (DAT_100a73b88 != -1) {
      _swift_once(&DAT_100a73b88,FUN_10013118c);
    }
    lVar1 = DAT_100b36160;
    lVar11 = DAT_100b36158;
    lVar10 = DAT_100b36150;
    lVar8 = DAT_100b36148;
    lVar5 = DAT_100b36140;
    lVar2 = DAT_100b36138;
    lVar7 = DAT_100b36130;
    lVar3 = DAT_100b36128;
    lVar6 = DAT_100b36120;
    lVar9 = DAT_100b36118;
    lVar4 = DAT_100b36110;
    lStack_148 = DAT_100b36148;
    local_150 = DAT_100b36140;
    lStack_138 = DAT_100b36158;
    local_140 = DAT_100b36150;
    lStack_168 = DAT_100b36128;
    local_170 = DAT_100b36120;
    lStack_158 = DAT_100b36138;
    local_160 = DAT_100b36130;
    lStack_178 = DAT_100b36118;
    local_180 = DAT_100b36110;
    local_130 = DAT_100b36160;
    FUN_1000a03e8(&local_180,auStack_1d8);
  }
  local_180 = lVar4;
  lStack_178 = lVar9;
  local_170 = lVar6;
  lStack_168 = lVar3;
  local_160 = lVar7;
  lStack_158 = lVar2;
  local_150 = lVar5;
  lStack_148 = lVar8;
  local_140 = lVar10;
  lStack_138 = lVar11;
  local_130 = lVar1;
  if (lVar4 == 1) {
    if (lVar1 == 1) goto LAB_10012d81c;
  }
  else if (lVar4 != 2) {
LAB_10012d81c:
    FUN_10012edf8(&local_d0,auStack_1d8);
    FUN_10012ee48(&local_180);
    lVar4 = 0;
    lVar9 = 0;
    lVar6 = 0;
    lVar3 = 0;
    lVar7 = 0;
    lVar2 = 0;
    lVar5 = 0;
    lVar8 = 0;
    lVar1 = 0;
    lVar10 = 0;
    lVar11 = 0;
    goto LAB_10012d858;
  }
  FUN_10012edf8(&local_d0,auStack_1d8);
LAB_10012d858:
  *param_1 = lVar4;
  param_1[1] = lVar9;
  param_1[2] = lVar6;
  param_1[3] = lVar3;
  param_1[4] = lVar7;
  param_1[5] = lVar2;
  param_1[6] = lVar5;
  param_1[7] = lVar8;
  param_1[9] = lVar11;
  param_1[8] = lVar10;
  param_1[10] = lVar1;
  return;
}

