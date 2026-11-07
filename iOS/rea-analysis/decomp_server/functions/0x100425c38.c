// rea decompile_all
// name: FUN_100425c38
// address: 0x100425c38
// body: available
// range: 0x100425c38-0x100425e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100425dd0) */

void FUN_100425c38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x21;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  byte local_118 [72];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  ulong uStack_70;
  
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0xf000000000000000;
  uVar9 = param_1[6];
  uVar5 = param_1[8];
  uVar7 = param_1[4] & uVar9 & uVar5 & 0x3000000000000000;
  puVar4 = param_1;
  if (uVar7 != 0x3000000000000000 && ((uint)(uVar5 >> 0x3b) & 6 | (uint)(uVar9 >> 0x3d) & 1) == 7) {
    uVar6 = *param_1;
    bVar3 = *(byte *)(param_1 + 1);
    uStack_c8 = param_1[1];
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    local_d0 = uVar6;
    local_c0 = uVar1;
    uStack_b8 = uVar2;
    local_b0 = param_1[4];
    uStack_a8 = param_1[5];
    uStack_a0 = uVar9;
    uStack_98 = param_1[7];
    local_90 = uVar5;
    FUN_10042d20c(&local_d0,local_118);
    puVar4 = (undefined8 *)0x0;
    FUN_1004337cc(0,0,0,0xf000000000000000);
    uStack_80 = (ulong)bVar3 & 1;
    local_88 = uVar6;
    local_78 = uVar1;
    uStack_70 = uVar2;
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_10042eaf8();
  (*pcVar8)(&local_88,&DAT_1009be5a0,puVar4,param_3,param_4);
  uVar9 = uStack_70;
  uVar6 = local_78;
  uVar5 = uStack_80;
  uVar1 = local_88;
  if ((unaff_x21 == 0) && (uStack_70 >> 0x3c < 0xf)) {
    if (uVar7 == 0x3000000000000000) {
      FUN_100008184(local_78,uStack_70);
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      FUN_100008184(local_78,uStack_70);
      (*pcVar8)(param_3,param_4);
    }
    FUN_1004337cc(local_88,uStack_80,local_78,uStack_70);
    local_118[0] = (byte)uVar5 & 1;
    uStack_a8 = param_1[5];
    local_b0 = param_1[4];
    uStack_98 = param_1[7];
    uStack_a0 = param_1[6];
    local_90 = param_1[8];
    uStack_c8 = param_1[1];
    local_d0 = *param_1;
    uStack_b8 = param_1[3];
    local_c0 = param_1[2];
    *param_1 = uVar1;
    *(byte *)(param_1 + 1) = local_118[0];
    param_1[2] = uVar6;
    param_1[3] = uVar9;
    param_1[4] = 0;
    param_1[6] = 0x2000000000000000;
    param_1[8] = 0x3000000000000000;
    FUN_100040bb4(&local_d0,&DAT_100a9eea8,&DAT_100825d80);
  }
  else {
    FUN_1004337cc(local_88,uStack_80,local_78,uStack_70);
  }
  return;
}

