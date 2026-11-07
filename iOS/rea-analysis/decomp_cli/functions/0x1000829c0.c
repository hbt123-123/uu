// rea decompile_all
// name: FUN_1000829c0
// address: 0x1000829c0
// body: available
// range: 0x1000829c0-0x100082c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000829c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  code *pcVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x20;
  long lVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar18 = *unaff_x20;
  lVar1 = *(long *)(lVar18 + 0x18);
  if (*(long *)(lVar18 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar7 = &DAT_100104830;
  FUN_10000eb08(&DAT_100104830,&DAT_1000d5188);
  lVar8 = lVar18;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar18,lVar1,0,puVar7);
  if (*(long *)(lVar18 + 0x10) == 0) {
    _swift_release(lVar18);
LAB_100082c14:
    *unaff_x20 = lVar8;
    return;
  }
  uVar13 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((long)uVar13 < 0x40) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(lVar18 + 0x38);
  lVar1 = lVar8 + 0x38;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100082c3c);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar19) {
          _swift_release(lVar18);
          goto LAB_100082c14;
        }
        uVar17 = ((ulong *)(lVar18 + 0x38))[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar10;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar18 + 0x30) + (LZCOUNT(uVar9) | lVar19 << 6) * 0x18);
    uVar2 = *puVar11;
    uVar9 = puVar11[1];
    bVar3 = *(byte *)(puVar11 + 2);
    bVar4 = *(byte *)((long)puVar11 + 0x11);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar8 + 0x28));
    if ((bVar4 & 1) == 0) {
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyySuF(uVar2);
      if ((bVar3 & 1) != 0) goto LAB_100082b58;
      __ss6HasherV8_combineyySuF(1);
      uVar14 = uVar9;
    }
    else {
LAB_100082b58:
      uVar14 = 0;
    }
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar15 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar14 = uVar14 & (uVar15 ^ 0xffffffffffffffff);
    uVar12 = uVar14 >> 6;
    uVar16 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar12 * 8) ^ 0xffffffffffffffff);
    if (uVar16 == 0) {
      bVar5 = false;
      uVar14 = 0x3f - uVar15 >> 6;
      do {
        uVar16 = uVar12 + 1;
        if ((uVar16 == uVar14) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100082c40);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar16 != uVar14) {
          uVar12 = uVar16;
        }
        bVar5 = (bool)(uVar16 == uVar14 | bVar5);
        uVar16 = *(ulong *)(lVar1 + uVar12 * 8);
      } while (uVar16 == 0xffffffffffffffff);
      uVar16 = ~uVar16;
      uVar14 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + uVar12 * 0x40;
    }
    else {
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar16 = uVar14 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar16) = 1L << (uVar14 & 0x3f) | *(ulong *)(lVar1 + uVar16);
    puVar11 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar14 * 0x18);
    *puVar11 = uVar2;
    puVar11[1] = uVar9;
    *(byte *)(puVar11 + 2) = bVar3;
    *(byte *)((long)puVar11 + 0x11) = bVar4;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}

