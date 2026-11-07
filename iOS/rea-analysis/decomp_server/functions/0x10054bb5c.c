// rea decompile_all
// name: FUN_10054bb5c
// address: 0x10054bb5c
// body: available
// range: 0x10054bb5c-0x10054be7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054bb5c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  bool bVar9;
  code *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *unaff_x20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  ulong local_d8;
  undefined1 auStack_b0 [80];
  
  lVar23 = *unaff_x20;
  lVar1 = *(long *)(lVar23 + 0x18);
  if (*(long *)(lVar23 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  FUN_100004bb4(&DAT_100aab9c8,&DAT_100838320);
  lVar11 = lVar23;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar23,lVar1,param_2);
  if (*(long *)(lVar23 + 0x10) == 0) {
LAB_10054be4c:
    _swift_release(lVar23);
LAB_10054be54:
    *unaff_x20 = lVar11;
    return;
  }
  puVar17 = (ulong *)(lVar23 + 0x40);
  uVar18 = 1L << ((ulong)*(byte *)(lVar23 + 0x20) & 0x3f);
  local_d8 = 0xffffffffffffffff;
  if ((long)uVar18 < 0x40) {
    local_d8 = ~(-1L << (uVar18 & 0x3f));
  }
  local_d8 = local_d8 & *puVar17;
  lVar1 = lVar11 + 0x40;
  lVar14 = 0;
  do {
    if (local_d8 == 0) {
      do {
        lVar22 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10054be7c);
          (*pcVar10)();
        }
        if ((long)(uVar18 + 0x3f >> 6) <= lVar22) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar23);
            goto LAB_10054be54;
          }
          uVar18 = 1L << ((ulong)*(byte *)(lVar23 + 0x20) & 0x3f);
          if ((long)uVar18 < 0x40) {
            *puVar17 = -1L << (uVar18 & 0x3f);
          }
          else {
            _bzero(puVar17,uVar18 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar23 + 0x10) = 0;
          goto LAB_10054be4c;
        }
        local_d8 = puVar17[lVar22];
        lVar14 = lVar14 + 1;
      } while (local_d8 == 0);
      uVar13 = (local_d8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_d8 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      local_d8 = local_d8 - 1 & local_d8;
    }
    else {
      uVar13 = (local_d8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_d8 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      local_d8 = local_d8 - 1 & local_d8;
      lVar22 = lVar14;
    }
    uVar13 = LZCOUNT(uVar13) | lVar22 << 6;
    puVar15 = (undefined8 *)(*(long *)(lVar23 + 0x30) + uVar13 * 0x10);
    uVar2 = *puVar15;
    uVar5 = puVar15[1];
    puVar15 = (undefined8 *)(*(long *)(lVar23 + 0x38) + uVar13 * 0x30);
    uVar3 = *puVar15;
    uVar6 = puVar15[1];
    uVar21 = puVar15[2];
    uVar8 = *(undefined1 *)(puVar15 + 3);
    uVar4 = puVar15[4];
    uVar7 = puVar15[5];
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar5);
      FUN_10051fe90(uVar3,uVar6,uVar21,uVar8);
      FUN_100008184(uVar4,uVar7);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_b0,*(undefined8 *)(lVar11 + 0x28));
    puVar12 = auStack_b0;
    __sSS4hash4intoys6HasherVz_tF(puVar12,uVar2,uVar5);
    __ss6HasherV9_finalizeSiyF();
    uVar20 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar19 = (ulong)puVar12 & (uVar20 ^ 0xffffffffffffffff);
    uVar16 = uVar19 >> 6;
    uVar13 = -1L << (uVar19 & 0x3f) & (*(ulong *)(lVar1 + uVar16 * 8) ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      bVar9 = false;
      uVar13 = 0x3f - uVar20 >> 6;
      do {
        uVar19 = uVar16 + 1;
        if ((uVar19 == uVar13) && (bVar9)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10054be80);
          (*pcVar10)();
        }
        uVar16 = 0;
        if (uVar19 != uVar13) {
          uVar16 = uVar19;
        }
        bVar9 = (bool)(uVar19 == uVar13 | bVar9);
        uVar19 = *(ulong *)(lVar1 + uVar16 * 8);
      } while (uVar19 == 0xffffffffffffffff);
      uVar19 = ~uVar19;
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + uVar16 * 0x40;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar19 & 0x7fffffffffffffc0;
    }
    uVar16 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar16) = 1L << (uVar13 & 0x3f) | *(ulong *)(lVar1 + uVar16);
    puVar15 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar13 * 0x10);
    *puVar15 = uVar2;
    puVar15[1] = uVar5;
    puVar15 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar13 * 0x30);
    *puVar15 = uVar3;
    puVar15[1] = uVar6;
    puVar15[2] = uVar21;
    *(undefined1 *)(puVar15 + 3) = uVar8;
    puVar15[4] = uVar4;
    puVar15[5] = uVar7;
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
    lVar14 = lVar22;
  } while( true );
}

