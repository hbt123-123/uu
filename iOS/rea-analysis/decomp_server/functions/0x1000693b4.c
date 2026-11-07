// rea decompile_all
// name: FUN_1000693b4
// address: 0x1000693b4
// body: available
// range: 0x1000693b4-0x10006975b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000693b4(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 auStack_128 [88];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar5 = &DAT_100a763c0;
  FUN_100004bb4(&DAT_100a763c0,&DAT_10080abe8);
  lVar6 = lVar15;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar15,lVar1,param_2,puVar5);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_100069728:
    _swift_release(lVar15);
LAB_100069730:
    *unaff_x20 = lVar6;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar6 + 0x40;
  lVar8 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar20 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100069758);
          (*pcVar4)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar15);
            goto LAB_100069730;
          }
          uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
          if ((long)uVar16 < 0x40) {
            *puVar17 = -1L << (uVar16 & 0x3f);
          }
          else {
            _bzero(puVar17,uVar16 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          goto LAB_100069728;
        }
        uVar16 = puVar17[lVar20];
        lVar8 = lVar8 + 1;
      } while (uVar16 == 0);
      uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar20 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar20 << 6;
    if ((param_2 & 1) == 0) {
      puVar10 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar7 * 0x10);
      uVar18 = *puVar10;
      uVar19 = puVar10[1];
      puVar10 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar7 * 0x58);
      local_148 = puVar10[5];
      local_158 = puVar10[4];
      local_138 = puVar10[7];
      local_160 = puVar10[6];
      local_140 = puVar10[9];
      local_150 = puVar10[8];
      uVar2 = *(undefined1 *)(puVar10 + 10);
      local_168 = puVar10[1];
      local_d0 = *puVar10;
      local_170 = puVar10[3];
      local_180 = puVar10[2];
      local_174 = (undefined4)local_d0;
      uStack_c8 = local_168;
      uStack_c0 = local_180;
      local_b8 = local_170;
      local_b0 = local_158;
      uStack_a8 = local_148;
      local_a0 = local_160;
      uStack_98 = local_138;
      uStack_90 = local_150;
      local_88 = local_140;
      local_80 = uVar2;
      _swift_bridgeObjectRetain(uVar19);
      FUN_100082314(&local_d0,auStack_128);
    }
    else {
      puVar10 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar7 * 0x10);
      uVar18 = *puVar10;
      uVar19 = puVar10[1];
      puVar9 = (undefined4 *)(*(long *)(lVar15 + 0x38) + uVar7 * 0x58);
      local_174 = *puVar9;
      local_168 = *(undefined8 *)(puVar9 + 2);
      local_180 = *(undefined8 *)(puVar9 + 4);
      local_170 = *(undefined8 *)(puVar9 + 6);
      local_158 = *(undefined8 *)(puVar9 + 8);
      local_148 = *(undefined8 *)(puVar9 + 10);
      local_160 = *(undefined8 *)(puVar9 + 0xc);
      local_138 = *(undefined8 *)(puVar9 + 0xe);
      local_150 = *(undefined8 *)(puVar9 + 0x10);
      local_140 = *(undefined8 *)(puVar9 + 0x12);
      uVar2 = *(undefined1 *)(puVar9 + 0x14);
    }
    __ss6HasherV5_seedABSi_tcfC(&local_d0,*(undefined8 *)(lVar6 + 0x28));
    puVar10 = &local_d0;
    __sSS4hash4intoys6HasherVz_tF(puVar10,uVar18,uVar19);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar10 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar7 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10006975c);
          (*pcVar4)();
        }
        uVar11 = 0;
        if (uVar13 != uVar7) {
          uVar11 = uVar13;
        }
        bVar3 = (bool)(uVar13 == uVar7 | bVar3);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) + uVar11 * 0x40;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar10 = (undefined8 *)(*(long *)(lVar6 + 0x30) + uVar7 * 0x10);
    *puVar10 = uVar18;
    puVar10[1] = uVar19;
    puVar9 = (undefined4 *)(*(long *)(lVar6 + 0x38) + uVar7 * 0x58);
    *puVar9 = local_174;
    *(undefined8 *)(puVar9 + 2) = local_168;
    *(undefined8 *)(puVar9 + 4) = local_180;
    *(undefined8 *)(puVar9 + 6) = local_170;
    *(undefined8 *)(puVar9 + 8) = local_158;
    *(undefined8 *)(puVar9 + 10) = local_148;
    *(undefined8 *)(puVar9 + 0xc) = local_160;
    *(undefined8 *)(puVar9 + 0xe) = local_138;
    *(undefined8 *)(puVar9 + 0x10) = local_150;
    *(undefined8 *)(puVar9 + 0x12) = local_140;
    *(undefined1 *)(puVar9 + 0x14) = uVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar20;
  } while( true );
}

