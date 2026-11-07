// rea decompile_all
// name: FUN_10034cf08
// address: 0x10034cf08
// body: available
// range: 0x10034cf08-0x10034d18f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10034cf08(ulong *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_b0 [9];
  ulong local_68;
  
  uVar10 = *unaff_x20;
  if ((uVar10 & 0xc000000000000001) == 0) {
    __ss6HasherV5_seedABSi_tcfC(local_b0,*(undefined8 *)(uVar10 + 0x28));
    lVar1 = _TtC9Alamofire7Request::id;
    uVar4 = 0;
    __s10Foundation4UUIDVMa(0);
    puVar5 = &DAT_100a82768;
    FUN_100005c90(&DAT_100a82768,PTR___s10Foundation4UUIDVMa_100996230,
                  PTR___s10Foundation4UUIDVSHAAMc_100996248);
    puVar6 = local_b0;
    __sSH4hash4intoys6HasherVz_tFTj(puVar6,uVar4,puVar5);
    __ss6HasherV9_finalizeSiyF();
    uVar8 = -1L << ((ulong)*(byte *)(uVar10 + 0x20) & 0x3f);
    uVar11 = (ulong)puVar6 & (uVar8 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar10 + 0x38 + (uVar11 >> 3 & 0xffffffffffffff8)) >> (uVar11 & 0x3f) & 1) != 0)
    {
      do {
        lVar2 = _TtC9Alamofire7Request::id;
        lVar9 = *(long *)(*(long *)(uVar10 + 0x30) + uVar11 * 8);
        _swift_retain(lVar9);
        uVar7 = lVar9 + lVar2;
        __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar7,param_2 + lVar1);
        _swift_release(lVar9);
        if ((uVar7 & 1) != 0) {
          _swift_release(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar10 + 0x30) + uVar11 * 8);
          _swift_retain();
          return 0;
        }
        uVar11 = uVar11 + 1 & ~uVar8;
      } while ((*(ulong *)(uVar10 + 0x38 + (uVar11 >> 3 & 0xffffffffffffff8)) >> (uVar11 & 0x3f) & 1
               ) != 0);
    }
    _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
    local_b0[0] = *unaff_x20;
    _swift_retain(param_2);
    FUN_10034dc54();
    *unaff_x20 = local_b0[0];
    *param_1 = param_2;
  }
  else {
    uVar8 = uVar10 & 0xffffffffffffff8;
    if ((long)uVar10 < 0) {
      uVar8 = uVar10;
    }
    _swift_retain(param_2);
    _swift_bridgeObjectRetain(uVar10);
    uVar11 = param_2;
    __ss10__CocoaSetV6member3foryXlSgyXl_tF(param_2,uVar8);
    _swift_release(param_2);
    if (uVar11 != 0) {
      _swift_bridgeObjectRelease(uVar10);
      _swift_release(param_2);
      uVar4 = 0;
      local_68 = uVar11;
      FUN_1002d4054(0);
      _swift_dynamicCast(local_b0,&local_68,PTR___syXlN_100995e80 + 8,uVar4,7);
      *param_1 = local_b0[0];
      return 0;
    }
    uVar11 = uVar8;
    __ss10__CocoaSetV5countSivg();
    if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10034d190);
      (*pcVar3)();
    }
    FUN_1002ed33c(uVar8,uVar11 + 1);
    uVar11 = *(ulong *)(uVar8 + 0x10);
    local_b0[0] = uVar8;
    if (uVar11 < *(ulong *)(uVar8 + 0x18)) {
      _swift_retain(param_2);
    }
    else {
      _swift_retain(param_2);
      FUN_10034f360(uVar11 + 1);
      uVar8 = local_b0[0];
    }
    FUN_1002ed580(param_2,uVar8);
    _swift_bridgeObjectRelease(uVar10);
    *unaff_x20 = uVar8;
    *param_1 = param_2;
  }
  return 1;
}

