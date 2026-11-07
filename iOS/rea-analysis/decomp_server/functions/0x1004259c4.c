// rea decompile_all
// name: FUN_1004259c4
// address: 0x1004259c4
// body: available
// range: 0x1004259c4-0x100425c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100425b7c) */

void FUN_1004259c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x21;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte local_138 [72];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  ulong local_80;
  
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0xf000000000000000;
  uVar9 = param_1[4];
  uVar10 = param_1[6];
  uVar5 = param_1[8];
  uVar6 = uVar9 & uVar10 & uVar5 & 0x3000000000000000;
  puVar4 = param_1;
  if (uVar6 != 0x3000000000000000 && ((uint)(uVar5 >> 0x3b) & 6 | (uint)(uVar10 >> 0x3d) & 1) == 6)
  {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    bVar3 = *(byte *)(param_1 + 2);
    local_e0 = param_1[2];
    uVar8 = param_1[3];
    local_f0 = uVar1;
    uStack_e8 = uVar2;
    local_d8 = uVar8;
    local_d0 = uVar9;
    uStack_c8 = param_1[5];
    uStack_c0 = uVar10;
    uStack_b8 = param_1[7];
    local_b0 = uVar5;
    FUN_10042d20c(&local_f0,local_138);
    puVar4 = (undefined8 *)0x0;
    FUN_1004337b0(0,0,0,0,0xf000000000000000);
    local_90 = (ulong)bVar3 & 1;
    local_a0 = uVar1;
    uStack_98 = uVar2;
    uStack_88 = uVar8;
    local_80 = uVar9;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_10042f688();
  (*pcVar7)(&local_a0,&DAT_1009bec80,puVar4,param_3,param_4);
  uVar9 = local_80;
  uVar8 = uStack_88;
  uVar5 = local_90;
  uVar2 = uStack_98;
  uVar1 = local_a0;
  if ((unaff_x21 == 0) && (local_80 >> 0x3c < 0xf)) {
    if (uVar6 == 0x3000000000000000) {
      FUN_100008184(uStack_88,local_80);
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      FUN_100008184(uStack_88,local_80);
      (*pcVar7)(param_3,param_4);
    }
    FUN_1004337b0(local_a0,uStack_98,local_90,uStack_88,local_80);
    local_138[0] = (byte)uVar5 & 1;
    uStack_c8 = param_1[5];
    local_d0 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    local_b0 = param_1[8];
    uStack_e8 = param_1[1];
    local_f0 = *param_1;
    local_d8 = param_1[3];
    local_e0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(byte *)(param_1 + 2) = local_138[0];
    param_1[3] = uVar8;
    param_1[4] = uVar9 & 0xcfffffffffffffff;
    param_1[6] = 0;
    param_1[8] = 0x3000000000000000;
    FUN_100040bb4(&local_f0,&DAT_100a9eea8,&DAT_100825d80);
  }
  else {
    FUN_1004337b0(local_a0,uStack_98,local_90,uStack_88,local_80);
  }
  return;
}

