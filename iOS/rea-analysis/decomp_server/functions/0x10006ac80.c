// rea decompile_all
// name: FUN_10006ac80
// address: 0x10006ac80
// body: available
// range: 0x10006ac80-0x10006af97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006ac80(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  undefined1 auStack_e0 [8];
  undefined1 auStack_a8 [72];
  
  lVar7 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar13 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar20 = *unaff_x20;
  lVar1 = *(long *)(lVar20 + 0x18);
  if (*(long *)(lVar20 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar8 = &DAT_100a76298;
  FUN_100004bb4(&DAT_100a76298,&DAT_10080aa88);
  lVar9 = lVar20;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar20,lVar1,param_2,puVar8);
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_10006af64:
    _swift_release(lVar20);
LAB_10006af6c:
    *unaff_x20 = lVar9;
    return;
  }
  puVar23 = (ulong *)(lVar20 + 0x40);
  uVar16 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((long)uVar16 < 0x40) {
    uVar19 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar19 = uVar19 & *puVar23;
  lVar1 = lVar9 + 0x40;
  lVar11 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar22 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10006af94);
          (*pcVar6)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar22) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar20);
            goto LAB_10006af6c;
          }
          uVar19 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
          if ((long)uVar19 < 0x40) {
            *puVar23 = -1L << (uVar19 & 0x3f);
          }
          else {
            _bzero(puVar23,uVar19 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar20 + 0x10) = 0;
          goto LAB_10006af64;
        }
        uVar19 = puVar23[lVar22];
        lVar11 = lVar11 + 1;
      } while (uVar19 == 0);
      uVar14 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar14 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar22 = lVar11;
    }
    uVar14 = LZCOUNT(uVar14) | lVar22 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar20 + 0x30) + uVar14 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    lVar21 = *(long *)(lVar12 + 0x48);
    lVar11 = *(long *)(lVar20 + 0x38) + lVar21 * uVar14;
    if ((param_2 & 1) == 0) {
      (**(code **)(lVar12 + 0x10))(puVar13,lVar11,lVar7);
      _swift_bridgeObjectRetain(uVar4);
    }
    else {
      (**(code **)(lVar12 + 0x20))(puVar13,lVar11,lVar7);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar9 + 0x28));
    puVar10 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar10,uVar3,uVar4);
    __ss6HasherV9_finalizeSiyF();
    uVar18 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar17 = (ulong)puVar10 & (uVar18 ^ 0xffffffffffffffff);
    uVar15 = uVar17 >> 6;
    uVar14 = -1L << (uVar17 & 0x3f) & (*(ulong *)(lVar1 + uVar15 * 8) ^ 0xffffffffffffffff);
    if (uVar14 == 0) {
      bVar5 = false;
      uVar14 = 0x3f - uVar18 >> 6;
      do {
        uVar17 = uVar15 + 1;
        if ((uVar17 == uVar14) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10006af98);
          (*pcVar6)();
        }
        uVar15 = 0;
        if (uVar17 != uVar14) {
          uVar15 = uVar17;
        }
        bVar5 = (bool)(uVar17 == uVar14 | bVar5);
        uVar17 = *(ulong *)(lVar1 + uVar15 * 8);
      } while (uVar17 == 0xffffffffffffffff);
      uVar17 = ~uVar17;
      uVar14 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + uVar15 * 0x40;
    }
    else {
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar17 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar14 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar15) = 1L << (uVar14 & 0x3f) | *(ulong *)(lVar1 + uVar15);
    puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar14 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    (**(code **)(lVar12 + 0x20))(*(long *)(lVar9 + 0x38) + lVar21 * uVar14,puVar13,lVar7);
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar11 = lVar22;
  } while( true );
}

