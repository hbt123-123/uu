// rea decompile_all
// name: FUN_1007d4058
// address: 0x1007d4058
// body: available
// range: 0x1007d4058-0x1007d421b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007d4058(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  FUN_1007b4550(&DAT_100abc7c8);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    pvVar1 = (void *)(lVar11 + 0x40);
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || (void *)((long)pvVar1 + uVar8 * 8) <= (void *)(lVar7 + 0x40)) {
      _memmove((void *)(lVar7 + 0x40),pvVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((long)uVar9 < 0x40) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    uVar9 = uVar9 + 0x3f >> 6;
    do {
      if (uVar8 == 0) {
        lVar14 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1007d4218);
          (*pcVar5)();
        }
        if ((long)uVar9 <= lVar14) break;
        uVar8 = *(ulong *)((long)pvVar1 + lVar14 * 8);
        if (uVar8 == 0) {
          lVar14 = lVar13 + 2;
          if ((long)uVar9 <= lVar14) break;
          uVar8 = *(ulong *)((long)pvVar1 + lVar14 * 8);
          if (uVar8 == 0) {
            lVar14 = lVar13 + 3;
            if ((long)uVar9 <= lVar14) break;
            uVar8 = *(ulong *)((long)pvVar1 + lVar14 * 8);
            if (uVar8 == 0) {
              lVar14 = lVar13 + 4;
              if ((long)uVar9 <= lVar14) break;
              uVar8 = *(ulong *)((long)pvVar1 + lVar14 * 8);
              while (uVar8 == 0) {
                bVar6 = SCARRY8(lVar14,1);
                lVar14 = lVar14 + 1;
                if (bVar6) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1007d421c);
                  (*pcVar5)();
                }
                if ((long)uVar9 <= lVar14) goto LAB_1007d41f0;
                uVar8 = *(ulong *)((long)pvVar1 + lVar14 * 8);
              }
            }
          }
        }
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 - 1 & uVar8;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) + lVar14 * 0x40;
        lVar13 = lVar14;
      }
      else {
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 - 1 & uVar8;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar13 << 6;
      }
      puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
      uVar4 = puVar2[1];
      uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
      puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar12);
    } while( true );
  }
LAB_1007d41f0:
  _swift_release(lVar11);
  *unaff_x20 = lVar7;
  return;
}

