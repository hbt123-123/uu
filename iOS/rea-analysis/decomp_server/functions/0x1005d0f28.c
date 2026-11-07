// rea decompile_all
// name: FUN_1005d0f28
// address: 0x1005d0f28
// body: available
// range: 0x1005d0f28-0x1005d112b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1005d0f28(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  
  puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (param_3 != (undefined *)0x0) {
    if (*(undefined **)(param_4 + 0x10) == param_3) {
      _swift_retain(param_4);
      puVar4 = param_4;
    }
    else {
      FUN_100004bb4(&DAT_100aadc68,&DAT_10083f228);
      puVar4 = param_3;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      if (param_2 < 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = *param_1;
      }
      lVar7 = 0;
      do {
        if (uVar12 == 0) {
          do {
            lVar11 = lVar7 + 1;
            if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1005d1124);
              (*pcVar2)();
            }
            if (param_2 <= lVar11) {
              return puVar4;
            }
            uVar12 = param_1[lVar11];
            lVar7 = lVar7 + 1;
          } while (uVar12 == 0);
          uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
          uVar12 = uVar12 - 1 & uVar12;
        }
        else {
          uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
          uVar12 = uVar12 - 1 & uVar12;
          lVar11 = lVar7;
        }
        uVar6 = LZCOUNT(uVar6) | lVar11 << 6;
        uVar1 = *(undefined4 *)(*(long *)(param_4 + 0x30) + uVar6 * 4);
        uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar6 * 8);
        uVar5 = *(ulong *)(puVar4 + 0x28);
        __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar5,uVar1,4);
        uVar9 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
        uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
        uVar8 = uVar5 >> 6;
        uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(puVar4 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff)
        ;
        if (uVar6 == 0) {
          bVar3 = false;
          uVar6 = 0x3f - uVar9 >> 6;
          do {
            uVar5 = uVar8 + 1;
            if ((uVar5 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1005d1128);
              (*pcVar2)();
            }
            uVar8 = 0;
            if (uVar5 != uVar6) {
              uVar8 = uVar5;
            }
            bVar3 = (bool)(uVar5 == uVar6 | bVar3);
          } while (*(ulong *)(puVar4 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
          uVar6 = ~*(ulong *)(puVar4 + uVar8 * 8 + 0x40);
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) + uVar8 * 0x40;
        }
        else {
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar4 + uVar8 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar4 + uVar8 + 0x40)
        ;
        *(undefined4 *)(*(long *)(puVar4 + 0x30) + uVar6 * 4) = uVar1;
        *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar6 * 8) = uVar10;
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
        bVar3 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005d112c);
          (*pcVar2)();
        }
        _swift_retain(uVar10);
        lVar7 = lVar11;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar4;
}

