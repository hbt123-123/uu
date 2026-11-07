// rea decompile_all
// name: FUN_10042392c
// address: 0x10042392c
// body: available
// range: 0x10042392c-0x100423b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100423aac) */

void FUN_10042392c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  long unaff_x21;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 local_130 [80];
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  byte bStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  
  lStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  uVar6 = param_1[8];
  bVar3 = *(byte *)(param_1 + 9);
  bVar4 = ((uVar6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  puVar5 = param_1;
  if (!bVar4 || bVar3 != 0xff) {
    uVar7 = 4;
    if ((bVar3 & 1) == 0) {
      uVar7 = 0;
    }
    if ((uVar7 | (uint)(uVar6 >> 0x3c) & 3) == 6) {
      uVar1 = *param_1;
      lVar2 = param_1[1];
      uVar9 = param_1[2];
      uStack_c0 = param_1[4];
      uVar10 = param_1[3];
      uStack_b0 = param_1[6];
      local_b8 = param_1[5];
      local_a8 = (undefined1)param_1[7];
      uStack_a7 = (undefined7)((ulong)param_1[7] >> 8);
      uStack_a0 = (undefined1)uVar6;
      uStack_9f = (undefined7)(uVar6 >> 8);
      local_e0 = uVar1;
      lStack_d8 = lVar2;
      local_d0 = uVar9;
      local_c8 = uVar10;
      bStack_98 = bVar3;
      FUN_10042c868(&local_e0,local_130);
      puVar5 = (undefined8 *)0x0;
      FUN_1004338a4(0,0,0,0);
      local_90 = uVar1;
      lStack_88 = lVar2;
      local_80 = uVar9;
      local_78 = uVar10;
    }
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_10042f58c();
  (*pcVar8)(&local_90,&DAT_1009bebf8,puVar5,param_3,param_4);
  uVar10 = local_78;
  uVar9 = local_80;
  lVar2 = lStack_88;
  uVar1 = local_90;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if (bVar4 && bVar3 == 0xff) {
      _swift_bridgeObjectRetain(lStack_88);
      FUN_100008184(uVar9,uVar10);
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_88);
      FUN_100008184(uVar9,uVar10);
      (*pcVar8)(param_3,param_4);
    }
    FUN_1004338a4(local_90,lStack_88,local_80,local_78);
    local_130[0] = 1;
    local_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_b0 = param_1[6];
    local_a8 = (undefined1)param_1[7];
    uStack_9f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_98 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    uStack_a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    lStack_d8 = param_1[1];
    local_e0 = *param_1;
    local_c8 = param_1[3];
    local_d0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = lVar2;
    param_1[2] = uVar9;
    param_1[3] = uVar10;
    param_1[8] = 0x2000000000000000;
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_100040bb4(&local_e0,&DAT_100a9eea0,&DAT_100825d78);
  }
  else {
    FUN_1004338a4(local_90,lStack_88,local_80,local_78);
  }
  return;
}

