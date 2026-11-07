// rea decompile_all
// name: FUN_10042303c
// address: 0x10042303c
// body: available
// range: 0x10042303c-0x1004232d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100423218) */

void FUN_10042303c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long unaff_x21;
  code *pcVar12;
  undefined8 uVar13;
  undefined1 local_140 [80];
  undefined8 local_f0;
  long lStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 local_b0;
  undefined7 uStack_af;
  byte local_a8;
  undefined8 local_a0;
  long lStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  lStack_98 = 0;
  local_a0 = 0;
  uVar10 = param_1[8];
  bVar6 = *(byte *)(param_1 + 9);
  bVar7 = ((uVar10 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  puVar8 = param_1;
  if (!bVar7 || bVar6 != 0xff) {
    uVar11 = 4;
    if ((bVar6 & 1) == 0) {
      uVar11 = 0;
    }
    if ((uVar11 | (uint)(uVar10 >> 0x3c) & 3) == 2) {
      uVar1 = *param_1;
      lVar9 = param_1[1];
      uVar2 = param_1[2];
      uVar4 = param_1[3];
      uVar3 = param_1[4];
      uVar5 = param_1[5];
      uVar13 = param_1[6];
      uStack_b8 = (undefined1)param_1[7];
      uStack_b7 = (undefined7)((ulong)param_1[7] >> 8);
      local_b0 = (undefined1)uVar10;
      uStack_af = (undefined7)(uVar10 >> 8);
      local_f0 = uVar1;
      lStack_e8 = lVar9;
      local_e0 = uVar2;
      uStack_d8 = uVar4;
      local_d0 = uVar3;
      uStack_c8 = uVar5;
      local_c0 = uVar13;
      local_a8 = bVar6;
      FUN_10042c868(&local_f0,local_140);
      puVar8 = (undefined8 *)0x0;
      FUN_100433834(0,0,0,0,0,0,0);
      local_90 = uVar2 & 0xffffffff;
      local_a0 = uVar1;
      lStack_98 = lVar9;
      uStack_88 = uVar4;
      local_80 = uVar3;
      uStack_78 = uVar5;
      local_70 = uVar13;
    }
  }
  pcVar12 = *(code **)(param_4 + 0x198);
  FUN_10042f0e0();
  (*pcVar12)(&local_a0,&DAT_1009be950,puVar8,param_3,param_4);
  uVar13 = local_70;
  uVar5 = uStack_78;
  uVar4 = local_80;
  uVar3 = uStack_88;
  uVar10 = local_90;
  lVar9 = lStack_98;
  uVar1 = local_a0;
  if (unaff_x21 == 0) {
    if (lStack_98 != 0) {
      if (bVar7 && bVar6 == 0xff) {
        _swift_bridgeObjectRetain(lStack_98);
        FUN_100008184(uVar3,uVar4);
        FUN_100008184(uVar5,uVar13);
      }
      else {
        pcVar12 = *(code **)(param_4 + 8);
        _swift_bridgeObjectRetain(lStack_98);
        FUN_100008184(uVar3,uVar4);
        FUN_100008184(uVar5,uVar13);
        (*pcVar12)(param_3,param_4);
      }
      FUN_100433834(local_a0,lStack_98,local_90,uStack_88,local_80,uStack_78,local_70);
      local_140[0] = 0;
      uStack_c8 = param_1[5];
      local_d0 = param_1[4];
      local_c0 = param_1[6];
      uStack_b8 = (undefined1)param_1[7];
      uStack_af = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
      local_a8 = (byte)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
      uStack_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
      local_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
      lStack_e8 = param_1[1];
      local_f0 = *param_1;
      uStack_d8 = param_1[3];
      local_e0 = param_1[2];
      *param_1 = uVar1;
      param_1[1] = lVar9;
      param_1[2] = uVar10 & 0xffffffff;
      param_1[3] = uVar3;
      param_1[4] = uVar4;
      param_1[5] = uVar5;
      param_1[6] = uVar13;
      param_1[8] = 0x2000000000000000;
      *(undefined1 *)(param_1 + 9) = 0;
      FUN_100040bb4(&local_f0,&DAT_100a9eea0,&DAT_100825d78);
      return;
    }
    lVar9 = 0;
  }
  FUN_100433834(local_a0,lVar9,local_90,uStack_88,local_80,uStack_78,local_70);
  return;
}

