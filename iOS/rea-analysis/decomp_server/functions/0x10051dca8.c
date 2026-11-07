// rea decompile_all
// name: FUN_10051dca8
// address: 0x10051dca8
// body: available
// range: 0x10051dca8-0x10051dfb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10051dca8(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_1c0 [80];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined2 uStack_138;
  undefined6 local_136;
  undefined2 uStack_130;
  undefined8 uStack_12e;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined6 local_e6;
  undefined2 uStack_e0;
  undefined8 uStack_de;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined1 local_80;
  undefined1 local_7f;
  undefined *local_78;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return PTR___swiftEmptyArrayStorage_100995ea0;
  }
  local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100511664(0,lVar13,0);
  puVar15 = local_78;
  uVar1 = param_1 + 0x40;
  uVar8 = uVar1;
  __ss10_HashTableV11startBucketAB0D0Vvg(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
  if ((-1 < (long)uVar8) && ((long)uVar8 < 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f))) {
    iVar2 = *(int *)(param_1 + 0x24);
    lVar10 = 1;
    do {
      uVar18 = uVar8 >> 6;
      uVar16 = 1L << (uVar8 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar18 * 8) & uVar16) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10051dfa8);
        (*pcVar7)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10051dfac);
        (*pcVar7)();
      }
      local_d0 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar8 * 8);
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar8 * 0x50);
      uStack_118 = puVar11[1];
      local_120 = *puVar11;
      uStack_f8 = puVar11[5];
      local_100 = puVar11[4];
      uStack_f0 = puVar11[6];
      uStack_de = *(undefined8 *)((long)puVar11 + 0x42);
      uStack_108 = puVar11[3];
      local_110 = puVar11[2];
      uStack_e0 = (undefined2)((ulong)*(undefined8 *)((long)puVar11 + 0x3a) >> 0x30);
      uStack_e8 = (undefined2)puVar11[7];
      local_e6 = (undefined6)((ulong)puVar11[7] >> 0x10);
      uStack_12e = *(undefined8 *)((long)puVar11 + 0x42);
      uVar20 = puVar11[5];
      local_150 = puVar11[4];
      uVar19 = puVar11[6];
      uStack_138 = (undefined2)puVar11[7];
      local_136 = (undefined6)*(undefined8 *)((long)puVar11 + 0x3a);
      uStack_130 = (undefined2)((ulong)*(undefined8 *)((long)puVar11 + 0x3a) >> 0x30);
      uStack_168 = puVar11[1];
      local_170 = *puVar11;
      uStack_158 = puVar11[3];
      uStack_160 = puVar11[2];
      uStack_90 = uStack_138;
      uStack_86 = (undefined6)uStack_12e;
      local_80 = (undefined1)((ulong)uStack_12e >> 0x30);
      uVar5 = local_80;
      local_7f = (undefined1)((ulong)uStack_12e >> 0x38);
      uVar6 = local_7f;
      uVar4 = CONCAT62(uStack_86,uStack_130);
      uVar3 = CONCAT62(local_136,uStack_138);
      uStack_148 = uVar20;
      uStack_140 = uVar19;
      local_c8 = local_170;
      uStack_c0 = uStack_168;
      local_b8 = uStack_160;
      uStack_b0 = uStack_158;
      local_a8 = local_150;
      uStack_a0 = uVar20;
      local_98 = uVar19;
      uStack_8e = local_136;
      uStack_88 = uStack_130;
      FUN_10051f4a0(&local_120,auStack_1c0);
      FUN_10050f830(uVar3,uVar4,uVar5,uVar6);
      FUN_100040bb4(&local_d0,&DAT_100aab1b8,&DAT_100837230);
      uVar14 = *(ulong *)(puVar15 + 0x10);
      local_78 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar14) {
        FUN_100511664(1 < *(ulong *)(puVar15 + 0x18),uVar14 + 1,1);
      }
      puVar15 = local_78;
      *(ulong *)(local_78 + 0x10) = uVar14 + 1;
      *(undefined8 *)(local_78 + uVar14 * 0x28 + 0x28) = uVar19;
      *(undefined8 *)(local_78 + uVar14 * 0x28 + 0x20) = uVar20;
      *(undefined8 *)(local_78 + uVar14 * 0x28 + 0x38) = uVar4;
      *(undefined8 *)(local_78 + uVar14 * 0x28 + 0x30) = uVar3;
      local_78[uVar14 * 0x28 + 0x40] = uVar5;
      local_78[uVar14 * 0x28 + 0x41] = uVar6;
      uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if ((long)uVar14 <= (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10051dfb0);
        (*pcVar7)();
      }
      uVar9 = *(ulong *)(uVar1 + uVar18 * 8);
      if ((uVar9 & uVar16) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10051dfb4);
        (*pcVar7)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10051dfb8);
        (*pcVar7)();
      }
      uVar9 = uVar9 & -2L << (uVar8 & 0x3f);
      if (uVar9 == 0) {
        lVar17 = uVar18 << 6;
        puVar12 = (ulong *)(param_1 + 0x48 + uVar18 * 8);
        do {
          uVar18 = uVar18 + 1;
          if (uVar14 + 0x3f >> 6 <= uVar18) {
            FUN_10003f79c(uVar8,iVar2,0);
            goto LAB_10051df2c;
          }
          uVar16 = *puVar12;
          lVar17 = lVar17 + 0x40;
          puVar12 = puVar12 + 1;
        } while (uVar16 == 0);
        FUN_10003f79c(uVar8,iVar2,0);
        uVar8 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + lVar17;
      }
      else {
        uVar18 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | uVar8 & 0x7fffffffffffffc0;
      }
LAB_10051df2c:
      if (lVar10 == lVar13) {
        return puVar15;
      }
    } while ((-1 < (long)uVar14) &&
            (lVar10 = lVar10 + 1, uVar8 = uVar14,
            (long)uVar14 < 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10051dfa4);
  (*pcVar7)();
}

