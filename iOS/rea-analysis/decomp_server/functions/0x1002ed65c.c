// rea decompile_all
// name: FUN_1002ed65c
// address: 0x1002ed65c
// body: available
// range: 0x1002ed65c-0x1002ed833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1002ed65c(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  long lVar9;
  ulong uVar10;
  ulong local_a8 [9];
  
  uVar8 = *unaff_x20;
  if ((uVar8 & 0xc000000000000001) == 0) {
    __ss6HasherV5_seedABSi_tcfC(local_a8,*(undefined8 *)(uVar8 + 0x28));
    lVar1 = _TtC9Alamofire7Request::id;
    uVar3 = 0;
    __s10Foundation4UUIDVMa(0);
    puVar4 = &DAT_100a82768;
    FUN_100005c90(&DAT_100a82768,PTR___s10Foundation4UUIDVMa_100996230,
                  PTR___s10Foundation4UUIDVSHAAMc_100996248);
    puVar5 = local_a8;
    __sSH4hash4intoys6HasherVz_tFTj(puVar5,uVar3,puVar4);
    __ss6HasherV9_finalizeSiyF();
    uVar7 = -1L << ((ulong)*(byte *)(uVar8 + 0x20) & 0x3f);
    uVar10 = (ulong)puVar5 & (uVar7 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar8 + 0x38 + (uVar10 >> 3 & 0xffffffffffffff8)) >> (uVar10 & 0x3f) & 1) != 0)
    {
      do {
        lVar2 = _TtC9Alamofire7Request::id;
        lVar9 = *(long *)(*(long *)(uVar8 + 0x30) + uVar10 * 8);
        _swift_retain(lVar9);
        uVar6 = lVar9 + lVar2;
        __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar6,param_1 + lVar1);
        _swift_release(lVar9);
        if ((uVar6 & 1) != 0) {
          uVar8 = *unaff_x20;
          _swift_isUniquelyReferenced_nonNull_native();
          local_a8[0] = *unaff_x20;
          if ((uVar8 & 1) == 0) {
            FUN_10034e88c();
          }
          uVar8 = *(ulong *)(*(long *)(local_a8[0] + 0x30) + uVar10 * 8);
          FUN_1002ed9dc(uVar10);
          *unaff_x20 = local_a8[0];
          return uVar8;
        }
        uVar10 = uVar10 + 1 & ~uVar7;
      } while ((*(ulong *)(uVar8 + 0x38 + (uVar10 >> 3 & 0xffffffffffffff8)) >> (uVar10 & 0x3f) & 1)
               != 0);
    }
  }
  else {
    uVar7 = uVar8 & 0xffffffffffffff8;
    if ((long)uVar8 < 0) {
      uVar7 = uVar8;
    }
    _swift_bridgeObjectRetain(uVar8);
    uVar10 = param_1;
    _swift_retain();
    __ss10__CocoaSetV8containsySbyXlF();
    _swift_release(param_1);
    if ((uVar10 & 1) != 0) {
      FUN_1002ed834(uVar7,param_1);
      _swift_bridgeObjectRelease(uVar8);
      return uVar7;
    }
    _swift_bridgeObjectRelease(uVar8);
  }
  return 0;
}

