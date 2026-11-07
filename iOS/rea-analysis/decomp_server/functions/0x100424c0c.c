// rea decompile_all
// name: FUN_100424c0c
// address: 0x100424c0c
// body: available
// range: 0x100424c0c-0x100424ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100424e18) */

void FUN_100424c0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x21;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  byte local_148 [72];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  long lStack_98;
  ulong local_90;
  undefined8 uStack_88;
  ulong local_80;
  
  local_80 = 0;
  lStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uVar8 = param_1[4];
  uVar11 = param_1[6];
  uVar5 = param_1[8];
  uVar10 = uVar8 & uVar11 & uVar5 & 0x3000000000000000;
  puVar4 = param_1;
  if (uVar10 != 0x3000000000000000 && ((uint)(uVar5 >> 0x3b) & 6 | (uint)(uVar11 >> 0x3d) & 1) == 1)
  {
    uVar7 = *param_1;
    bVar3 = *(byte *)(param_1 + 1);
    uStack_f8 = param_1[1];
    uVar1 = param_1[2];
    lVar2 = param_1[3];
    uVar6 = param_1[5];
    local_100 = uVar7;
    local_f0 = uVar1;
    lStack_e8 = lVar2;
    local_e0 = uVar8;
    uStack_d8 = uVar6;
    local_d0 = uVar11;
    uStack_c8 = param_1[7];
    local_c0 = uVar5;
    FUN_10042d20c(&local_100,local_148);
    puVar4 = (undefined8 *)0x0;
    FUN_100433740(0,0,0,0,0,0,0);
    uStack_a8 = (ulong)bVar3 & 1;
    local_90 = uVar8 & 0xffffffff;
    local_b0 = uVar7;
    local_a0 = uVar1;
    lStack_98 = lVar2;
    uStack_88 = uVar6;
    local_80 = uVar11 & 0xdfffffffffffffff;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_10042efe4();
  (*pcVar9)(&local_b0,&DAT_1009be8c8,puVar4,param_3,param_4);
  uVar11 = local_80;
  uVar7 = uStack_88;
  uVar8 = local_90;
  lVar2 = lStack_98;
  uVar6 = local_a0;
  uVar5 = uStack_a8;
  uVar1 = local_b0;
  if ((unaff_x21 == 0) && (lStack_98 != 0)) {
    if (uVar10 == 0x3000000000000000) {
      _swift_bridgeObjectRetain(lStack_98);
      FUN_100008184(uVar7,uVar11);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_98);
      FUN_100008184(uVar7,uVar11);
      (*pcVar9)(param_3,param_4);
    }
    FUN_100433740(local_b0,uStack_a8,local_a0,lStack_98,local_90,uStack_88,local_80);
    local_148[0] = (byte)uVar5 & 1;
    uStack_d8 = param_1[5];
    local_e0 = param_1[4];
    uStack_c8 = param_1[7];
    local_d0 = param_1[6];
    local_c0 = param_1[8];
    uStack_f8 = param_1[1];
    local_100 = *param_1;
    lStack_e8 = param_1[3];
    local_f0 = param_1[2];
    *param_1 = uVar1;
    *(byte *)(param_1 + 1) = local_148[0];
    param_1[2] = uVar6;
    param_1[3] = lVar2;
    param_1[4] = uVar8 & 0xffffffff;
    param_1[5] = uVar7;
    param_1[6] = uVar11 & 0xcfffffffffffffff | 0x2000000000000000;
    param_1[8] = 0;
    FUN_100040bb4(&local_100,&DAT_100a9eea8,&DAT_100825d80);
  }
  else {
    FUN_100433740(local_b0,uStack_a8,local_a0,lStack_98,local_90,uStack_88,local_80);
  }
  return;
}

