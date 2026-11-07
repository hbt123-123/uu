// rea decompile_all
// name: FUN_1000662a8
// address: 0x1000662a8
// body: available
// range: 0x1000662a8-0x1000665bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000662a8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *unaff_x20;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_a8 [72];
  
  lVar21 = *unaff_x20;
  lVar1 = *(long *)(lVar21 + 0x18);
  if (*(long *)(lVar21 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  FUN_100004bb4(&DAT_100a76460,&DAT_10080acc0);
  lVar9 = lVar21;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar21,lVar1,param_2);
  if (*(long *)(lVar21 + 0x10) == 0) {
LAB_10006658c:
    _swift_release(lVar21);
LAB_100066594:
    *unaff_x20 = lVar9;
    return;
  }
  puVar19 = (ulong *)(lVar21 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((long)uVar14 < 0x40) {
    uVar20 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar20 = uVar20 & *puVar19;
  lVar1 = lVar9 + 0x40;
  lVar12 = 0;
  do {
    if (uVar20 == 0) {
      do {
        lVar18 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1000665bc);
          (*pcVar8)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar21);
            goto LAB_100066594;
          }
          uVar20 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
          if ((long)uVar20 < 0x40) {
            *puVar19 = -1L << (uVar20 & 0x3f);
          }
          else {
            _bzero(puVar19,uVar20 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar21 + 0x10) = 0;
          goto LAB_10006658c;
        }
        uVar20 = puVar19[lVar18];
        lVar12 = lVar12 + 1;
      } while (uVar20 == 0);
      uVar11 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
    }
    else {
      uVar11 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
      lVar18 = lVar12;
    }
    uVar11 = LZCOUNT(uVar11) | lVar18 << 6;
    puVar15 = (undefined8 *)(*(long *)(lVar21 + 0x30) + uVar11 * 0x30);
    uVar2 = *puVar15;
    uVar4 = puVar15[1];
    uVar3 = puVar15[2];
    uVar5 = puVar15[3];
    uVar17 = puVar15[4];
    bVar6 = *(byte *)(puVar15 + 5);
    puVar15 = (undefined8 *)(*(long *)(lVar21 + 0x38) + uVar11 * 0x10);
    uVar23 = puVar15[1];
    uVar22 = *puVar15;
    if ((param_2 & 1) == 0) {
      FUN_100008184(uVar22,uVar23);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar9 + 0x28));
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    __ss6HasherV8_combineyySuF(uVar4);
    __ss6HasherV8_combineyySuF(uVar3);
    __ss6HasherV8_combineyySuF(uVar5);
    __ss6HasherV8_combineyySuF(uVar17);
    uVar10 = (ulong)bVar6;
    __ss6HasherV8_combineyys5UInt8VF();
    __ss6HasherV9_finalizeSiyF();
    uVar16 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar10 >> 6;
    uVar11 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar7 = false;
      uVar11 = 0x3f - uVar16 >> 6;
      do {
        uVar10 = uVar13 + 1;
        if ((uVar10 == uVar11) && (bVar7)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1000665c0);
          (*pcVar8)();
        }
        uVar13 = 0;
        if (uVar10 != uVar11) {
          uVar13 = uVar10;
        }
        bVar7 = (bool)(uVar10 == uVar11 | bVar7);
        uVar10 = *(ulong *)(lVar1 + uVar13 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar11 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + uVar13 * 0x40;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    puVar15 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar11 * 0x30);
    *puVar15 = uVar2;
    puVar15[1] = uVar4;
    puVar15[2] = uVar3;
    puVar15[3] = uVar5;
    puVar15[4] = uVar17;
    *(byte *)(puVar15 + 5) = bVar6;
    puVar15 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar11 * 0x10);
    puVar15[1] = uVar23;
    *puVar15 = uVar22;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar12 = lVar18;
  } while( true );
}

