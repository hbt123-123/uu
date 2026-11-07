// rea decompile_all
// name: FUN_1000a14e8
// address: 0x1000a14e8
// body: available
// range: 0x1000a14e8-0x1000a192b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a14e8(undefined8 *param_1,undefined8 *param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  byte *pbVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  ulong local_250;
  ulong local_1e0;
  undefined *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulong local_130;
  ulong uStack_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar24 = (undefined *)*param_2;
  if (puVar24 == (undefined *)0x0) {
    uVar14 = 0;
  }
  else {
    if (puVar24 == (undefined *)0x1) {
      FUN_1000a1b7c(&local_120);
      goto LAB_1000a18dc;
    }
    uVar14 = 1;
    if ((*(byte *)(param_2 + 0x17) & 1) == 0) {
      uVar14 = 2;
    }
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar15 = param_2[3];
  uVar16 = param_2[5];
  local_250 = param_2[0xb];
  uVar13 = param_2[0xc];
  local_1e0 = param_2[0xd];
  uVar20 = param_2[0xe];
  cVar6 = *(char *)(param_2 + 0xf);
  uVar18 = param_2[0x10];
  uVar21 = param_2[0x11];
  if (((local_250 & uVar13 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    local_250 = 0;
  }
  else {
    param_3 = param_2[10];
    if ((long)uVar13 < 0) {
      param_3 = uVar13 & 0x7fffffffffffffff;
      pcVar17 = *(code **)(param_3 + 0x20);
      uVar13 = local_250;
      FUN_100006b70();
      param_4 = (uint)uVar13;
      (*pcVar17)();
    }
    else {
      FUN_100006b70();
      param_4 = (uint)local_250;
      local_250 = 0;
    }
  }
  uVar13 = uVar18 & 0xffffffffffff;
  if ((uVar21 & 0x2000000000000000) != 0) {
    uVar13 = uVar21 >> 0x38 & 0xf;
  }
  if (uVar13 == 0) {
    uVar18 = 0;
    uVar21 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar21);
  }
  puVar25 = PTR___swiftEmptyArrayStorage_1000f0740;
  uVar7 = *(undefined1 *)((long)param_2 + 0xa1);
  puVar19 = PTR___swiftEmptyArrayStorage_1000f0740;
  if ((undefined *)0x1 < puVar24) {
    _swift_bridgeObjectRetain(puVar24);
    puVar19 = puVar24;
  }
  lVar23 = *(long *)(puVar19 + 0x10);
  if (lVar23 == 0) {
    _swift_bridgeObjectRelease(puVar19);
    puVar25 = PTR___swiftEmptyArrayStorage_1000f0740;
    puVar9 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    local_120 = puVar25;
    FUN_100079a6c(0,lVar23,0);
    pbVar22 = puVar19 + 0x30;
    do {
      puVar25 = local_120;
      uVar10 = *(undefined8 *)(pbVar22 + -0x10);
      uVar5 = *(ulong *)(pbVar22 + -8);
      bVar8 = *pbVar22;
      param_4 = (uint)bVar8;
      param_3 = uVar5;
      FUN_100065610(uVar10);
      uVar13 = *(ulong *)(puVar25 + 0x10);
      local_120 = puVar25;
      if (*(ulong *)(puVar25 + 0x18) >> 1 <= uVar13) {
        param_4 = 1;
        param_3 = uVar13 + 1;
        FUN_100079a6c(1 < *(ulong *)(puVar25 + 0x18));
      }
      puVar9 = local_120;
      *(ulong *)(local_120 + 0x10) = uVar13 + 1;
      local_120[uVar13 * 0x18 + 0x20] = bVar8 >> 6;
      pbVar22 = pbVar22 + 0x18;
      *(undefined8 *)(local_120 + uVar13 * 0x18 + 0x28) = uVar10;
      *(ulong *)(local_120 + uVar13 * 0x18 + 0x30) = uVar5;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    _swift_bridgeObjectRelease(puVar19);
    puVar25 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  PTR___swiftEmptyArrayStorage_1000f0740 = puVar25;
  if ((undefined *)0x1 < puVar24) {
    _swift_bridgeObjectRetain(puVar24);
    puVar25 = puVar24;
  }
  puVar24 = puVar25;
  FUN_100084b24();
  uVar1 = param_4 & 0xff;
  _swift_bridgeObjectRelease(puVar25);
  uVar2 = 0;
  if (uVar1 < 0xfe) {
    uVar2 = param_4 >> 6 & 3;
  }
  puVar25 = (undefined *)0x0;
  if (uVar1 < 0xfe) {
    puVar25 = puVar24;
  }
  uVar13 = 0;
  if (uVar1 < 0xfe) {
    uVar13 = param_3;
  }
  uVar5 = local_1e0 & 0xffffffffffff;
  if ((uVar20 & 0x2000000000000000) != 0) {
    uVar5 = uVar20 >> 0x38 & 0xf;
  }
  if (uVar5 == 0) {
    FUN_100084a5c(&local_130,param_2);
    local_1e0 = local_130;
    uVar20 = uStack_128;
  }
  else {
    _swift_bridgeObjectRetain(uVar20);
  }
  uVar10 = param_2[0x12];
  uVar11 = param_2[0x13];
  uVar12 = *(undefined1 *)(param_2 + 0x14);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar16);
  FUN_10005f534(uVar10,uVar11,uVar12);
  FUN_1000a143c();
  _swift_bridgeObjectRetain();
  FUN_1000b99bc(&local_1d8,uVar14,cVar6 == '\0',uVar18,uVar21,(uint)uVar3 & 1,uVar3 >> 1 & 1,uVar7,
                puVar9,uVar2,puVar25,uVar13,local_1e0,uVar20,uVar4,uVar15,uVar16,local_250,uVar10,
                uVar11,uVar12);
  FUN_1000045b0(&local_1d8);
  uStack_98 = uStack_150;
  local_a0 = local_158;
  uStack_88 = uStack_140;
  uStack_90 = local_148;
  local_80 = local_138;
  uStack_d8 = uStack_190;
  local_e0 = local_198;
  uStack_c8 = uStack_180;
  uStack_d0 = local_188;
  uStack_b8 = uStack_170;
  local_c0 = local_178;
  uStack_a8 = uStack_160;
  uStack_b0 = local_168;
  uStack_118 = uStack_1d0;
  local_120 = local_1d8;
  uStack_108 = uStack_1c0;
  uStack_110 = local_1c8;
  uStack_f8 = uStack_1b0;
  local_100 = local_1b8;
  uStack_e8 = uStack_1a0;
  uStack_f0 = local_1a8;
LAB_1000a18dc:
  param_1[0x11] = uStack_98;
  param_1[0x10] = local_a0;
  param_1[0x13] = uStack_88;
  param_1[0x12] = uStack_90;
  param_1[0x14] = local_80;
  param_1[9] = uStack_d8;
  param_1[8] = local_e0;
  param_1[0xb] = uStack_c8;
  param_1[10] = uStack_d0;
  param_1[0xd] = uStack_b8;
  param_1[0xc] = local_c0;
  param_1[0xf] = uStack_a8;
  param_1[0xe] = uStack_b0;
  param_1[1] = uStack_118;
  *param_1 = local_120;
  param_1[3] = uStack_108;
  param_1[2] = uStack_110;
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  return;
}

