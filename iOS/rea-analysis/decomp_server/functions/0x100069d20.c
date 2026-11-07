// rea decompile_all
// name: FUN_100069d20
// address: 0x100069d20
// body: available
// range: 0x100069d20-0x10006a00b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100069d20(long param_1,ulong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auStack_80 [8];
  
  lVar4 = 0;
  FUN_1000e49dc();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  puVar16 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = *unaff_x20;
  lVar4 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar4 = param_1;
  }
  puVar5 = &DAT_100a763f0;
  FUN_100004bb4(&DAT_100a763f0,&DAT_10080c280);
  lVar6 = lVar14;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar14,lVar4,param_2,puVar5);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_100069fd8:
    _swift_release(lVar14);
LAB_100069fe0:
    *unaff_x20 = lVar6;
    return;
  }
  puVar17 = (ulong *)(lVar14 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar18 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar18 = uVar18 & *puVar17;
  lVar4 = lVar6 + 0x40;
  lVar7 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar19 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10006a008);
          (*pcVar3)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar14);
            goto LAB_100069fe0;
          }
          uVar18 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
          if ((long)uVar18 < 0x40) {
            *puVar17 = -1L << (uVar18 & 0x3f);
          }
          else {
            _bzero(puVar17,uVar18 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar14 + 0x10) = 0;
          goto LAB_100069fd8;
        }
        uVar18 = puVar17[lVar19];
        lVar7 = lVar7 + 1;
      } while (uVar18 == 0);
      uVar10 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar10 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar19 = lVar7;
    }
    uVar10 = LZCOUNT(uVar10) | lVar19 << 6;
    uVar1 = *(undefined4 *)(*(long *)(lVar14 + 0x30) + uVar10 * 4);
    lVar15 = *(long *)(lVar9 + 0x48);
    lVar7 = *(long *)(lVar14 + 0x38) + lVar15 * uVar10;
    if ((param_2 & 1) == 0) {
      FUN_100082394(lVar7,puVar16,FUN_1000e49dc);
    }
    else {
      FUN_1000823d8(lVar7,puVar16,FUN_1000e49dc);
    }
    uVar8 = *(ulong *)(lVar6 + 0x28);
    __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar8,uVar1,4);
    uVar13 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar8 = uVar8 & (uVar13 ^ 0xffffffffffffffff);
    uVar11 = uVar8 >> 6;
    uVar10 = -1L << (uVar8 & 0x3f) & (*(ulong *)(lVar4 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar2 = false;
      uVar10 = 0x3f - uVar13 >> 6;
      do {
        uVar8 = uVar11 + 1;
        if ((uVar8 == uVar10) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10006a00c);
          (*pcVar3)();
        }
        uVar11 = 0;
        if (uVar8 != uVar10) {
          uVar11 = uVar8;
        }
        bVar2 = (bool)(uVar8 == uVar10 | bVar2);
        uVar8 = *(ulong *)(lVar4 + uVar11 * 8);
      } while (uVar8 == 0xffffffffffffffff);
      uVar8 = ~uVar8;
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) + uVar11 * 0x40;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar4 + uVar11) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar4 + uVar11);
    *(undefined4 *)(*(long *)(lVar6 + 0x30) + uVar10 * 4) = uVar1;
    FUN_1000823d8(puVar16,*(long *)(lVar6 + 0x38) + lVar15 * uVar10,FUN_1000e49dc);
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar7 = lVar19;
  } while( true );
}

