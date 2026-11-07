// rea decompile_all
// name: FUN_10034757c
// address: 0x10034757c
// body: available
// range: 0x10034757c-0x1003477eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10034757c(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 auStack_a8 [72];
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar12 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar12 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar4 = PTR___swiftEmptySetSingleton_100995eb0;
  if (puVar12 != (undefined *)0x0) {
    puVar4 = &DAT_100a84690;
    FUN_100004bb4(&DAT_100a84690,&DAT_100818fa0);
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ(puVar12,puVar4);
    puVar4 = puVar12;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar12 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar12 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar12 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003477ec);
          (*pcVar3)();
        }
        puVar16 = *(undefined **)(param_1 + (long)puVar15 * 8 + 0x20);
        _swift_retain(puVar16);
      }
      else {
        puVar16 = puVar15;
        FUN_1002d390c(puVar15,param_1);
      }
      if (SCARRY8((long)puVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003477e4);
        (*pcVar3)();
      }
      puVar15 = puVar15 + 1;
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar4 + 0x28));
      lVar1 = _TtC9Alamofire7Request::id;
      uVar5 = 0;
      __s10Foundation4UUIDVMa(0);
      puVar6 = &DAT_100a82768;
      FUN_100005c90(&DAT_100a82768,PTR___s10Foundation4UUIDVMa_100996230,
                    PTR___s10Foundation4UUIDVSHAAMc_100996248);
      puVar7 = auStack_a8;
      __sSH4hash4intoys6HasherVz_tFTj(puVar7,uVar5,puVar6);
      __ss6HasherV9_finalizeSiyF();
      uVar11 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
      uVar14 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
      uVar8 = uVar14 >> 6;
      uVar9 = *(ulong *)(puVar4 + uVar8 * 8 + 0x38);
      uVar10 = 1L << (uVar14 & 0x3f);
      if ((uVar10 & uVar9) != 0) {
        do {
          lVar2 = _TtC9Alamofire7Request::id;
          lVar13 = *(long *)(*(long *)(puVar4 + 0x30) + uVar14 * 8);
          _swift_retain(lVar13);
          uVar8 = lVar13 + lVar2;
          __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar8,puVar16 + lVar1);
          _swift_release(lVar13);
          if ((uVar8 & 1) != 0) {
            _swift_release(puVar16);
            goto joined_r0x000100347670;
          }
          uVar14 = uVar14 + 1 & ~uVar11;
          uVar8 = uVar14 >> 6;
          uVar9 = *(ulong *)(puVar4 + uVar8 * 8 + 0x38);
          uVar10 = 1L << (uVar14 & 0x3f);
        } while ((uVar10 & uVar9) != 0);
      }
      *(ulong *)(puVar4 + uVar8 * 8 + 0x38) = uVar10 | uVar9;
      *(undefined **)(*(long *)(puVar4 + 0x30) + uVar14 * 8) = puVar16;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003477e8);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
joined_r0x000100347670:
    } while (puVar15 != puVar12);
  }
  return puVar4;
}

