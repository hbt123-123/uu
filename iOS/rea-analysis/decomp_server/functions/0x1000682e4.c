// rea decompile_all
// name: FUN_1000682e4
// address: 0x1000682e4
// body: available
// range: 0x1000682e4-0x100068667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000682e4(long param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  undefined1 uVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 local_178;
  undefined1 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [88];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar5 = &DAT_100a76458;
  FUN_100004bb4(&DAT_100a76458,&DAT_10080acb0);
  lVar6 = lVar15;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar15,lVar1,param_2,puVar5);
  if (*(long *)(lVar15 + 0x10) == 0) {
    _swift_release(lVar15);
LAB_10006863c:
    *unaff_x20 = lVar6;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar14 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar14 = uVar14 & *puVar17;
  lVar1 = lVar6 + 0x40;
  lVar9 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar18 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100068664);
          (*pcVar4)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar14 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((long)uVar14 < 0x40) {
              *puVar17 = -1L << (uVar14 & 0x3f);
            }
            else {
              _bzero(puVar17,uVar14 + 0x3f >> 3 & 0x1ffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          _swift_release(lVar15);
          goto LAB_10006863c;
        }
        uVar14 = puVar17[lVar18];
        lVar9 = lVar9 + 1;
      } while (uVar14 == 0);
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar18 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8) | lVar18 << 6;
    if ((param_2 & 1) == 0) {
      cVar2 = *(char *)(*(long *)(lVar15 + 0x30) + uVar8);
      puVar10 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x58);
      uVar16 = *(undefined1 *)(puVar10 + 10);
      local_148 = puVar10[5];
      local_160 = puVar10[4];
      local_138 = puVar10[7];
      local_150 = puVar10[6];
      local_140 = puVar10[9];
      local_130 = puVar10[8];
      uStack_c8 = puVar10[1];
      local_178 = *puVar10;
      local_158 = puVar10[3];
      local_168 = puVar10[2];
      local_16c = (undefined1)uStack_c8;
      local_d0 = local_178;
      local_c0 = local_168;
      local_b8 = local_158;
      local_b0 = local_160;
      uStack_a8 = local_148;
      local_a0 = local_150;
      uStack_98 = local_138;
      local_90 = local_130;
      uStack_88 = local_140;
      local_80 = uVar16;
      FUN_100082c4c(&local_d0,auStack_128);
    }
    else {
      cVar2 = *(char *)(*(long *)(lVar15 + 0x30) + uVar8);
      puVar10 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x58);
      local_178 = *puVar10;
      local_16c = *(undefined1 *)(puVar10 + 1);
      local_168 = puVar10[2];
      local_158 = puVar10[3];
      local_160 = puVar10[4];
      local_148 = puVar10[5];
      local_150 = puVar10[6];
      local_138 = puVar10[7];
      local_130 = puVar10[8];
      local_140 = puVar10[9];
      uVar16 = *(undefined1 *)(puVar10 + 10);
    }
    __ss6HasherV5_seedABSi_tcfC(&local_d0,*(undefined8 *)(lVar6 + 0x28));
    uVar7 = *(ulong *)(&DAT_10080ae18 + (long)cVar2 * 8);
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar13 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar7 = uVar7 & (uVar13 ^ 0xffffffffffffffff);
    uVar11 = uVar7 >> 6;
    uVar8 = -1L << (uVar7 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar3 = false;
      uVar8 = 0x3f - uVar13 >> 6;
      do {
        uVar7 = uVar11 + 1;
        if ((uVar7 == uVar8) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100068668);
          (*pcVar4)();
        }
        uVar11 = 0;
        if (uVar7 != uVar8) {
          uVar11 = uVar7;
        }
        bVar3 = (bool)(uVar7 == uVar8 | bVar3);
        uVar7 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar7 == 0xffffffffffffffff);
      uVar7 = ~uVar7;
      uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + uVar11 * 0x40;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar7 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar8 & 0x3f);
    *(char *)(*(long *)(lVar6 + 0x30) + uVar8) = cVar2;
    puVar10 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar8 * 0x58);
    *puVar10 = local_178;
    *(undefined1 *)(puVar10 + 1) = local_16c;
    puVar10[2] = local_168;
    puVar10[3] = local_158;
    puVar10[4] = local_160;
    puVar10[5] = local_148;
    puVar10[6] = local_150;
    puVar10[7] = local_138;
    puVar10[8] = local_130;
    puVar10[9] = local_140;
    *(undefined1 *)(puVar10 + 10) = uVar16;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar9 = lVar18;
  } while( true );
}

