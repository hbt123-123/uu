// rea decompile_all
// name: FUN_1000911bc
// address: 0x1000911bc
// body: available
// range: 0x1000911bc-0x1000918cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010009183c) */
/* WARNING: Removing unreachable block (ram,0x0001000916b8) */
/* WARNING: Removing unreachable block (ram,0x000100091818) */

void FUN_1000911bc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x20;
  long unaff_x21;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 auStack_380 [16];
  ulong *local_370;
  long local_358;
  ulong local_350;
  undefined8 uStack_348;
  ulong local_340;
  ulong local_338;
  ulong local_330;
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  long lStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  ulong local_290;
  ulong uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined1 auStack_248 [24];
  long local_230;
  long lStack_228;
  ulong local_220 [2];
  byte local_20f;
  ulong local_1f8;
  undefined1 auStack_1c8 [144];
  undefined8 local_138;
  undefined1 auStack_130 [40];
  undefined1 auStack_108 [120];
  long local_90;
  
  FUN_100090d58(auStack_248);
  if (unaff_x21 != 0) {
    return;
  }
  do {
    lVar13 = lStack_228;
    lVar9 = local_230;
    FUN_100001400(auStack_248,local_230);
    (**(code **)(*(long *)(lVar13 + 8) + 0x18))(lVar9);
    uVar16 = *(ulong *)(unaff_x20 + 0x10);
    if (*(long *)(uVar16 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000918b8);
      (*pcVar5)();
    }
    uVar17 = uVar16;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar17 & 1) == 0) {
      FUN_100080f50();
      lVar9 = *(long *)(uVar16 + 0x10);
      lVar13 = local_230;
      lVar1 = lStack_228;
    }
    else {
      lVar9 = *(long *)(uVar16 + 0x10);
      lVar13 = local_230;
      lVar1 = lStack_228;
    }
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000918bc);
      (*pcVar5)();
    }
    *(long *)(uVar16 + 0x10) = lVar9 + -1;
    puVar10 = (undefined8 *)(uVar16 + lVar9 * 0x38);
    uStack_288 = puVar10[-2];
    local_290 = puVar10[-3];
    uStack_278 = *puVar10;
    uStack_280 = puVar10[-1];
    uStack_268 = puVar10[2];
    local_270 = puVar10[1];
    local_260 = puVar10[3];
    local_230 = lVar13;
    lStack_228 = lVar1;
    FUN_10000eba0(auStack_248,lVar13);
    local_2a8 = *(undefined8 *)(lVar1 + 8);
    lStack_2b0 = lVar13;
    FUN_100060d88(&local_2c8);
    (**(code **)(*(long *)(lVar13 + -8) + 0x10))();
    FUN_100001428(&uStack_280);
    FUN_10006c8f8(&local_2c8,&uStack_280);
    FUN_100083ab0(&local_290,&local_2c8);
    uVar17 = *(ulong *)(uVar16 + 0x10);
    uVar7 = uVar16;
    if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar17) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
      FUN_10006f390(uVar7,uVar17 + 1,1,uVar16);
    }
    *(ulong *)(uVar7 + 0x10) = uVar17 + 1;
    lVar9 = uVar7 + uVar17 * 0x38;
    *(undefined8 *)(lVar9 + 0x50) = local_298;
    *(long *)(lVar9 + 0x38) = lStack_2b0;
    *(undefined8 *)(lVar9 + 0x30) = local_2b8;
    *(undefined8 *)(lVar9 + 0x48) = uStack_2a0;
    *(undefined8 *)(lVar9 + 0x40) = local_2a8;
    *(undefined8 *)(lVar9 + 0x28) = uStack_2c0;
    *(undefined8 *)(lVar9 + 0x20) = local_2c8;
    *(ulong *)(unaff_x20 + 0x10) = uVar7;
    FUN_100083afc(&local_290);
    lVar13 = *(long *)(unaff_x20 + 8);
    uVar19 = *param_1;
    uVar2 = param_1[1];
    lVar9 = param_1[2];
    FUN_10009f4dc(local_220,uVar19,uVar2);
    bVar4 = local_20f;
    uVar16 = local_220[0];
    if ((local_1f8 & 0x7fffffffffffff3e) != 0x7ffffff3e) {
      if ((local_1f8 & 0x6000000000000000) == 0x2000000000000000) {
        FUN_10001fc18(local_220,&DAT_100104b38,&DAT_1000d5bc8);
        if ((bVar4 & 1) == 0) {
          if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000918c8);
            (*pcVar5)();
          }
          if (*(ulong *)(lVar9 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000918cc);
            (*pcVar5)();
          }
          lVar1 = lVar9 + uVar16 * 0x10;
          local_330 = *(ulong *)(lVar1 + 0x20);
          uVar16 = *(ulong *)(lVar1 + 0x28);
          _swift_beginAccess(lVar13 + 0x28,auStack_2f8,0,0);
          uVar17 = *(ulong *)(lVar13 + 0x28);
          if (uVar17 >> 0x3e == 0) {
            uVar11 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar11 = uVar17 & 0xffffffffffffff8;
            if ((long)uVar17 < 0) {
              uVar11 = uVar17;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          local_358 = lVar9;
          _swift_bridgeObjectRetain(uVar16);
          _swift_bridgeObjectRetain(uVar17);
          if (uVar11 != 0) {
            uVar15 = 0;
            local_338 = uVar17 & 0xc000000000000001;
            local_340 = uVar17 & 0xffffffffffffff8;
            local_350 = uVar11;
            uStack_348 = uVar19;
            do {
              if (local_338 == 0) {
                if (*(ulong *)(local_340 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1000918c4);
                  (*pcVar5)();
                }
                uVar11 = *(ulong *)(uVar17 + uVar15 * 8 + 0x20);
                _swift_retain(uVar11);
              }
              else {
                uVar11 = uVar15;
                FUN_1000794e0(uVar15,uVar17);
              }
              if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1000918c0);
                (*pcVar5)();
              }
              uVar18 = uVar15 + 1;
              uVar6 = *(ulong *)(uVar11 + 0x10);
              uVar8 = *(ulong *)(uVar11 + 0x18);
              (**(code **)(uVar8 + 0x18))();
              uVar3 = local_330;
              if (uVar6 == local_330 && uVar8 == uVar16) {
                _swift_bridgeObjectRelease(uVar17);
                uVar17 = uVar16;
LAB_1000916d8:
                _swift_bridgeObjectRelease(uVar17);
                _swift_bridgeObjectRelease(uVar8);
                FUN_10009c70c(auStack_130);
                FUN_10001fc18(auStack_130,&DAT_100104b40,&DAT_1000d5bd0);
                _swift_release(lVar13);
                *(ulong *)(unaff_x20 + 8) = uVar11;
                FUN_100001428(auStack_248);
                goto LAB_10009169c;
              }
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              _swift_bridgeObjectRelease(uVar8);
              uVar8 = uVar16;
              if ((uVar6 & 1) != 0) goto LAB_1000916d8;
              (**(code **)(*(long *)(uVar11 + 0x18) + 0x10))
                        (auStack_1c8,*(undefined8 *)(uVar11 + 0x10));
              uVar19 = local_138;
              _swift_bridgeObjectRetain(local_138);
              FUN_10006e954(auStack_1c8);
              local_290 = uVar3;
              local_370 = &local_290;
              uVar6 = 0;
              uStack_288 = uVar16;
              FUN_10002150c(FUN_1000224ec,auStack_380,uVar19);
              _swift_bridgeObjectRelease(uVar19);
              if ((uVar6 & 1) != 0) goto LAB_1000916d8;
              _swift_release(uVar11);
              uVar15 = uVar15 + 1;
              uVar19 = uStack_348;
            } while (uVar18 != local_350);
          }
          _swift_bridgeObjectRelease(uVar16);
          _swift_bridgeObjectRelease(uVar17);
          lVar9 = local_358;
        }
      }
      else {
        FUN_10001fc18(local_220,&DAT_100104b38,&DAT_1000d5bc8);
      }
    }
    FUN_100095304(uVar19,uVar2,lVar9,1,lVar13,uVar7);
    (**(code **)(*(long *)(lVar13 + 0x18) + 0x10))(auStack_108,*(undefined8 *)(lVar13 + 0x10));
    FUN_10006e954(auStack_108);
    lVar9 = local_90;
    if (local_90 == 0) {
LAB_1000917ec:
      FUN_100001428(auStack_248);
      return;
    }
    _swift_beginAccess(lVar13 + 0x28,auStack_2e0,0,0);
    puVar10 = *(undefined8 **)(lVar13 + 0x28);
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar14 = *(undefined8 **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar14 = (undefined8 *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((long)puVar10 < 0) {
        puVar14 = puVar10;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(puVar10);
    if (puVar14 == (undefined8 *)0x0) {
LAB_100091794:
      _swift_bridgeObjectRelease();
      FUN_100054664();
      _swift_allocError(&DAT_1000fa8c8,puVar10,0,0);
      *puVar10 = 3;
      puVar10[2] = 0;
      puVar10[1] = 0;
      puVar10[4] = 0;
      puVar10[3] = 0;
      puVar10[6] = 0;
      puVar10[5] = 0;
      puVar10[8] = 0;
      puVar10[7] = 0;
      puVar10[9] = 0;
      *(undefined1 *)(puVar10 + 10) = 0x11;
      _swift_willThrow();
      goto LAB_1000917ec;
    }
    uVar16 = 0;
    while( true ) {
      if (((ulong)puVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000918b4);
          (*pcVar5)();
        }
        uVar17 = puVar10[uVar16 + 4];
        _swift_retain(uVar17);
      }
      else {
        uVar17 = uVar16;
        FUN_1000794e0(uVar16,puVar10);
      }
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000918b0);
        (*pcVar5)();
      }
      puVar12 = (undefined8 *)(uVar16 + 1);
      if (*(long *)(uVar17 + 0x10) == lVar9) break;
      _swift_release(uVar17);
      uVar16 = uVar16 + 1;
      if (puVar12 == puVar14) goto LAB_100091794;
    }
    _swift_release(lVar13);
    _swift_bridgeObjectRelease(puVar10);
    *(ulong *)(unaff_x20 + 8) = uVar17;
    FUN_100001428(auStack_248);
LAB_10009169c:
    FUN_100090d58(auStack_248,param_1);
  } while( true );
}

