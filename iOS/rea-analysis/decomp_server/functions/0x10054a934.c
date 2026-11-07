// rea decompile_all
// name: FUN_10054a934
// address: 0x10054a934
// body: available
// range: 0x10054a934-0x10054aab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054a934(void)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  FUN_100004bb4(&DAT_100aab9b8,&DAT_100838310);
  lVar15 = *unaff_x20;
  lVar10 = lVar15;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar15 + 0x10) != 0) {
    pvVar1 = (void *)(lVar15 + 0x40);
    uVar11 = (1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar10 != lVar15 || (void *)((long)pvVar1 + uVar11 * 8) <= (void *)(lVar10 + 0x40)) {
      _memmove((void *)(lVar10 + 0x40),pvVar1,uVar11 << 3);
    }
    lVar16 = 0;
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar15 + 0x10);
    uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((long)uVar12 < 0x40) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar15 + 0x40);
    if (uVar11 == 0) goto LAB_10054aa0c;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        uVar13 = LZCOUNT(uVar13) | lVar16 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar13 * 0x28);
        uVar5 = puVar3[2];
        uVar6 = puVar3[3];
        uVar7 = *(undefined1 *)((long)puVar3 + 0x21);
        uVar14 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar13 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar13 * 0x28);
        uVar17 = *puVar3;
        uVar8 = *(undefined1 *)(puVar3 + 4);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar17;
        puVar4[2] = uVar5;
        puVar4[3] = uVar6;
        *(undefined1 *)(puVar4 + 4) = uVar8;
        *(undefined1 *)((long)puVar4 + 0x21) = uVar7;
        *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar13 * 8) = uVar14;
        FUN_10050f830();
        if (uVar11 != 0) break;
LAB_10054aa0c:
        do {
          lVar2 = lVar16 + 1;
          if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10054aab4);
            (*pcVar9)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar2) goto LAB_10054aa8c;
          uVar11 = *(ulong *)((long)pvVar1 + lVar2 * 8);
          lVar16 = lVar16 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar16 = lVar2;
      }
    } while( true );
  }
LAB_10054aa8c:
  _swift_release(lVar15);
  *unaff_x20 = lVar10;
  return;
}

