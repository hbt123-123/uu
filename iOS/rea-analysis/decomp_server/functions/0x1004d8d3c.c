// rea decompile_all
// name: FUN_1004d8d3c
// address: 0x1004d8d3c
// body: available
// range: 0x1004d8d3c-0x1004d9007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004d8f3c) */

void FUN_1004d8d3c(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  ulong *puVar8;
  ulong uVar9;
  long unaff_x21;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_1a8 [120];
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uVar12 = param_1[0xc];
  uVar9 = param_1[0xe];
  bVar6 = (uVar9 & 0x3000000000000000) == 0;
  bVar7 = uVar12 >> 8 != 0xffffffff;
  puVar8 = param_1;
  if ((!bVar6 || bVar7) && (((uint)(uVar9 >> 0x39) & 0x18 | (uint)(uVar12 >> 0x3d)) == 0xb)) {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    uVar5 = param_1[4];
    local_110 = param_1[4];
    uVar11 = param_1[5];
    uStack_f8 = param_1[7];
    uVar13 = param_1[6];
    uStack_e8 = param_1[9];
    uStack_f0 = param_1[8];
    uStack_d8 = param_1[0xb];
    local_e0 = param_1[10];
    local_130 = uVar1;
    uStack_128 = uVar3;
    local_120 = uVar2;
    uStack_118 = uVar4;
    local_108 = uVar11;
    local_100 = uVar13;
    uStack_d0 = uVar12;
    uStack_c8 = param_1[0xd];
    local_c0 = uVar9;
    FUN_1004df818(&local_130,auStack_1a8);
    puVar8 = (ulong *)0x0;
    FUN_100433740(0,0,0,0,0,0,0);
    local_b0 = uVar1 & 0xffffffff;
    local_90 = (ulong)(byte)uVar5 & 1;
    uStack_a8 = uVar3;
    local_a0 = uVar2;
    uStack_98 = uVar4;
    local_88 = uVar11;
    local_80 = uVar13;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  FUN_1004e19ac();
  (*pcVar10)(&local_b0,&DAT_1009ccac0,puVar8,param_3,param_4);
  uVar5 = local_80;
  uVar4 = local_88;
  uVar3 = local_90;
  uVar2 = uStack_98;
  uVar1 = local_a0;
  uVar12 = uStack_a8;
  uVar9 = local_b0;
  if ((unaff_x21 == 0) && (uStack_98 != 0)) {
    if (bVar6 && !bVar7) {
      _swift_bridgeObjectRetain(uStack_98);
      FUN_100008184(uVar4,uVar5);
    }
    else {
      pcVar10 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(uStack_98);
      FUN_100008184(uVar4,uVar5);
      (*pcVar10)(param_3,param_4);
    }
    FUN_100433740(local_b0,uStack_a8,local_a0,uStack_98,local_90,local_88,local_80);
    uStack_e8 = param_1[9];
    uStack_f0 = param_1[8];
    uStack_d8 = param_1[0xb];
    local_e0 = param_1[10];
    uStack_c8 = param_1[0xd];
    uStack_d0 = param_1[0xc];
    uStack_128 = param_1[1];
    local_130 = *param_1;
    uStack_118 = param_1[3];
    local_120 = param_1[2];
    local_108 = param_1[5];
    local_110 = param_1[4];
    uStack_f8 = param_1[7];
    local_100 = param_1[6];
    local_c0 = param_1[0xe];
    *param_1 = uVar9 & 0xffffffff;
    param_1[1] = uVar12;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar3 & 1;
    param_1[5] = uVar4;
    param_1[6] = uVar5;
    param_1[0xc] = 0x6000000000000000;
    param_1[0xe] = 0x1000000000000000;
    FUN_100040bb4(&local_130,&DAT_100aa1988,&DAT_100832138);
  }
  else {
    FUN_100433740(local_b0,uStack_a8,local_a0,uStack_98,local_90,local_88,local_80);
  }
  return;
}

