// rea decompile_all
// name: FUN_1007c5914
// address: 0x1007c5914
// body: available
// range: 0x1007c5914-0x1007c5bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1007c5914(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_d0 [8];
  undefined *local_80 [3];
  undefined *local_68;
  
  puVar6 = &DAT_100abce00;
  FUN_1007b4550();
  puVar11 = auStack_d0 + -(*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_1007c5008();
  lVar12 = *(long *)(lVar7 + -8);
  lVar13 = (long)puVar11 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1007b4550(&DAT_100abc7d0);
  lVar8 = param_1;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  puVar16 = (ulong *)(param_1 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((long)uVar14 < 0x40) {
    uVar19 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar19 = uVar19 & *puVar16;
  uVar14 = uVar14 + 0x3f >> 6;
  lVar9 = lVar8;
  _swift_retain();
  lVar20 = 0;
  lVar17 = lVar8;
  lVar21 = lVar20;
  if (uVar19 == 0) goto LAB_1007c5a18;
  do {
    uVar18 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar19 = uVar19 - 1 & uVar19;
    uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | lVar20 << 6;
    while( true ) {
      lVar17 = *(long *)(param_1 + 0x30);
      FUN_1007c5c00(*(long *)(param_1 + 0x38) + *(long *)(lVar12 + 0x48) * uVar18,lVar13);
      puVar1 = (undefined8 *)(lVar17 + uVar18 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      FUN_1007c5c00(lVar13,puVar11);
      (**(code **)(lVar12 + 0x38))(puVar11,0,1,lVar7);
      puVar6 = &DAT_100abce10;
      FUN_1007b4550();
      puVar10 = &DAT_1009eb918;
      local_68 = puVar6;
      _swift_allocObject(&DAT_1009eb918,0x30,7);
      local_80[0] = puVar10;
      _swift_bridgeObjectRetain(uVar3);
      FUN_1007c5550(puVar10 + 0x10,puVar11);
      FUN_1007c62b0(puVar11,&DAT_100abce00);
      FUN_1007c5cb8(lVar13);
      uVar15 = uVar18 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar8 + 0x40 + uVar15) = *(ulong *)(lVar8 + 0x40 + uVar15) | 1L << (uVar18 & 0x3f);
      puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar18 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_10007f3d4(local_80,*(long *)(lVar9 + 0x38) + uVar18 * 0x20);
      if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007c5bf8);
        (*pcVar4)();
      }
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
      lVar17 = lVar9;
      lVar21 = lVar20;
      if (uVar19 != 0) break;
LAB_1007c5a18:
      lVar20 = lVar21 + 1;
      if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007c5bfc);
        (*pcVar4)();
      }
      if ((long)uVar14 <= lVar20) {
LAB_1007c5bc4:
        _swift_release(lVar17);
        return lVar17;
      }
      uVar19 = puVar16[lVar20];
      if (uVar19 == 0) {
        lVar20 = lVar21 + 2;
        if ((long)uVar14 <= lVar20) goto LAB_1007c5bc4;
        uVar19 = puVar16[lVar20];
        if (uVar19 == 0) {
          lVar20 = lVar21 + 3;
          if ((long)uVar14 <= lVar20) goto LAB_1007c5bc4;
          uVar19 = puVar16[lVar20];
          if (uVar19 == 0) {
            lVar20 = lVar21 + 4;
            if ((long)uVar14 <= lVar20) goto LAB_1007c5bc4;
            uVar19 = puVar16[lVar20];
            while (uVar19 == 0) {
              bVar5 = SCARRY8(lVar20,1);
              lVar20 = lVar20 + 1;
              if (bVar5) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1007c5c00);
                (*pcVar4)();
              }
              if ((long)uVar14 <= lVar20) goto LAB_1007c5bc4;
              uVar19 = puVar16[lVar20];
            }
          }
        }
      }
      uVar18 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar19 = uVar19 - 1 & uVar19;
      uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) + lVar20 * 0x40;
    }
  } while( true );
}

