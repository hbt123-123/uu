// rea decompile_all
// name: FUN_10040a924
// address: 0x10040a924
// body: available
// range: 0x10040a924-0x10040ab77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10040a924(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  puVar9 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (param_3 != (undefined *)0x0) {
    if (*(undefined **)(param_4 + 0x10) == param_3) {
      _swift_retain(param_4);
      puVar9 = param_4;
    }
    else {
      FUN_100004bb4(&DAT_100a76380,&DAT_10080c1b0);
      puVar9 = param_3;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      if (param_2 < 1) {
        uVar17 = 0;
      }
      else {
        uVar17 = *param_1;
      }
      lVar12 = 0;
      do {
        if (uVar17 == 0) {
          do {
            lVar16 = lVar12 + 1;
            if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10040ab70);
              (*pcVar7)();
            }
            if (param_2 <= lVar16) {
              return puVar9;
            }
            uVar17 = param_1[lVar16];
            lVar12 = lVar12 + 1;
          } while (uVar17 == 0);
          uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          uVar17 = uVar17 - 1 & uVar17;
        }
        else {
          uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          uVar17 = uVar17 - 1 & uVar17;
          lVar16 = lVar12;
        }
        lVar12 = (LZCOUNT(uVar11) | lVar16 << 6) * 0x10;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + lVar12);
        puVar2 = (undefined8 *)(*(long *)(param_4 + 0x38) + lVar12);
        uVar3 = *puVar1;
        uVar5 = puVar1[1];
        uVar4 = *puVar2;
        uVar6 = puVar2[1];
        __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar9 + 0x28));
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        puVar10 = auStack_a8;
        __sSS4hash4intoys6HasherVz_tF(puVar10,uVar3,uVar5);
        __ss6HasherV9_finalizeSiyF();
        uVar15 = -1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
        uVar14 = (ulong)puVar10 & (uVar15 ^ 0xffffffffffffffff);
        uVar13 = uVar14 >> 6;
        uVar11 = -1L << (uVar14 & 0x3f) &
                 (*(ulong *)(puVar9 + uVar13 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar11 == 0) {
          bVar8 = false;
          uVar11 = 0x3f - uVar15 >> 6;
          do {
            uVar14 = uVar13 + 1;
            if ((uVar14 == uVar11) && (bVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10040ab74);
              (*pcVar7)();
            }
            uVar13 = 0;
            if (uVar14 != uVar11) {
              uVar13 = uVar14;
            }
            bVar8 = (bool)(uVar14 == uVar11 | bVar8);
          } while (*(ulong *)(puVar9 + uVar13 * 8 + 0x40) == 0xffffffffffffffff);
          uVar11 = ~*(ulong *)(puVar9 + uVar13 * 8 + 0x40);
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + uVar13 * 0x40;
        }
        else {
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar14 & 0x7fffffffffffffc0;
        }
        uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar9 + uVar13 + 0x40) =
             1L << (uVar11 & 0x3f) | *(ulong *)(puVar9 + uVar13 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar9 + 0x30) + uVar11 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(puVar9 + 0x38) + uVar11 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar6;
        *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
        bVar8 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10040ab78);
          (*pcVar7)();
        }
        lVar12 = lVar16;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar9;
}

