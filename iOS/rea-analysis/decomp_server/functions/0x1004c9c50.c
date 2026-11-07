// rea decompile_all
// name: FUN_1004c9c50
// address: 0x1004c9c50
// body: available
// range: 0x1004c9c50-0x1004c9d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004c9c50(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_158 [120];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  
  uVar12 = *unaff_x20;
  uVar13 = unaff_x20[1];
  uVar14 = unaff_x20[2];
  uVar15 = unaff_x20[3];
  uVar6 = unaff_x20[4];
  uVar3 = unaff_x20[5];
  uVar4 = unaff_x20[6];
  uVar5 = unaff_x20[7];
  uVar9 = unaff_x20[8];
  uVar10 = unaff_x20[9];
  uVar7 = unaff_x20[10];
  uVar1 = unaff_x20[0xb];
  uVar11 = unaff_x20[0xc];
  uVar8 = unaff_x20[0xd];
  local_70 = unaff_x20[0xe];
  if (((uVar11 >> 8 == 0xffffffff) && ((local_70 & 0x3000000000000000) == 0)) ||
     (((uint)(local_70 >> 0x39) & 0x18 | (uint)(uVar11 >> 0x3d)) != 2)) {
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar6 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar7 = 0;
    uVar1 = 0;
    uVar8 = 0;
    uVar2 = 0xc000000000000000;
    uVar11 = 0xff;
  }
  else {
    uVar2 = local_70 & 0xcfffffffffffffff;
    local_e0 = uVar12;
    uStack_d8 = uVar13;
    local_d0 = uVar14;
    uStack_c8 = uVar15;
    local_c0 = uVar6;
    uStack_b8 = uVar3;
    local_b0 = uVar4;
    uStack_a8 = uVar5;
    local_a0 = uVar9;
    uStack_98 = uVar10;
    local_90 = uVar7;
    uStack_88 = uVar1;
    local_80 = uVar11;
    uStack_78 = uVar8;
    FUN_1004df818(&local_e0,auStack_158);
  }
  *param_1 = uVar12;
  param_1[1] = uVar13;
  param_1[2] = uVar14;
  param_1[3] = uVar15;
  param_1[4] = uVar6;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar7;
  param_1[0xb] = uVar1;
  *(char *)(param_1 + 0xc) = (char)uVar11;
  param_1[0xd] = uVar8;
  param_1[0xe] = uVar2;
  return;
}

