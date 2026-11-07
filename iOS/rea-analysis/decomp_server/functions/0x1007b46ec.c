// rea decompile_all
// name: FUN_1007b46ec
// address: 0x1007b46ec
// body: available
// range: 0x1007b46ec-0x1007b4a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007b46ec(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x20;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 auStack_a8 [72];
  
  lVar18 = *unaff_x20;
  lVar11 = *(long *)(lVar18 + 0x18);
  if (*(long *)(lVar18 + 0x18) <= param_1) {
    lVar11 = param_1;
  }
  puVar6 = &DAT_100abc7c8;
  FUN_1007b4550(&DAT_100abc7c8);
  lVar7 = lVar18;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar18,lVar11,param_2,puVar6);
  if (*(long *)(lVar18 + 0x10) == 0) {
LAB_1007b4a4c:
    _swift_release(lVar18);
    *unaff_x20 = lVar7;
    return;
  }
  puVar12 = (ulong *)(lVar18 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((long)uVar13 < 0x40) {
    uVar19 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar19 = uVar19 & *puVar12;
  uVar13 = uVar13 + 0x3f >> 6;
  lVar11 = lVar7 + 0x40;
  _swift_retain(lVar7);
  lVar14 = 0;
  do {
    if (uVar19 == 0) {
      lVar21 = lVar14 + 1;
      if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b4a7c);
        (*pcVar3)();
      }
      if ((long)uVar13 <= lVar21) {
LAB_1007b4988:
        if ((param_2 & 1) == 0) {
          _swift_release(lVar7);
        }
        else {
          uVar19 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
          if ((long)uVar19 < 0x40) {
            *puVar12 = -1L << (uVar19 & 0x3f);
          }
          else {
            uVar13 = uVar19 + 0x3f >> 6;
            uVar19 = uVar13;
            if (uVar13 - 1 <= uVar13) {
              uVar19 = uVar13 - 1;
            }
            if (uVar19 < 4) {
              lVar14 = 0;
            }
            else {
              uVar10 = uVar19 + 1 & 3;
              uVar17 = 4;
              if (uVar10 != 0) {
                uVar17 = uVar10;
              }
              lVar14 = (uVar19 + 1) - uVar17;
              puVar15 = (undefined8 *)(lVar18 + 0x50);
              lVar11 = lVar14;
              do {
                puVar15[-1] = 0;
                puVar15[-2] = 0;
                puVar15[1] = 0;
                *puVar15 = 0;
                puVar15 = puVar15 + 4;
                lVar11 = lVar11 + -4;
              } while (lVar11 != 0);
            }
            lVar11 = uVar13 - lVar14;
            puVar15 = (undefined8 *)(lVar18 + lVar14 * 8 + 0x40);
            do {
              if (lVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b4a80);
                (*pcVar3)();
              }
              *puVar15 = 0;
              lVar11 = lVar11 + -1;
              puVar15 = puVar15 + 1;
            } while (lVar11 != 0);
          }
          _swift_release(lVar7);
          *(undefined8 *)(lVar18 + 0x10) = 0;
        }
        goto LAB_1007b4a4c;
      }
      uVar19 = puVar12[lVar21];
      if (uVar19 == 0) {
        lVar21 = lVar14 + 2;
        if ((long)uVar13 <= lVar21) goto LAB_1007b4988;
        uVar19 = puVar12[lVar21];
        if (uVar19 == 0) {
          lVar21 = lVar14 + 3;
          if ((long)uVar13 <= lVar21) goto LAB_1007b4988;
          uVar19 = puVar12[lVar21];
          if (uVar19 == 0) {
            lVar21 = lVar14 + 4;
            if ((long)uVar13 <= lVar21) goto LAB_1007b4988;
            uVar19 = puVar12[lVar21];
            while (uVar19 == 0) {
              bVar4 = SCARRY8(lVar21,1);
              lVar21 = lVar21 + 1;
              if (bVar4) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b4a84);
                (*pcVar3)();
              }
              if ((long)uVar13 <= lVar21) goto LAB_1007b4988;
              uVar19 = puVar12[lVar21];
            }
          }
        }
      }
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar19 = uVar19 - 1 & uVar19;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) + lVar21 * 0x40;
    }
    else {
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar19 = uVar19 - 1 & uVar19;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar14 << 6;
      lVar21 = lVar14;
    }
    puVar15 = (undefined8 *)(*(long *)(lVar18 + 0x30) + uVar10 * 0x10);
    uVar1 = *puVar15;
    uVar2 = puVar15[1];
    uVar20 = *(undefined8 *)(*(long *)(lVar18 + 0x38) + uVar10 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar20);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar1,uVar2);
    __ss6HasherV9_finalizeSiyF();
    uVar16 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar9 = (ulong)puVar8 & (uVar16 ^ 0xffffffffffffffff);
    uVar10 = uVar9 >> 6;
    uVar17 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar11 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar17 == 0) {
      bVar4 = false;
      uVar17 = 0x3f - uVar16 >> 6;
      do {
        uVar10 = uVar10 + 1;
        if ((uVar10 == uVar17) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b49f0);
          (*pcVar3)();
        }
        bVar5 = uVar10 == uVar17;
        if (bVar5) {
          uVar10 = 0;
        }
        bVar4 = (bool)(bVar5 | bVar4);
        uVar9 = *(ulong *)(lVar11 + uVar10 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar17 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) + uVar10 * 0x40;
    }
    else {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar17 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar11 + uVar17) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar11 + uVar17);
    puVar15 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
    *puVar15 = uVar1;
    puVar15[1] = uVar2;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar20;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar14 = lVar21;
  } while( true );
}

