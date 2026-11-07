// rea decompile_all
// name: FUN_100233230
// address: 0x100233230
// body: available
// range: 0x100233230-0x100233473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100233230(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 local_e8 [3];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar12 != (undefined *)0x0) {
    puVar7 = &DAT_100a7f1e0;
    FUN_100004bb4(&DAT_100a7f1e0,&DAT_100813d58);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar12,puVar7);
    puVar7 = puVar12;
  }
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar7);
  _swift_bridgeObjectRetain(param_1);
  lVar8 = 0;
  while( true ) {
    while (uVar13 != 0) {
      uVar4 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      uVar9 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | lVar8 << 6;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uVar4 = *puVar2;
      uVar3 = puVar2[1];
      local_e8[0] = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 8);
      _swift_bridgeObjectRetain(uVar3);
      _swift_dynamicCast(auStack_d0,local_e8,PTR___sSiN_100995968,PTR___sypN_100995e88 + 8,7);
      FUN_10007f3d4(auStack_d0,auStack_a0);
      FUN_10007f3d4(auStack_a0,auStack_80);
      FUN_10007f3d4(auStack_80,auStack_b0);
      uVar9 = uVar4;
      uVar10 = uVar3;
      FUN_1001a2c70();
      if ((uVar10 & 1) == 0) {
        if (*(ulong *)(puVar7 + 0x18) <= *(ulong *)(puVar7 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100233470);
          (*pcVar5)();
        }
        uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar7 + uVar10 + 0x40) =
             *(ulong *)(puVar7 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar3;
        FUN_10007f3d4(auStack_b0,*(long *)(puVar7 + 0x38) + uVar9 * 0x20);
        if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100233474);
          (*pcVar5)();
        }
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      }
      else {
        puVar2 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar9 * 0x10);
        uVar10 = puVar2[1];
        *puVar2 = uVar4;
        puVar2[1] = uVar3;
        _swift_bridgeObjectRelease(uVar10);
        lVar1 = *(long *)(puVar7 + 0x38) + uVar9 * 0x20;
        FUN_10003f094(lVar1);
        FUN_10007f3d4(auStack_b0,lVar1);
      }
    }
    bVar6 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10023346c);
      (*pcVar5)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar8) break;
    uVar13 = ((ulong *)(param_1 + 0x40))[lVar8];
  }
  _swift_release(puVar7);
  _swift_release(param_1);
  return puVar7;
}

