// rea decompile_all
// name: FUN_1004232d8
// address: 0x1004232d8
// body: available
// range: 0x1004232d8-0x1004234cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100423420) */

void FUN_1004232d8(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  long unaff_x21;
  code *pcVar8;
  ulong uVar9;
  undefined1 local_120 [80];
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  byte local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0xf000000000000000;
  uVar6 = param_1[8];
  bVar3 = (byte)param_1[9];
  bVar4 = ((uVar6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  puVar5 = param_1;
  if (!bVar4 || bVar3 != 0xff) {
    uVar7 = 4;
    if ((bVar3 & 1) == 0) {
      uVar7 = 0;
    }
    if ((uVar7 | (uint)(uVar6 >> 0x3c) & 3) == 3) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uStack_b8 = param_1[3];
      uVar9 = param_1[2];
      uStack_a8 = param_1[5];
      local_b0 = param_1[4];
      local_a0 = param_1[6];
      uStack_98 = (undefined1)param_1[7];
      uStack_97 = (undefined7)(param_1[7] >> 8);
      local_90 = (undefined1)uVar6;
      uStack_8f = (undefined7)(uVar6 >> 8);
      local_d0 = uVar1;
      uStack_c8 = uVar2;
      local_c0 = uVar9;
      local_88 = bVar3;
      FUN_10042c868(&local_d0,local_120);
      puVar5 = (ulong *)0x0;
      switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
      local_80 = uVar1 & 0xffffffff;
      uStack_78 = uVar2;
      local_70 = uVar9;
    }
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_10042f394();
  (*pcVar8)(&local_80,&DAT_1009beaf0,puVar5,param_3,param_4);
  uVar2 = local_70;
  uVar1 = uStack_78;
  uVar6 = local_80;
  if ((unaff_x21 == 0) && (local_70 >> 0x3c < 0xf)) {
    if (bVar4 && bVar3 == 0xff) {
      FUN_100008184(uStack_78,local_70);
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      FUN_100008184(uStack_78,local_70);
      (*pcVar8)(param_3,param_4);
    }
    switchD_10004048c::caseD_6d(local_80,uStack_78,local_70);
    local_120[0] = 0;
    uStack_a8 = param_1[5];
    local_b0 = param_1[4];
    local_a0 = param_1[6];
    uStack_98 = (undefined1)param_1[7];
    uStack_8f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    local_88 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    local_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_c8 = param_1[1];
    local_d0 = *param_1;
    uStack_b8 = param_1[3];
    local_c0 = param_1[2];
    *param_1 = uVar6 & 0xffffffff;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[8] = 0x3000000000000000;
    *(undefined1 *)(param_1 + 9) = 0;
    FUN_100040bb4(&local_d0,&DAT_100a9eea0,&DAT_100825d78);
  }
  else {
    switchD_10004048c::caseD_6d(local_80,uStack_78,local_70);
  }
  return;
}

