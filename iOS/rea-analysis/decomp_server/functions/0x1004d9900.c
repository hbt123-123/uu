// rea decompile_all
// name: FUN_1004d9900
// address: 0x1004d9900
// body: available
// range: 0x1004d9900-0x1004d9b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004d9a50) */

void FUN_1004d9900(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  long unaff_x21;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_178 [120];
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xf000000000000000;
  uVar8 = param_1[0xc];
  uVar6 = param_1[0xe];
  bVar3 = (uVar6 & 0x3000000000000000) == 0;
  bVar4 = uVar8 >> 8 == 0xffffffff;
  puVar5 = param_1;
  if ((!bVar3 || !bVar4) && ((uint)(uVar6 >> 0x39) & 0x18 | (uint)(uVar8 >> 0x3d)) == 0x10) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uStack_e8 = param_1[3];
    uVar9 = param_1[2];
    uStack_d8 = param_1[5];
    uStack_e0 = param_1[4];
    uStack_c8 = param_1[7];
    local_d0 = param_1[6];
    uStack_b8 = param_1[9];
    uStack_c0 = param_1[8];
    uStack_a8 = param_1[0xb];
    local_b0 = param_1[10];
    local_100 = uVar1;
    uStack_f8 = uVar2;
    local_f0 = uVar9;
    uStack_a0 = uVar8;
    uStack_98 = param_1[0xd];
    local_90 = uVar6;
    FUN_1004df818(&local_100,auStack_178);
    puVar5 = (ulong *)0x0;
    switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
    local_88 = uVar1 & 0xffffffff;
    uStack_80 = uVar2;
    local_78 = uVar9;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_1004e1aec();
  (*pcVar7)(&local_88,&DAT_1009ccff0,puVar5,param_3,param_4);
  uVar1 = local_78;
  uVar8 = uStack_80;
  uVar6 = local_88;
  if ((unaff_x21 == 0) && (local_78 >> 0x3c < 0xf)) {
    if (bVar3 && bVar4) {
      FUN_100008184(uStack_80,local_78);
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      FUN_100008184(uStack_80,local_78);
      (*pcVar7)(param_3,param_4);
    }
    switchD_10004048c::caseD_6d(local_88,uStack_80,local_78);
    uStack_b8 = param_1[9];
    uStack_c0 = param_1[8];
    uStack_a8 = param_1[0xb];
    local_b0 = param_1[10];
    uStack_98 = param_1[0xd];
    uStack_a0 = param_1[0xc];
    uStack_f8 = param_1[1];
    local_100 = *param_1;
    uStack_e8 = param_1[3];
    local_f0 = param_1[2];
    uStack_d8 = param_1[5];
    uStack_e0 = param_1[4];
    uStack_c8 = param_1[7];
    local_d0 = param_1[6];
    local_90 = param_1[0xe];
    *param_1 = uVar6 & 0xffffffff;
    param_1[1] = uVar8;
    param_1[2] = uVar1;
    param_1[0xc] = 0;
    param_1[0xe] = 0x2000000000000000;
    FUN_100040bb4(&local_100,&DAT_100aa1988,&DAT_100832138);
  }
  else {
    switchD_10004048c::caseD_6d(local_88,uStack_80,local_78);
  }
  return;
}

