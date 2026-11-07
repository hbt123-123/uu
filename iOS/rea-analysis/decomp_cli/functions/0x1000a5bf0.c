// rea decompile_all
// name: FUN_1000a5bf0
// address: 0x1000a5bf0
// body: available
// range: 0x1000a5bf0-0x1000a623b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000a5bf0(undefined8 ***param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 ***pppuVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 ***pppuVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  ulong uVar26;
  code *pcVar27;
  ulong *puVar28;
  undefined8 *unaff_x20;
  undefined8 **ppuVar29;
  long lVar30;
  undefined8 ***pppuVar31;
  undefined8 uVar32;
  undefined8 **local_a8;
  undefined8 **local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 **local_88;
  undefined *puStack_80;
  undefined8 **local_78;
  undefined *puStack_70;
  
  pppuVar10 = (undefined8 ***)0x20;
  puVar18 = (undefined *)0xe100000000000000;
  __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,2);
  uVar19 = *unaff_x20;
  uVar23 = unaff_x20[1];
  local_a8 = pppuVar10;
  local_a0 = (undefined8 **)puVar18;
  _swift_bridgeObjectRetain(puVar18);
  __sSS6appendyySSF(uVar19,uVar23);
  _swift_bridgeObjectRelease(puVar18);
  ppuVar8 = local_a0;
  ppuVar7 = local_a8;
  uVar2 = unaff_x20[2];
  puVar18 = (undefined *)unaff_x20[3];
  uVar19 = 0x1a;
  pppuVar10 = param_1;
  puVar22 = puVar18;
  FUN_1000a5114();
  uVar3 = unaff_x20[6];
  uVar26 = unaff_x20[7];
  if (((uVar3 & uVar26 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    puVar22 = (undefined *)unaff_x20[5];
    if ((long)uVar26 < 0) {
      uVar26 = uVar26 & 0x7fffffffffffffff;
      local_78 = (undefined8 ***)0x0;
      puStack_70 = (undefined *)0xe000000000000000;
      if (puVar22 != (undefined *)0x0) {
        puVar20 = (undefined *)0x8;
        pppuVar15 = param_1;
        FUN_1000a5114();
        local_a8 = pppuVar15;
        local_a0 = (undefined8 **)puVar20;
        _swift_bridgeObjectRetain(puVar20);
        __sSS6appendyySSF(10,0xe100000000000000);
        _swift_bridgeObjectRelease(puVar20);
        ppuVar29 = local_a0;
        __sSS6appendyySSF(local_a8,local_a0);
        _swift_bridgeObjectRelease(ppuVar29);
      }
      uVar11 = uVar3;
      (**(code **)(uVar26 + 0x18))(uVar3,uVar26);
      lVar30 = *(long *)(uVar11 + 0x10);
      if (lVar30 == 0) {
        _swift_bridgeObjectRelease();
        ppuVar29 = (undefined8 **)puStack_70;
        pppuVar15 = (undefined8 ***)local_78;
      }
      else {
        pcVar27 = *(code **)(uVar26 + 0x20);
        puVar28 = (ulong *)(uVar11 + 0x28);
        do {
          uVar4 = puVar28[-1];
          uVar5 = *puVar28;
          _swift_bridgeObjectRetain(uVar5);
          uVar13 = uVar3;
          (*pcVar27)(uVar3,uVar26);
          if ((*(long *)(uVar13 + 0x10) == 0) ||
             (uVar14 = uVar4, uVar21 = uVar5, FUN_100020780(), (uVar21 & 1) == 0)) {
            uVar23 = 0;
            uVar32 = 0xe000000000000000;
          }
          else {
            puVar1 = (undefined8 *)(*(long *)(uVar13 + 0x38) + uVar14 * 0x10);
            uVar23 = *puVar1;
            uVar32 = puVar1[1];
            _swift_bridgeObjectRetain(uVar32);
          }
          _swift_bridgeObjectRelease(uVar13);
          pppuVar15 = (undefined8 ***)0x20;
          puVar22 = (undefined *)0xe100000000000000;
          __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,8);
          local_a8 = pppuVar15;
          local_a0 = (undefined8 **)puVar22;
          _swift_bridgeObjectRetain(puVar22);
          __sSS6appendyySSF(uVar4,uVar5);
          _swift_bridgeObjectRelease(puVar22);
          _swift_bridgeObjectRelease(uVar5);
          ppuVar9 = local_a0;
          ppuVar29 = local_a8;
          local_a8 = (undefined8 **)0x202d;
          local_a0 = (undefined8 **)0xe200000000000000;
          __sSS6appendyySSF(uVar23,uVar32);
          _swift_bridgeObjectRelease(uVar32);
          ppuVar16 = local_a0;
          uVar23 = 0x1c;
          pppuVar31 = param_1;
          FUN_1000a5114(param_1,0x1c,local_a8,local_a0);
          _swift_bridgeObjectRelease(ppuVar16);
          pppuVar15 = &local_a8;
          puVar20 = PTR___sSSN_1000f02f8;
          puVar24 = PTR___sSSSTsWP_1000f0310;
          local_a8 = pppuVar31;
          local_a0 = (undefined8 **)uVar23;
          __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
                    (pppuVar15,PTR___sSSN_1000f02f8,
                     PTR___sSSs25LosslessStringConvertiblesWP_1000f0328);
          ppuVar16 = (undefined8 **)0x202d;
          __sSS5countSivg(0x202d,0xe200000000000000);
          pppuVar31 = (undefined8 ***)ppuVar29;
          __sSS5countSivg(ppuVar29,ppuVar9);
          if ((long)pppuVar31 < 0x1a) {
            pppuVar31 = (undefined8 ***)ppuVar29;
            __sSS5countSivg(ppuVar29,ppuVar9);
            ppuVar17 = (undefined8 **)((long)ppuVar16 + (long)pppuVar31);
            if (SCARRY8((long)ppuVar16,(long)pppuVar31)) {
                    /* WARNING: Does not return */
              pcVar27 = (code *)SoftwareBreakpoint(1,0x1000a623c);
              (*pcVar27)();
            }
            _swift_bridgeObjectRetain(puVar20);
            puVar12 = puVar20;
            FUN_100096c3c();
            puVar22 = puVar20;
            _swift_bridgeObjectRelease(puVar20);
            local_88 = ppuVar29;
            puStack_80 = (undefined *)ppuVar9;
            local_a8 = ppuVar17;
            local_a0 = pppuVar15;
            local_98 = puVar12;
            puStack_90 = puVar24;
            FUN_10005b81c();
            _swift_bridgeObjectRetain(ppuVar9);
            __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_a8,PTR___sSsN_1000f0448,puVar22);
            _swift_bridgeObjectRelease(puVar24);
            local_a8 = local_88;
            local_a0 = (undefined8 **)puStack_80;
            pppuVar15 = &local_a8;
            puVar24 = PTR___sSSN_1000f02f8;
            puVar22 = PTR___sSSSTsWP_1000f0310;
            __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
                      (pppuVar15,PTR___sSSN_1000f02f8,
                       PTR___sSSs25LosslessStringConvertiblesWP_1000f0328,PTR___sSSSTsWP_1000f0310);
            _swift_bridgeObjectRelease(puVar20);
            _swift_bridgeObjectRelease(ppuVar9);
            local_a8 = pppuVar15;
          }
          else {
            local_a8 = ppuVar29;
            local_a0 = ppuVar9;
            _swift_bridgeObjectRetain(ppuVar9);
            __sSS6appendyySSF(10,0xe100000000000000);
            ppuVar17 = local_a0;
            ppuVar29 = local_a8;
            _swift_bridgeObjectRetain(puVar20);
            puVar25 = puVar20;
            FUN_100096c3c();
            puVar12 = puVar20;
            puVar22 = puVar24;
            _swift_bridgeObjectRelease(puVar20);
            local_88 = ppuVar29;
            puStack_80 = (undefined *)ppuVar17;
            local_a8 = ppuVar16;
            local_a0 = pppuVar15;
            local_98 = puVar25;
            puStack_90 = puVar24;
            FUN_10005b81c();
            __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_a8,PTR___sSsN_1000f0448,puVar12);
            _swift_bridgeObjectRelease(puVar20);
            _swift_bridgeObjectRelease(ppuVar9);
            _swift_bridgeObjectRelease(puVar24);
            puVar24 = puStack_80;
            local_a8 = local_88;
          }
          local_a0 = (undefined8 **)puVar24;
          _swift_bridgeObjectRetain(puVar24);
          __sSS6appendyySSF(10,0xe100000000000000);
          _swift_bridgeObjectRelease(puVar24);
          ppuVar29 = local_a0;
          __sSS6appendyySSF(local_a8,local_a0);
          _swift_bridgeObjectRelease(ppuVar29);
          puVar28 = puVar28 + 2;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        _swift_bridgeObjectRelease(uVar11);
        ppuVar29 = (undefined8 **)puStack_70;
        pppuVar15 = (undefined8 ***)local_78;
      }
      goto LAB_1000a60bc;
    }
    uVar3 = unaff_x20[4] & 0xffffffffffff;
    if (((ulong)puVar22 & 0x2000000000000000) != 0) {
      uVar3 = (ulong)puVar22 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      puVar20 = (undefined *)0x8;
      FUN_1000a5114();
      local_a8 = param_1;
      local_a0 = (undefined8 **)puVar20;
      _swift_bridgeObjectRetain(puVar20);
      __sSS6appendyySSF(10,0xe100000000000000);
      _swift_bridgeObjectRelease(puVar20);
      ppuVar29 = local_a0;
      pppuVar15 = (undefined8 ***)local_a8;
      goto LAB_1000a60bc;
    }
  }
  ppuVar29 = (undefined8 **)(undefined *)0xe000000000000000;
  pppuVar15 = (undefined8 ***)0x0;
LAB_1000a60bc:
  uVar2 = uVar2 & 0xffffffffffff;
  if (((ulong)puVar18 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)puVar18 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    _swift_bridgeObjectRelease(uVar19);
    pppuVar31 = (undefined8 ***)0x0;
    pppuVar10 = (undefined8 ***)0xe000000000000000;
  }
  else {
    pppuVar31 = (undefined8 ***)ppuVar7;
    __sSS5countSivg(ppuVar7,ppuVar8);
    if ((long)pppuVar31 < 0x1a) {
      _swift_bridgeObjectRetain(uVar19);
      pppuVar31 = (undefined8 ***)ppuVar7;
      __sSS5countSivg(ppuVar7,ppuVar8);
      uVar23 = uVar19;
      FUN_100096c3c();
      _swift_bridgeObjectRelease(uVar19);
      __sSS14_fromSubstringySSSshFZ(pppuVar31,pppuVar10,uVar23,puVar22);
      _swift_bridgeObjectRelease(uVar19);
      _swift_bridgeObjectRelease(puVar22);
    }
    else {
      local_a8 = (undefined8 ***)0xa;
      local_a0 = (undefined8 ***)0xe100000000000000;
      __sSS6appendyySSF(pppuVar10,uVar19);
      _swift_bridgeObjectRelease(uVar19);
      pppuVar10 = (undefined8 ***)local_a0;
      pppuVar31 = (undefined8 ***)local_a8;
    }
  }
  local_a8 = ppuVar7;
  local_a0 = ppuVar8;
  _swift_bridgeObjectRetain(ppuVar8);
  __sSS6appendyySSF(pppuVar31,pppuVar10);
  _swift_bridgeObjectRelease(pppuVar10);
  _swift_bridgeObjectRelease(ppuVar8);
  ppuVar7 = local_a0;
  _swift_bridgeObjectRetain(local_a0);
  __sSS6appendyySSF(10,0xe100000000000000);
  _swift_bridgeObjectRelease(ppuVar7);
  ppuVar7 = local_a0;
  _swift_bridgeObjectRetain(local_a0);
  __sSS6appendyySSF(pppuVar15,ppuVar29);
  _swift_bridgeObjectRelease(ppuVar7);
  _swift_bridgeObjectRelease(ppuVar29);
  auVar6._8_8_ = local_a0;
  auVar6._0_8_ = local_a8;
  return auVar6;
}

