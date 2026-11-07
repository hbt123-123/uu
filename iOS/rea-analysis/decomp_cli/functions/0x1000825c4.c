// rea decompile_all
// name: FUN_1000825c4
// address: 0x1000825c4
// body: available
// range: 0x1000825c4-0x10008271f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000825c4(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  undefined8 uVar14;
  
  FUN_10000eb08(&DAT_100104830,&DAT_1000d5188);
  lVar13 = *unaff_x20;
  lVar7 = lVar13;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar13 + 0x10) != 0) {
    pvVar1 = (void *)(lVar13 + 0x38);
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar13 || (void *)((long)pvVar1 + uVar8 * 8) <= (void *)(lVar7 + 0x38)) {
      _memmove((void *)(lVar7 + 0x38),pvVar1,uVar8 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((long)uVar10 < 0x40) {
      uVar8 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar13 + 0x38);
    lVar11 = lVar9;
    if (uVar8 == 0) goto LAB_100082698;
    do {
      uVar12 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 - 1 & uVar8;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar9 << 6;
      while( true ) {
        puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + uVar12 * 0x18);
        uVar4 = *(undefined1 *)(puVar2 + 2);
        uVar5 = *(undefined1 *)((long)puVar2 + 0x11);
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar12 * 0x18);
        uVar14 = *puVar2;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar14;
        *(undefined1 *)(puVar3 + 2) = uVar4;
        *(undefined1 *)((long)puVar3 + 0x11) = uVar5;
        lVar11 = lVar9;
        if (uVar8 != 0) break;
LAB_100082698:
        do {
          lVar9 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100082720);
            (*pcVar6)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar9) goto LAB_100082700;
          uVar8 = *(ulong *)((long)pvVar1 + lVar9 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar8 == 0);
        uVar12 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 - 1 & uVar8;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar9 * 0x40;
      }
    } while( true );
  }
LAB_100082700:
  _swift_release(lVar13);
  *unaff_x20 = lVar7;
  return;
}

