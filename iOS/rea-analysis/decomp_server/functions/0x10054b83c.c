// rea decompile_all
// name: FUN_10054b83c
// address: 0x10054b83c
// body: available
// range: 0x10054b83c-0x10054bb5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054b83c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  undefined1 uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined2 uVar19;
  undefined8 uVar20;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [80];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 local_86;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined1 uStack_78;
  undefined1 uStack_77;
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar4 = &DAT_100aab9b0;
  FUN_100004bb4(&DAT_100aab9b0,&DAT_100838308);
  lVar5 = lVar14;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar14,lVar1,param_2,puVar4);
  if (*(long *)(lVar14 + 0x10) == 0) {
    _swift_release(lVar14);
LAB_10054bb30:
    *unaff_x20 = lVar5;
    return;
  }
  puVar16 = (ulong *)(lVar14 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *puVar16;
  lVar1 = lVar5 + 0x40;
  lVar8 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar18 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10054bb58);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar13 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
            if ((long)uVar13 < 0x40) {
              *puVar16 = -1L << (uVar13 & 0x3f);
            }
            else {
              _bzero(puVar16,uVar13 + 0x3f >> 3 & 0x1ffffffffffffff8);
            }
            *(undefined8 *)(lVar14 + 0x10) = 0;
          }
          _swift_release(lVar14);
          goto LAB_10054bb30;
        }
        uVar13 = puVar16[lVar18];
        lVar8 = lVar8 + 1;
      } while (uVar13 == 0);
      uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar18 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar18 << 6;
    if ((param_2 & 1) == 0) {
      uVar17 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + uVar7 * 8);
      puVar9 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 0x50);
      uVar20 = *(undefined8 *)((long)puVar9 + 0x42);
      uStack_158 = puVar9[3];
      local_160 = puVar9[2];
      uStack_120 = puVar9[5];
      local_a0 = puVar9[4];
      uStack_118 = puVar9[6];
      uStack_88 = (undefined2)puVar9[7];
      uStack_7e = (undefined6)uVar20;
      uStack_78 = (undefined1)((ulong)uVar20 >> 0x30);
      uStack_77 = (undefined1)((ulong)uVar20 >> 0x38);
      uVar15 = uStack_77;
      local_86 = (undefined6)*(undefined8 *)((long)puVar9 + 0x3a);
      uStack_80 = (undefined2)((ulong)*(undefined8 *)((long)puVar9 + 0x3a) >> 0x30);
      uStack_148 = puVar9[1];
      uStack_150 = *puVar9;
      uStack_128 = CONCAT62(uStack_7e,uStack_80);
      local_130 = CONCAT62(local_86,uStack_88);
      local_134 = uStack_78;
      uVar19 = (undefined2)local_a0;
      local_c0 = uStack_150;
      uStack_b8 = uStack_148;
      uStack_b0 = local_160;
      uStack_a8 = uStack_158;
      uStack_98 = uStack_120;
      uStack_90 = uStack_118;
      FUN_10051f4a0(&local_c0,auStack_110);
    }
    else {
      uVar17 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + uVar7 * 8);
      puVar9 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 0x50);
      uStack_148 = puVar9[1];
      uStack_150 = *puVar9;
      uStack_158 = puVar9[3];
      local_160 = puVar9[2];
      uVar19 = *(undefined2 *)(puVar9 + 4);
      uStack_118 = puVar9[6];
      uStack_120 = puVar9[5];
      uStack_128 = puVar9[8];
      local_130 = puVar9[7];
      local_134 = *(undefined1 *)(puVar9 + 9);
      uVar15 = *(undefined1 *)((long)puVar9 + 0x49);
    }
    uVar6 = *(ulong *)(lVar5 + 0x28);
    __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar6,uVar17);
    uVar12 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar12 ^ 0xffffffffffffffff);
    uVar10 = uVar6 >> 6;
    uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar2 = false;
      uVar7 = 0x3f - uVar12 >> 6;
      do {
        uVar6 = uVar10 + 1;
        if ((uVar6 == uVar7) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10054bb5c);
          (*pcVar3)();
        }
        uVar10 = 0;
        if (uVar6 != uVar7) {
          uVar10 = uVar6;
        }
        bVar2 = (bool)(uVar6 == uVar7 | bVar2);
        uVar6 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar6 == 0xffffffffffffffff);
      uVar6 = ~uVar6;
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) + uVar10 * 0x40;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    local_c0 = CONCAT71(local_c0._1_7_,uVar15);
    uVar10 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar7 & 0x3f);
    *(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar7 * 8) = uVar17;
    puVar9 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar7 * 0x50);
    puVar9[1] = uStack_148;
    *puVar9 = uStack_150;
    puVar9[3] = uStack_158;
    puVar9[2] = local_160;
    *(undefined2 *)(puVar9 + 4) = uVar19;
    puVar9[6] = uStack_118;
    puVar9[5] = uStack_120;
    puVar9[8] = uStack_128;
    puVar9[7] = local_130;
    *(undefined1 *)(puVar9 + 9) = local_134;
    *(undefined1 *)((long)puVar9 + 0x49) = uVar15;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar8 = lVar18;
  } while( true );
}

