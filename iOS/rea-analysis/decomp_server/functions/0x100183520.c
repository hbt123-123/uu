// rea decompile_all
// name: FUN_100183520
// address: 0x100183520
// body: available
// range: 0x100183520-0x100183773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100183520(long param_1)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  puVar14 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar14 != (undefined *)0x0) {
    puVar8 = &DAT_100a76370;
    FUN_100004bb4(&DAT_100a76370,&DAT_100820960);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar14,puVar8);
    puVar8 = puVar14;
  }
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar13 < 0x40) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar8);
  _swift_bridgeObjectRetain(param_1);
  lVar10 = 0;
  while( true ) {
    while (uVar15 != 0) {
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      uVar11 = lVar10 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar11);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      local_f0 = *puVar3;
      uVar5 = puVar3[1];
      uStack_e8 = uVar5;
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_dynamicCast(auStack_d0,&local_f0,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,7);
      FUN_10007f3d4(auStack_d0,auStack_a0);
      FUN_10007f3d4(auStack_a0,auStack_80);
      FUN_10007f3d4(auStack_80,auStack_b0);
      uVar9 = uVar11;
      uVar12 = uVar4;
      FUN_1001a2c70();
      if ((uVar12 & 1) == 0) {
        if (*(ulong *)(puVar8 + 0x18) <= *(ulong *)(puVar8 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100183770);
          (*pcVar6)();
        }
        uVar12 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar8 + uVar12 + 0x40) =
             *(ulong *)(puVar8 + uVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar4;
        FUN_10007f3d4(auStack_b0,*(long *)(puVar8 + 0x38) + uVar9 * 0x20);
        if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100183774);
          (*pcVar6)();
        }
        *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      }
      else {
        puVar2 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
        uVar12 = puVar2[1];
        *puVar2 = uVar11;
        puVar2[1] = uVar4;
        _swift_bridgeObjectRelease(uVar12);
        lVar1 = *(long *)(puVar8 + 0x38) + uVar9 * 0x20;
        FUN_10003f094(lVar1);
        FUN_10007f3d4(auStack_b0,lVar1);
      }
    }
    bVar7 = SCARRY8(lVar10,1);
    lVar10 = lVar10 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10018376c);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar10) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar10];
  }
  _swift_release(puVar8);
  _swift_release(param_1);
  return puVar8;
}

