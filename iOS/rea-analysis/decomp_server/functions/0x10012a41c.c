// rea decompile_all
// name: FUN_10012a41c
// address: 0x10012a41c
// body: available
// range: 0x10012a41c-0x10012a627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10012a41c(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar5 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (param_3 != (undefined *)0x0) {
    if (*(undefined **)(param_4 + 0x10) == param_3) {
      _swift_retain(param_4);
      puVar5 = param_4;
    }
    else {
      FUN_100004bb4(&DAT_100a761a8,&DAT_10080c1e0);
      puVar5 = param_3;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      if (param_2 < 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = *param_1;
      }
      lVar8 = 0;
      do {
        if (uVar12 == 0) {
          do {
            lVar11 = lVar8 + 1;
            if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10012a620);
              (*pcVar3)();
            }
            if (param_2 <= lVar11) {
              return puVar5;
            }
            uVar12 = param_1[lVar11];
            lVar8 = lVar8 + 1;
          } while (uVar12 == 0);
          uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
          uVar12 = uVar12 - 1 & uVar12;
        }
        else {
          uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
          uVar12 = uVar12 - 1 & uVar12;
          lVar11 = lVar8;
        }
        uVar7 = LZCOUNT(uVar7) | lVar11 << 6;
        uVar1 = *(undefined4 *)(*(long *)(param_4 + 0x30) + uVar7 * 4);
        puVar2 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar7 * 0x10);
        uVar14 = puVar2[1];
        uVar13 = *puVar2;
        uVar6 = *(ulong *)(puVar5 + 0x28);
        __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar6,uVar1,4);
        uVar10 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
        uVar9 = uVar6 >> 6;
        uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff)
        ;
        if (uVar7 == 0) {
          bVar4 = false;
          uVar7 = 0x3f - uVar10 >> 6;
          do {
            uVar6 = uVar9 + 1;
            if ((uVar6 == uVar7) && (bVar4)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10012a624);
              (*pcVar3)();
            }
            uVar9 = 0;
            if (uVar6 != uVar7) {
              uVar9 = uVar6;
            }
            bVar4 = (bool)(uVar6 == uVar7 | bVar4);
          } while (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
          uVar7 = ~*(ulong *)(puVar5 + uVar9 * 8 + 0x40);
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) + uVar9 * 0x40;
        }
        else {
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
        }
        uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar9 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(puVar5 + uVar9 + 0x40)
        ;
        *(undefined4 *)(*(long *)(puVar5 + 0x30) + uVar7 * 4) = uVar1;
        puVar2 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar7 * 0x10);
        puVar2[1] = uVar14;
        *puVar2 = uVar13;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        bVar4 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10012a628);
          (*pcVar3)();
        }
        lVar8 = lVar11;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar5;
}

