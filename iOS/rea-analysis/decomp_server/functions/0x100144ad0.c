// rea decompile_all
// name: FUN_100144ad0
// address: 0x100144ad0
// body: available
// range: 0x100144ad0-0x1001452e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100144ad0(long param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  long lVar23;
  ulong *puVar24;
  undefined *puVar25;
  long lVar26;
  undefined1 auStack_140 [16];
  undefined *local_130;
  undefined **ppuStack_128;
  undefined *local_120;
  undefined *local_118;
  ulong local_110;
  undefined *local_100;
  undefined *local_78;
  undefined8 uStack_70;
  
  if (param_1 == 0) {
    local_120 = (undefined *)0x0;
  }
  else {
    local_120 = *(undefined **)(param_1 + 0x10);
  }
  puVar22 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if ((param_2 != 0) && (lVar26 = *(long *)(param_2 + 0x10), lVar26 != 0)) {
    FUN_10009ff0c();
    puVar24 = (ulong *)(param_2 + 0x28);
    puVar22 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    puVar10 = PTR___sSSN_1009957f8;
    do {
      puVar11 = (undefined *)puVar24[-1];
      uVar20 = *puVar24;
      local_78 = (undefined *)0x2e;
      uStack_70 = 0xe100000000000000;
      local_118 = puVar11;
      local_110 = uVar20;
      _swift_bridgeObjectRetain(uVar20);
      ppuVar8 = &local_78;
      __sSy10FoundationE8containsySbqd__SyRd__lF(ppuVar8,puVar10,puVar10,param_1,param_1);
      if (((ulong)ppuVar8 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar20);
        if (*(long *)(puVar22 + 0x10) == 0) {
          lVar23 = 0;
        }
        else {
          _swift_bridgeObjectRetain(puVar22);
          lVar23 = 0x7265646c6f66;
          uVar20 = 0;
          FUN_1001a2c70();
          if ((uVar20 & 1) == 0) {
            lVar23 = 0;
          }
          else {
            lVar23 = *(long *)(*(long *)(puVar22 + 0x38) + lVar23 * 8);
          }
          _swift_bridgeObjectRelease(puVar22);
        }
        uVar20 = 0x7265646c6f66;
        if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001452c4);
          (*pcVar6)();
        }
        puVar10 = puVar22;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar18 = 0;
        uVar21 = uVar20;
        local_118 = puVar22;
        FUN_1001a2c70();
        uVar19 = (ulong)~(uint)uVar18 & 1;
        lVar1 = *(long *)(puVar22 + 0x10) + uVar19;
        if (SCARRY8(*(long *)(puVar22 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001452c8);
          (*pcVar6)();
        }
        if (*(long *)(puVar22 + 0x18) < lVar1) {
          FUN_10006a77c(lVar1,puVar10);
          uVar14 = 0;
          FUN_1001a2c70();
          uVar21 = uVar20;
          if (((uint)uVar18 & 1) != (uVar14 & 1)) {
LAB_1001452d8:
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001452e8);
            (*pcVar6)();
          }
        }
        else if (((ulong)puVar10 & 1) == 0) {
          FUN_100065118();
        }
        puVar22 = local_118;
        if ((uVar18 & 1) == 0) {
          *(ulong *)(local_118 + (uVar21 >> 6) * 8 + 0x40) =
               *(ulong *)(local_118 + (uVar21 >> 6) * 8 + 0x40) | 1L << (uVar21 & 0x3f);
          puVar12 = (undefined8 *)(*(long *)(local_118 + 0x30) + uVar21 * 0x10);
          *puVar12 = 0x7265646c6f66;
          puVar12[1] = 0xe600000000000000;
          *(long *)(*(long *)(local_118 + 0x38) + uVar21 * 8) = lVar23 + 1;
          if (SCARRY8(*(long *)(local_118 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001452cc);
            (*pcVar6)();
          }
          *(long *)(local_118 + 0x10) = *(long *)(local_118 + 0x10) + 1;
          puVar10 = PTR___sSSN_1009957f8;
        }
        else {
          *(long *)(*(long *)(local_118 + 0x38) + uVar21 * 8) = lVar23 + 1;
          puVar10 = PTR___sSSN_1009957f8;
        }
      }
      else {
        local_78 = (undefined *)0x2e;
        uStack_70 = 0xe100000000000000;
        ppuVar8 = &local_78;
        local_118 = puVar11;
        local_110 = uVar20;
        __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
                  (ppuVar8,puVar10,puVar10,param_1,param_1);
        _swift_bridgeObjectRelease(uVar20);
        ppuVar17 = ppuVar8 + 2;
        if (*ppuVar17 == (undefined *)0x0) {
          _swift_bridgeObjectRelease(ppuVar8);
        }
        else {
          puVar11 = ppuVar17[(long)*ppuVar17 * 2];
          puVar25 = (ppuVar17 + (long)*ppuVar17 * 2)[1];
          _swift_bridgeObjectRetain(puVar25);
          _swift_bridgeObjectRelease(ppuVar8);
          uVar20 = (ulong)puVar11 & 0xffffffffffff;
          if (((ulong)puVar25 & 0x2000000000000000) != 0) {
            uVar20 = (ulong)puVar25 >> 0x38 & 0xf;
          }
          if (uVar20 == 0) {
            _swift_bridgeObjectRelease(puVar25);
          }
          else {
            if (*(long *)(puVar22 + 0x10) == 0) {
              lVar23 = 0;
            }
            else {
              _swift_bridgeObjectRetain(puVar22);
              puVar10 = puVar11;
              puVar9 = puVar25;
              FUN_1001a2c70();
              if (((ulong)puVar9 & 1) == 0) {
                lVar23 = 0;
              }
              else {
                lVar23 = *(long *)(*(long *)(puVar22 + 0x38) + (long)puVar10 * 8);
              }
              _swift_bridgeObjectRelease(puVar22);
            }
            if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1001452d0);
              (*pcVar6)();
            }
            puVar9 = puVar22;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar10 = puVar11;
            puVar15 = puVar25;
            local_118 = puVar22;
            FUN_1001a2c70();
            uVar20 = (ulong)~(uint)puVar15 & 1;
            lVar1 = *(long *)(puVar22 + 0x10) + uVar20;
            if (SCARRY8(*(long *)(puVar22 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1001452d4);
              (*pcVar6)();
            }
            if (*(long *)(puVar22 + 0x18) < lVar1) {
              FUN_10006a77c(lVar1,puVar9);
              puVar10 = puVar11;
              puVar9 = puVar25;
              FUN_1001a2c70();
              puVar22 = local_118;
              if (((uint)puVar15 & 1) != ((uint)puVar9 & 1)) goto LAB_1001452d8;
            }
            else {
              puVar22 = local_118;
              if (((ulong)puVar9 & 1) == 0) {
                FUN_100065118();
                puVar22 = local_118;
              }
            }
            local_118 = puVar22;
            if (((ulong)puVar15 & 1) == 0) {
              *(ulong *)(puVar22 + ((ulong)puVar10 >> 6) * 8 + 0x40) =
                   *(ulong *)(puVar22 + ((ulong)puVar10 >> 6) * 8 + 0x40) |
                   1L << ((ulong)puVar10 & 0x3f);
              puVar2 = (ulong *)(*(long *)(puVar22 + 0x30) + (long)puVar10 * 0x10);
              *puVar2 = (ulong)puVar11;
              puVar2[1] = (ulong)puVar25;
              *(long *)(*(long *)(puVar22 + 0x38) + (long)puVar10 * 8) = lVar23 + 1;
              if (SCARRY8(*(long *)(puVar22 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1001452d8);
                (*pcVar6)();
              }
              *(long *)(puVar22 + 0x10) = *(long *)(puVar22 + 0x10) + 1;
              puVar10 = PTR___sSSN_1009957f8;
            }
            else {
              _swift_bridgeObjectRelease(puVar25);
              *(long *)(*(long *)(local_118 + 0x38) + (long)puVar10 * 8) = lVar23 + 1;
              puVar22 = local_118;
              puVar10 = PTR___sSSN_1009957f8;
            }
          }
        }
      }
      puVar24 = puVar24 + 2;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  uVar18 = *(ulong *)(puVar22 + 0x40);
  uVar21 = 1L << ((ulong)(byte)puVar22[0x20] & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((long)uVar21 < 0x40) {
    uVar20 = ~(-1L << (uVar21 & 0x3f));
  }
  _swift_bridgeObjectRetain(puVar22);
  lVar26 = 0;
  uVar20 = uVar20 & uVar18;
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  while( true ) {
    while (uVar18 = uVar20, uVar18 != 0) {
      uVar20 = uVar18 - 1 & uVar18;
      if (*(long *)(puVar22 + 0x10) != 0) {
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        plVar3 = (long *)(*(long *)(puVar22 + 0x30) +
                         (lVar26 << 10 | LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) << 4));
        puVar11 = (undefined *)*plVar3;
        uVar18 = plVar3[1];
        _swift_bridgeObjectRetain(puVar22);
        _swift_bridgeObjectRetain(uVar18);
        puVar25 = puVar11;
        uVar19 = uVar18;
        FUN_1001a2c70();
        if ((uVar19 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar22);
          _swift_bridgeObjectRelease(uVar18);
        }
        else {
          puVar25 = *(undefined **)(*(long *)(puVar22 + 0x38) + (long)puVar25 * 8);
          _swift_bridgeObjectRelease(puVar22);
          local_118 = puVar11;
          local_110 = uVar18;
          __sSS6appendyySSF(0x3a,0xe100000000000000);
          puVar11 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
          local_78 = puVar25;
          __ss23CustomStringConvertibleP11descriptionSSvgTj
                    (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(puVar11);
          uVar18 = local_110;
          puVar11 = local_118;
          puVar25 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar10;
          if (((ulong)puVar25 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100033898(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
          }
          uVar19 = *(ulong *)(puVar9 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar19) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_100033898(puVar10,uVar19 + 1,1,puVar9);
          }
          *(ulong *)(puVar10 + 0x10) = uVar19 + 1;
          *(undefined **)(puVar10 + uVar19 * 0x10 + 0x20) = puVar11;
          *(ulong *)(puVar10 + uVar19 * 0x10 + 0x28) = uVar18;
        }
      }
    }
    bVar7 = SCARRY8(lVar26,1);
    lVar26 = lVar26 + 1;
    if (bVar7) break;
    if ((long)(uVar21 + 0x3f >> 6) <= lVar26) {
      _swift_release(puVar22);
      puVar11 = &DAT_100a756e8;
      local_118 = puVar10;
      FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
      puVar12 = &DAT_100a756f0;
      FUN_10003f840(&DAT_100a756f0,&DAT_100a756e8,&BYTE_100809720,PTR___sSayxGSKsMc_100995888);
      puVar25 = (undefined *)0x2c;
      uVar16 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar11,puVar12);
      _swift_bridgeObjectRelease(puVar10);
      local_78 = puVar25;
      uStack_70 = uVar16;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      puVar11 = local_120;
      ppuStack_128 = &local_78;
      local_130 = local_120;
      pcVar6 = FUN_1001452e8;
      FUN_1003fb45c(FUN_1001452e8,auStack_140,0xd0000000000000ad,0x8000000100890750,
                    0xd000000000000014,0x8000000100890ba0,0x1ef,7);
      FUN_1003a3d44();
      uVar16 = *(undefined8 *)pcVar6;
      puVar12 = *(undefined8 **)(pcVar6 + 8);
      puVar10 = &DAT_100a75980;
      FUN_100004bb4(&DAT_100a75980,&DAT_100809a40);
      _swift_initStackObject();
      *(undefined8 *)(puVar10 + 0x18) = 4;
      *(undefined8 *)(puVar10 + 0x10) = 2;
      puVar13 = puVar12;
      _swift_bridgeObjectRetain();
      FUN_1003a1184();
      uVar4 = *puVar13;
      uVar5 = puVar13[1];
      local_100 = PTR___sSiN_100995968;
      local_118 = puVar11;
      FUN_10003e8bc(&local_118,puVar10 + 0x30);
      *(undefined8 *)(puVar10 + 0x20) = uVar4;
      *(undefined8 *)(puVar10 + 0x28) = uVar5;
      _swift_bridgeObjectRetain(uVar5);
      ppuVar8 = &local_118;
      FUN_10003f094();
      FUN_1003a0e08();
      uVar4 = uStack_70;
      puVar11 = *ppuVar8;
      puVar25 = ppuVar8[1];
      local_100 = PTR___sSSN_1009957f8;
      local_118 = local_78;
      local_110 = uStack_70;
      FUN_10003e8bc(&local_118,puVar10 + 0x60);
      *(undefined **)(puVar10 + 0x50) = puVar11;
      *(undefined **)(puVar10 + 0x58) = puVar25;
      _swift_bridgeObjectRetain(puVar25);
      _swift_bridgeObjectRetain(uVar4);
      FUN_10003f094(&local_118);
      FUN_1000f62a0(uVar16,puVar12,puVar10);
      _swift_bridgeObjectRelease(puVar12);
      _swift_setDeallocating(puVar10);
      _swift_arrayDestroy(puVar10 + 0x20,2,&DAT_1009b7a40);
      _swift_bridgeObjectRelease(puVar22);
      _swift_bridgeObjectRelease(uVar4);
      return;
    }
    uVar20 = *(ulong *)((long)(puVar22 + 0x40) + lVar26 * 8);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1001452c0);
  (*pcVar6)();
}

