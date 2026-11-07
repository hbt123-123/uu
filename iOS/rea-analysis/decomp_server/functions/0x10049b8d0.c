// rea decompile_all
// name: FUN_10049b8d0
// address: 0x10049b8d0
// body: available
// range: 0x10049b8d0-0x10049bb07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010049ba54) */

void FUN_10049b8d0(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long unaff_x21;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_120 [80];
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  
  local_78 = 0;
  local_70 = 0;
  local_80 = 2;
  uVar9 = param_1[4];
  uVar8 = param_1[7];
  uVar5 = param_1[9];
  bVar1 = (uVar5 & 0x3000000000000000) == 0;
  bVar2 = uVar8 >> 0x20 == 0;
  puVar4 = param_1;
  if (((!bVar1 || !bVar2) || 0xfffffffeffffffff >= uVar9) &&
      ((uint)(uVar5 >> 0x3b) & 6 | (uint)(uVar8 >> 0x3f)) == 3) {
    uVar3 = *param_1;
    local_d0 = *param_1;
    uVar7 = param_1[1];
    uStack_b8 = param_1[3];
    uVar10 = param_1[2];
    local_a0 = param_1[6];
    uStack_c8 = uVar7;
    local_c0 = uVar10;
    local_b0 = uVar9;
    uStack_a8 = param_1[5];
    local_98 = uVar8;
    uStack_90 = param_1[8];
    local_88 = uVar5;
    FUN_10049d5cc(&local_d0,auStack_120);
    puVar4 = (ulong *)0x2;
    FUN_10044a1b4(2,0,0);
    local_80 = (ulong)(byte)uVar3 & 1;
    local_78 = uVar7;
    local_70 = uVar10;
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_10049df34();
  (*pcVar6)(&local_80,&DAT_1009c72c0,puVar4,param_3,param_4);
  uVar3 = local_70;
  uVar8 = local_78;
  uVar5 = local_80;
  if ((unaff_x21 == 0) && ((local_80 & 0xff) != 2)) {
    if ((bVar1 && bVar2) && 0xfffffffeffffffff < uVar9) {
      FUN_100008184(local_78,local_70);
    }
    else {
      pcVar6 = *(code **)(param_4 + 8);
      FUN_100008184(local_78,local_70);
      (*pcVar6)(param_3,param_4);
    }
    FUN_10044a1b4(local_80,local_78,local_70);
    uStack_a8 = param_1[5];
    local_b0 = param_1[4];
    local_98 = param_1[7];
    local_a0 = param_1[6];
    local_88 = param_1[9];
    uStack_90 = param_1[8];
    uStack_c8 = param_1[1];
    local_d0 = *param_1;
    uStack_b8 = param_1[3];
    local_c0 = param_1[2];
    *param_1 = uVar5 & 1;
    param_1[1] = uVar8;
    param_1[2] = uVar3;
    param_1[4] = 0;
    param_1[7] = 0x8000000000000000;
    param_1[9] = 0x1000000000000000;
    FUN_100040bb4(&local_d0,&DAT_100aa0b88,&DAT_10082dd70);
  }
  else {
    FUN_10044a1b4(local_80,local_78,local_70);
  }
  return;
}

