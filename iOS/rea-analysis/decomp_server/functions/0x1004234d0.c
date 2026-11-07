// rea decompile_all
// name: FUN_1004234d0
// address: 0x1004234d0
// body: available
// range: 0x1004234d0-0x10042372f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100423660) */

void FUN_1004234d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  long unaff_x21;
  code *pcVar11;
  ulong uVar12;
  undefined1 local_140 [80];
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  byte bStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong local_78;
  
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0xf000000000000000;
  uVar8 = param_1[8];
  bVar5 = *(byte *)(param_1 + 9);
  bVar6 = ((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  puVar7 = param_1;
  if (!bVar6 || bVar5 != 0xff) {
    uVar9 = 4;
    if ((bVar5 & 1) == 0) {
      uVar9 = 0;
    }
    if ((uVar9 | (uint)(uVar8 >> 0x3c) & 3) == 4) {
      uVar1 = *param_1;
      uVar3 = param_1[1];
      uVar2 = param_1[2];
      uVar4 = param_1[3];
      uVar10 = param_1[4];
      uStack_c0 = param_1[6];
      uVar12 = param_1[5];
      local_b8 = (undefined1)param_1[7];
      uStack_b7 = (undefined7)((ulong)param_1[7] >> 8);
      uStack_b0 = (undefined1)uVar8;
      uStack_af = (undefined7)(uVar8 >> 8);
      local_f0 = uVar1;
      uStack_e8 = uVar3;
      local_e0 = uVar2;
      uStack_d8 = uVar4;
      local_d0 = uVar10;
      uStack_c8 = uVar12;
      bStack_a8 = bVar5;
      FUN_10042c868(&local_f0,local_140);
      puVar7 = (undefined8 *)0x0;
      FUN_100433888(0,0,0,0,0,0xf000000000000000);
      uStack_98 = uVar3 & 0xffffffff;
      uStack_88 = uVar4 & 0xffffffff;
      local_a0 = uVar1;
      local_90 = uVar2;
      local_80 = uVar10;
      local_78 = uVar12;
    }
  }
  pcVar11 = *(code **)(param_4 + 0x198);
  FUN_10042f784();
  (*pcVar11)(&local_a0,&DAT_1009bed08,puVar7,param_3,param_4);
  uVar4 = local_78;
  uVar10 = local_80;
  uVar3 = uStack_88;
  uVar2 = local_90;
  uVar8 = uStack_98;
  uVar1 = local_a0;
  if ((unaff_x21 == 0) && (local_78 >> 0x3c < 0xf)) {
    if (bVar6 && bVar5 == 0xff) {
      FUN_100008184(local_80,local_78);
    }
    else {
      pcVar11 = *(code **)(param_4 + 8);
      FUN_100008184(local_80,local_78);
      (*pcVar11)(param_3,param_4);
    }
    FUN_100433888(local_a0,uStack_98,local_90,uStack_88,local_80,local_78);
    local_140[0] = 1;
    uStack_c8 = param_1[5];
    local_d0 = param_1[4];
    uStack_c0 = param_1[6];
    local_b8 = (undefined1)param_1[7];
    uStack_af = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_a8 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_e8 = param_1[1];
    local_f0 = *param_1;
    uStack_d8 = param_1[3];
    local_e0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar8 & 0xffffffff;
    param_1[2] = uVar2;
    param_1[3] = uVar3 & 0xffffffff;
    param_1[4] = uVar10;
    param_1[5] = uVar4;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_100040bb4(&local_f0,&DAT_100a9eea0,&DAT_100825d78);
  }
  else {
    FUN_100433888(local_a0,uStack_98,local_90,uStack_88,local_80,local_78);
  }
  return;
}

