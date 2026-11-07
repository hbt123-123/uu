// rea decompile_all
// name: FUN_100490730
// address: 0x100490730
// body: available
// range: 0x100490730-0x1004909e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010049090c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100490730(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long unaff_x21;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  byte local_130 [80];
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0xf000000000000000;
  uVar7 = param_1[4];
  uVar8 = param_1[6];
  uVar4 = uVar7 & uVar8 & 0x3000000000000000;
  puVar3 = param_1;
  if ((uVar4 != 0x3000000000000000) &&
     (auVar10._8_8_ = uVar7, auVar10._0_8_ = uVar8, auVar10 = NEON_ushl(auVar10,_DAT_100825d30,8),
     uVar9 = CONCAT44(auVar10._8_4_,auVar10._0_4_) & 0x100000006,
     (byte)((byte)uVar9 | (byte)(uVar9 >> 0x20)) == 4)) {
    uVar9 = *param_1;
    uVar1 = param_1[1];
    local_d0 = param_1[2];
    uVar2 = param_1[2];
    uVar5 = param_1[3];
    local_a0 = param_1[8];
    uStack_98 = param_1[9];
    local_e0 = uVar9;
    uStack_d8 = uVar1;
    local_c8 = uVar5;
    local_c0 = uVar7;
    uStack_b8 = param_1[5];
    uStack_b0 = uVar8;
    uStack_a8 = param_1[7];
    FUN_100493064(&local_e0,local_130);
    puVar3 = (ulong *)0x0;
    FUN_1004337b0(0,0,0,0,0xf000000000000000);
    local_90 = uVar9 & 0xffffffff;
    local_80 = uVar2 & 0xffffffff00000001;
    uStack_88 = uVar1;
    local_78 = uVar5;
    local_70 = uVar7 & 0xdfffffffffffffff;
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_100494ac8();
  (*pcVar6)(&local_90,&DAT_1009c68f8,puVar3,param_3,param_4);
  uVar2 = local_70;
  uVar1 = local_78;
  uVar9 = local_80;
  uVar8 = uStack_88;
  uVar7 = local_90;
  if ((unaff_x21 == 0) && (local_70 >> 0x3c < 0xf)) {
    if (uVar4 == 0x3000000000000000) {
      FUN_100008184(local_78,local_70);
    }
    else {
      pcVar6 = *(code **)(param_4 + 8);
      FUN_100008184(local_78,local_70);
      (*pcVar6)(param_3,param_4);
    }
    FUN_1004337b0(local_90,uStack_88,local_80,local_78,local_70);
    local_130[0] = (byte)uVar9 & 1;
    uStack_b8 = param_1[5];
    local_c0 = param_1[4];
    uStack_a8 = param_1[7];
    uStack_b0 = param_1[6];
    uStack_98 = param_1[9];
    local_a0 = param_1[8];
    uStack_d8 = param_1[1];
    local_e0 = *param_1;
    local_c8 = param_1[3];
    local_d0 = param_1[2];
    *param_1 = uVar7 & 0xffffffff;
    param_1[1] = uVar8;
    *(byte *)(param_1 + 2) = local_130[0];
    *(char *)((long)param_1 + 0x17) = (char)(uVar9 >> 0x38);
    *(short *)((long)param_1 + 0x15) = (short)(uVar9 >> 0x28);
    *(uint *)((long)param_1 + 0x11) = (uint)(uVar9 >> 8) & 0xff000000;
    param_1[3] = uVar1;
    param_1[4] = uVar2 & 0xcfffffffffffffff;
    param_1[6] = 0x2000000000000000;
    FUN_100040bb4(&local_e0,&DAT_100aa0b98,&DAT_10082dd80);
  }
  else {
    FUN_1004337b0(local_90,uStack_88,local_80,local_78,local_70);
  }
  return;
}

