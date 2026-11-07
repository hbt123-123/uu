// rea decompile_all
// name: FUN_10006a50c
// address: 0x10006a50c
// body: available
// range: 0x10006a50c-0x10006a77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006a50c(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar5 = &DAT_100a76368;
  FUN_100004bb4(&DAT_100a76368,&DAT_10080ab90);
  lVar6 = lVar13;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar13,lVar1,param_2,puVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_10006a748:
    _swift_release(lVar13);
LAB_10006a750:
    *unaff_x20 = lVar6;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar17 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *puVar14;
  lVar1 = lVar6 + 0x40;
  lVar9 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10006a778);
          (*pcVar4)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar13);
            goto LAB_10006a750;
          }
          uVar17 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((long)uVar17 < 0x40) {
            *puVar14 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(puVar14,uVar17 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_10006a748;
        }
        uVar17 = puVar14[lVar16];
        lVar9 = lVar9 + 1;
      } while (uVar17 == 0);
      uVar8 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar8 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8) | lVar16 << 6;
    uVar2 = *(undefined4 *)(*(long *)(lVar13 + 0x30) + uVar8 * 4);
    uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar8 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar15);
    }
    uVar7 = *(ulong *)(lVar6 + 0x28);
    __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar7,uVar2,4);
    uVar12 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar7 = uVar7 & (uVar12 ^ 0xffffffffffffffff);
    uVar10 = uVar7 >> 6;
    uVar8 = -1L << (uVar7 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar3 = false;
      uVar8 = 0x3f - uVar12 >> 6;
      do {
        uVar7 = uVar10 + 1;
        if ((uVar7 == uVar8) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10006a77c);
          (*pcVar4)();
        }
        uVar10 = 0;
        if (uVar7 != uVar8) {
          uVar10 = uVar7;
        }
        bVar3 = (bool)(uVar7 == uVar8 | bVar3);
        uVar7 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar7 == 0xffffffffffffffff);
      uVar7 = ~uVar7;
      uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + uVar10 * 0x40;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar7 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(undefined4 *)(*(long *)(lVar6 + 0x30) + uVar8 * 4) = uVar2;
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = uVar15;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar9 = lVar16;
  } while( true );
}

