// rea decompile_all
// name: FUN_100261168
// address: 0x100261168
// body: available
// range: 0x100261168-0x10026153f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100261168(long param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  bool bVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long unaff_x20;
  ulong uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  ulong local_88;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    puVar22 = *(undefined **)(unaff_x20 + _TtC4Moya8Endpoint::httpHeaderFields);
    _swift_bridgeObjectRetain(puVar22);
    return puVar22;
  }
  puVar11 = *(undefined **)(unaff_x20 + _TtC4Moya8Endpoint::httpHeaderFields);
  puVar22 = puVar11;
  if (puVar11 == (undefined *)0x0) {
    puVar22 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_100264bbc();
    puVar11 = (undefined *)0x0;
  }
  uVar18 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar21 = 0xffffffffffffffff;
  if ((long)uVar18 < 0x40) {
    uVar21 = ~(-1L << (uVar18 & 0x3f));
  }
  uVar21 = uVar21 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain(puVar11);
  _swift_bridgeObjectRetain(param_1);
  lVar14 = 0;
  do {
    while (uVar21 == 0) {
      bVar10 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar10) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100261524);
        (*pcVar9)();
      }
      if ((long)(uVar18 + 0x3f >> 6) <= lVar14) {
        _swift_release(param_1);
        return puVar22;
      }
      uVar21 = ((ulong *)(param_1 + 0x40))[lVar14];
    }
    uVar15 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar15 = lVar14 << 10 | LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) << 4;
    puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar15);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar15);
    uVar15 = *puVar2;
    uVar5 = puVar2[1];
    uVar4 = *puVar3;
    uVar6 = puVar3[1];
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    puVar11 = puVar22;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar12 = uVar15;
    uVar13 = uVar5;
    FUN_1001a2c70();
    uVar19 = (ulong)~(uint)uVar13 & 1;
    lVar24 = *(long *)(puVar22 + 0x10) + uVar19;
    if (SCARRY8(*(long *)(puVar22 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100261528);
      (*pcVar9)();
    }
    if (*(long *)(puVar22 + 0x18) < lVar24) {
      FUN_100270b80(lVar24,puVar11);
      uVar12 = uVar15;
      uVar19 = uVar5;
      FUN_1001a2c70();
      if (((uint)uVar13 & 1) != ((uint)uVar19 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100261540);
        (*pcVar9)();
      }
    }
    else if (((ulong)puVar11 & 1) == 0) {
      FUN_100004bb4(&DAT_100a81158,&DAT_1008153e0);
      puVar11 = puVar22;
      __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
      if (*(long *)(puVar22 + 0x10) != 0) {
        puVar1 = puVar22 + 0x40;
        uVar19 = (1L << ((ulong)(byte)puVar11[0x20] & 0x3f)) + 0x3fU >> 6;
        if ((puVar11 != puVar22) || (puVar1 + uVar19 * 8 <= puVar11 + 0x40)) {
          _memmove(puVar11 + 0x40,puVar1,uVar19 << 3);
        }
        lVar24 = 0;
        *(undefined8 *)(puVar11 + 0x10) = *(undefined8 *)(puVar22 + 0x10);
        uVar19 = 1L << ((ulong)(byte)puVar22[0x20] & 0x3f);
        local_88 = 0xffffffffffffffff;
        if ((long)uVar19 < 0x40) {
          local_88 = ~(-1L << (uVar19 & 0x3f));
        }
        local_88 = local_88 & *(ulong *)(puVar22 + 0x40);
        if (local_88 == 0) goto LAB_100261460;
        do {
          uVar16 = (local_88 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_88 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
          local_88 = local_88 - 1 & local_88;
          while( true ) {
            lVar17 = (LZCOUNT(uVar16) | lVar24 << 6) * 0x10;
            uVar7 = ((undefined8 *)(*(long *)(puVar22 + 0x30) + lVar17))[1];
            uVar23 = *(undefined8 *)(*(long *)(puVar22 + 0x38) + lVar17);
            uVar8 = ((undefined8 *)(*(long *)(puVar22 + 0x38) + lVar17))[1];
            lVar20 = *(long *)(puVar11 + 0x30);
            *(undefined8 *)(lVar20 + lVar17) = *(undefined8 *)(*(long *)(puVar22 + 0x30) + lVar17);
            ((undefined8 *)(lVar20 + lVar17))[1] = uVar7;
            lVar20 = *(long *)(puVar11 + 0x38);
            *(undefined8 *)(lVar20 + lVar17) = uVar23;
            ((undefined8 *)(lVar20 + lVar17))[1] = uVar8;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar8);
            if (local_88 != 0) break;
LAB_100261460:
            do {
              lVar17 = lVar24 + 1;
              if (SCARRY8(lVar24,1)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x100261530);
                (*pcVar9)();
              }
              if ((long)(uVar19 + 0x3f >> 6) <= lVar17) goto LAB_1002614e4;
              local_88 = *(ulong *)(puVar1 + lVar17 * 8);
              lVar24 = lVar24 + 1;
            } while (local_88 == 0);
            uVar16 = (local_88 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_88 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
            local_88 = local_88 - 1 & local_88;
            lVar24 = lVar17;
          }
        } while( true );
      }
LAB_1002614e4:
      _swift_bridgeObjectRelease(puVar22);
      puVar22 = puVar11;
    }
    uVar21 = uVar21 - 1 & uVar21;
    if ((uVar13 & 1) == 0) {
      *(ulong *)(puVar22 + (uVar12 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar22 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar22 + 0x30) + uVar12 * 0x10);
      *puVar2 = uVar15;
      puVar2[1] = uVar5;
      puVar3 = (undefined8 *)(*(long *)(puVar22 + 0x38) + uVar12 * 0x10);
      *puVar3 = uVar4;
      puVar3[1] = uVar6;
      if (SCARRY8(*(long *)(puVar22 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10026152c);
        (*pcVar9)();
      }
      *(long *)(puVar22 + 0x10) = *(long *)(puVar22 + 0x10) + 1;
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(puVar22 + 0x38) + uVar12 * 0x10);
      uVar23 = puVar3[1];
      *puVar3 = uVar4;
      puVar3[1] = uVar6;
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(uVar23);
    }
  } while( true );
}

