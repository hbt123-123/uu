// rea decompile_all
// name: FUN_100424ec4
// address: 0x100424ec4
// body: available
// range: 0x100424ec4-0x100425157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004250a0) */

void FUN_100424ec4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x21;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  byte local_148 [72];
  undefined8 local_100;
  long lStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 local_88;
  ulong local_80;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  uVar8 = param_1[4];
  uVar11 = param_1[6];
  uVar6 = param_1[8];
  uVar10 = uVar8 & uVar11 & uVar6 & 0x3000000000000000;
  puVar5 = param_1;
  if (uVar10 != 0x3000000000000000 && ((uint)(uVar6 >> 0x3b) & 6 | (uint)(uVar11 >> 0x3d) & 1) == 2)
  {
    uVar1 = *param_1;
    lVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    uVar7 = param_1[5];
    local_100 = uVar1;
    lStack_f8 = lVar3;
    local_f0 = uVar2;
    uStack_e8 = uVar4;
    local_e0 = uVar8;
    uStack_d8 = uVar7;
    local_d0 = uVar11;
    uStack_c8 = param_1[7];
    local_c0 = uVar6;
    FUN_10042d20c(&local_100,local_148);
    puVar5 = (undefined8 *)0x0;
    FUN_100433778(0,0,0,0,0,0,0);
    local_a0 = uVar2 & 0xffffffff;
    local_90 = uVar8 & 1;
    local_b0 = uVar1;
    lStack_a8 = lVar3;
    uStack_98 = uVar4;
    local_88 = uVar7;
    local_80 = uVar11 & 0xdfffffffffffffff;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_10042f1dc();
  (*pcVar9)(&local_b0,&DAT_1009be9d8,puVar5,param_3,param_4);
  uVar11 = local_80;
  uVar7 = local_88;
  uVar8 = local_90;
  uVar4 = uStack_98;
  uVar6 = local_a0;
  lVar3 = lStack_a8;
  uVar1 = local_b0;
  if ((unaff_x21 == 0) && (lStack_a8 != 0)) {
    if (uVar10 == 0x3000000000000000) {
      _swift_bridgeObjectRetain(lStack_a8);
      FUN_100008184(uVar7,uVar11);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_a8);
      FUN_100008184(uVar7,uVar11);
      (*pcVar9)(param_3,param_4);
    }
    FUN_100433778(local_b0,lStack_a8,local_a0,uStack_98,local_90,local_88,local_80);
    local_148[0] = (byte)uVar8 & 1;
    uStack_d8 = param_1[5];
    local_e0 = param_1[4];
    uStack_c8 = param_1[7];
    local_d0 = param_1[6];
    local_c0 = param_1[8];
    lStack_f8 = param_1[1];
    local_100 = *param_1;
    uStack_e8 = param_1[3];
    local_f0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar6 & 0xffffffff;
    param_1[3] = uVar4;
    *(byte *)(param_1 + 4) = local_148[0];
    *(undefined1 *)((long)param_1 + 0x27) = 0;
    *(undefined2 *)((long)param_1 + 0x25) = 0;
    *(undefined4 *)((long)param_1 + 0x21) = 0;
    param_1[5] = uVar7;
    param_1[6] = uVar11 & 0xcfffffffffffffff;
    param_1[8] = 0x1000000000000000;
    FUN_100040bb4(&local_100,&DAT_100a9eea8,&DAT_100825d80);
  }
  else {
    FUN_100433778(local_b0,lStack_a8,local_a0,uStack_98,local_90,local_88,local_80);
  }
  return;
}

