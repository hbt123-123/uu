// rea decompile_all
// name: FUN_100183774
// address: 0x100183774
// body: available
// range: 0x100183774-0x100183a43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100183774(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar11 != (undefined *)0x0) {
    puVar4 = &DAT_100a76378;
    FUN_100004bb4(&DAT_100a76378,&DAT_10080aba0);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar11,puVar4);
    puVar4 = puVar11;
  }
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar4);
  _swift_bridgeObjectRetain(param_1);
  lVar13 = 0;
  while( true ) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar13 << 6;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar6 * 0x10);
      local_98 = *puVar9;
      uVar1 = puVar9[1];
      uStack_90 = uVar1;
      FUN_10003e8bc(*(long *)(param_1 + 0x38) + uVar6 * 0x20,&local_88);
      uStack_c8 = uStack_90;
      local_d0 = local_98;
      uStack_b8 = uStack_80;
      uStack_c0 = local_88;
      uStack_a8 = uStack_70;
      local_b0 = local_78;
      local_f0 = local_98;
      uStack_e8 = uStack_90;
      _swift_bridgeObjectRetain(uVar1);
      _swift_dynamicCast(&local_190,&local_f0,PTR___sSSN_1009957f8,PTR___ss11AnyHashableVN_100995ad0
                         ,7);
      FUN_10007f3d4(&uStack_c0,auStack_168);
      uStack_138 = uStack_188;
      local_140 = local_190;
      uStack_128 = uStack_178;
      uStack_130 = local_180;
      local_120 = local_170;
      FUN_10007f3d4(auStack_168,auStack_118);
      uStack_188 = uStack_138;
      local_190 = local_140;
      uStack_178 = uStack_128;
      local_180 = uStack_130;
      local_170 = local_120;
      FUN_10007f3d4(auStack_118,&local_f0);
      FUN_10007f3d4(&local_f0,&local_140);
      uVar5 = *(ulong *)(puVar4 + 0x28);
      __ss11AnyHashableV13_rawHashValue4seedS2i_tF();
      uVar10 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
      uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar5 >> 6;
      uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(puVar4 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar6 == 0) {
        bVar3 = false;
        uVar6 = 0x3f - uVar10 >> 6;
        do {
          uVar5 = uVar7 + 1;
          if ((uVar5 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100183a44);
            (*pcVar2)();
          }
          uVar7 = 0;
          if (uVar5 != uVar6) {
            uVar7 = uVar5;
          }
          bVar3 = (bool)(uVar5 == uVar6 | bVar3);
        } while (*(ulong *)(puVar4 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
        uVar6 = ~*(ulong *)(puVar4 + uVar7 * 8 + 0x40);
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) + uVar7 * 0x40;
      }
      else {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar4 + uVar7 + 0x40);
      puVar9 = (undefined8 *)(*(long *)(puVar4 + 0x30) + uVar6 * 0x28);
      puVar9[1] = uStack_188;
      *puVar9 = local_190;
      puVar9[3] = uStack_178;
      puVar9[2] = local_180;
      puVar9[4] = local_170;
      FUN_10007f3d4(&local_140,*(long *)(puVar4 + 0x38) + uVar6 * 0x20);
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
    }
    bVar3 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100183a40);
      (*pcVar2)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar13) break;
    uVar12 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  _swift_release(puVar4);
  _swift_release(param_1);
  return puVar4;
}

