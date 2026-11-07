// rea decompile_all
// name: FUN_1004d9b10
// address: 0x1004d9b10
// body: available
// range: 0x1004d9b10-0x1004d9d9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004d9ce4) */

void FUN_1004d9b10(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x21;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_198 [120];
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_78;
  
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uVar11 = param_1[0xc];
  uVar8 = param_1[0xe];
  bVar5 = (uVar8 & 0x3000000000000000) == 0;
  bVar6 = uVar11 >> 8 == 0xffffffff;
  puVar7 = param_1;
  if ((!bVar5 || !bVar6) && ((uint)(uVar8 >> 0x39) & 0x18 | (uint)(uVar11 >> 0x3d)) == 0x11) {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    uVar9 = param_1[4];
    uStack_f0 = param_1[6];
    uVar12 = param_1[5];
    uStack_e0 = param_1[8];
    local_e8 = param_1[7];
    uStack_d0 = param_1[10];
    local_d8 = param_1[9];
    local_c8 = param_1[0xb];
    local_120 = uVar1;
    uStack_118 = uVar3;
    local_110 = uVar2;
    uStack_108 = uVar4;
    local_100 = uVar9;
    local_f8 = uVar12;
    local_c0 = uVar11;
    uStack_b8 = param_1[0xd];
    local_b0 = uVar8;
    FUN_1004df818(&local_120,auStack_198);
    puVar7 = (ulong *)0x0;
    FUN_1004e1cac(0,0,0,0,0,0);
    local_a0 = uVar1 & 0xffffffff;
    uStack_98 = uVar3;
    local_90 = uVar2;
    uStack_88 = uVar4;
    local_80 = uVar9;
    local_78 = uVar12;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  FUN_1004e1b2c();
  (*pcVar10)(&local_a0,&DAT_1009cd180,puVar7,param_3,param_4);
  uVar4 = local_78;
  uVar3 = local_80;
  uVar2 = uStack_88;
  uVar1 = local_90;
  uVar11 = uStack_98;
  uVar8 = local_a0;
  if ((unaff_x21 == 0) && (local_90 != 0)) {
    if (bVar5 && bVar6) {
      _swift_bridgeObjectRetain(local_90);
      _swift_bridgeObjectRetain(uVar2);
      FUN_100008184(uVar3,uVar4);
    }
    else {
      pcVar10 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(local_90);
      _swift_bridgeObjectRetain(uVar2);
      FUN_100008184(uVar3,uVar4);
      (*pcVar10)(param_3,param_4);
    }
    FUN_1004e1cac(local_a0,uStack_98,local_90,uStack_88,local_80,local_78);
    local_d8 = param_1[9];
    uStack_e0 = param_1[8];
    local_c8 = param_1[0xb];
    uStack_d0 = param_1[10];
    uStack_b8 = param_1[0xd];
    local_c0 = param_1[0xc];
    uStack_118 = param_1[1];
    local_120 = *param_1;
    uStack_108 = param_1[3];
    local_110 = param_1[2];
    local_f8 = param_1[5];
    local_100 = param_1[4];
    local_e8 = param_1[7];
    uStack_f0 = param_1[6];
    local_b0 = param_1[0xe];
    *param_1 = uVar8 & 0xffffffff;
    param_1[1] = uVar11;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    param_1[0xc] = 0x2000000000000000;
    param_1[0xe] = 0x2000000000000000;
    FUN_100040bb4(&local_120,&DAT_100aa1988,&DAT_100832138);
  }
  else {
    FUN_1004e1cac(local_a0,uStack_98,local_90,uStack_88,local_80,local_78);
  }
  return;
}

