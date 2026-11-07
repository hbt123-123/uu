// rea decompile_all
// name: FUN_1003d1ec0
// address: 0x1003d1ec0
// body: available
// range: 0x1003d1ec0-0x1003d23e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d2214 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003d2064) */
/* WARNING: Removing unreachable block (ram,0x0001003d23cc) */
/* WARNING: Removing unreachable block (ram,0x0001003d20bc) */
/* WARNING: Removing unreachable block (ram,0x0001003d20e4) */
/* WARNING: Removing unreachable block (ram,0x0001003d2300) */
/* WARNING: Removing unreachable block (ram,0x0001003d20f8) */
/* WARNING: Removing unreachable block (ram,0x0001003d2308) */

ID FUN_1003d1ec0(double param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  double *pdVar10;
  ID IVar11;
  double dVar12;
  double dVar13;
  undefined1 local_b0 [16];
  long local_a0;
  ID local_98;
  ID local_90;
  char *local_88;
  undefined *local_78;
  
  lVar2 = 0;
  FUN_1005cac3c();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  if (DAT_100a89338 != -1) {
    _swift_once(&DAT_100a89338,FUN_1003e728c);
  }
  IVar11 = DAT_100b368f0;
  local_98 = 0;
  if (DAT_100b368f0 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,*(undefined8 *)(unaff_x20 + 0x28));
    pcVar8 = "getDataForKey:";
    local_98 = _objc_msgSend(IVar11,"getDataForKey:",uVar4);
    if (local_98 == 0) {
      return 0;
    }
    local_90 = IVar11;
    local_a0 = lVar2;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    uVar4 = 0;
    __s10Foundation11JSONDecoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONDecoderCACycfc();
    puVar5 = &DAT_100a8c998;
    FUN_100004bb4(&DAT_100a8c998,&DAT_1008229c0);
    puVar6 = &DAT_100a8c9a0;
    FUN_1003d2f08(&DAT_100a8c9a0,PTR___sSdSesWP_100995910,PTR___sSayxGSesSeRzlMc_1009958a0);
    local_88 = pcVar8;
    __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
              (&local_78,puVar5,local_98,pcVar8,puVar5,puVar6);
    _swift_release(uVar4);
    puVar5 = local_78;
    __s10Foundation4DateVACycfC
              (local_b0 +
               (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
               (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar9 + 8))
              (local_b0 +
               (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
               (extraout_x8 + 0xfU & 0xfffffffffffffff0)),lVar3);
    dVar12 = *(double *)(unaff_x20 + 0x10);
    IVar11 = *(ID *)(unaff_x20 + 0x30);
    _objc_msgSend(IVar11,"lock");
    lVar2 = *(long *)(puVar5 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar2 != 0) {
      pdVar10 = (double *)(puVar5 + 0x20);
      do {
        dVar13 = *pdVar10;
        if (param_1 - dVar12 < dVar13) {
          puVar7 = puVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          local_78 = puVar6;
          if (((ulong)puVar7 & 1) == 0) {
            FUN_1003ffba0(0,*(long *)(puVar6 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(local_78 + 0x10);
          if (*(ulong *)(local_78 + 0x18) >> 1 <= uVar1) {
            FUN_1003ffba0(1 < *(ulong *)(local_78 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(local_78 + 0x10) = uVar1 + 1;
          *(double *)(local_78 + uVar1 * 8 + 0x20) = dVar13;
          puVar6 = local_78;
        }
        pdVar10 = pdVar10 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    _swift_bridgeObjectRelease(puVar5);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined **)(unaff_x20 + 0x38) = puVar6;
    _swift_bridgeObjectRelease(uVar4);
    _objc_msgSend(IVar11,"unlock");
    FUN_100006cdc(local_98,local_88);
  }
  return local_98;
}

