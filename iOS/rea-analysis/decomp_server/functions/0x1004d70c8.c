// rea decompile_all
// name: FUN_1004d70c8
// address: 0x1004d70c8
// body: available
// range: 0x1004d70c8-0x1004d72bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004d71e4) */

void FUN_1004d70c8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x21;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_178 [120];
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong local_90;
  long local_88;
  long lStack_80;
  long local_78;
  
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 0;
  uVar8 = param_1[0xc];
  uVar6 = param_1[0xe];
  bVar3 = (uVar6 & 0x3000000000000000) == 0;
  bVar4 = uVar8 >> 8 == 0xffffffff;
  plVar5 = param_1;
  if ((!bVar3 || !bVar4) && (((uint)(uVar6 >> 0x39) & 0x18) == 0 && (uint)(uVar8 >> 0x3d) == 0)) {
    lVar1 = *param_1;
    lVar2 = param_1[1];
    lStack_e8 = param_1[3];
    lVar9 = param_1[2];
    lStack_d8 = param_1[5];
    lStack_e0 = param_1[4];
    lStack_c8 = param_1[7];
    local_d0 = param_1[6];
    lStack_b8 = param_1[9];
    lStack_c0 = param_1[8];
    lStack_a8 = param_1[0xb];
    local_b0 = param_1[10];
    local_100 = lVar1;
    lStack_f8 = lVar2;
    local_f0 = lVar9;
    uStack_a0 = uVar8;
    lStack_98 = param_1[0xd];
    local_90 = uVar6;
    FUN_1004df818(&local_100,auStack_178);
    plVar5 = (long *)0x0;
    FUN_100483534(0,0,0);
    local_88 = lVar1;
    lStack_80 = lVar2;
    local_78 = lVar9;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_1004e17ac();
  (*pcVar7)(&local_88,&DAT_1009cc298,plVar5,param_3,param_4);
  lVar9 = local_78;
  lVar2 = lStack_80;
  lVar1 = local_88;
  if ((unaff_x21 == 0) && (local_88 != 0)) {
    if (bVar3 && bVar4) {
      _swift_bridgeObjectRetain();
      FUN_100008184(lVar2,lVar9);
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain();
      FUN_100008184(lVar2,lVar9);
      (*pcVar7)(param_3,param_4);
    }
    FUN_100483534(local_88,lStack_80,local_78);
    lStack_b8 = param_1[9];
    lStack_c0 = param_1[8];
    lStack_a8 = param_1[0xb];
    local_b0 = param_1[10];
    lStack_98 = param_1[0xd];
    uStack_a0 = param_1[0xc];
    lStack_f8 = param_1[1];
    local_100 = *param_1;
    lStack_e8 = param_1[3];
    local_f0 = param_1[2];
    lStack_d8 = param_1[5];
    lStack_e0 = param_1[4];
    lStack_c8 = param_1[7];
    local_d0 = param_1[6];
    local_90 = param_1[0xe];
    *param_1 = lVar1;
    param_1[1] = lVar2;
    param_1[2] = lVar9;
    param_1[0xc] = 0;
    param_1[0xe] = 0;
    FUN_100040bb4(&local_100,&DAT_100aa1988,&DAT_100832138);
  }
  else {
    FUN_100483534(local_88,lStack_80,local_78);
  }
  return;
}

