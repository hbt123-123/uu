// rea decompile_all
// name: FUN_10041a5b0
// address: 0x10041a5b0
// body: available
// range: 0x10041a5b0-0x10041a6af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041a5b0(undefined4 *param_1)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_f0 [72];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  uVar3 = unaff_x20[4];
  uVar1 = unaff_x20[6];
  local_68 = unaff_x20[8];
  if ((((uVar3 & uVar1 & local_68 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(local_68 >> 0x3b) & 6 | (uint)(uVar1 >> 0x3d) & 1) != 4)) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 1;
    uVar8 = 0xc000000000000000;
    uVar9 = 0xc000000000000000;
  }
  else {
    uVar4 = *unaff_x20;
    uVar5 = unaff_x20[1];
    uVar8 = unaff_x20[2];
    uVar6 = unaff_x20[3];
    uVar7 = unaff_x20[5];
    uVar2 = unaff_x20[7];
    uVar9 = local_68 & 0xcfffffffffffffff;
    local_a8 = uVar4;
    uStack_a0 = uVar5;
    local_98 = uVar8;
    uStack_90 = uVar6;
    local_88 = uVar3;
    uStack_80 = uVar7;
    local_78 = uVar1;
    uStack_70 = uVar2;
    FUN_10042d20c(&local_a8,auStack_f0);
  }
  *param_1 = (int)uVar4;
  *(undefined8 *)(param_1 + 2) = uVar5;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *(undefined8 *)(param_1 + 6) = uVar6;
  *(byte *)(param_1 + 8) = (byte)uVar3 & 1;
  *(undefined8 *)(param_1 + 10) = uVar7;
  param_1[0xc] = (int)uVar1;
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  *(ulong *)(param_1 + 0x10) = uVar9;
  return;
}

