// rea decompile_all
// name: FUN_100064780
// address: 0x100064780
// body: available
// range: 0x100064780-0x1000648e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100064780(void)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  
  FUN_100004bb4(&DAT_100a763c8,&DAT_10080abf0);
  lVar12 = *unaff_x20;
  lVar8 = lVar12;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar12 + 0x10) != 0) {
    pvVar1 = (void *)(lVar12 + 0x40);
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar12 || (void *)((long)pvVar1 + uVar9 * 8) <= (void *)(lVar8 + 0x40)) {
      _memmove((void *)(lVar8 + 0x40),pvVar1,uVar9 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((long)uVar10 < 0x40) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar12 + 0x40);
    if (uVar9 == 0) goto LAB_100064858;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar11 * 0x10);
        uVar5 = puVar3[1];
        uVar6 = *(undefined4 *)(*(long *)(lVar12 + 0x38) + uVar11 * 4);
        puVar4 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar11 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined4 *)(*(long *)(lVar8 + 0x38) + uVar11 * 4) = uVar6;
        _swift_bridgeObjectRetain();
        if (uVar9 != 0) break;
LAB_100064858:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1000648e4);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar2) goto LAB_1000648bc;
          uVar9 = *(ulong *)((long)pvVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1000648bc:
  _swift_release(lVar12);
  *unaff_x20 = lVar8;
  return;
}

