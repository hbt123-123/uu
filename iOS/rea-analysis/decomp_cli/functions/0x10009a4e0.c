// rea decompile_all
// name: FUN_10009a4e0
// address: 0x10009a4e0
// body: available
// range: 0x10009a4e0-0x10009a7e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009a4e0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  bool bVar5;
  code *pcVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  ulong uVar19;
  ulong *puVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_a8 [72];
  
  lVar21 = *unaff_x20;
  lVar1 = *(long *)(lVar21 + 0x18);
  if (*(long *)(lVar21 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar7 = &DAT_1001044d8;
  FUN_10000eb08(&DAT_1001044d8,&DAT_1000d4b38);
  lVar8 = lVar21;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar21,lVar1,param_2,puVar7);
  if (*(long *)(lVar21 + 0x10) == 0) {
LAB_10009a7b4:
    _swift_release(lVar21);
LAB_10009a7bc:
    *unaff_x20 = lVar8;
    return;
  }
  puVar20 = (ulong *)(lVar21 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((long)uVar15 < 0x40) {
    uVar19 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar19 = uVar19 & *puVar20;
  lVar1 = lVar8 + 0x40;
  lVar12 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar22 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a7e4);
          (*pcVar6)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar22) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar21);
            goto LAB_10009a7bc;
          }
          uVar19 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
          if ((long)uVar19 < 0x40) {
            *puVar20 = -1L << (uVar19 & 0x3f);
          }
          else {
            _bzero(puVar20,uVar19 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar21 + 0x10) = 0;
          goto LAB_10009a7b4;
        }
        uVar19 = puVar20[lVar22];
        lVar12 = lVar12 + 1;
      } while (uVar19 == 0);
      uVar11 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar11 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar22 = lVar12;
    }
    uVar11 = LZCOUNT(uVar11) | lVar22 << 6;
    puVar16 = (undefined8 *)(*(long *)(lVar21 + 0x30) + uVar11 * 0x18);
    uVar2 = *puVar16;
    uVar3 = puVar16[1];
    bVar4 = *(byte *)(puVar16 + 2);
    uVar13 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + uVar11 * 8);
    if ((param_2 & 1) == 0) {
      FUN_100065610(uVar2,uVar3,bVar4);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar8 + 0x28));
    if (bVar4 >> 6 == 0) {
      uVar10 = 0;
LAB_10009a6c4:
      __ss6HasherV8_combineyySuF(uVar10);
      puVar9 = auStack_a8;
      __sSS4hash4intoys6HasherVz_tF(puVar9,uVar2,uVar3);
    }
    else {
      if (bVar4 >> 6 != 1) {
        uVar10 = 2;
        goto LAB_10009a6c4;
      }
      __ss6HasherV8_combineyySuF(1);
      __sSJ4hash4intoys6HasherVz_tF(auStack_a8,uVar2,uVar3);
      puVar9 = (undefined1 *)(ulong)(bVar4 & 1);
      __ss6HasherV8_combineyys5UInt8VF();
    }
    __ss6HasherV9_finalizeSiyF();
    uVar18 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar17 = (ulong)puVar9 & (uVar18 ^ 0xffffffffffffffff);
    uVar14 = uVar17 >> 6;
    uVar11 = -1L << (uVar17 & 0x3f) & (*(ulong *)(lVar1 + uVar14 * 8) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar5 = false;
      uVar11 = 0x3f - uVar18 >> 6;
      do {
        uVar17 = uVar14 + 1;
        if ((uVar17 == uVar11) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a7e8);
          (*pcVar6)();
        }
        uVar14 = 0;
        if (uVar17 != uVar11) {
          uVar14 = uVar17;
        }
        bVar5 = (bool)(uVar17 == uVar11 | bVar5);
        uVar17 = *(ulong *)(lVar1 + uVar14 * 8);
      } while (uVar17 == 0xffffffffffffffff);
      uVar17 = ~uVar17;
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + uVar14 * 0x40;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar17 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar14) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar14);
    puVar16 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar11 * 0x18);
    *puVar16 = uVar2;
    puVar16[1] = uVar3;
    *(byte *)(puVar16 + 2) = bVar4;
    *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar11 * 8) = uVar13;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar12 = lVar22;
  } while( true );
}

