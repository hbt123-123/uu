// rea decompile_all
// name: FUN_10060485c
// address: 0x10060485c
// body: available
// range: 0x10060485c-0x100604a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10060485c(ulong *param_1,long param_2,undefined *param_3,undefined *param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_a8 [72];
  
  puVar7 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (param_3 != (undefined *)0x0) {
    if (*(undefined **)(param_4 + 0x10) == param_3) {
      _swift_retain(param_4);
      puVar7 = param_4;
    }
    else {
      FUN_100004bb4(param_5,param_6);
      puVar7 = param_3;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      if (param_2 < 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = *param_1;
      }
      lVar9 = 0;
      do {
        if (uVar12 == 0) {
          do {
            lVar14 = lVar9 + 1;
            if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100604a80);
              (*pcVar5)();
            }
            if (param_2 <= lVar14) {
              return puVar7;
            }
            uVar12 = param_1[lVar14];
            lVar9 = lVar9 + 1;
          } while (uVar12 == 0);
          uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar12 = uVar12 - 1 & uVar12;
        }
        else {
          uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar12 = uVar12 - 1 & uVar12;
          lVar14 = lVar9;
        }
        uVar8 = LZCOUNT(uVar8) | lVar14 << 6;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar8 * 0x10);
        uVar4 = *(uint *)(*(long *)(param_4 + 0x30) + uVar8 * 4);
        uVar13 = (ulong)uVar4;
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar7 + 0x28));
        __ss6HasherV8_combineyys6UInt32VF();
        __ss6HasherV9_finalizeSiyF();
        uVar11 = -1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
        uVar13 = uVar13 & (uVar11 ^ 0xffffffffffffffff);
        uVar10 = uVar13 >> 6;
        uVar8 = -1L << (uVar13 & 0x3f) &
                (*(ulong *)(puVar7 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar8 == 0) {
          bVar6 = false;
          uVar8 = 0x3f - uVar11 >> 6;
          do {
            uVar13 = uVar10 + 1;
            if ((uVar13 == uVar8) && (bVar6)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100604a84);
              (*pcVar5)();
            }
            uVar10 = 0;
            if (uVar13 != uVar8) {
              uVar10 = uVar13;
            }
            bVar6 = (bool)(uVar13 == uVar8 | bVar6);
          } while (*(ulong *)(puVar7 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
          uVar8 = ~*(ulong *)(puVar7 + uVar10 * 8 + 0x40);
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + uVar10 * 0x40;
        }
        else {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar13 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar7 + uVar10 + 0x40) =
             1L << (uVar8 & 0x3f) | *(ulong *)(puVar7 + uVar10 + 0x40);
        *(uint *)(*(long *)(puVar7 + 0x30) + uVar8 * 4) = uVar4;
        puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x38) + uVar8 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        bVar6 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100604a88);
          (*pcVar5)();
        }
        _swift_bridgeObjectRetain(uVar3);
        lVar9 = lVar14;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar7;
}

