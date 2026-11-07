// rea decompile_all
// name: FUN_10049b01c
// address: 0x10049b01c
// body: available
// range: 0x10049b01c-0x10049b27b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010049b138) */

void FUN_10049b01c(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  long unaff_x21;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_130 [80];
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  byte local_70;
  
  local_90 = 2;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uVar11 = param_1[4];
  uVar10 = param_1[7];
  uVar7 = param_1[9];
  bVar4 = (uVar7 & 0x3000000000000000) == 0;
  bVar5 = uVar10 >> 0x20 == 0;
  puVar6 = param_1;
  if (((!bVar4 || !bVar5) || 0xfffffffeffffffff >= uVar11) &&
      (((uint)(uVar7 >> 0x3b) & 6) == 0 && -1 < (long)uVar10)) {
    uVar1 = *param_1;
    uVar9 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    local_b0 = param_1[6];
    local_e0 = uVar1;
    uStack_d8 = uVar9;
    local_d0 = uVar2;
    uStack_c8 = uVar3;
    local_c0 = uVar11;
    uStack_b8 = param_1[5];
    uStack_a8 = uVar10;
    local_a0 = param_1[8];
    uStack_98 = uVar7;
    FUN_10049d5cc(&local_e0,auStack_130);
    puVar6 = (ulong *)0x2;
    FUN_10049f2dc(2,0,0,0,0);
    local_70 = (byte)uVar11;
    local_90 = uVar1;
    uStack_88 = uVar9;
    local_80 = uVar2;
    uStack_78 = uVar3;
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_10049db44();
  (*pcVar8)(&local_90,&DAT_1009c7078,puVar6,param_3,param_4);
  uVar2 = uStack_78;
  uVar1 = local_80;
  uVar10 = uStack_88;
  uVar7 = local_90;
  uVar9 = (ulong)local_70;
  if ((unaff_x21 == 0) && ((local_90 & 0xff) != 2)) {
    if ((bVar4 && bVar5) && 0xfffffffeffffffff < uVar11) {
      local_e0 = local_90;
      uStack_d8 = uStack_88;
      local_d0 = local_80;
      uStack_c8 = uStack_78;
      local_c0 = CONCAT71(local_c0._1_7_,local_70);
      FUN_10049d600(&local_e0,auStack_130);
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      local_e0 = local_90;
      uStack_d8 = uStack_88;
      local_d0 = local_80;
      uStack_c8 = uStack_78;
      local_c0 = CONCAT71(local_c0._1_7_,local_70);
      FUN_10049d600(&local_e0,auStack_130);
      (*pcVar8)(param_3,param_4);
    }
    FUN_10049f2dc(local_90,uStack_88,local_80,uStack_78,local_70);
    uStack_b8 = param_1[5];
    local_c0 = param_1[4];
    uStack_a8 = param_1[7];
    local_b0 = param_1[6];
    uStack_98 = param_1[9];
    local_a0 = param_1[8];
    uStack_d8 = param_1[1];
    local_e0 = *param_1;
    uStack_c8 = param_1[3];
    local_d0 = param_1[2];
    *param_1 = uVar7 & 0xffffffff00000101;
    param_1[1] = uVar10 & 0x1ffffffff;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar9;
    param_1[7] = 0;
    param_1[9] = 0;
    FUN_100040bb4(&local_e0,&DAT_100aa0b88,&DAT_10082dd70);
  }
  else {
    FUN_10049f2dc(local_90,uStack_88,local_80,uStack_78,uVar9);
  }
  return;
}

