// rea decompile_all
// name: FUN_1004d7de0
// address: 0x1004d7de0
// body: available
// range: 0x1004d7de0-0x1004d8057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004d7f88) */

void FUN_1004d7de0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte local_188 [120];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong local_78;
  
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0xf000000000000000;
  uVar9 = param_1[0xc];
  uVar5 = param_1[0xe];
  bVar2 = (uVar5 & 0x3000000000000000) == 0;
  bVar3 = uVar9 >> 8 == 0xffffffff;
  puVar4 = param_1;
  if ((!bVar2 || !bVar3) && (((uint)(uVar5 >> 0x39) & 0x18 | (uint)(uVar9 >> 0x3d)) == 4)) {
    uVar8 = *param_1;
    bVar1 = *(byte *)(param_1 + 1);
    uStack_108 = param_1[1];
    uVar6 = param_1[2];
    uStack_f0 = param_1[4];
    uVar10 = param_1[3];
    uStack_e0 = param_1[6];
    local_e8 = param_1[5];
    uStack_d0 = param_1[8];
    local_d8 = param_1[7];
    uStack_c0 = param_1[10];
    local_c8 = param_1[9];
    local_b8 = param_1[0xb];
    local_110 = uVar8;
    local_100 = uVar6;
    uStack_f8 = uVar10;
    local_b0 = uVar9;
    uStack_a8 = param_1[0xd];
    local_a0 = uVar5;
    FUN_1004df818(&local_110,local_188);
    puVar4 = (undefined8 *)0x0;
    FUN_1004337cc(0,0,0,0xf000000000000000);
    uStack_88 = (ulong)bVar1 & 1;
    local_90 = uVar8;
    local_80 = uVar6;
    local_78 = uVar10;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_10042fc70();
  (*pcVar7)(&local_90,&DAT_1009befb8,puVar4,param_3,param_4);
  uVar9 = local_78;
  uVar8 = local_80;
  uVar5 = uStack_88;
  uVar6 = local_90;
  if ((unaff_x21 == 0) && (local_78 >> 0x3c < 0xf)) {
    if (bVar2 && bVar3) {
      FUN_100008184(local_80,local_78);
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      FUN_100008184(local_80,local_78);
      (*pcVar7)(param_3,param_4);
    }
    FUN_1004337cc(local_90,uStack_88,local_80,local_78);
    local_c8 = param_1[9];
    uStack_d0 = param_1[8];
    local_b8 = param_1[0xb];
    uStack_c0 = param_1[10];
    uStack_a8 = param_1[0xd];
    local_b0 = param_1[0xc];
    uStack_108 = param_1[1];
    local_110 = *param_1;
    uStack_f8 = param_1[3];
    local_100 = param_1[2];
    local_e8 = param_1[5];
    uStack_f0 = param_1[4];
    local_d8 = param_1[7];
    uStack_e0 = param_1[6];
    local_188[0] = (byte)uVar5 & 1;
    local_a0 = param_1[0xe];
    *param_1 = uVar6;
    *(byte *)(param_1 + 1) = local_188[0];
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    param_1[0xc] = 0x8000000000000000;
    param_1[0xe] = 0;
    FUN_100040bb4(&local_110,&DAT_100aa1988,&DAT_100832138);
  }
  else {
    FUN_1004337cc(local_90,uStack_88,local_80,local_78);
  }
  return;
}

