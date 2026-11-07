// rea decompile_all
// name: FUN_10068d598
// address: 0x10068d598
// body: available
// range: 0x10068d598-0x10068d8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10068d598(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined7 local_c8;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 auStack_a0 [64];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar8 = &DAT_100ab9ff0;
  FUN_100004bb4(&DAT_100ab9ff0,&DAT_10084dd78);
  lVar9 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,puVar8);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10068d8c0:
    _swift_release(lVar17);
LAB_10068d8c8:
    *unaff_x20 = lVar9;
    return;
  }
  puVar19 = (ulong *)(lVar17 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((long)uVar14 < 0x40) {
    uVar18 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar18 = uVar18 & *puVar19;
  lVar1 = lVar9 + 0x40;
  lVar11 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar22 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10068d8f0);
          (*pcVar7)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar22) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar17);
            goto LAB_10068d8c8;
          }
          uVar18 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
          if ((long)uVar18 < 0x40) {
            *puVar19 = -1L << (uVar18 & 0x3f);
          }
          else {
            _bzero(puVar19,uVar18 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar17 + 0x10) = 0;
          goto LAB_10068d8c0;
        }
        uVar18 = puVar19[lVar22];
        lVar11 = lVar11 + 1;
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
      lVar22 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar22 << 6;
    if ((param_2 & 1) == 0) {
      puVar12 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar10 * 0x10);
      uVar20 = *puVar12;
      uVar21 = puVar12[1];
      puVar12 = (undefined8 *)(*(long *)(lVar17 + 0x38) + uVar10 * 0x38);
      uStack_118 = puVar12[1];
      uStack_120 = *puVar12;
      local_130 = puVar12[3];
      local_110 = puVar12[2];
      uStack_108 = puVar12[5];
      uStack_128 = puVar12[4];
      uVar2 = *(undefined4 *)((long)puVar12 + 0x2f);
      uStack_c0 = (undefined1)((uint)uVar2 >> 8);
      uVar3 = uStack_c0;
      uStack_bf = (undefined1)((uint)uVar2 >> 0x10);
      uVar4 = uStack_bf;
      uStack_be = (undefined1)((uint)uVar2 >> 0x18);
      uVar5 = uStack_be;
      local_c8 = (undefined7)uStack_108;
      uStack_c1 = (undefined1)((ulong)uStack_108 >> 0x38);
      local_f0 = uStack_120;
      uStack_e8 = uStack_118;
      local_e0 = local_110;
      uStack_d8 = local_130;
      uStack_d0 = uStack_128;
      _swift_bridgeObjectRetain(uVar21);
      FUN_10068e538(&local_f0,auStack_a0);
    }
    else {
      puVar12 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar10 * 0x10);
      uVar20 = *puVar12;
      uVar21 = puVar12[1];
      puVar12 = (undefined8 *)(*(long *)(lVar17 + 0x38) + uVar10 * 0x38);
      uStack_118 = puVar12[1];
      uStack_120 = *puVar12;
      local_110 = puVar12[2];
      uStack_128 = puVar12[4];
      local_130 = puVar12[3];
      uStack_108 = puVar12[5];
      uVar3 = *(undefined1 *)(puVar12 + 6);
      uVar4 = *(undefined1 *)((long)puVar12 + 0x31);
      uVar5 = *(undefined1 *)((long)puVar12 + 0x32);
    }
    __ss6HasherV5_seedABSi_tcfC(&local_f0,*(undefined8 *)(lVar9 + 0x28));
    puVar12 = &local_f0;
    __sSS4hash4intoys6HasherVz_tF(puVar12,uVar20,uVar21);
    __ss6HasherV9_finalizeSiyF();
    uVar16 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar12 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar10 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10068d8f4);
          (*pcVar7)();
        }
        uVar13 = 0;
        if (uVar15 != uVar10) {
          uVar13 = uVar15;
        }
        bVar6 = (bool)(uVar15 == uVar10 | bVar6);
        uVar15 = *(ulong *)(lVar1 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) + uVar13 * 0x40;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    puVar12 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar10 * 0x10);
    *puVar12 = uVar20;
    puVar12[1] = uVar21;
    puVar12 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar10 * 0x38);
    puVar12[1] = uStack_118;
    *puVar12 = uStack_120;
    puVar12[2] = local_110;
    puVar12[4] = uStack_128;
    puVar12[3] = local_130;
    puVar12[5] = uStack_108;
    *(undefined1 *)(puVar12 + 6) = uVar3;
    *(undefined1 *)((long)puVar12 + 0x31) = uVar4;
    *(undefined1 *)((long)puVar12 + 0x32) = uVar5;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar11 = lVar22;
  } while( true );
}

