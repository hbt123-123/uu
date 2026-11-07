// rea decompile_all
// name: FUN_1004ccb78
// address: 0x1004ccb78
// body: available
// range: 0x1004ccb78-0x1004ccc7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ccb78(undefined4 *param_1)

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
  undefined1 auStack_150 [120];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar8 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar9 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  uVar7 = unaff_x20[6];
  uVar6 = unaff_x20[7];
  uStack_90 = unaff_x20[9];
  uVar1 = unaff_x20[8];
  uStack_80 = unaff_x20[0xb];
  uStack_88 = unaff_x20[10];
  uStack_70 = unaff_x20[0xd];
  local_78 = unaff_x20[0xc];
  local_68 = unaff_x20[0xe];
  if (((local_78 >> 8 == 0xffffffff) && ((local_68 & 0x3000000000000000) == 0)) ||
     (((uint)(local_68 >> 0x39) & 0x18 | (uint)(local_78 >> 0x3d)) != 0x12)) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0xc000000000000000;
    uVar8 = 0xe000000000000000;
    uVar9 = 0xe000000000000000;
    uVar1 = 0xc000000000000000;
  }
  else {
    local_d8 = uVar2;
    uStack_d0 = uVar3;
    local_c8 = uVar8;
    uStack_c0 = uVar4;
    local_b8 = uVar9;
    uStack_b0 = uVar5;
    local_a8 = uVar7;
    uStack_a0 = uVar6;
    local_98 = uVar1;
    FUN_1004df818(&local_d8,auStack_150);
  }
  *param_1 = (int)uVar2;
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *(undefined8 *)(param_1 + 6) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar9;
  *(undefined8 *)(param_1 + 10) = uVar5;
  *(undefined8 *)(param_1 + 0xc) = uVar7;
  *(undefined8 *)(param_1 + 0xe) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

