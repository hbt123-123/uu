// rea decompile_all
// name: FUN_1004da9a0
// address: 0x1004da9a0
// body: available
// range: 0x1004da9a0-0x1004dabe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004dab3c) */

void FUN_1004da9a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long unaff_x21;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_198 [120];
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uVar10 = param_1[0xc];
  uVar8 = param_1[0xe];
  bVar5 = (uVar8 & 0x3000000000000000) == 0;
  bVar6 = uVar10 >> 8 == 0xffffffff;
  puVar7 = param_1;
  if ((!bVar5 || !bVar6) && ((uint)(uVar8 >> 0x39) & 0x18 | (uint)(uVar10 >> 0x3d)) == 0x17) {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    lVar2 = param_1[2];
    uVar4 = param_1[3];
    uStack_f8 = param_1[5];
    uVar11 = param_1[4];
    uStack_e8 = param_1[7];
    local_f0 = param_1[6];
    uStack_d8 = param_1[9];
    local_e0 = param_1[8];
    uStack_c8 = param_1[0xb];
    local_d0 = param_1[10];
    local_120 = uVar1;
    uStack_118 = uVar3;
    local_110 = lVar2;
    uStack_108 = uVar4;
    local_100 = uVar11;
    local_c0 = uVar10;
    uStack_b8 = param_1[0xd];
    local_b0 = uVar8;
    FUN_1004df818(&local_120,auStack_198);
    puVar7 = (undefined8 *)0x0;
    FUN_100139ca0(0,0,0,0,0);
    local_a0 = uVar1;
    uStack_98 = uVar3;
    local_90 = lVar2;
    uStack_88 = uVar4;
    local_80 = uVar11;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_1004e1c6c();
  (*pcVar9)(&local_a0,&DAT_1009cd858,puVar7,param_3,param_4);
  uVar11 = local_80;
  uVar4 = uStack_88;
  lVar2 = local_90;
  uVar3 = uStack_98;
  uVar1 = local_a0;
  if ((unaff_x21 == 0) && (local_90 != 0)) {
    if (bVar5 && bVar6) {
      _swift_bridgeObjectRetain(local_90);
      FUN_100008184(uVar4,uVar11);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(local_90);
      FUN_100008184(uVar4,uVar11);
      (*pcVar9)(param_3,param_4);
    }
    FUN_100139ca0(local_a0,uStack_98,local_90,uStack_88,local_80);
    uStack_d8 = param_1[9];
    local_e0 = param_1[8];
    uStack_c8 = param_1[0xb];
    local_d0 = param_1[10];
    uStack_b8 = param_1[0xd];
    local_c0 = param_1[0xc];
    uStack_118 = param_1[1];
    local_120 = *param_1;
    uStack_108 = param_1[3];
    local_110 = param_1[2];
    uStack_f8 = param_1[5];
    local_100 = param_1[4];
    uStack_e8 = param_1[7];
    local_f0 = param_1[6];
    local_b0 = param_1[0xe];
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = lVar2;
    param_1[3] = uVar4;
    param_1[4] = uVar11;
    param_1[0xc] = 0xe000000000000000;
    param_1[0xe] = 0x2000000000000000;
    FUN_100040bb4(&local_120,&DAT_100aa1988,&DAT_100832138);
  }
  else {
    FUN_100139ca0(local_a0,uStack_98,local_90,uStack_88,local_80);
  }
  return;
}

