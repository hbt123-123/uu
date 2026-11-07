// rea decompile_all
// name: FUN_1002ec96c
// address: 0x1002ec96c
// body: available
// range: 0x1002ec96c-0x1002ecba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 **** FUN_1002ec96c(undefined8 ****param_1,undefined8 *****param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 ****local_78;
  undefined8 *local_70;
  undefined8 ***local_68;
  
  if (param_2 == (undefined8 *****)0x0) {
    _swift_unknownObjectRelease();
    ppppuVar6 = (undefined8 ****)PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    FUN_100004bb4(&DAT_100a82410,&DAT_100818f80);
    ppppuVar6 = param_1;
    __ss18_DictionaryStorageC7convert_8capacityAByxq_Gs07__CocoaA0V_SitFZ();
    local_68 = ppppuVar6;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    ppppuVar8 = param_1;
    __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
    if (ppppuVar8 != (undefined8 ****)0x0) {
      uVar7 = 0;
      FUN_10004003c(0,&DAT_100a82760,&PTR__OBJC_CLASS___NSURLSessionTask_100a65a00);
      puVar2 = PTR___syXlN_100995e80;
      do {
        local_78 = ppppuVar8;
        _swift_dynamicCast(&local_70,&local_78,puVar2 + 8,uVar7,7);
        puVar3 = local_70;
        uVar9 = 0;
        local_78 = param_2;
        FUN_1002d4054(0);
        param_2 = &local_78;
        _swift_dynamicCast(&local_70,param_2,puVar2 + 8,uVar9,7);
        puVar4 = local_70;
        if (ppppuVar6[3] <= ppppuVar6[2]) {
          param_2 = (undefined8 *****)0x1;
          FUN_1002ec1b4((long)ppppuVar6[2] + 1);
        }
        ppppuVar6 = (undefined8 ****)local_68;
        ppppuVar8 = (undefined8 ****)local_68[5];
        __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
        uVar13 = -1L << ((ulong)*(byte *)(ppppuVar6 + 4) & 0x3f);
        uVar12 = (ulong)ppppuVar8 & (uVar13 ^ 0xffffffffffffffff);
        uVar10 = uVar12 >> 6;
        uVar11 = -1L << (uVar12 & 0x3f) & ((ulong)ppppuVar6[uVar10 + 8] ^ 0xffffffffffffffff);
        if (uVar11 == 0) {
          bVar1 = false;
          uVar11 = 0x3f - uVar13 >> 6;
          do {
            uVar12 = uVar10 + 1;
            if ((uVar12 == uVar11) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1002ecba4);
              (*pcVar5)();
            }
            uVar10 = 0;
            if (uVar12 != uVar11) {
              uVar10 = uVar12;
            }
            bVar1 = (bool)(uVar12 == uVar11 | bVar1);
          } while (ppppuVar6[uVar10 + 8] == (undefined8 ***)0xffffffffffffffff);
          uVar11 = ~(ulong)ppppuVar6[uVar10 + 8];
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
        *(ulong *)((long)ppppuVar6 + uVar10 + 0x40) =
             1L << (uVar11 & 0x3f) | *(ulong *)((long)ppppuVar6 + uVar10 + 0x40);
        ppppuVar6[6][uVar11] = (undefined8 **)puVar3;
        ppppuVar6[7][uVar11] = (undefined8 **)puVar4;
        ppppuVar6[2] = (undefined8 ***)((long)ppppuVar6[2] + 1);
        __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      } while (ppppuVar8 != (undefined8 ****)0x0);
    }
    _swift_release(param_1);
  }
  return ppppuVar6;
}

