// rea decompile_all
// name: FUN_1000699f8
// address: 0x1000699f8
// body: available
// range: 0x1000699f8-0x100069d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000699f8(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long extraout_x8;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x20;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  undefined1 auStack_a8 [72];
  
  lVar6 = 0;
  FUN_1000e984c();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = &stack0xffffffffffffff30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar18 = *unaff_x20;
  lVar6 = *(long *)(lVar18 + 0x18);
  if (*(long *)(lVar18 + 0x18) <= param_1) {
    lVar6 = param_1;
  }
  puVar7 = &DAT_100a763e8;
  FUN_100004bb4(&DAT_100a763e8,&DAT_10080ac18);
  lVar8 = lVar18;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar18,lVar6,param_2,puVar7);
  if (*(long *)(lVar18 + 0x10) == 0) {
LAB_100069cec:
    _swift_release(lVar18);
LAB_100069cf4:
    *unaff_x20 = lVar8;
    return;
  }
  puVar21 = (ulong *)(lVar18 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((long)uVar15 < 0x40) {
    uVar20 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar20 = uVar20 & *puVar21;
  lVar6 = lVar8 + 0x40;
  lVar9 = 0;
  do {
    if (uVar20 == 0) {
      do {
        lVar22 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100069d1c);
          (*pcVar5)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar22) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar18);
            goto LAB_100069cf4;
          }
          uVar20 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
          if ((long)uVar20 < 0x40) {
            *puVar21 = -1L << (uVar20 & 0x3f);
          }
          else {
            _bzero(puVar21,uVar20 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar18 + 0x10) = 0;
          goto LAB_100069cec;
        }
        uVar20 = puVar21[lVar22];
        lVar9 = lVar9 + 1;
      } while (uVar20 == 0);
      uVar13 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
    }
    else {
      uVar13 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
      lVar22 = lVar9;
    }
    uVar13 = LZCOUNT(uVar13) | lVar22 << 6;
    puVar1 = (undefined8 *)(*(long *)(lVar18 + 0x30) + uVar13 * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    lVar19 = *(long *)(lVar11 + 0x48);
    lVar9 = *(long *)(lVar18 + 0x38) + lVar19 * uVar13;
    if ((param_2 & 1) == 0) {
      FUN_100082394(lVar9,puVar12,FUN_1000e984c);
      _swift_bridgeObjectRetain(uVar3);
    }
    else {
      FUN_1000823d8(lVar9,puVar12,FUN_1000e984c);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar8 + 0x28));
    puVar10 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar10,uVar2,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar17 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar16 = (ulong)puVar10 & (uVar17 ^ 0xffffffffffffffff);
    uVar14 = uVar16 >> 6;
    uVar13 = -1L << (uVar16 & 0x3f) & (*(ulong *)(lVar6 + uVar14 * 8) ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      bVar4 = false;
      uVar13 = 0x3f - uVar17 >> 6;
      do {
        uVar16 = uVar14 + 1;
        if ((uVar16 == uVar13) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100069d20);
          (*pcVar5)();
        }
        uVar14 = 0;
        if (uVar16 != uVar13) {
          uVar14 = uVar16;
        }
        bVar4 = (bool)(uVar16 == uVar13 | bVar4);
        uVar16 = *(ulong *)(lVar6 + uVar14 * 8);
      } while (uVar16 == 0xffffffffffffffff);
      uVar16 = ~uVar16;
      uVar13 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + uVar14 * 0x40;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar16 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar6 + uVar14) = 1L << (uVar13 & 0x3f) | *(ulong *)(lVar6 + uVar14);
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar13 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    FUN_1000823d8(puVar12,*(long *)(lVar8 + 0x38) + lVar19 * uVar13,FUN_1000e984c);
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar9 = lVar22;
  } while( true );
}

