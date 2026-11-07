// rea decompile_all
// name: FUN_100423b3c
// address: 0x100423b3c
// body: available
// range: 0x100423b3c-0x100423d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100423cc8) */

void FUN_100423b3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  long unaff_x21;
  code *pcVar10;
  undefined8 uVar11;
  undefined1 local_130 [80];
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 local_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  byte bStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uVar8 = param_1[8];
  bVar5 = *(byte *)(param_1 + 9);
  bVar6 = ((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  puVar7 = param_1;
  if (!bVar6 || bVar5 != 0xff) {
    uVar9 = 4;
    if ((bVar5 & 1) == 0) {
      uVar9 = 0;
    }
    if ((uVar9 | (uint)(uVar8 >> 0x3c) & 3) == 7) {
      uVar1 = *param_1;
      uVar3 = param_1[1];
      lVar2 = param_1[2];
      uVar4 = param_1[3];
      uStack_b8 = param_1[5];
      uVar11 = param_1[4];
      uStack_b0 = param_1[6];
      uStack_a8 = (undefined1)param_1[7];
      local_a7 = (undefined7)((ulong)param_1[7] >> 8);
      uStack_a0 = (undefined1)uVar8;
      uStack_9f = (undefined7)(uVar8 >> 8);
      local_e0 = uVar1;
      uStack_d8 = uVar3;
      local_d0 = lVar2;
      uStack_c8 = uVar4;
      local_c0 = uVar11;
      bStack_98 = bVar5;
      FUN_10042c868(&local_e0,local_130);
      puVar7 = (undefined8 *)0x0;
      FUN_100139ca0(0,0,0,0,0);
      local_90 = uVar1;
      uStack_88 = uVar3;
      local_80 = lVar2;
      uStack_78 = uVar4;
      local_70 = uVar11;
    }
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  FUN_10042e9fc();
  (*pcVar10)(&local_90,&DAT_1009be518,puVar7,param_3,param_4);
  uVar11 = local_70;
  uVar4 = uStack_78;
  lVar2 = local_80;
  uVar3 = uStack_88;
  uVar1 = local_90;
  if ((unaff_x21 == 0) && (local_80 != 0)) {
    if (bVar6 && bVar5 == 0xff) {
      _swift_bridgeObjectRetain(local_80);
      FUN_100008184(uVar4,uVar11);
    }
    else {
      pcVar10 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(local_80);
      FUN_100008184(uVar4,uVar11);
      (*pcVar10)(param_3,param_4);
    }
    FUN_100139ca0(local_90,uStack_88,local_80,uStack_78,local_70);
    local_130[0] = 1;
    uStack_b8 = param_1[5];
    local_c0 = param_1[4];
    uStack_b0 = param_1[6];
    uStack_a8 = (undefined1)param_1[7];
    uStack_9f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
    bStack_98 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
    local_a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_d8 = param_1[1];
    local_e0 = *param_1;
    uStack_c8 = param_1[3];
    local_d0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = lVar2;
    param_1[3] = uVar4;
    param_1[4] = uVar11;
    param_1[8] = 0x3000000000000000;
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_100040bb4(&local_e0,&DAT_100a9eea0,&DAT_100825d78);
  }
  else {
    FUN_100139ca0(local_90,uStack_88,local_80,uStack_78,local_70);
  }
  return;
}

