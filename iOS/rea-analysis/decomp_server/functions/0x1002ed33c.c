// rea decompile_all
// name: FUN_1002ed33c
// address: 0x1002ed33c
// body: available
// range: 0x1002ed33c-0x1002ed57f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002ed33c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_b8 [9];
  undefined8 *local_70;
  undefined8 *local_68;
  
  if (param_2 == 0) {
    _swift_unknownObjectRelease();
    puVar5 = (undefined8 *)PTR___swiftEmptySetSingleton_100995eb0;
  }
  else {
    FUN_100004bb4(&DAT_100a84690,&DAT_100818fa0);
    puVar5 = param_1;
    __ss11_SetStorageC7convert_8capacityAByxGs07__CocoaA0V_SitFZ(param_1,param_2);
    local_68 = puVar5;
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    puVar6 = param_1;
    __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
    if (puVar6 != (undefined8 *)0x0) {
      uVar7 = 0;
      FUN_1002d4054(0);
      puVar2 = PTR___s10Foundation4UUIDVSHAAMc_100996248;
      do {
        local_70 = puVar6;
        _swift_dynamicCast(local_b8,&local_70,PTR___syXlN_100995e80 + 8,uVar7,7);
        uVar3 = local_b8[0];
        if ((ulong)puVar5[3] <= (ulong)puVar5[2]) {
          FUN_10034f360(puVar5[2] + 1);
        }
        puVar5 = local_68;
        __ss6HasherV5_seedABSi_tcfC(local_b8,local_68[5]);
        uVar8 = 0;
        __s10Foundation4UUIDVMa(0);
        puVar9 = &DAT_100a82768;
        FUN_100005c90(&DAT_100a82768,PTR___s10Foundation4UUIDVMa_100996230,puVar2);
        puVar6 = local_b8;
        __sSH4hash4intoys6HasherVz_tFTj(puVar6,uVar8,puVar9);
        __ss6HasherV9_finalizeSiyF();
        uVar13 = -1L << ((ulong)*(byte *)(puVar5 + 4) & 0x3f);
        uVar12 = (ulong)puVar6 & (uVar13 ^ 0xffffffffffffffff);
        uVar10 = uVar12 >> 6;
        uVar11 = -1L << (uVar12 & 0x3f) & (puVar5[uVar10 + 7] ^ 0xffffffffffffffff);
        if (uVar11 == 0) {
          bVar1 = false;
          uVar11 = 0x3f - uVar13 >> 6;
          do {
            uVar12 = uVar10 + 1;
            if ((uVar12 == uVar11) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1002ed580);
              (*pcVar4)();
            }
            uVar10 = 0;
            if (uVar12 != uVar11) {
              uVar10 = uVar12;
            }
            bVar1 = (bool)(uVar12 == uVar11 | bVar1);
          } while (puVar5[uVar10 + 7] == 0xffffffffffffffff);
          uVar11 = ~puVar5[uVar10 + 7];
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
        *(ulong *)((long)puVar5 + uVar10 + 0x38) =
             1L << (uVar11 & 0x3f) | *(ulong *)((long)puVar5 + uVar10 + 0x38);
        *(undefined8 *)(puVar5[6] + uVar11 * 8) = uVar3;
        puVar5[2] = puVar5[2] + 1;
        __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      } while (puVar6 != (undefined8 *)0x0);
    }
    _swift_release(param_1);
  }
  return puVar5;
}

