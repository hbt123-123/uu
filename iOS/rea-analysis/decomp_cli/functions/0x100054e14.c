// rea decompile_all
// name: FUN_100054e14
// address: 0x100054e14
// body: available
// range: 0x100054e14-0x10005549b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100054e14(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  long unaff_x20;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined *local_258 [12];
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar13 = PTR___swiftEmptyArrayStorage_1000f0740;
  puVar14 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (*(undefined **)(unaff_x20 + 0x50) != (undefined *)0x0) {
    puVar14 = *(undefined **)(unaff_x20 + 0x50);
  }
  uVar15 = *(ulong *)(puVar14 + 0x10);
  _swift_bridgeObjectRetain();
  if (uVar15 != 0) {
    uVar17 = 0;
    do {
      puVar11 = (undefined8 *)(puVar14 + uVar17 * 0x60 + 0x20);
      uVar16 = uVar17;
      while( true ) {
        if (*(ulong *)(puVar14 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10005549c);
          (*pcVar2)();
        }
        uStack_118 = puVar11[1];
        local_120 = *puVar11;
        uStack_108 = puVar11[3];
        local_110 = puVar11[2];
        uStack_f8 = puVar11[5];
        local_100 = puVar11[4];
        uStack_e8 = puVar11[7];
        local_f0 = puVar11[6];
        uStack_d8 = puVar11[9];
        local_e0 = puVar11[8];
        uStack_c8 = puVar11[0xb];
        local_d0 = puVar11[10];
        uVar17 = uVar16 + 1;
        if ((char)uStack_118 == '\x01') break;
        puVar11 = puVar11 + 0xc;
        uVar16 = uVar17;
        if (uVar15 == uVar17) goto LAB_100054f5c;
      }
      FUN_100052a08(&local_120,&local_1e0);
      puVar5 = puVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      local_258[0] = puVar13;
      if (((ulong)puVar5 & 1) == 0) {
        FUN_100079908(0,*(long *)(puVar13 + 0x10) + 1,1);
      }
      uVar1 = *(ulong *)(local_258[0] + 0x10);
      if (*(ulong *)(local_258[0] + 0x18) >> 1 <= uVar1) {
        FUN_100079908(1 < *(ulong *)(local_258[0] + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_258[0] + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_258[0] + uVar1 * 0x60 + 0x28) = uStack_118;
      *(undefined8 *)(local_258[0] + uVar1 * 0x60 + 0x20) = local_120;
      *(undefined8 *)(local_258[0] + uVar1 * 0x60 + 0x38) = uStack_108;
      *(undefined8 *)(local_258[0] + uVar1 * 0x60 + 0x30) = local_110;
      *(undefined8 *)(local_258[0] + uVar1 * 0x60 + 0x68) = uStack_d8;
      *(undefined8 *)(local_258[0] + uVar1 * 0x60 + 0x60) = local_e0;
      *(undefined8 *)(local_258[0] + uVar1 * 0x60 + 0x78) = uStack_c8;
      *(undefined8 *)(local_258[0] + uVar1 * 0x60 + 0x70) = local_d0;
      *(undefined8 *)(local_258[0] + uVar1 * 0x60 + 0x48) = uStack_f8;
      *(undefined8 *)(local_258[0] + uVar1 * 0x60 + 0x40) = local_100;
      *(undefined8 *)(local_258[0] + uVar1 * 0x60 + 0x58) = uStack_e8;
      *(undefined8 *)(local_258[0] + uVar1 * 0x60 + 0x50) = local_f0;
      puVar13 = local_258[0];
    } while (uVar15 - 1 != uVar16);
  }
LAB_100054f5c:
  _swift_bridgeObjectRelease(puVar14);
  local_120 = 0;
  uStack_118 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x18);
  _swift_bridgeObjectRelease(uStack_118);
  local_130 = 0x272065736163;
  uStack_128 = 0xe600000000000000;
  __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar8 = 0xe600000000000000;
  __sSS6appendyySSF(0x202020200a27,0xe600000000000000);
  FUN_10005549c();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = 0xe100000000000000;
  __sSS6appendyySSF(0x20,0xe100000000000000);
  FUN_100056034();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar8);
  lVar3 = 0x20;
  __sSS6appendyySSF(0x20,0xe100000000000000);
  FUN_1000560fc();
  puVar14 = PTR___swiftEmptyArrayStorage_1000f0740;
  uVar15 = 0;
  uVar17 = *(ulong *)(lVar3 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
  do {
    lVar12 = uVar15 * 0xa8 + 0x20;
    do {
      if (uVar17 == uVar15) {
        _swift_bridgeObjectRelease(lVar3);
        lVar3 = *(long *)(puVar5 + 0x10);
        if (lVar3 == 0) {
          _swift_bridgeObjectRelease(puVar5);
          puVar14 = PTR___swiftEmptyArrayStorage_1000f0740;
        }
        else {
          local_258[0] = puVar14;
          FUN_1000798d0(0,lVar3,0);
          puVar11 = (undefined8 *)(puVar5 + 0x28);
          do {
            puVar14 = local_258[0];
            uVar8 = puVar11[-1];
            uVar9 = *puVar11;
            local_1e0 = (undefined *)0x27;
            uStack_1d8 = 0xe100000000000000;
            _swift_bridgeObjectRetain(uVar9);
            FUN_100056678(1,uVar8,uVar9);
            __sSS6appendyySSF();
            _swift_bridgeObjectRelease(uVar8);
            __sSS6appendyySSF(0x27,0xe100000000000000);
            _swift_bridgeObjectRelease(uVar9);
            uVar8 = uStack_1d8;
            puVar4 = local_1e0;
            uVar15 = *(ulong *)(puVar14 + 0x10);
            local_258[0] = puVar14;
            if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar15) {
              FUN_1000798d0(1 < *(ulong *)(puVar14 + 0x18),uVar15 + 1,1);
            }
            puVar14 = local_258[0];
            *(ulong *)(local_258[0] + 0x10) = uVar15 + 1;
            *(undefined **)(local_258[0] + uVar15 * 0x10 + 0x20) = puVar4;
            *(undefined8 *)(local_258[0] + uVar15 * 0x10 + 0x28) = uVar8;
            puVar11 = puVar11 + 2;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
          _swift_bridgeObjectRelease(puVar5);
        }
        puVar5 = &DAT_100103ed8;
        local_1e0 = puVar14;
        FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
        puVar4 = puVar5;
        FUN_100052ab4();
        uVar8 = 0x20;
        uVar9 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar5,puVar4);
        _swift_bridgeObjectRelease(puVar14);
        __sSS6appendyySSF(uVar8,uVar9);
        _swift_bridgeObjectRelease(uVar9);
        if (*(long *)(puVar13 + 0x10) == 0) {
          _swift_release();
          uVar8 = 0;
          uVar9 = 0xe000000000000000;
        }
        else {
          local_1e0 = (undefined *)0x0;
          uStack_1d8 = 0xe000000000000000;
          __ss11_StringGutsV4growyySiF(0x2a);
          _swift_bridgeObjectRelease(uStack_1d8);
          local_1f0 = 0xd000000000000020;
          uStack_1e8 = 0x80000001000c9c60;
          lVar3 = *(long *)(puVar13 + 0x10);
          if (lVar3 == 0) {
            _swift_release(puVar13);
            puVar14 = PTR___swiftEmptyArrayStorage_1000f0740;
          }
          else {
            local_1f8 = PTR___swiftEmptyArrayStorage_1000f0740;
            FUN_1000798d0(0,lVar3,0);
            lVar12 = 0x20;
            do {
              puVar14 = local_1f8;
              puVar11 = (undefined8 *)(puVar13 + lVar12);
              uStack_1d8 = puVar11[1];
              local_1e0 = (undefined *)*puVar11;
              uStack_1c8 = puVar11[3];
              local_1d0 = puVar11[2];
              uStack_1b8 = puVar11[5];
              local_1c0 = puVar11[4];
              uStack_1a8 = puVar11[7];
              uStack_1b0 = puVar11[6];
              uStack_198 = puVar11[9];
              local_1a0 = puVar11[8];
              uStack_188 = puVar11[0xb];
              uStack_190 = puVar11[10];
              ppuVar6 = &local_1e0;
              ppuVar10 = local_258;
              FUN_100052a08();
              FUN_100054e14();
              FUN_100052b44(&local_1e0);
              uVar15 = *(ulong *)(puVar14 + 0x10);
              local_1f8 = puVar14;
              if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar15) {
                FUN_1000798d0(1 < *(ulong *)(puVar14 + 0x18),uVar15 + 1,1);
              }
              puVar14 = local_1f8;
              *(ulong *)(local_1f8 + 0x10) = uVar15 + 1;
              *(undefined ***)(local_1f8 + uVar15 * 0x10 + 0x20) = ppuVar6;
              *(undefined ***)(local_1f8 + uVar15 * 0x10 + 0x28) = ppuVar10;
              lVar12 = lVar12 + 0x60;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
            _swift_release();
          }
          uVar8 = 10;
          uVar9 = 0xe100000000000000;
          local_258[0] = puVar14;
          __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar5,puVar4);
          _swift_bridgeObjectRelease(puVar14);
          __sSS6appendyySSF(uVar8,uVar9);
          _swift_bridgeObjectRelease(uVar9);
          __sSS6appendyySSF(0x646e65202020200a,0xe800000000000000);
          uVar8 = local_1f0;
          uVar9 = uStack_1e8;
        }
        __sSS6appendyySSF(uVar8,uVar9);
        _swift_bridgeObjectRelease(uVar9);
        uVar8 = uStack_128;
        uVar7 = 4;
        uVar9 = local_130;
        FUN_100058858(4,local_130,uStack_128);
        _swift_bridgeObjectRelease(uVar8);
        auVar18._8_8_ = uVar9;
        auVar18._0_8_ = uVar7;
        return auVar18;
      }
      if (*(ulong *)(lVar3 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100055498);
        (*pcVar2)();
      }
      uVar15 = uVar15 + 1;
      puVar11 = (undefined8 *)(lVar3 + lVar12);
      uStack_118 = puVar11[1];
      local_120 = *puVar11;
      uStack_108 = puVar11[3];
      local_110 = puVar11[2];
      uStack_f8 = puVar11[5];
      local_100 = puVar11[4];
      uStack_e8 = puVar11[7];
      local_f0 = puVar11[6];
      uStack_d8 = puVar11[9];
      local_e0 = puVar11[8];
      uStack_c8 = puVar11[0xb];
      local_d0 = puVar11[10];
      uStack_b8 = puVar11[0xd];
      uStack_c0 = puVar11[0xc];
      uStack_a8 = puVar11[0xf];
      local_b0 = puVar11[0xe];
      uStack_98 = puVar11[0x11];
      local_a0 = puVar11[0x10];
      uStack_88 = puVar11[0x13];
      uStack_90 = puVar11[0x12];
      local_80 = puVar11[0x14];
      puVar11 = &local_120;
      ppuVar6 = &local_1e0;
      FUN_100052a44();
      FUN_1000562c0();
      FUN_100052a80(&local_120);
      lVar12 = lVar12 + 0xa8;
    } while (ppuVar6 == (undefined **)0x0);
    puVar4 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_10006e610(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      puVar5 = puVar4;
    }
    uVar16 = *(ulong *)(puVar5 + 0x10);
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar16) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_10006e610(puVar5,uVar16 + 1,1);
    }
    *(ulong *)(puVar5 + 0x10) = uVar16 + 1;
    *(undefined8 **)(puVar5 + uVar16 * 0x10 + 0x20) = puVar11;
    *(undefined ***)(puVar5 + uVar16 * 0x10 + 0x28) = ppuVar6;
  } while( true );
}

