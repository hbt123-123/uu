// rea decompile_all
// name: FUN_1000501e4
// address: 0x1000501e4
// body: available
// range: 0x1000501e4-0x100050927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000501e4(int param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 extraout_w8;
  long extraout_x8;
  ulong uVar13;
  ulong uVar14;
  undefined1 extraout_w12;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  ulong uVar17;
  long lVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_470 [16];
  ulong auStack_460 [8];
  undefined1 auStack_420 [8];
  long alStack_418 [2];
  undefined1 auStack_408 [8];
  undefined8 auStack_400 [3];
  int aiStack_3e8 [2];
  undefined8 auStack_3e0 [2];
  int iStack_3d0;
  undefined1 auStack_3cc [4];
  ulong uStack_3c8;
  ulong auStack_3c0 [2];
  ulong auStack_3b0 [2];
  undefined1 auStack_3a0 [8];
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_384;
  undefined8 local_380;
  long lStack_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  long local_340;
  ulong local_338;
  ulong local_330;
  ulong local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong uStack_308;
  ulong local_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  double dStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined5 uStack_2b8;
  undefined3 uStack_2b3;
  undefined5 uStack_2b0;
  undefined8 uStack_2ab;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong local_288;
  ulong local_280;
  undefined8 uStack_278;
  long local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  double local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined5 uStack_238;
  undefined3 uStack_233;
  undefined5 uStack_230;
  undefined8 uStack_22b;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  long local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined5 uStack_1b8;
  undefined3 uStack_1b3;
  undefined5 uStack_1b0;
  undefined3 uStack_1ab;
  undefined4 uStack_1a8;
  char cStack_1a4;
  undefined1 local_198;
  undefined1 local_190;
  undefined1 auStack_188 [24];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong local_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined5 uStack_a8;
  undefined3 uStack_a3;
  undefined5 uStack_a0;
  undefined8 uStack_9b;
  
  lVar10 = 0;
  __s10Foundation4DateVMa();
  lVar16 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar17 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar17 = param_3 >> 0x38 & 0xf;
  }
  if (uVar17 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar10 = (long)auStack_3c0 + lVar3;
    *(int *)((long)auStack_3b0 + lVar3) = param_1;
    pcVar6 = FUN_1000826a8;
    uVar12 = 0x215;
  }
  else {
    uVar2 = *(uint *)(param_4 + 4);
    uVar17 = (ulong)uVar2;
    if ((((0 < (int)uVar2) && (0 < (int)*(uint *)(param_4 + 8))) &&
        (0 < (int)*(uint *)(param_4 + 0xc))) && (0 < (int)*(uint *)(param_4 + 0x10))) {
      local_340 = lVar10;
      local_338 = (ulong)*(uint *)(param_4 + 0x10);
      local_330 = (ulong)*(uint *)(param_4 + 0xc);
      local_328 = (ulong)*(uint *)(param_4 + 8);
      _swift_beginAccess(unaff_x20 + 0x70,auStack_188,0,0);
      lVar10 = 0;
      lVar18 = *(long *)(unaff_x20 + 0x70);
      uVar14 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
      uVar13 = 0xffffffffffffffff;
      if ((long)uVar14 < 0x40) {
        uVar13 = ~(-1L << (uVar14 & 0x3f));
      }
      uVar13 = uVar13 & *(ulong *)(lVar18 + 0x40);
      do {
        while (uVar13 == 0) {
          bVar7 = SCARRY8(lVar10,1);
          lVar10 = lVar10 + 1;
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10005091c);
            (*pcVar6)();
          }
          if ((long)(uVar14 + 0x3f >> 6) <= lVar10) {
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            lVar10 = (long)auStack_3c0 + lVar3;
            *(int *)((long)auStack_3b0 + lVar3) = param_1;
            pcVar6 = FUN_1000826a0;
            uVar12 = 0x21f;
            goto LAB_1000503dc;
          }
          uVar13 = ((ulong *)(lVar18 + 0x40))[lVar10];
        }
        uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 - 1 & uVar13;
        uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | lVar10 << 6;
        local_348 = *(undefined8 *)(*(long *)(lVar18 + 0x30) + uVar15 * 8);
        puVar1 = (undefined8 *)(*(long *)(lVar18 + 0x38) + uVar15 * 0x80);
        uStack_1f8 = puVar1[5];
        local_370 = puVar1[4];
        local_380 = puVar1[7];
        lStack_378 = puVar1[6];
        local_358 = puVar1[1];
        local_350 = *puVar1;
        local_368 = puVar1[3];
        local_360 = puVar1[2];
        local_398 = puVar1[0xb];
        uVar20 = puVar1[10];
        uStack_390 = puVar1[0xd];
        local_1c0 = puVar1[0xc];
        uVar12 = *(undefined8 *)((long)puVar1 + 0x75);
        uVar21 = puVar1[9];
        local_1e0 = puVar1[8];
        uStack_1ab = (undefined3)uVar12;
        uStack_1a8 = (undefined4)((ulong)uVar12 >> 0x18);
        cStack_1a4 = (char)((ulong)uVar12 >> 0x38);
        uStack_1b0 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0x6d) >> 0x18);
        uStack_1b8 = (undefined5)uStack_390;
        uStack_1b3 = (undefined3)((ulong)uStack_390 >> 0x28);
        local_190 = (undefined1)uStack_1f8;
        local_198 = (undefined1)local_1e0;
        uStack_1c8 = local_398;
        local_1d0 = uVar20;
        uStack_1d8 = uVar21;
        uStack_1e8 = local_380;
        local_1f0 = lStack_378;
        local_200 = local_370;
        uStack_208 = local_368;
        local_210 = local_360;
        uStack_218 = local_358;
        local_220 = local_350;
      } while (((int)local_1c0 != param_1) || (cStack_1a4 != '\x01'));
      local_384 = uStack_1a8;
      uVar12 = CONCAT35(uStack_1ab,uStack_1b0);
      _swift_bridgeObjectRetain(lVar18);
      FUN_10007eca0(&local_220,&local_110);
      _swift_release(lVar18);
      uVar15 = local_328;
      uVar14 = local_330;
      uVar13 = local_338;
      bVar7 = (uint)local_330 == uVar2;
      bVar8 = (int)local_338 == (int)local_328;
      if (local_330 == uVar17 * 2) {
        bVar9 = local_338 == local_328 * 2;
        if (bVar9 || bVar7 && bVar8) {
LAB_1000505b8:
          uStack_258 = uStack_1d8;
          local_260 = local_1e0;
          uStack_248 = uStack_1c8;
          local_250 = (double)local_1d0;
          uStack_238 = uStack_1b8;
          local_240 = local_1c0;
          uStack_22b = CONCAT17(cStack_1a4,CONCAT43(uStack_1a8,uStack_1ab));
          uStack_233 = uStack_1b3;
          uStack_230 = uStack_1b0;
          uStack_298 = uStack_218;
          local_2a0 = local_220;
          uStack_290 = local_210;
          uStack_268 = uStack_1e8;
          local_270 = local_1f0;
          dVar19 = *(double *)(param_4 + 0x18);
          local_280 = local_328;
          uStack_278 = CONCAT71((int7)((ulong)uStack_1f8 >> 8),bVar9);
          local_288 = uVar17;
          if (-1 < (long)dVar19 && (long)ABS(dVar19) + 0xfff0000000000000U >> 0x35 < 0x3ff ||
              (long)dVar19 - 1U < 0xfffffffffffff) {
            dVar19 = (double)(long)dVar19;
            if (0x7fe < (ulong)dVar19 >> 0x34) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100050920);
              (*pcVar6)();
            }
            if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100050924);
              (*pcVar6)();
            }
            if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100050928);
              (*pcVar6)();
            }
            local_270 = (long)dVar19;
          }
          FUN_10007eca0(&local_220,&local_110);
          __s10Foundation4DateVACycfC(auStack_3a0 + lVar3);
          __s10Foundation4DateV21timeIntervalSince1970Sdvg();
          (**(code **)(lVar16 + 8))(auStack_3a0 + lVar3,local_340);
          uStack_a8 = uStack_238;
          local_b0 = local_240;
          uStack_9b = uStack_22b;
          uStack_a3 = uStack_233;
          uStack_a0 = uStack_230;
          uStack_108 = uStack_298;
          local_110 = local_2a0;
          uStack_f8 = local_288;
          uStack_100 = uStack_290;
          uStack_e8 = uStack_278;
          local_f0 = local_280;
          uStack_d8 = uStack_268;
          lStack_e0 = local_270;
          uStack_c8 = uStack_258;
          local_d0 = local_260;
          uStack_b8 = uStack_248;
          local_250 = dVar19;
          dStack_c0 = dVar19;
          _swift_beginAccess(unaff_x20 + 0x70,&local_170,0x21,0);
          FUN_10007eca0(&local_110,&local_320);
          uVar11 = *(undefined8 *)(unaff_x20 + 0x70);
          _swift_isUniquelyReferenced_nonNull_native(uVar11);
          uVar5 = local_348;
          local_320 = *(undefined8 *)(unaff_x20 + 0x70);
          *(undefined8 *)(unaff_x20 + 0x70) = 0x8000000000000000;
          FUN_100060f9c(&local_110,local_348,uVar11);
          *(undefined8 *)(unaff_x20 + 0x70) = local_320;
          _swift_endAccess(&local_170);
          uStack_148 = uStack_278;
          local_150 = local_280;
          uStack_138 = uStack_268;
          lStack_140 = local_270;
          uStack_128 = uStack_258;
          local_130 = local_260;
          local_120 = local_250;
          uStack_168 = uStack_298;
          local_170 = local_2a0;
          uStack_158 = local_288;
          uStack_160 = uStack_290;
          FUN_100048f38(&local_170,param_2,param_3);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)(local_190);
          *(ulong *)((long)auStack_460 + lVar3) = param_2;
          *(ulong *)((long)auStack_460 + lVar3 + 8) = param_3;
          uVar4 = local_350;
          uVar11 = local_358;
          *(undefined8 *)((long)auStack_460 + lVar3 + 0x10) = uVar5;
          *(undefined8 *)((long)auStack_460 + lVar3 + 0x18) = uVar4;
          *(undefined8 *)((long)auStack_460 + lVar3 + 0x20) = uVar11;
          uVar11 = local_368;
          *(undefined8 *)((long)auStack_460 + lVar3 + 0x28) = local_360;
          *(undefined8 *)((long)auStack_460 + lVar3 + 0x30) = uVar11;
          *(undefined8 *)((long)auStack_460 + lVar3 + 0x38) = local_370;
          auStack_420[lVar3] = extraout_w8;
          uVar11 = local_380;
          *(long *)((long)alStack_418 + lVar3) = lStack_378;
          *(undefined8 *)((long)alStack_418 + lVar3 + 8) = uVar11;
          auStack_408[lVar3] = extraout_w12;
          *(undefined8 *)((long)auStack_400 + lVar3) = uVar21;
          *(undefined8 *)((long)auStack_400 + lVar3 + 8) = uVar20;
          uVar20 = uStack_390;
          *(undefined8 *)((long)auStack_400 + lVar3 + 0x10) = local_398;
          *(int *)((long)aiStack_3e8 + lVar3) = param_1;
          *(undefined8 *)((long)auStack_3e0 + lVar3) = uVar20;
          *(undefined8 *)((long)auStack_3e0 + lVar3 + 8) = uVar12;
          *(undefined4 *)((long)&iStack_3d0 + lVar3) = local_384;
          auStack_3cc[lVar3] = 1;
          *(int *)((long)&uStack_3c8 + lVar3) = param_1;
          uVar13 = local_328;
          *(ulong *)((long)auStack_3c0 + lVar3) = uVar17;
          *(ulong *)((long)auStack_3c0 + lVar3 + 8) = uVar13;
          *(bool *)((long)auStack_3b0 + lVar3) = bVar9;
          *(undefined8 **)((long)auStack_3b0 + lVar3 + 8) = &local_2a0;
          FUN_1003fb48c(FUN_100082604,auStack_470 + lVar3,0xd0000000000000a5,0x800000010087d850,
                        &DAT_d000000000000033,0x800000010087e2e0,0x238,0);
          FUN_10007ed50(&local_220);
          uStack_2d8 = uStack_258;
          local_2e0 = local_260;
          uStack_2c8 = uStack_248;
          dStack_2d0 = local_250;
          uStack_2b8 = uStack_238;
          local_2c0 = local_240;
          uStack_2ab = uStack_22b;
          uStack_2b3 = uStack_233;
          uStack_2b0 = uStack_230;
          uStack_318 = uStack_298;
          local_320 = local_2a0;
          uStack_308 = local_288;
          uStack_310 = uStack_290;
          uStack_2f8 = uStack_278;
          local_300 = local_280;
          uStack_2e8 = uStack_268;
          lStack_2f0 = local_270;
          FUN_10007ed50(&local_320);
          return;
        }
      }
      else if (bVar7 && bVar8) {
        bVar9 = false;
        goto LAB_1000505b8;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(int *)((long)&iStack_3d0 + lVar3) = param_1;
      *(ulong *)((long)&uStack_3c8 + lVar3) = uVar17;
      *(ulong *)((long)auStack_3c0 + lVar3) = uVar15;
      *(ulong *)((long)auStack_3c0 + lVar3 + 8) = uVar14;
      *(ulong *)((long)auStack_3b0 + lVar3) = uVar13;
      FUN_1003fb4ec(FUN_1000825f4,(long)auStack_3e0 + lVar3,0xd0000000000000a5,0x800000010087d850,
                    &DAT_d000000000000033,0x800000010087e2e0,0x22a,0);
      FUN_10007ed50(&local_220);
      return;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar10 = (long)auStack_3c0 + lVar3;
    *(int *)((long)auStack_3b0 + lVar3) = param_1;
    pcVar6 = FUN_1000825ec;
    uVar12 = 0x219;
  }
LAB_1000503dc:
  FUN_1003fb4ec(pcVar6,lVar10,0xd0000000000000a5,0x800000010087d850,&DAT_d000000000000033,
                0x800000010087e2e0,uVar12,0);
  return;
}

