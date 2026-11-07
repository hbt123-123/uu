// rea decompile_all
// name: FUN_100062c28
// address: 0x100062c28
// body: available
// range: 0x100062c28-0x100062dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100062c28(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *unaff_x20;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  FUN_100004bb4(&DAT_100a76460,&DAT_10080acc0);
  lVar14 = *unaff_x20;
  lVar7 = lVar14;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar14 + 0x10) != 0) {
    pvVar1 = (void *)(lVar14 + 0x40);
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar14 || (void *)((long)pvVar1 + uVar8 * 8) <= (void *)(lVar7 + 0x40)) {
      _memmove((void *)(lVar7 + 0x40),pvVar1,uVar8 << 3);
    }
    lVar15 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar14 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((long)uVar9 < 0x40) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar14 + 0x40);
    if (uVar8 == 0) goto LAB_100062d00;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar15 << 6;
        lVar12 = uVar10 * 0x30;
        puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x30) + lVar12);
        uVar13 = puVar2[4];
        uVar4 = *(undefined1 *)(puVar2 + 5);
        lVar11 = uVar10 * 0x10;
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar12);
        uVar16 = *puVar2;
        uVar18 = puVar2[3];
        uVar17 = puVar2[2];
        puVar5 = (undefined8 *)(*(long *)(lVar14 + 0x38) + lVar11);
        uVar20 = puVar5[1];
        uVar19 = *puVar5;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar16;
        puVar3[3] = uVar18;
        puVar3[2] = uVar17;
        puVar3[4] = uVar13;
        *(undefined1 *)(puVar3 + 5) = uVar4;
        puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar11);
        puVar2[1] = uVar20;
        *puVar2 = uVar19;
        FUN_100008184(uVar19,uVar20);
        if (uVar8 != 0) break;
LAB_100062d00:
        do {
          lVar11 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100062dac);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar11) goto LAB_100062d84;
          uVar8 = *(ulong *)((long)pvVar1 + lVar11 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar15 = lVar11;
      }
    } while( true );
  }
LAB_100062d84:
  _swift_release(lVar14);
  *unaff_x20 = lVar7;
  return;
}

