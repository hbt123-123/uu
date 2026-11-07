// rea decompile_all
// name: FUN_1007d45f4
// address: 0x1007d45f4
// body: available
// range: 0x1007d45f4-0x1007d4863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1007d45f4(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  puVar7 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (param_3 != (undefined *)0x0) {
    if (*(undefined **)(param_4 + 0x10) == param_3) {
      _swift_retain(param_4);
      puVar7 = param_4;
    }
    else {
      FUN_1007b4550(&DAT_100abc7d0);
      puVar7 = param_3;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      if (param_2 < 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = *param_1;
      }
      lVar14 = 0;
      do {
        if (uVar13 == 0) {
          lVar15 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007d4864);
            (*pcVar4)();
          }
          if (param_2 <= lVar15) {
            return puVar7;
          }
          uVar13 = param_1[lVar15];
          if (uVar13 == 0) {
            lVar15 = lVar14 + 2;
            if (param_2 <= lVar15) {
              return puVar7;
            }
            uVar13 = param_1[lVar15];
            if (uVar13 == 0) {
              lVar15 = lVar14 + 3;
              if (param_2 <= lVar15) {
                return puVar7;
              }
              while (uVar13 = param_1[lVar15], uVar13 == 0) {
                lVar15 = lVar15 + 1;
                if (param_2 == lVar15) {
                  return puVar7;
                }
              }
            }
          }
          uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar13 = uVar13 - 1 & uVar13;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + lVar15 * 0x40;
        }
        else {
          uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar13 = uVar13 - 1 & uVar13;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar14 << 6;
          lVar15 = lVar14;
        }
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar9 * 0x10);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        FUN_10003e8bc(*(long *)(param_4 + 0x38) + uVar9 * 0x20,auStack_80);
        __ss6HasherV5_seedABSi_tcfC(auStack_c8,*(undefined8 *)(puVar7 + 0x28));
        _swift_bridgeObjectRetain(uVar3);
        puVar8 = auStack_c8;
        __sSS4hash4intoys6HasherVz_tF(puVar8,uVar2,uVar3);
        __ss6HasherV9_finalizeSiyF();
        uVar11 = -1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
        uVar10 = (ulong)puVar8 & (uVar11 ^ 0xffffffffffffffff);
        uVar9 = uVar10 >> 6;
        uVar12 = -1L << (uVar10 & 0x3f) &
                 (*(ulong *)(puVar7 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar12 == 0) {
          bVar5 = false;
          uVar12 = 0x3f - uVar11 >> 6;
          do {
            uVar9 = uVar9 + 1;
            if ((uVar9 == uVar12) && (bVar5)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1007d485c);
              (*pcVar4)();
            }
            bVar6 = uVar9 == uVar12;
            if (bVar6) {
              uVar9 = 0;
            }
            bVar5 = (bool)(bVar6 | bVar5);
          } while (*(ulong *)(puVar7 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
          uVar12 = ~*(ulong *)(puVar7 + uVar9 * 8 + 0x40);
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) + uVar9 * 0x40;
        }
        else {
          uVar9 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar12 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar7 + uVar12 + 0x40) =
             1L << (uVar9 & 0x3f) | *(ulong *)(puVar7 + uVar12 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x30) + uVar9 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        FUN_10007f3d4(auStack_80,*(long *)(puVar7 + 0x38) + uVar9 * 0x20);
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        bVar5 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007d4860);
          (*pcVar4)();
        }
        lVar14 = lVar15;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar7;
}

