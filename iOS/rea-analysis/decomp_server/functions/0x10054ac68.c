// rea decompile_all
// name: FUN_10054ac68
// address: 0x10054ac68
// body: available
// range: 0x10054ac68-0x10054ae37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054ac68(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  code *pcVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *unaff_x20;
  undefined8 uVar21;
  
  puVar12 = &DAT_100aab9c8;
  FUN_100004bb4(&DAT_100aab9c8,&DAT_100838320);
  lVar19 = *unaff_x20;
  lVar13 = lVar19;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ(lVar19,puVar12);
  if (*(long *)(lVar19 + 0x10) != 0) {
    pvVar1 = (void *)(lVar19 + 0x40);
    uVar14 = (1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar13 != lVar19 || (void *)((long)pvVar1 + uVar14 * 8) <= (void *)(lVar13 + 0x40)) {
      _memmove((void *)(lVar13 + 0x40),pvVar1,uVar14 << 3);
    }
    lVar20 = 0;
    *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar19 + 0x10);
    uVar15 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if ((long)uVar15 < 0x40) {
      uVar14 = ~(-1L << (uVar15 & 0x3f));
    }
    uVar14 = uVar14 & *(ulong *)(lVar19 + 0x40);
    if (uVar14 == 0) goto LAB_10054ad54;
    do {
      uVar16 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      while( true ) {
        uVar16 = LZCOUNT(uVar16) | lVar20 << 6;
        lVar18 = uVar16 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x30) + lVar18);
        uVar7 = puVar2[1];
        lVar17 = uVar16 * 0x30;
        puVar3 = (undefined8 *)(*(long *)(lVar19 + 0x38) + lVar17);
        uVar5 = *puVar3;
        uVar8 = puVar3[1];
        uVar21 = puVar3[2];
        uVar6 = puVar3[4];
        uVar9 = puVar3[5];
        puVar4 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar18);
        uVar10 = *(undefined1 *)(puVar3 + 3);
        *puVar4 = *puVar2;
        puVar4[1] = uVar7;
        puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar17);
        *puVar2 = uVar5;
        puVar2[1] = uVar8;
        puVar2[2] = uVar21;
        *(undefined1 *)(puVar2 + 3) = uVar10;
        puVar2[4] = uVar6;
        puVar2[5] = uVar9;
        _swift_bridgeObjectRetain();
        FUN_10051fe90(uVar5,uVar8,uVar21,uVar10);
        FUN_100008184(uVar6,uVar9);
        if (uVar14 != 0) break;
LAB_10054ad54:
        do {
          lVar17 = lVar20 + 1;
          if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10054ae38);
            (*pcVar11)();
          }
          if ((long)(uVar15 + 0x3f >> 6) <= lVar17) goto LAB_10054ae04;
          uVar14 = *(ulong *)((long)pvVar1 + lVar17 * 8);
          lVar20 = lVar20 + 1;
        } while (uVar14 == 0);
        uVar16 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
        uVar14 = uVar14 - 1 & uVar14;
        lVar20 = lVar17;
      }
    } while( true );
  }
LAB_10054ae04:
  _swift_release(lVar19);
  *unaff_x20 = lVar13;
  return;
}

