// rea decompile_all
// name: FUN_100066d58
// address: 0x100066d58
// body: available
// range: 0x100066d58-0x1000670cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100066d58(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
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
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined4 local_1e0;
  undefined1 uStack_1dc;
  undefined8 local_1d8;
  undefined1 auStack_1d0 [128];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined5 local_e8;
  undefined3 uStack_e3;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
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
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  puVar5 = &DAT_100a76200;
  FUN_100004bb4(&DAT_100a76200,&DAT_10080a9b0);
  lVar6 = lVar14;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar14,lVar1,param_2,puVar5);
  if (*(long *)(lVar14 + 0x10) == 0) {
    _swift_release(lVar14);
LAB_10006709c:
    *unaff_x20 = lVar6;
    return;
  }
  puVar16 = (ulong *)(lVar14 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *puVar16;
  lVar1 = lVar6 + 0x40;
  lVar9 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar18 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000670c8);
          (*pcVar4)();
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
          goto LAB_10006709c;
        }
        uVar13 = puVar16[lVar18];
        lVar9 = lVar9 + 1;
      } while (uVar13 == 0);
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar18 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8) | lVar18 << 6;
    if ((param_2 & 1) == 0) {
      uVar17 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + uVar8 * 8);
      puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar8 * 0x80);
      uStack_128 = puVar2[5];
      local_130 = puVar2[4];
      uStack_118 = puVar2[7];
      local_120 = puVar2[6];
      uStack_148 = puVar2[1];
      local_150 = *puVar2;
      uStack_138 = puVar2[3];
      local_140 = puVar2[2];
      local_1d8 = puVar2[0xb];
      local_100 = puVar2[10];
      uVar15 = puVar2[0xd];
      local_f0 = puVar2[0xc];
      uVar20 = *(undefined8 *)((long)puVar2 + 0x75);
      uStack_108 = puVar2[9];
      local_110 = puVar2[8];
      uStack_db = (undefined3)uVar20;
      uStack_d8 = (undefined4)((ulong)uVar20 >> 0x18);
      uVar19 = uStack_d8;
      uStack_d4 = (undefined1)((ulong)uVar20 >> 0x38);
      uStack_e0 = (undefined5)((ulong)*(undefined8 *)((long)puVar2 + 0x6d) >> 0x18);
      local_e8 = (undefined5)uVar15;
      uStack_e3 = (undefined3)((ulong)uVar15 >> 0x28);
      uStack_1dc = uStack_d4;
      local_1e0 = (undefined4)local_f0;
      uVar20 = CONCAT35(uStack_db,uStack_e0);
      uStack_f8 = local_1d8;
      FUN_10007eca0(&local_150,auStack_1d0);
      uStack_a8 = uStack_128;
      local_b0 = local_130;
      uStack_98 = uStack_118;
      uStack_a0 = local_120;
      uStack_88 = uStack_108;
      local_90 = local_110;
      local_80 = local_100;
      uStack_c8 = uStack_148;
      local_d0 = local_150;
      uStack_b8 = uStack_138;
      uStack_c0 = local_140;
    }
    else {
      uVar17 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + uVar8 * 8);
      puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar8 * 0x80);
      uStack_a8 = puVar2[5];
      local_b0 = puVar2[4];
      uStack_98 = puVar2[7];
      uStack_a0 = puVar2[6];
      uStack_88 = puVar2[9];
      local_90 = puVar2[8];
      local_80 = puVar2[10];
      local_1d8 = puVar2[0xb];
      uStack_c8 = puVar2[1];
      local_d0 = *puVar2;
      uStack_b8 = puVar2[3];
      uStack_c0 = puVar2[2];
      local_1e0 = *(undefined4 *)(puVar2 + 0xc);
      uVar15 = puVar2[0xd];
      uVar20 = puVar2[0xe];
      uVar19 = *(undefined4 *)(puVar2 + 0xf);
      uStack_1dc = *(undefined1 *)((long)puVar2 + 0x7c);
    }
    uVar7 = *(ulong *)(lVar6 + 0x28);
    __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar7,uVar17);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000670cc);
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
    *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar8 & 0x3f);
    *(undefined8 *)(*(long *)(lVar6 + 0x30) + uVar8 * 8) = uVar17;
    puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar8 * 0x80);
    puVar2[5] = uStack_a8;
    puVar2[4] = local_b0;
    puVar2[7] = uStack_98;
    puVar2[6] = uStack_a0;
    puVar2[9] = uStack_88;
    puVar2[8] = local_90;
    puVar2[1] = uStack_c8;
    *puVar2 = local_d0;
    puVar2[3] = uStack_b8;
    puVar2[2] = uStack_c0;
    puVar2[10] = local_80;
    puVar2[0xb] = local_1d8;
    *(undefined4 *)(puVar2 + 0xc) = local_1e0;
    puVar2[0xd] = uVar15;
    puVar2[0xe] = uVar20;
    *(undefined4 *)(puVar2 + 0xf) = uVar19;
    *(undefined1 *)((long)puVar2 + 0x7c) = uStack_1dc;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar9 = lVar18;
  } while( true );
}

