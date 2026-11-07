// rea decompile_all
// name: FUN_10008286c
// address: 0x10008286c
// body: available
// range: 0x10008286c-0x1000829bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008286c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar11 = *unaff_x20;
  lVar12 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar12 = param_1;
  }
  puVar6 = &DAT_100104870;
  FUN_10000eb08(&DAT_100104870,&DAT_1000d51b8);
  lVar7 = lVar11;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar11,lVar12,0,puVar6);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_100082994:
    _swift_release(lVar11);
    *unaff_x20 = lVar7;
    return;
  }
  lVar12 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar13 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(lVar11 + 0x38);
  if (uVar13 == 0) goto LAB_100082924;
  do {
    uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar13 = uVar13 - 1 & uVar13;
    while( true ) {
      puVar9 = (undefined8 *)(*(long *)(lVar11 + 0x30) + (LZCOUNT(uVar8) | lVar12 << 6) * 0x18);
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uVar4 = *(undefined1 *)(puVar9 + 2);
      FUN_100066dec(uVar2,uVar3,uVar4);
      FUN_1000834cc(uVar2,uVar3,uVar4,lVar7);
      if (uVar13 != 0) break;
LAB_100082924:
      do {
        lVar1 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000829c0);
          (*pcVar5)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar1) goto LAB_100082994;
        uVar13 = ((ulong *)(lVar11 + 0x38))[lVar1];
        lVar12 = lVar12 + 1;
      } while (uVar13 == 0);
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar12 = lVar1;
    }
  } while( true );
}

