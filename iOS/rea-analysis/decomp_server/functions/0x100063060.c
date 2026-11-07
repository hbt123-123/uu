// rea decompile_all
// name: FUN_100063060
// address: 0x100063060
// body: available
// range: 0x100063060-0x1000631c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100063060(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  
  FUN_100004bb4(&DAT_100a76350,&DAT_10080ab78);
  lVar12 = *unaff_x20;
  lVar5 = lVar12;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar12 + 0x10) != 0) {
    pvVar1 = (void *)(lVar12 + 0x40);
    uVar6 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar5 != lVar12 || (void *)((long)pvVar1 + uVar6 * 8) <= (void *)(lVar5 + 0x40)) {
      _memmove((void *)(lVar5 + 0x40),pvVar1,uVar6 << 3);
    }
    lVar7 = 0;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((long)uVar8 < 0x40) {
      uVar6 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar12 + 0x40);
    lVar9 = lVar7;
    if (uVar6 == 0) goto LAB_100063134;
    do {
      uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 << 6;
      while( true ) {
        puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x38) + uVar10 * 0x18);
        uVar11 = *puVar2;
        uVar3 = *(undefined4 *)(puVar2 + 2);
        uVar13 = puVar2[1];
        *(undefined4 *)(*(long *)(lVar5 + 0x30) + uVar10 * 4) =
             *(undefined4 *)(*(long *)(lVar12 + 0x30) + uVar10 * 4);
        puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar10 * 0x18);
        *puVar2 = uVar11;
        puVar2[1] = uVar13;
        *(undefined4 *)(puVar2 + 2) = uVar3;
        lVar9 = lVar7;
        if (uVar6 != 0) break;
LAB_100063134:
        do {
          lVar7 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000631c8);
            (*pcVar4)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar7) goto LAB_1000631a8;
          uVar6 = *(ulong *)((long)pvVar1 + lVar7 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar6 == 0);
        uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 - 1 & uVar6;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 * 0x40;
      }
    } while( true );
  }
LAB_1000631a8:
  _swift_release(lVar12);
  *unaff_x20 = lVar5;
  return;
}

