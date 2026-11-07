// rea decompile_all
// name: FUN_1002bf818
// address: 0x1002bf818
// body: available
// range: 0x1002bf818-0x1002bfa9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1002bf818(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 auStack_170 [48];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar12 != (undefined *)0x0) {
    puVar6 = &DAT_100a83968;
    FUN_100004bb4(&DAT_100a83968,&DAT_100818150);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar12,puVar6);
    puVar6 = puVar12;
  }
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar6);
  _swift_bridgeObjectRetain(param_1);
  lVar8 = 0;
  while( true ) {
    while (uVar13 != 0) {
      uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      uVar9 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar8 << 6;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      local_98 = *puVar2;
      uVar7 = puVar2[1];
      uStack_90 = uVar7;
      FUN_10003e8bc(*(long *)(param_1 + 0x38) + uVar9 * 0x20,&local_88);
      uVar3 = uStack_90;
      uVar9 = local_98;
      uStack_c8 = uStack_90;
      local_d0 = local_98;
      uStack_b8 = uStack_80;
      uStack_c0 = local_88;
      uStack_a8 = uStack_70;
      local_b0 = local_78;
      FUN_10007f3d4(&uStack_c0,auStack_170);
      _swift_bridgeObjectRetain(uVar7);
      puVar12 = &DAT_100a83970;
      FUN_100004bb4(&DAT_100a83970,&DAT_100818490);
      _swift_dynamicCast(auStack_140,auStack_170,puVar12,PTR___sypN_100995e88 + 8,7);
      FUN_10007f3d4(auStack_140,auStack_110);
      FUN_10007f3d4(auStack_110,auStack_f0);
      FUN_10007f3d4(auStack_f0,auStack_120);
      uVar7 = uVar9;
      uVar10 = uVar3;
      FUN_1001a2c70();
      if ((uVar10 & 1) == 0) {
        if (*(ulong *)(puVar6 + 0x18) <= *(ulong *)(puVar6 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002bfa9c);
          (*pcVar4)();
        }
        uVar10 = uVar7 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar6 + uVar10 + 0x40) =
             *(ulong *)(puVar6 + uVar10 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
        *puVar2 = uVar9;
        puVar2[1] = uVar3;
        FUN_10007f3d4(auStack_120,*(long *)(puVar6 + 0x38) + uVar7 * 0x20);
        if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002bfaa0);
          (*pcVar4)();
        }
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      }
      else {
        puVar2 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
        uVar10 = puVar2[1];
        *puVar2 = uVar9;
        puVar2[1] = uVar3;
        _swift_bridgeObjectRelease(uVar10);
        lVar1 = *(long *)(puVar6 + 0x38) + uVar7 * 0x20;
        FUN_10003f094(lVar1);
        FUN_10007f3d4(auStack_120,lVar1);
      }
    }
    bVar5 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002bfa98);
      (*pcVar4)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar8) break;
    uVar13 = ((ulong *)(param_1 + 0x40))[lVar8];
  }
  _swift_release(puVar6);
  _swift_release(param_1);
  return puVar6;
}

