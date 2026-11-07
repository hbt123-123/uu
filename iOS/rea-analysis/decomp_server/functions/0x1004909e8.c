// rea decompile_all
// name: FUN_1004909e8
// address: 0x1004909e8
// body: available
// range: 0x1004909e8-0x100490cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100490bd0) */

void FUN_1004909e8(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long unaff_x21;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte local_158 [80];
  byte local_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_80 = 0xf000000000000000;
  uVar8 = param_1[4];
  uVar10 = param_1[6];
  uVar7 = uVar8 & uVar10 & 0x3000000000000000;
  puVar4 = param_1;
  if ((uVar7 != 0x3000000000000000) &&
     (((uint)(uVar10 >> 0x3b) & 6 | (uint)(uVar8 >> 0x3d) & 1) == 5)) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    local_f0 = param_1[2];
    uVar9 = param_1[3];
    uVar5 = param_1[5];
    uStack_b8 = param_1[9];
    uStack_c0 = param_1[8];
    local_100 = uVar1;
    uStack_f8 = uVar2;
    uStack_e8 = uVar9;
    uStack_e0 = uVar8;
    local_d8 = uVar5;
    local_d0 = uVar10;
    uStack_c8 = param_1[7];
    FUN_100493064(&local_100,local_158);
    puVar4 = (ulong *)0x0;
    FUN_10049775c(0,0,0,0,0,0,0xf000000000000000);
    local_b0 = uVar1 & 0xffffffff;
    local_a0 = (ulong)(byte)uVar3 & 1;
    local_90 = uVar8 & 1;
    uStack_a8 = uVar2;
    uStack_98 = uVar9;
    local_88 = uVar5;
    local_80 = uVar10 & 0xcfffffffffffffff;
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1004949cc();
  (*pcVar6)(&local_b0,&DAT_1009c6870,puVar4,param_3,param_4);
  uVar9 = local_80;
  uVar5 = local_88;
  uVar3 = local_90;
  uVar2 = uStack_98;
  uVar1 = local_a0;
  uVar10 = uStack_a8;
  uVar8 = local_b0;
  if ((unaff_x21 == 0) && (local_80 >> 0x3c < 0xf)) {
    if (uVar7 == 0x3000000000000000) {
      FUN_100008184(local_88,local_80);
    }
    else {
      pcVar6 = *(code **)(param_4 + 8);
      FUN_100008184(local_88,local_80);
      (*pcVar6)(param_3,param_4);
    }
    FUN_10049775c(local_b0,uStack_a8,local_a0,uStack_98,local_90,local_88,local_80);
    local_158[0] = (byte)uVar1 & 1;
    local_108 = (byte)uVar3 & 1;
    local_d8 = param_1[5];
    uStack_e0 = param_1[4];
    uStack_c8 = param_1[7];
    local_d0 = param_1[6];
    uStack_b8 = param_1[9];
    uStack_c0 = param_1[8];
    uStack_f8 = param_1[1];
    local_100 = *param_1;
    uStack_e8 = param_1[3];
    local_f0 = param_1[2];
    *param_1 = uVar8 & 0xffffffff;
    param_1[1] = uVar10;
    *(byte *)(param_1 + 2) = local_158[0];
    param_1[3] = uVar2;
    *(byte *)(param_1 + 4) = local_108;
    *(undefined1 *)((long)param_1 + 0x27) = 0x20;
    *(undefined2 *)((long)param_1 + 0x25) = 0;
    *(undefined4 *)((long)param_1 + 0x21) = 0;
    param_1[5] = uVar5;
    param_1[6] = uVar9 & 0xcfffffffffffffff | 0x2000000000000000;
    FUN_100040bb4(&local_100,&DAT_100aa0b98,&DAT_10082dd80);
  }
  else {
    FUN_10049775c(local_b0,uStack_a8,local_a0,uStack_98,local_90,local_88,local_80);
  }
  return;
}

