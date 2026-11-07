// rea decompile_all
// name: FUN_1002bb634
// address: 0x1002bb634
// body: available
// range: 0x1002bb634-0x1002bb89f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bb634(long param_1,ulong *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar13 < 0x40) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  lVar16 = 0;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar12 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = lVar16 << 10 | LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) << 4;
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar12);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar12);
      lVar3 = *plVar1;
      uVar12 = plVar1[1];
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      uVar14 = *param_2;
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar5);
      lVar8 = lVar3;
      uVar9 = uVar12;
      FUN_1002bbc2c(lVar3,uVar12,uVar14);
      if ((uVar9 & 1) == 0) {
        puVar10 = &DAT_100a833e8;
        FUN_100004bb4(&DAT_100a833e8,&DAT_1008178c0);
        _swift_initStackObject();
        *(undefined8 *)(puVar10 + 0x18) = 2;
        *(undefined8 *)(puVar10 + 0x10) = 1;
        *(long *)(puVar10 + 0x20) = lVar3;
        *(ulong *)(puVar10 + 0x28) = uVar12;
        *(undefined8 *)(puVar10 + 0x30) = uVar4;
        *(undefined8 *)(puVar10 + 0x38) = uVar5;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1002bb8a0);
          (*pcVar6)();
        }
        _swift_bridgeObjectRetain(uVar12);
        _swift_bridgeObjectRetain(uVar5);
        FUN_1002c0f64(lVar8,lVar8 + 1,puVar10);
        _swift_setDeallocating(puVar10);
        _swift_arrayDestroy(puVar10 + 0x20,*(undefined8 *)(puVar10 + 0x10),&DAT_1009ad080);
      }
      else {
        _swift_bridgeObjectRetain(uVar12);
        _swift_bridgeObjectRetain(uVar5);
        uVar9 = uVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar11 = uVar14;
        if ((uVar9 & 1) == 0) {
          uVar11 = 0;
          FUN_1002966ec(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
        }
        uVar9 = *(ulong *)(uVar11 + 0x10);
        uVar14 = uVar11;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar9) {
          uVar14 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_1002966ec(uVar14,uVar9 + 1,1,uVar11);
        }
        *(ulong *)(uVar14 + 0x10) = uVar9 + 1;
        lVar8 = uVar14 + uVar9 * 0x20;
        *(long *)(lVar8 + 0x20) = lVar3;
        *(ulong *)(lVar8 + 0x28) = uVar12;
        *(undefined8 *)(lVar8 + 0x30) = uVar4;
        *(undefined8 *)(lVar8 + 0x38) = uVar5;
        *param_2 = uVar14;
      }
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(uVar12);
    }
    bVar7 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1002bb89c);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar16) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar16];
  }
  _swift_release(param_1);
  return;
}

