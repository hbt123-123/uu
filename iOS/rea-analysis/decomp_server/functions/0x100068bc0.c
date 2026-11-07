// rea decompile_all
// name: FUN_100068bc0
// address: 0x100068bc0
// body: available
// range: 0x100068bc0-0x100068e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100068bc0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  code *pcVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  
  lVar19 = *unaff_x20;
  lVar1 = *(long *)(lVar19 + 0x18);
  if (*(long *)(lVar19 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar11 = &DAT_100a76420;
  FUN_100004bb4(&DAT_100a76420,&DAT_10080ac60);
  lVar12 = lVar19;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar19,lVar1,param_2,puVar11);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_100068e34:
    _swift_release(lVar19);
LAB_100068e3c:
    *unaff_x20 = lVar12;
    return;
  }
  puVar20 = (ulong *)(lVar19 + 0x40);
  uVar17 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar22 = 0xffffffffffffffff;
  if ((long)uVar17 < 0x40) {
    uVar22 = ~(-1L << (uVar17 & 0x3f));
  }
  uVar22 = uVar22 & *puVar20;
  lVar1 = lVar12 + 0x40;
  lVar15 = 0;
  do {
    if (uVar22 == 0) {
      do {
        lVar21 = lVar15 + 1;
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100068e64);
          (*pcVar10)();
        }
        if ((long)(uVar17 + 0x3f >> 6) <= lVar21) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar19);
            goto LAB_100068e3c;
          }
          uVar22 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
          if ((long)uVar22 < 0x40) {
            *puVar20 = -1L << (uVar22 & 0x3f);
          }
          else {
            _bzero(puVar20,uVar22 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar19 + 0x10) = 0;
          goto LAB_100068e34;
        }
        uVar22 = puVar20[lVar21];
        lVar15 = lVar15 + 1;
      } while (uVar22 == 0);
      uVar14 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar22 = uVar22 - 1 & uVar22;
    }
    else {
      uVar14 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar22 = uVar22 - 1 & uVar22;
      lVar21 = lVar15;
    }
    uVar14 = LZCOUNT(uVar14) | lVar21 << 6;
    uVar6 = *(undefined4 *)(*(long *)(lVar19 + 0x30) + uVar14 * 4);
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x38) + uVar14 * 0x20);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar7 = *(undefined1 *)(puVar2 + 2);
    uVar5 = *(undefined4 *)((long)puVar2 + 0x14);
    uVar8 = *(undefined1 *)(puVar2 + 3);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
    }
    uVar13 = *(ulong *)(lVar12 + 0x28);
    __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar13,uVar6,4);
    uVar18 = -1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar13 = uVar13 & (uVar18 ^ 0xffffffffffffffff);
    uVar16 = uVar13 >> 6;
    uVar14 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar16 * 8) ^ 0xffffffffffffffff);
    if (uVar14 == 0) {
      bVar9 = false;
      uVar14 = 0x3f - uVar18 >> 6;
      do {
        uVar13 = uVar16 + 1;
        if ((uVar13 == uVar14) && (bVar9)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100068e68);
          (*pcVar10)();
        }
        uVar16 = 0;
        if (uVar13 != uVar14) {
          uVar16 = uVar13;
        }
        bVar9 = (bool)(uVar13 == uVar14 | bVar9);
        uVar13 = *(ulong *)(lVar1 + uVar16 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar14 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + uVar16 * 0x40;
    }
    else {
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar16 = uVar14 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar16) = 1L << (uVar14 & 0x3f) | *(ulong *)(lVar1 + uVar16);
    *(undefined4 *)(*(long *)(lVar12 + 0x30) + uVar14 * 4) = uVar6;
    puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x38) + uVar14 * 0x20);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined1 *)(puVar2 + 2) = uVar7;
    *(undefined4 *)((long)puVar2 + 0x14) = uVar5;
    *(undefined1 *)(puVar2 + 3) = uVar8;
    *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
    lVar15 = lVar21;
  } while( true );
}

