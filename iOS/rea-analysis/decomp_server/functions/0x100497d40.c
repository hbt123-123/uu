// rea decompile_all
// name: FUN_100497d40
// address: 0x100497d40
// body: available
// range: 0x100497d40-0x100497e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100497d40(undefined4 *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_108 [80];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  
  uVar2 = unaff_x20[4];
  uVar4 = unaff_x20[7];
  local_70 = unaff_x20[9];
  uVar11 = 0;
  uVar12 = 0;
  if (((uVar2 < 0xffffffff00000000 || uVar4 >> 0x20 != 0) || (local_70 & 0x3000000000000000) != 0)
     && (((uint)(local_70 >> 0x3b) & 6 | (uint)(uVar4 >> 0x3f)) == 1)) {
    uVar5 = *unaff_x20;
    uVar6 = unaff_x20[1];
    uVar7 = unaff_x20[2];
    uVar8 = unaff_x20[3];
    uVar12 = unaff_x20[6];
    uVar11 = unaff_x20[5];
    uVar3 = unaff_x20[8];
    uVar10 = local_70 & 0xcfffffffffffffff;
    uVar9 = (undefined4)((ulong)uVar6 >> 0x20);
    local_b8 = uVar5;
    uStack_b0 = uVar6;
    local_a8 = uVar7;
    uStack_a0 = uVar8;
    local_98 = uVar2;
    local_90 = uVar11;
    uStack_88 = uVar12;
    local_80 = uVar4;
    uStack_78 = uVar3;
    FUN_10049d5cc(&local_b8,auStack_108);
    uVar1 = (undefined4)((ulong)uVar5 >> 0x20);
  }
  else {
    uVar5 = 0;
    uVar1 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar8 = 0xc000000000000000;
    uVar10 = 0xc000000000000000;
  }
  *param_1 = (int)uVar5;
  param_1[1] = uVar1;
  param_1[2] = (int)uVar6;
  param_1[3] = uVar9;
  *(undefined8 *)(param_1 + 4) = uVar7;
  *(undefined8 *)(param_1 + 6) = uVar8;
  param_1[8] = (int)uVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar12;
  *(undefined8 *)(param_1 + 10) = uVar11;
  param_1[0xe] = (int)uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(ulong *)(param_1 + 0x12) = uVar10;
  return;
}

