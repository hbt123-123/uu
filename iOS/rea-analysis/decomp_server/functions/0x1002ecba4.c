// rea decompile_all
// name: FUN_1002ecba4
// address: 0x1002ecba4
// body: available
// range: 0x1002ecba4-0x1002ece2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002ecba4(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_b8 [9];
  undefined8 *local_70;
  undefined8 *local_68;
  
  if (param_2 == (undefined8 *)0x0) {
    _swift_unknownObjectRelease();
    puVar5 = (undefined8 *)PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    FUN_100004bb4(&DAT_100a82408,&DAT_1008168e0);
    puVar5 = param_1;
    __ss18_DictionaryStorageC7convert_8capacityAByxq_Gs07__CocoaA0V_SitFZ();
    local_68 = puVar5;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    puVar6 = param_1;
    __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
    if (puVar6 != (undefined8 *)0x0) {
      uVar7 = 0;
      FUN_1002d4054(0);
      puVar2 = PTR___syXlN_100995e80;
      do {
        local_70 = puVar6;
        _swift_dynamicCast(local_b8,&local_70,puVar2 + 8,uVar7,7);
        uVar3 = local_b8[0];
        uVar9 = 0;
        local_70 = param_2;
        FUN_10004003c(0,&DAT_100a82760,&PTR__OBJC_CLASS___NSURLSessionTask_100a65a00);
        _swift_dynamicCast(local_b8,&local_70,puVar2 + 8,uVar9,7);
        uVar9 = local_b8[0];
        if ((ulong)puVar5[3] <= (ulong)puVar5[2]) {
          FUN_1002ec424(puVar5[2] + 1,1);
        }
        puVar5 = local_68;
        __ss6HasherV5_seedABSi_tcfC(local_b8,local_68[5]);
        param_2 = (undefined8 *)0x0;
        __s10Foundation4UUIDVMa();
        puVar8 = &DAT_100a82768;
        FUN_100005c90(&DAT_100a82768,PTR___s10Foundation4UUIDVMa_100996230,
                      PTR___s10Foundation4UUIDVSHAAMc_100996248);
        puVar6 = local_b8;
        __sSH4hash4intoys6HasherVz_tFTj(puVar6,param_2,puVar8);
        __ss6HasherV9_finalizeSiyF();
        uVar13 = -1L << ((ulong)*(byte *)(puVar5 + 4) & 0x3f);
        uVar12 = (ulong)puVar6 & (uVar13 ^ 0xffffffffffffffff);
        uVar10 = uVar12 >> 6;
        uVar11 = -1L << (uVar12 & 0x3f) & (puVar5[uVar10 + 8] ^ 0xffffffffffffffff);
        if (uVar11 == 0) {
          bVar1 = false;
          uVar11 = 0x3f - uVar13 >> 6;
          do {
            uVar12 = uVar10 + 1;
            if ((uVar12 == uVar11) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1002ece30);
              (*pcVar4)();
            }
            uVar10 = 0;
            if (uVar12 != uVar11) {
              uVar10 = uVar12;
            }
            bVar1 = (bool)(uVar12 == uVar11 | bVar1);
          } while (puVar5[uVar10 + 8] == 0xffffffffffffffff);
          uVar11 = ~puVar5[uVar10 + 8];
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + uVar10 * 0x40;
        }
        else {
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar12 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar11 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)puVar5 + uVar10 + 0x40) =
             1L << (uVar11 & 0x3f) | *(ulong *)((long)puVar5 + uVar10 + 0x40);
        *(undefined8 *)(puVar5[6] + uVar11 * 8) = uVar3;
        *(undefined8 *)(puVar5[7] + uVar11 * 8) = uVar9;
        puVar5[2] = puVar5[2] + 1;
        __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      } while (puVar6 != (undefined8 *)0x0);
    }
    _swift_release(param_1);
  }
  return puVar5;
}

