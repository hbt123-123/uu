// rea decompile_all
// name: FUN_1004ca1a0
// address: 0x1004ca1a0
// body: available
// range: 0x1004ca1a0-0x1004ca2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ca1a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  ulong uStack_80;
  undefined8 uStack_78;
  ulong local_70;
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar6 = unaff_x20[3];
  uVar10 = unaff_x20[4];
  uVar7 = unaff_x20[5];
  uVar11 = unaff_x20[6];
  uVar8 = unaff_x20[7];
  uVar2 = unaff_x20[8];
  uVar9 = unaff_x20[9];
  uStack_88 = unaff_x20[0xb];
  uVar1 = unaff_x20[10];
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  local_70 = unaff_x20[0xe];
  if (((uStack_80 >> 8 == 0xffffffff) && ((local_70 & 0x3000000000000000) == 0)) ||
     (((uint)(local_70 >> 0x39) & 0x18 | (uint)(uStack_80 >> 0x3d)) != 3)) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar1 = 0xc000000000000000;
    uVar10 = 0x3000000000000000;
    uVar11 = 0x3000000000000000;
    uVar2 = 0x3000000000000000;
  }
  else {
    local_e0 = uVar3;
    uStack_d8 = uVar4;
    local_d0 = uVar5;
    uStack_c8 = uVar6;
    local_c0 = uVar10;
    uStack_b8 = uVar7;
    local_b0 = uVar11;
    uStack_a8 = uVar8;
    local_a0 = uVar2;
    uStack_98 = uVar9;
    local_90 = uVar1;
    FUN_1004df818(&local_e0,auStack_158);
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar10;
  param_1[5] = uVar7;
  param_1[6] = uVar11;
  param_1[7] = uVar8;
  param_1[8] = uVar2;
  param_1[9] = uVar9;
  param_1[10] = uVar1;
  return;
}

