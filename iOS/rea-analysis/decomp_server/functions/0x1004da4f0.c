// rea decompile_all
// name: FUN_1004da4f0
// address: 0x1004da4f0
// body: available
// range: 0x1004da4f0-0x1004da753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004da674) */

void FUN_1004da4f0(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  ulong *puVar7;
  ulong uVar8;
  long unaff_x21;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_188 [120];
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_78;
  
  local_98 = 0xfffffffe00000000;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  uVar10 = param_1[0xc];
  uVar8 = param_1[0xe];
  bVar5 = (uVar8 & 0x3000000000000000) == 0;
  bVar6 = uVar10 >> 8 == 0xffffffff;
  puVar7 = param_1;
  if ((!bVar5 || !bVar6) && ((uint)(uVar8 >> 0x39) & 0x18 | (uint)(uVar10 >> 0x3d)) == 0x15) {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    uStack_e8 = param_1[5];
    uVar11 = param_1[4];
    uStack_d8 = param_1[7];
    local_e0 = param_1[6];
    uStack_c8 = param_1[9];
    local_d0 = param_1[8];
    uStack_b8 = param_1[0xb];
    local_c0 = param_1[10];
    local_110 = uVar1;
    uStack_108 = uVar3;
    local_100 = uVar2;
    uStack_f8 = uVar4;
    local_f0 = uVar11;
    local_b0 = uVar10;
    uStack_a8 = param_1[0xd];
    local_a0 = uVar8;
    FUN_1004df818(&local_110,auStack_188);
    puVar7 = (ulong *)0xfffffffe00000000;
    FUN_1004e1cf8(0xfffffffe00000000,0,0,0,0);
    local_98 = uVar1;
    local_90 = uVar3;
    uStack_88 = uVar2;
    local_80 = uVar4;
    local_78 = uVar11;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_100448a50();
  (*pcVar9)(&local_98,&DAT_1009c17e8,puVar7,param_3,param_4);
  uVar3 = local_78;
  uVar2 = local_80;
  uVar1 = uStack_88;
  uVar10 = local_90;
  uVar8 = local_98;
  if ((unaff_x21 == 0) &&
     ((local_98 >> 0x20 != 0xfffffffe || ((uStack_88 & 0x3000000000000000) != 0)))) {
    if (bVar5 && bVar6) {
      FUN_100447e1c();
      FUN_100008184(uVar2,uVar3);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      FUN_100447e1c();
      FUN_100008184(uVar2,uVar3);
      (*pcVar9)(param_3,param_4);
    }
    FUN_1004e1cf8(local_98,local_90,uStack_88,local_80,local_78);
    uStack_c8 = param_1[9];
    local_d0 = param_1[8];
    uStack_b8 = param_1[0xb];
    local_c0 = param_1[10];
    uStack_a8 = param_1[0xd];
    local_b0 = param_1[0xc];
    uStack_108 = param_1[1];
    local_110 = *param_1;
    uStack_f8 = param_1[3];
    local_100 = param_1[2];
    uStack_e8 = param_1[5];
    local_f0 = param_1[4];
    uStack_d8 = param_1[7];
    local_e0 = param_1[6];
    local_a0 = param_1[0xe];
    *param_1 = uVar8;
    param_1[1] = uVar10;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    param_1[0xc] = 0xa000000000000000;
    param_1[0xe] = 0x2000000000000000;
    FUN_100040bb4(&local_110,&DAT_100aa1988,&DAT_100832138);
  }
  else {
    FUN_1004e1cf8(local_98,local_90,uStack_88,local_80,local_78);
  }
  return;
}

