// rea decompile_all
// name: FUN_10009af0c
// address: 0x10009af0c
// body: available
// range: 0x10009af0c-0x10009b1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009af0c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  code *pcVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x20;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_a8 [72];
  
  lVar20 = *unaff_x20;
  lVar1 = *(long *)(lVar20 + 0x18);
  if (*(long *)(lVar20 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar9 = &DAT_1001044f8;
  FUN_10000eb08(&DAT_1001044f8,&DAT_1000d4b58);
  lVar10 = lVar20;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar20,lVar1,param_2,puVar9);
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_10009b194:
    _swift_release(lVar20);
LAB_10009b19c:
    *unaff_x20 = lVar10;
    return;
  }
  puVar19 = (ulong *)(lVar20 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((long)uVar15 < 0x40) {
    uVar18 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar18 = uVar18 & *puVar19;
  lVar1 = lVar10 + 0x40;
  lVar13 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar21 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10009b1c4);
          (*pcVar8)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar21) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar20);
            goto LAB_10009b19c;
          }
          uVar18 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
          if ((long)uVar18 < 0x40) {
            *puVar19 = -1L << (uVar18 & 0x3f);
          }
          else {
            _bzero(puVar19,uVar18 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar20 + 0x10) = 0;
          goto LAB_10009b194;
        }
        uVar18 = puVar19[lVar21];
        lVar13 = lVar13 + 1;
      } while (uVar18 == 0);
      uVar12 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar12 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar21 = lVar13;
    }
    lVar13 = (LZCOUNT(uVar12) | lVar21 << 6) * 0x10;
    puVar2 = (undefined8 *)(*(long *)(lVar20 + 0x30) + lVar13);
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(lVar20 + 0x38) + lVar13);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar10 + 0x28));
    puVar11 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar11,uVar3,uVar5);
    __ss6HasherV9_finalizeSiyF();
    uVar17 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar16 = (ulong)puVar11 & (uVar17 ^ 0xffffffffffffffff);
    uVar14 = uVar16 >> 6;
    uVar12 = -1L << (uVar16 & 0x3f) & (*(ulong *)(lVar1 + uVar14 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar7 = false;
      uVar12 = 0x3f - uVar17 >> 6;
      do {
        uVar16 = uVar14 + 1;
        if ((uVar16 == uVar12) && (bVar7)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10009b1c8);
          (*pcVar8)();
        }
        uVar14 = 0;
        if (uVar16 != uVar12) {
          uVar14 = uVar16;
        }
        bVar7 = (bool)(uVar16 == uVar12 | bVar7);
        uVar16 = *(ulong *)(lVar1 + uVar14 * 8);
      } while (uVar16 == 0xffffffffffffffff);
      uVar16 = ~uVar16;
      uVar12 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) + uVar14 * 0x40;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar16 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar14) = 1L << (uVar12 & 0x3f) | *(ulong *)(lVar1 + uVar14);
    puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar5;
    puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar12 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar6;
    *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
    lVar13 = lVar21;
  } while( true );
}

