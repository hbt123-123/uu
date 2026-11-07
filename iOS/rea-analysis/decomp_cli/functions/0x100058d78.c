// rea decompile_all
// name: FUN_100058d78
// address: 0x100058d78
// body: available
// range: 0x100058d78-0x100059b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100058d78(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *unaff_x20;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *local_1a0;
  undefined *local_148;
  undefined8 uStack_140;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  FUN_100052b78();
  local_1a0 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_e0 = 0;
  local_d8 = 0xe000000000000000;
  puVar19 = (undefined *)unaff_x20[0xb];
  puVar21 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (puVar19 != (undefined *)0x0) {
    puVar21 = puVar19;
  }
  FUN_100052a08();
  _swift_bridgeObjectRetain(puVar19);
  puVar19 = puVar21;
  FUN_10005b60c(puVar21,&local_e0);
  FUN_100052b44();
  _swift_bridgeObjectRelease(puVar21);
  lVar23 = *(long *)(puVar19 + 0x10);
  if (lVar23 == 0) {
    uVar16 = 0;
  }
  else {
    local_d0 = local_1a0;
    FUN_1000798d0(0,lVar23,0);
    puVar14 = (undefined8 *)(puVar19 + 0x28);
    local_1a0 = local_d0;
    do {
      uVar24 = puVar14[-1];
      uVar7 = *puVar14;
      uVar16 = *(ulong *)(local_1a0 + 0x10);
      uVar22 = *(ulong *)(local_1a0 + 0x18);
      local_d0 = local_1a0;
      _swift_bridgeObjectRetain(uVar7);
      if (uVar22 >> 1 <= uVar16) {
        FUN_1000798d0(1 < uVar22,uVar16 + 1,1);
        local_1a0 = local_d0;
      }
      *(ulong *)(local_1a0 + 0x10) = uVar16 + 1;
      *(undefined8 *)(local_1a0 + uVar16 * 0x10 + 0x20) = uVar24;
      *(undefined8 *)(local_1a0 + uVar16 * 0x10 + 0x28) = uVar7;
      puVar14 = puVar14 + 4;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    uVar16 = *(ulong *)(puVar19 + 0x10);
  }
  puVar21 = PTR___swiftEmptyArrayStorage_1000f0740;
  uVar22 = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  do {
    lVar23 = uVar22 * 0x20 + 0x38;
    do {
      lVar18 = lVar23;
      if (uVar16 == uVar22) {
        _swift_bridgeObjectRelease(puVar19);
        puVar19 = puVar21;
        if ((undefined *)unaff_x20[10] != (undefined *)0x0) {
          puVar19 = (undefined *)unaff_x20[10];
        }
        uVar16 = *(ulong *)(puVar19 + 0x10);
        _swift_bridgeObjectRetain();
        puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
        if (uVar16 == 0) goto LAB_100059084;
        uVar22 = 0;
        goto LAB_100058f90;
      }
      if (*(ulong *)(puVar19 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100059a98);
        (*pcVar4)();
      }
      uVar22 = uVar22 + 1;
      lVar20 = *(long *)(puVar19 + lVar18);
      lVar23 = lVar18 + 0x20;
    } while (lVar20 == 0);
    uVar24 = *(undefined8 *)(puVar19 + lVar18 + -8);
    _swift_bridgeObjectRetain(lVar20);
    puVar10 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar5 = puVar6;
    if (((ulong)puVar10 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      FUN_10006e610(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar15 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar15) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_10006e610(puVar6,uVar15 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar15 + 1;
    *(undefined8 *)(puVar6 + uVar15 * 0x10 + 0x20) = uVar24;
    *(long *)(puVar6 + uVar15 * 0x10 + 0x28) = lVar20;
  } while( true );
LAB_100058f90:
  do {
    puVar14 = (undefined8 *)(puVar19 + uVar22 * 0x60 + 0x20);
    uVar15 = uVar22;
    while( true ) {
      if (*(ulong *)(puVar19 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100059a9c);
        (*pcVar4)();
      }
      uStack_c8 = puVar14[1];
      local_d0 = (undefined *)*puVar14;
      uStack_b8 = puVar14[3];
      local_c0 = puVar14[2];
      lStack_a8 = puVar14[5];
      local_b0 = puVar14[4];
      uStack_98 = puVar14[7];
      uStack_a0 = puVar14[6];
      uStack_88 = puVar14[9];
      local_90 = puVar14[8];
      uStack_78 = puVar14[0xb];
      uStack_80 = puVar14[10];
      uVar22 = uVar15 + 1;
      puVar21 = puVar10;
      if ((uStack_c8 & 1) != 0) break;
      puVar14 = puVar14 + 0xc;
      uVar15 = uVar22;
      if (uVar16 == uVar22) goto LAB_100059084;
    }
    FUN_100052a08(&local_d0,&local_148);
    puVar5 = puVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar5 & 1) == 0) {
      FUN_100079908(0,*(long *)(puVar10 + 0x10) + 1,1);
    }
    uVar1 = *(ulong *)(puVar10 + 0x10);
    if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
      FUN_100079908(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(ulong *)(puVar10 + uVar1 * 0x60 + 0x28) = uStack_c8;
    *(undefined **)(puVar10 + uVar1 * 0x60 + 0x20) = local_d0;
    *(undefined8 *)(puVar10 + uVar1 * 0x60 + 0x38) = uStack_b8;
    *(undefined8 *)(puVar10 + uVar1 * 0x60 + 0x30) = local_c0;
    *(undefined8 *)(puVar10 + uVar1 * 0x60 + 0x68) = uStack_88;
    *(undefined8 *)(puVar10 + uVar1 * 0x60 + 0x60) = local_90;
    *(undefined8 *)(puVar10 + uVar1 * 0x60 + 0x78) = uStack_78;
    *(undefined8 *)(puVar10 + uVar1 * 0x60 + 0x70) = uStack_80;
    *(long *)(puVar10 + uVar1 * 0x60 + 0x48) = lStack_a8;
    *(undefined8 *)(puVar10 + uVar1 * 0x60 + 0x40) = local_b0;
    *(undefined8 *)(puVar10 + uVar1 * 0x60 + 0x58) = uStack_98;
    *(undefined8 *)(puVar10 + uVar1 * 0x60 + 0x50) = uStack_a0;
  } while (uVar16 - 1 != uVar15);
LAB_100059084:
  _swift_bridgeObjectRelease(puVar19);
  if (*(long *)(puVar21 + 0x10) == 0) {
    puVar19 = (undefined *)0x0;
    uVar16 = 0xe000000000000000;
  }
  else {
    puVar19 = local_1a0;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar10 = local_1a0;
    if (((ulong)puVar19 & 1) == 0) {
      puVar10 = (undefined *)0x0;
      FUN_10006e610(0,*(long *)(local_1a0 + 0x10) + 1,1,local_1a0);
    }
    uVar16 = *(ulong *)(puVar10 + 0x10);
    uVar22 = *(ulong *)(puVar10 + 0x18);
    uVar15 = uVar22 >> 1;
    lVar23 = uVar16 + 1;
    puVar19 = puVar10;
    if (uVar15 <= uVar16) {
      puVar19 = (undefined *)(ulong)(1 < uVar22);
      FUN_10006e610(puVar19,lVar23,1,puVar10);
      uVar22 = *(ulong *)(puVar19 + 0x18);
      uVar15 = uVar22 >> 1;
    }
    *(long *)(puVar19 + 0x10) = lVar23;
    *(undefined8 *)(puVar19 + uVar16 * 0x10 + 0x20) = 0xd000000000000011;
    *(undefined8 *)(puVar19 + uVar16 * 0x10 + 0x28) = 0x80000001000c9f40;
    lVar18 = uVar16 + 2;
    local_1a0 = puVar19;
    if ((long)uVar15 < lVar18) {
      local_1a0 = (undefined *)(ulong)(1 < uVar22);
      FUN_10006e610(local_1a0,lVar18,1,puVar19);
    }
    *(long *)(local_1a0 + 0x10) = lVar18;
    *(undefined8 *)(local_1a0 + lVar23 * 0x10 + 0x20) = 0x203a3a2a292d2827;
    *(undefined8 *)(local_1a0 + lVar23 * 0x10 + 0x28) = 0xef276772613e2d3a;
    local_d0 = (undefined *)0x0;
    uStack_c8 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x108);
    uVar16 = uStack_c8;
    puVar19 = local_d0;
    __sSS6appendyySSF(0xd000000000000044,0x80000001000c9f60);
    puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
    lVar23 = *(long *)(puVar21 + 0x10);
    if (lVar23 != 0) {
      FUN_1000798d0(0,lVar23,0);
      if (*(long *)(puVar21 + 0x10) != 0) {
        uVar22 = 0;
        puVar14 = (undefined8 *)(puVar21 + 0x20);
        do {
          uStack_c8 = puVar14[1];
          local_d0 = (undefined *)*puVar14;
          uVar12 = puVar14[3];
          uVar8 = puVar14[2];
          uStack_88 = puVar14[9];
          local_90 = puVar14[8];
          uStack_78 = puVar14[0xb];
          uStack_80 = puVar14[10];
          lVar18 = puVar14[5];
          uVar25 = puVar14[4];
          uStack_98 = puVar14[7];
          uStack_a0 = puVar14[6];
          uVar24 = 0xe000000000000000;
          local_c0 = uVar8;
          uStack_b8 = uVar12;
          local_b0 = uVar25;
          lStack_a8 = lVar18;
          FUN_100052a08(&local_d0,&local_148);
          __ss11_StringGutsV4growyySiF(0x13);
          _swift_bridgeObjectRelease(0xe000000000000000);
          local_148 = (undefined *)0x2020202020202020;
          uStack_140 = 0xed00002720202020;
          uVar7 = 0x5c;
          uVar11 = 0xe100000000000000;
          FUN_100053b50(0x5c,0xe100000000000000,0x5c5c,0xe200000000000000,uVar8,uVar12);
          uVar8 = 0x3a;
          uVar12 = 0xe100000000000000;
          FUN_100053b50(0x3a,0xe100000000000000,0x3a5c,0xe200000000000000,uVar7,uVar11);
          _swift_bridgeObjectRelease(uVar11);
          uVar7 = 1;
          FUN_100052ee8(1,uVar8,uVar12);
          _swift_bridgeObjectRelease(uVar12);
          __sSS6appendyySSF(uVar7,uVar8);
          _swift_bridgeObjectRelease(uVar8);
          __sSS6appendyySSF(0x3a,0xe100000000000000);
          if (lVar18 != 0) {
            FUN_100052ee8(1,uVar25,lVar18);
            uVar24 = uVar25;
          }
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar24);
          __sSS6appendyySSF(0x27,0xe100000000000000);
          FUN_100052b44(&local_d0);
          uVar24 = uStack_140;
          puVar5 = local_148;
          uVar15 = *(ulong *)(puVar10 + 0x10);
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar15) {
            FUN_1000798d0(1 < *(ulong *)(puVar10 + 0x18),uVar15 + 1,1);
          }
          *(ulong *)(puVar10 + 0x10) = uVar15 + 1;
          *(undefined **)(puVar10 + uVar15 * 0x10 + 0x20) = puVar5;
          *(undefined8 *)(puVar10 + uVar15 * 0x10 + 0x28) = uVar24;
          if (lVar23 - 1U == uVar22) goto LAB_100059350;
          puVar14 = puVar14 + 0xc;
          uVar22 = uVar22 + 1;
        } while (uVar22 < *(ulong *)(puVar21 + 0x10));
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100059aa0);
      (*pcVar4)();
    }
LAB_100059350:
    puVar5 = &DAT_100103ed8;
    local_d0 = puVar10;
    FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
    puVar14 = &DAT_100103ee0;
    FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
    uVar24 = 10;
    uVar7 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar5,puVar14);
    _swift_bridgeObjectRelease(puVar10);
    __sSS6appendyySSF(uVar24,uVar7);
    _swift_bridgeObjectRelease(uVar7);
    __sSS6appendyySSF(0xd000000000000071,0x80000001000c9fb0);
    puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
    if (lVar23 != 0) {
      local_d0 = PTR___swiftEmptyArrayStorage_1000f0740;
      FUN_1000798d0(0,lVar23,0);
      puVar17 = (undefined8 *)(puVar21 + 0x38);
      puVar10 = local_d0;
      do {
        uVar24 = puVar17[-1];
        uVar7 = *puVar17;
        uVar22 = *(ulong *)(puVar10 + 0x10);
        uVar15 = *(ulong *)(puVar10 + 0x18);
        local_d0 = puVar10;
        _swift_bridgeObjectRetain(uVar7);
        if (uVar15 >> 1 <= uVar22) {
          FUN_1000798d0(1 < uVar15,uVar22 + 1,1);
          puVar10 = local_d0;
        }
        *(ulong *)(puVar10 + 0x10) = uVar22 + 1;
        *(undefined8 *)(puVar10 + uVar22 * 0x10 + 0x20) = uVar24;
        *(undefined8 *)(puVar10 + uVar22 * 0x10 + 0x28) = uVar7;
        puVar17 = puVar17 + 0xc;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    uVar24 = 0x7c;
    uVar7 = 0xe100000000000000;
    local_d0 = puVar10;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x7c,0xe100000000000000,puVar5,puVar14);
    _swift_bridgeObjectRelease(puVar10);
    __sSS6appendyySSF(uVar24,uVar7);
    _swift_bridgeObjectRelease(uVar7);
    __sSS6appendyySSF(0x2020202020200a29,0xef22202020202020);
    __sSS6appendyySSF(param_1,param_2);
    __sSS6appendyySSF(0xd00000000000003e,0x80000001000ca030);
  }
  puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_d0 = (undefined *)0x0;
  uStack_c8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x92);
  uVar22 = uStack_c8;
  puVar3 = local_d0;
  __sSS6appendyySSF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __sSS6appendyySSF(0xa7b202928,0xe500000000000000);
  puVar10 = puVar5;
  if ((undefined *)*unaff_x20 != (undefined *)0x0) {
    puVar10 = (undefined *)*unaff_x20;
  }
  lVar23 = *(long *)(puVar10 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(puVar10);
  if (lVar23 == 0) {
    local_d0 = (undefined *)0x0;
    uStack_c8 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1a5);
    __sSS6appendyySSF(0xd000000000000075,0x80000001000ca110);
    __sSS6appendyySSF(0x4c4548535f504153,0xe90000000000004c);
    __sSS6appendyySSF(0xd000000000000012,0x80000001000ca190);
    __sSS6appendyySSF(0xd000000000000011,0x80000001000c8f00);
    __sSS6appendyySSF(0x202020200a,0xe500000000000000);
    __sSS6appendyySSF(0xd000000000000011,0x80000001000c8f00);
    __sSS6appendyySSF(0xd000000000000047,0x80000001000ca1b0);
    __sSS6appendyySSF(0xd000000000000011,0x80000001000c8f00);
    __sSS6appendyySSF(0xd0000000000000ca,0x80000001000ca200);
    puVar10 = local_d0;
    uVar15 = uStack_c8;
  }
  else {
    puVar10 = (undefined *)0x0;
    uVar15 = 0xe000000000000000;
  }
  __sSS6appendyySSF(puVar10,uVar15);
  _swift_bridgeObjectRelease(uVar15);
  __sSS6appendyySSF(0xd000000000000013,0x80000001000ca070);
  lVar23 = *(long *)(puVar6 + 0x10);
  if (lVar23 == 0) {
    _swift_bridgeObjectRelease(puVar6);
    puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    local_148 = puVar5;
    FUN_1000798d0(0,lVar23,0);
    puVar14 = (undefined8 *)(puVar6 + 0x28);
    do {
      puVar10 = local_148;
      local_d0 = (undefined *)puVar14[-1];
      uVar24 = *puVar14;
      uStack_c8 = uVar24;
      _swift_bridgeObjectRetain_n(uVar24,2);
      __sSS6appendyySSF(10,0xe100000000000000);
      _swift_bridgeObjectRelease(uVar24);
      uVar1 = uStack_c8;
      puVar5 = local_d0;
      uVar15 = *(ulong *)(puVar10 + 0x10);
      local_148 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar15) {
        FUN_1000798d0(1 < *(ulong *)(puVar10 + 0x18),uVar15 + 1,1);
      }
      puVar10 = local_148;
      *(ulong *)(local_148 + 0x10) = uVar15 + 1;
      *(undefined **)(local_148 + uVar15 * 0x10 + 0x20) = puVar5;
      *(ulong *)(local_148 + uVar15 * 0x10 + 0x28) = uVar1;
      puVar14 = puVar14 + 2;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    _swift_bridgeObjectRelease(puVar6);
    puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  puVar6 = &DAT_100103ed8;
  local_d0 = puVar10;
  FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
  puVar14 = &DAT_100103ee0;
  FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
  uVar24 = 0;
  uVar8 = 0xe000000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar6,puVar14);
  _swift_bridgeObjectRelease(puVar10);
  uVar7 = 4;
  FUN_100058858(4,uVar24,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  __sSS6appendyySSF(uVar7,uVar24);
  _swift_bridgeObjectRelease(uVar24);
  __sSS6appendyySSF(0xd00000000000001a,0x80000001000ca090);
  local_d0 = local_1a0;
  _swift_bridgeObjectRetain(local_1a0);
  uVar24 = 10;
  uVar8 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar6,puVar14);
  _swift_bridgeObjectRelease(local_1a0);
  uVar7 = 8;
  FUN_100058858(8,uVar24,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  __sSS6appendyySSF(uVar7,uVar24);
  _swift_bridgeObjectRelease(uVar24);
  __sSS6appendyySSF(0xd00000000000003c,0x80000001000ca0b0);
  __sSS6appendyySSF(puVar19,uVar16);
  _swift_bridgeObjectRelease(uVar16);
  __sSS6appendyySSF(0xd000000000000018,0x80000001000ca0f0);
  lVar23 = *(long *)(puVar21 + 0x10);
  if (lVar23 == 0) {
    _swift_bridgeObjectRelease(local_1a0);
    _swift_release(puVar21);
    puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    FUN_1000798d0(0,lVar23,0);
    lVar18 = 0x20;
    do {
      puVar17 = (undefined8 *)(puVar21 + lVar18);
      uStack_c8 = puVar17[1];
      local_d0 = (undefined *)*puVar17;
      uStack_b8 = puVar17[3];
      local_c0 = puVar17[2];
      lStack_a8 = puVar17[5];
      local_b0 = puVar17[4];
      uStack_98 = puVar17[7];
      uStack_a0 = puVar17[6];
      uStack_88 = puVar17[9];
      local_90 = puVar17[8];
      uStack_78 = puVar17[0xb];
      uStack_80 = puVar17[10];
      ppuVar9 = &local_d0;
      ppuVar13 = &local_148;
      FUN_100052a08();
      FUN_100058d78();
      FUN_100052b44(&local_d0);
      uVar16 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar16) {
        FUN_1000798d0(1 < *(ulong *)(puVar5 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar16 + 1;
      *(undefined ***)(puVar5 + uVar16 * 0x10 + 0x20) = ppuVar9;
      *(undefined ***)(puVar5 + uVar16 * 0x10 + 0x28) = ppuVar13;
      lVar18 = lVar18 + 0x60;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    _swift_bridgeObjectRelease(local_1a0);
    _swift_release(puVar21);
  }
  uVar24 = 0;
  uVar7 = 0xe000000000000000;
  local_148 = puVar5;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar6,puVar14);
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(uVar24,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  auVar2._8_8_ = uVar22;
  auVar2._0_8_ = puVar3;
  _swift_bridgeObjectRelease(local_d8);
  return auVar2;
}

