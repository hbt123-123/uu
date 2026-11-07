// rea decompile_all
// name: FUN_1002bf548
// address: 0x1002bf548
// body: available
// range: 0x1002bf548-0x1002bf817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1002bf548(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  
  puVar13 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar13 != (undefined *)0x0) {
    puVar6 = &DAT_100a82418;
    FUN_100004bb4(&DAT_100a82418,&DAT_1008168f0);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar13,puVar6);
    puVar6 = puVar13;
  }
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar6);
  _swift_bridgeObjectRetain(param_1);
  puVar13 = PTR___sSSN_1009957f8;
  lVar14 = 0;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = lVar14 << 10 | LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) << 4;
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar8);
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar8);
      local_88 = *puVar11;
      uStack_80 = puVar11[1];
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
      _swift_dynamicCast(&local_120,&local_88,puVar13,PTR___ss11AnyHashableVN_100995ad0,7);
      local_130 = uVar2;
      uStack_128 = uVar3;
      _swift_dynamicCast(auStack_f8,&local_130,puVar13,PTR___sypN_100995e88 + 8,7);
      uStack_c8 = uStack_118;
      local_d0 = local_120;
      uStack_b8 = uStack_108;
      uStack_c0 = local_110;
      local_b0 = local_100;
      FUN_10007f3d4(auStack_f8,auStack_a8);
      uStack_118 = uStack_c8;
      local_120 = local_d0;
      uStack_108 = uStack_b8;
      local_110 = uStack_c0;
      local_100 = local_b0;
      FUN_10007f3d4(auStack_a8,&local_88);
      FUN_10007f3d4(&local_88,&local_d0);
      uVar7 = *(ulong *)(puVar6 + 0x28);
      __ss11AnyHashableV13_rawHashValue4seedS2i_tF();
      uVar12 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
      uVar7 = uVar7 & (uVar12 ^ 0xffffffffffffffff);
      uVar9 = uVar7 >> 6;
      uVar8 = -1L << (uVar7 & 0x3f) & (*(ulong *)(puVar6 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar8 == 0) {
        bVar5 = false;
        uVar8 = 0x3f - uVar12 >> 6;
        do {
          uVar7 = uVar9 + 1;
          if ((uVar7 == uVar8) && (bVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002bf818);
            (*pcVar4)();
          }
          uVar9 = 0;
          if (uVar7 != uVar8) {
            uVar9 = uVar7;
          }
          bVar5 = (bool)(uVar7 == uVar8 | bVar5);
        } while (*(ulong *)(puVar6 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
        uVar8 = ~*(ulong *)(puVar6 + uVar9 * 8 + 0x40);
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + uVar9 * 0x40;
      }
      else {
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar7 & 0x7fffffffffffffc0;
      }
      uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar9 + 0x40) = 1L << (uVar8 & 0x3f) | *(ulong *)(puVar6 + uVar9 + 0x40);
      puVar11 = (undefined8 *)(*(long *)(puVar6 + 0x30) + uVar8 * 0x28);
      puVar11[1] = uStack_118;
      *puVar11 = local_120;
      puVar11[3] = uStack_108;
      puVar11[2] = local_110;
      puVar11[4] = local_100;
      FUN_10007f3d4(&local_d0,*(long *)(puVar6 + 0x38) + uVar8 * 0x20);
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
    }
    bVar5 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002bf814);
      (*pcVar4)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar14) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
  _swift_release(puVar6);
  _swift_release(param_1);
  return puVar6;
}

