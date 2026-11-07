// rea decompile_all
// name: FUN_10006b794
// address: 0x10006b794
// body: available
// range: 0x10006b794-0x10006bb7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006b794(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 uVar4;
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
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_248;
  ulong local_240;
  undefined1 auStack_230 [160];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar7 = &DAT_100a763a8;
  FUN_100004bb4(&DAT_100a763a8,&DAT_10080abd0);
  lVar8 = lVar15;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar15,lVar1,param_2,puVar7);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_10006bb48:
    _swift_release(lVar15);
LAB_10006bb50:
    *unaff_x20 = lVar8;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((long)uVar13 < 0x40) {
    uVar16 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar8 + 0x40;
  lVar10 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10006bb78);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar15);
            goto LAB_10006bb50;
          }
          uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
          if ((long)uVar16 < 0x40) {
            *puVar17 = -1L << (uVar16 & 0x3f);
          }
          else {
            _bzero(puVar17,uVar16 + 0x3f >> 3 & 0x1ffffffffffffff8);
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          goto LAB_10006bb48;
        }
        uVar16 = puVar17[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar16 == 0);
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    if ((param_2 & 1) == 0) {
      puVar2 = (undefined1 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
      uVar4 = *puVar2;
      local_240 = *(ulong *)(puVar2 + 4);
      uVar3 = *(uint *)(puVar2 + 0xc);
      puVar11 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 0xa0);
      uStack_188 = puVar11[1];
      local_190 = *puVar11;
      uStack_178 = puVar11[3];
      uStack_180 = puVar11[2];
      uStack_148 = puVar11[9];
      local_150 = puVar11[8];
      uStack_138 = puVar11[0xb];
      uStack_140 = puVar11[10];
      uStack_168 = puVar11[5];
      local_170 = puVar11[4];
      uStack_158 = puVar11[7];
      uStack_160 = puVar11[6];
      uStack_260 = puVar11[0x11];
      uStack_268 = puVar11[0x10];
      local_248 = puVar11[0x13];
      uStack_258 = puVar11[0x12];
      uStack_128 = puVar11[0xd];
      local_130 = puVar11[0xc];
      local_270 = puVar11[0xf];
      local_120 = puVar11[0xe];
      uStack_118 = local_270;
      local_110 = uStack_268;
      uStack_108 = uStack_260;
      uStack_100 = uStack_258;
      local_f8 = local_248;
      FUN_1000822d8(&local_190,auStack_230);
      uStack_a8 = uStack_148;
      local_b0 = local_150;
      uStack_98 = uStack_138;
      uStack_a0 = uStack_140;
      uStack_88 = uStack_128;
      local_90 = local_130;
      local_80 = local_120;
      uStack_e8 = uStack_188;
      local_f0 = local_190;
      uStack_d8 = uStack_178;
      uStack_e0 = uStack_180;
      uStack_c8 = uStack_168;
      local_d0 = local_170;
      uStack_b8 = uStack_158;
      uStack_c0 = uStack_160;
    }
    else {
      puVar2 = (undefined1 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
      uVar4 = *puVar2;
      local_240 = *(ulong *)(puVar2 + 4);
      uVar3 = *(uint *)(puVar2 + 0xc);
      puVar11 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 0xa0);
      uStack_a8 = puVar11[9];
      local_b0 = puVar11[8];
      uStack_98 = puVar11[0xb];
      uStack_a0 = puVar11[10];
      uStack_88 = puVar11[0xd];
      local_90 = puVar11[0xc];
      local_80 = puVar11[0xe];
      uStack_e8 = puVar11[1];
      local_f0 = *puVar11;
      uStack_d8 = puVar11[3];
      uStack_e0 = puVar11[2];
      uStack_c8 = puVar11[5];
      local_d0 = puVar11[4];
      uStack_b8 = puVar11[7];
      uStack_c0 = puVar11[6];
      uStack_258 = puVar11[0x12];
      uStack_260 = puVar11[0x11];
      uStack_268 = puVar11[0x10];
      local_270 = puVar11[0xf];
      local_248 = puVar11[0x13];
    }
    uVar18 = (ulong)uVar3;
    __ss6HasherV5_seedABSi_tcfC(&local_190,*(undefined8 *)(lVar8 + 0x28));
    __ss6HasherV8_combineyySuF(uVar4);
    __ss6HasherV8_combineyys6UInt32VF(local_240 & 0xffffffff);
    __ss6HasherV8_combineyys6UInt32VF(local_240 >> 0x20);
    __ss6HasherV8_combineyys6UInt32VF();
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar18 = uVar18 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar18 >> 6;
    uVar9 = -1L << (uVar18 & 0x3f) & (*(ulong *)(lVar1 + uVar12 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar18 = uVar12 + 1;
        if ((uVar18 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10006bb7c);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar18 != uVar9) {
          uVar12 = uVar18;
        }
        bVar5 = (bool)(uVar18 == uVar9 | bVar5);
        uVar18 = *(ulong *)(lVar1 + uVar12 * 8);
      } while (uVar18 == 0xffffffffffffffff);
      uVar18 = ~uVar18;
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + uVar12 * 0x40;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar18 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = *(ulong *)(lVar1 + uVar12) | 1L << (uVar9 & 0x3f);
    puVar2 = (undefined1 *)(*(long *)(lVar8 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar4;
    *(ulong *)(puVar2 + 4) = local_240;
    *(uint *)(puVar2 + 0xc) = uVar3;
    puVar11 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar9 * 0xa0);
    puVar11[9] = uStack_a8;
    puVar11[8] = local_b0;
    puVar11[0xb] = uStack_98;
    puVar11[10] = uStack_a0;
    puVar11[0xd] = uStack_88;
    puVar11[0xc] = local_90;
    puVar11[0xe] = local_80;
    puVar11[1] = uStack_e8;
    *puVar11 = local_f0;
    puVar11[3] = uStack_d8;
    puVar11[2] = uStack_e0;
    puVar11[5] = uStack_c8;
    puVar11[4] = local_d0;
    puVar11[7] = uStack_b8;
    puVar11[6] = uStack_c0;
    puVar11[0x12] = uStack_258;
    puVar11[0x11] = uStack_260;
    puVar11[0x10] = uStack_268;
    puVar11[0xf] = local_270;
    puVar11[0x13] = local_248;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}

