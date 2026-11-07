// rea decompile_all
// name: FUN_100081c7c
// address: 0x100081c7c
// body: available
// range: 0x100081c7c-0x100081e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100081c7c(undefined *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *local_b8 [9];
  undefined *local_70;
  undefined *local_68;
  
  if (param_2 == 0) {
    _swift_unknownObjectRelease();
    puVar4 = PTR___swiftEmptySetSingleton_1000f0750;
  }
  else {
    FUN_10000eb08(&DAT_100104860,&DAT_1000d51a8);
    puVar4 = param_1;
    __ss11_SetStorageC7convert_8capacityAByxGs07__CocoaA0V_SitFZ(param_1,param_2);
    local_68 = puVar4;
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    puVar5 = param_1;
    __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
    puVar2 = PTR___syXlN_1000f0720;
    if (puVar5 != (undefined *)0x0) {
      do {
        puVar6 = &DAT_100104458;
        local_70 = puVar5;
        FUN_10000eb08(&DAT_100104458,&DAT_1000d48f0);
        _swift_dynamicCast(local_b8,&local_70,puVar2 + 8,puVar6,7);
        puVar6 = local_b8[0];
        if (*(ulong *)(puVar4 + 0x18) <= *(ulong *)(puVar4 + 0x10)) {
          FUN_100083280(*(ulong *)(puVar4 + 0x10) + 1);
          puVar4 = local_68;
        }
        __ss6HasherV5_seedABSi_tcfC(local_b8,*(undefined8 *)(puVar4 + 0x28));
        puVar5 = puVar6;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar10 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
        uVar9 = (ulong)puVar5 & (uVar10 ^ 0xffffffffffffffff);
        uVar7 = uVar9 >> 6;
        uVar8 = -1L << (uVar9 & 0x3f) & (*(ulong *)(puVar4 + uVar7 * 8 + 0x38) ^ 0xffffffffffffffff)
        ;
        if (uVar8 == 0) {
          bVar1 = false;
          uVar8 = 0x3f - uVar10 >> 6;
          do {
            uVar9 = uVar7 + 1;
            if ((uVar9 == uVar8) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100081e84);
              (*pcVar3)();
            }
            uVar7 = 0;
            if (uVar9 != uVar8) {
              uVar7 = uVar9;
            }
            bVar1 = (bool)(uVar9 == uVar8 | bVar1);
          } while (*(ulong *)(puVar4 + uVar7 * 8 + 0x38) == 0xffffffffffffffff);
          uVar8 = ~*(ulong *)(puVar4 + uVar7 * 8 + 0x38);
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + uVar7 * 0x40;
        }
        else {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar9 & 0x7fffffffffffffc0;
        }
        uVar7 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar4 + uVar7 + 0x38) = 1L << (uVar8 & 0x3f) | *(ulong *)(puVar4 + uVar7 + 0x38)
        ;
        *(undefined **)(*(long *)(puVar4 + 0x30) + uVar8 * 8) = puVar6;
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
        __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      } while (puVar5 != (undefined *)0x0);
    }
    _swift_release(param_1);
  }
  return puVar4;
}

