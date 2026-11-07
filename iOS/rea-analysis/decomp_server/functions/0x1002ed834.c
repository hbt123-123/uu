// rea decompile_all
// name: FUN_1002ed834
// address: 0x1002ed834
// body: available
// range: 0x1002ed834-0x1002ed9db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1002ed834(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_b0 [72];
  long local_68;
  
  puVar5 = auStack_b0;
  _swift_bridgeObjectRelease(*unaff_x20);
  __ss10__CocoaSetV5countSivg(param_1);
  _swift_unknownObjectRetain();
  FUN_1002ed33c();
  local_68 = param_1;
  __ss6HasherV5_seedABSi_tcfC(auStack_b0,*(undefined8 *)(param_1 + 0x28));
  lVar1 = _TtC9Alamofire7Request::id;
  uVar3 = 0;
  __s10Foundation4UUIDVMa(0);
  puVar4 = &DAT_100a82768;
  FUN_100005c90(&DAT_100a82768,PTR___s10Foundation4UUIDVMa_100996230,
                PTR___s10Foundation4UUIDVSHAAMc_100996248);
  _swift_retain(param_1);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_b0,uVar3,puVar4);
  __ss6HasherV9_finalizeSiyF();
  uVar7 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar10 = (ulong)puVar5 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_1 + 0x38 + (uVar10 >> 3 & 0xffffffffffffff8)) >> (uVar10 & 0x3f) & 1) != 0)
  {
    do {
      lVar9 = _TtC9Alamofire7Request::id;
      lVar8 = *(long *)(*(long *)(param_1 + 0x30) + uVar10 * 8);
      _swift_retain(lVar8);
      uVar6 = lVar8 + lVar9;
      __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar6,param_2 + lVar1);
      _swift_release(lVar8);
      if ((uVar6 & 1) != 0) {
        _swift_release(param_1);
        lVar9 = *(long *)(*(long *)(local_68 + 0x30) + uVar10 * 8);
        FUN_1002ed9dc(uVar10);
        uVar7 = param_2 + lVar1;
        __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar7,lVar9 + _TtC9Alamofire7Request::id);
        if ((uVar7 & 1) != 0) {
          *unaff_x20 = local_68;
          return lVar9;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ed9dc);
        (*pcVar2)();
      }
      uVar10 = uVar10 + 1 & ~uVar7;
    } while ((*(ulong *)(param_1 + 0x38 + (uVar10 >> 3 & 0xffffffffffffff8)) >> (uVar10 & 0x3f) & 1)
             != 0);
  }
  _swift_release(param_1);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ed978);
  (*pcVar2)();
}

