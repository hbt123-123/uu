// rea decompile_all
// name: FUN_10003e078
// address: 0x10003e078
// body: available
// range: 0x10003e078-0x10003e7af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003e078(int *param_1,code *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code cVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  ulong uVar11;
  long unaff_x21;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  char *pcVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_240 [16];
  uint local_230;
  int iStack_22c;
  undefined8 local_220;
  undefined4 uStack_214;
  int *local_208;
  char *local_200;
  undefined8 local_1f8;
  code *local_1f0;
  char *local_1e8;
  uint local_1dc;
  undefined1 auStack_1c0 [16];
  uint local_1b0;
  int iStack_1ac;
  int local_1a8;
  int iStack_1a4;
  int local_1a0;
  undefined8 *local_190;
  undefined1 local_188;
  undefined8 *local_180;
  undefined8 uStack_178;
  int local_170;
  undefined8 *local_160;
  undefined1 local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  int local_130;
  undefined8 *local_120;
  undefined1 local_118;
  undefined8 *local_110;
  undefined5 uStack_108;
  undefined3 uStack_103;
  int iStack_100;
  undefined1 uStack_fc;
  undefined8 uStack_fb;
  undefined8 *local_e8;
  undefined1 auStack_e0 [24];
  double local_c8;
  char local_b8;
  int local_b0;
  undefined8 *local_ac;
  undefined8 uStack_a4;
  int local_9c;
  double local_98;
  undefined8 *local_90;
  undefined1 local_88;
  
  uVar5 = 0;
  FUN_100401b14();
  local_1b0 = (uint)param_2;
  iStack_1ac = param_3;
  local_1a8 = param_4;
  iStack_1a4 = param_5;
  local_1a0 = param_6;
  FUN_1003fb48c(FUN_10003fe60,auStack_1c0,0xd0000000000000a9,0x8000000100877660,0xd00000000000003f,
                0x800000010087a680,0x5fd,0);
  pcVar4 = param_2;
  FUN_10003990c(auStack_e0);
  if (local_b8 == '\x02') {
    FUN_10003fe70();
    _swift_allocError(&DAT_1009978b0,pcVar4,0,0);
    *(undefined8 *)pcVar4 = 0;
    param_2 = pcVar4;
LAB_10003e2a0:
    cVar8 = (code)0x2;
  }
  else {
    local_1dc = (uint)param_2;
    FUN_10003b8a0();
    if (param_2 == (code *)0x0) {
      FUN_10003fe70();
      _swift_allocError(&DAT_1009978b0,param_2,0,0);
      *(undefined8 *)param_2 = 1;
      goto LAB_10003e2a0;
    }
    local_1e8 = "captureFailedRetryCount";
    local_200 = "update resolution failed: ";
    lVar12 = *(long *)(param_2 + 0x10);
    puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
    local_208 = param_1;
    local_1f8 = uVar5;
    local_1f0 = param_2;
    if (lVar12 != 0) {
      param_2 = param_2 + 0x2c;
      do {
        uVar1 = *(undefined4 *)(param_2 + -0xc);
        local_110 = *(undefined8 **)param_2;
        uStack_108 = (undefined5)*(undefined8 *)(param_2 + 8);
        uStack_fb = *(undefined8 *)(param_2 + 0x15);
        uVar5 = *(undefined8 *)(param_2 + 0xd);
        uStack_103 = (undefined3)uVar5;
        iStack_100 = (int)((ulong)uVar5 >> 0x18);
        uStack_fc = (undefined1)((ulong)uVar5 >> 0x38);
        if (*(int *)(param_2 + -8) == param_3 && *(int *)(param_2 + -4) == param_4) {
          puVar6 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          local_e8 = puVar9;
          if (((ulong)puVar6 & 1) == 0) {
            FUN_10006fb80(0,puVar9[2] + 1,1);
          }
          uVar11 = local_e8[2];
          if ((ulong)local_e8[3] >> 1 <= uVar11) {
            FUN_10006fb80(1 < (ulong)local_e8[3],uVar11 + 1,1);
          }
          local_e8[2] = uVar11 + 1;
          *(undefined4 *)(local_e8 + uVar11 * 6 + 4) = uVar1;
          *(int *)((long)local_e8 + uVar11 * 0x30 + 0x24) = param_3;
          *(int *)(local_e8 + uVar11 * 6 + 5) = param_4;
          *(undefined8 *)((long)local_e8 + uVar11 * 0x30 + 0x41) = uStack_fb;
          *(ulong *)((long)local_e8 + uVar11 * 0x30 + 0x39) =
               CONCAT17(uStack_fc,CONCAT43(iStack_100,uStack_103));
          *(ulong *)((long)local_e8 + uVar11 * 0x30 + 0x34) = CONCAT35(uStack_103,uStack_108);
          *(undefined8 **)((long)local_e8 + uVar11 * 0x30 + 0x2c) = local_110;
          puVar9 = local_e8;
        }
        param_2 = param_2 + 0x30;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if ((param_5 < 1) || (param_6 < 1)) {
      local_110 = puVar9;
      _swift_retain(puVar9);
      FUN_10003369c(local_c8,&local_110);
      pcVar15 = local_1e8;
      if (unaff_x21 != 0) {
        _swift_errorRelease(unaff_x21);
        _swift_release(local_110);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10003e7b0);
        (*pcVar4)();
      }
      _swift_release(puVar9);
      _swift_bridgeObjectRelease(local_1f0);
      puVar6 = local_110;
      if (local_110[2] != 0) {
        iVar13 = *(int *)(local_110 + 4);
        uStack_178 = *(undefined8 *)((long)local_110 + 0x2c);
        local_180 = *(undefined8 **)((long)local_110 + 0x24);
        local_170 = *(int *)((long)local_110 + 0x34);
        dVar17 = (double)local_110[7];
        local_190 = (undefined8 *)local_110[8];
        local_188 = *(undefined1 *)(local_110 + 9);
        _swift_release(local_110);
        goto LAB_10003e630;
      }
LAB_10003e500:
      _swift_release();
      FUN_10003fe70();
      _swift_allocError(&DAT_1009978b0,puVar6,0,0);
      *puVar6 = CONCAT44(param_4,param_3);
      *(undefined1 *)(puVar6 + 1) = 0;
      goto LAB_10003e2a8;
    }
    _swift_bridgeObjectRelease(local_1f0);
    lVar12 = puVar9[2];
    if (lVar12 == 0) {
      _swift_release(puVar9);
      puVar6 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      puVar14 = (undefined8 *)((long)puVar9 + 0x34);
      puVar6 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
      while( true ) {
        lVar12 = lVar12 + -1;
        local_140 = *(undefined8 **)((long)puVar14 + -0x14);
        uStack_138 = CONCAT44(uStack_138._4_4_,*(undefined4 *)((long)puVar14 + -0xc));
        local_110 = (undefined8 *)*puVar14;
        iStack_100 = (int)((ulong)*(undefined8 *)((long)puVar14 + 0xd) >> 0x18);
        uStack_fc = (undefined1)((ulong)*(undefined8 *)((long)puVar14 + 0xd) >> 0x38);
        uStack_108 = (undefined5)puVar14[1];
        uStack_103 = (undefined3)((ulong)puVar14[1] >> 0x28);
        if (*(int *)(puVar14 + -1) == param_5 && *(int *)((long)puVar14 + -4) == param_6) {
          puVar7 = puVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          local_120 = puVar6;
          if (((ulong)puVar7 & 1) == 0) {
            FUN_10006fb80(0,puVar6[2] + 1,1);
          }
          uVar11 = local_120[2];
          if ((ulong)local_120[3] >> 1 <= uVar11) {
            FUN_10006fb80(1 < (ulong)local_120[3],uVar11 + 1,1);
          }
          local_120[2] = uVar11 + 1;
          local_120[uVar11 * 6 + 4] = local_140;
          *(undefined4 *)(local_120 + uVar11 * 6 + 5) = (undefined4)uStack_138;
          *(int *)((long)local_120 + uVar11 * 0x30 + 0x2c) = param_5;
          *(int *)(local_120 + uVar11 * 6 + 6) = param_6;
          *(ulong *)((long)local_120 + uVar11 * 0x30 + 0x41) =
               CONCAT17(uStack_fc,CONCAT43(iStack_100,uStack_103));
          *(ulong *)((long)local_120 + uVar11 * 0x30 + 0x3c) = CONCAT35(uStack_103,uStack_108);
          *(undefined8 **)((long)local_120 + uVar11 * 0x30 + 0x34) = local_110;
          puVar6 = local_120;
        }
        if (lVar12 == 0) break;
        puVar14 = puVar14 + 6;
      }
      _swift_release(puVar9);
    }
    pcVar15 = local_1e8;
    lVar12 = puVar6[2];
    if (lVar12 == 0) goto LAB_10003e500;
    local_120 = (undefined8 *)puVar6[8];
    iVar13 = *(int *)(puVar6 + 4);
    local_110 = *(undefined8 **)((long)puVar6 + 0x24);
    uStack_108 = (undefined5)*(undefined8 *)((long)puVar6 + 0x2c);
    uStack_103 = (undefined3)((ulong)*(undefined8 *)((long)puVar6 + 0x2c) >> 0x28);
    iStack_100 = *(int *)((long)puVar6 + 0x34);
    dVar17 = (double)puVar6[7];
    local_118 = *(undefined1 *)(puVar6 + 9);
    if (lVar12 == 1) {
      _swift_release(puVar6);
      uStack_178 = CONCAT35(uStack_103,uStack_108);
      local_180 = local_110;
      local_170 = iStack_100;
      local_190 = local_120;
      local_188 = local_118;
    }
    else {
      uStack_138 = *(undefined8 *)((long)puVar6 + 0x2c);
      local_140 = *(undefined8 **)((long)puVar6 + 0x24);
      local_130 = *(int *)((long)puVar6 + 0x34);
      local_150 = (undefined8 *)puVar6[8];
      local_148 = *(undefined1 *)(puVar6 + 9);
      lVar12 = lVar12 + -2;
      puVar9 = puVar6 + 0xe;
      while( true ) {
        local_158 = *(undefined1 *)(puVar9 + 1);
        local_160 = (undefined8 *)*puVar9;
        dVar16 = ABS((double)puVar9[-1] - local_c8);
        bVar2 = *(int *)(puVar9 + -4) < iVar13;
        if (dVar16 != ABS(dVar17 - local_c8)) {
          bVar2 = dVar16 < ABS(dVar17 - local_c8);
        }
        if (bVar2) {
          uStack_178 = *(undefined8 *)((long)puVar9 + -0x14);
          local_180 = *(undefined8 **)((long)puVar9 + -0x1c);
          local_170 = *(int *)((long)puVar9 + -0xc);
          ppuVar10 = &local_160;
          dVar17 = (double)puVar9[-1];
          iVar13 = *(int *)(puVar9 + -4);
        }
        else {
          uStack_178 = uStack_138;
          local_180 = local_140;
          local_170 = local_130;
          ppuVar10 = &local_150;
        }
        local_190 = *ppuVar10;
        local_188 = *(undefined1 *)(ppuVar10 + 1);
        if (lVar12 == 0) break;
        uStack_138 = uStack_178;
        local_140 = local_180;
        local_130 = local_170;
        local_150 = local_190;
        local_148 = local_188;
        lVar12 = lVar12 + -1;
        puVar9 = puVar9 + 6;
      }
      _swift_release(puVar6);
    }
LAB_10003e630:
    uVar3 = local_1dc;
    uStack_a4 = uStack_178;
    local_ac = local_180;
    local_9c = local_170;
    local_90 = local_190;
    local_88 = local_188;
    uVar11 = (ulong)local_1dc;
    local_b0 = iVar13;
    local_98 = dVar17;
    FUN_100003278(uVar11,iVar13);
    if ((int)uVar11 == 0) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_230 = uVar3;
      local_220 = &local_b0;
      iStack_22c = param_3;
      FUN_1003fb48c(FUN_10003febc,auStack_240,0xd0000000000000a9,(ulong)pcVar15 | 0x8000000000000000
                    ,0xd00000000000003f,(ulong)local_200 | 0x8000000000000000,0x61f,0);
      *local_208 = iVar13;
      *(undefined8 *)(local_208 + 3) = uStack_178;
      *(undefined8 **)(local_208 + 1) = local_180;
      local_208[5] = local_170;
      *(double *)(local_208 + 6) = dVar17;
      *(undefined8 **)(local_208 + 8) = local_190;
      *(undefined1 *)(local_208 + 10) = local_188;
      return;
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_220 = (int *)CONCAT44(param_3,uVar3);
    uStack_214 = (undefined4)uVar11;
    param_2 = FUN_10003feb0;
    FUN_1003fb48c(FUN_10003feb0,&local_230,0xd0000000000000a9,(ulong)pcVar15 | 0x8000000000000000,
                  0xd00000000000003f,(ulong)local_200 | 0x8000000000000000,0x61b,0);
    FUN_10003fe70();
    _swift_allocError(&DAT_1009978b0,param_2,0,0);
    *(ulong *)param_2 = uVar11 & 0xffffffff;
    cVar8 = (code)0x1;
  }
  param_2[8] = cVar8;
LAB_10003e2a8:
  _swift_willThrow();
  return;
}

