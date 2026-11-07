// rea decompile_all
// name: FUN_1005d5700
// address: 0x1005d5700
// body: available
// range: 0x1005d5700-0x1005d59c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d5700(undefined8 param_1,long param_2,long param_3,void *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  long lStack_90;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_1009d9138;
  _swift_allocObject(&DAT_1009d9138,0x18,7);
  *(void **)(puVar2 + 0x10) = param_4;
  _swift_beginAccess(&DAT_100b3a708,auStack_78,0,0);
  uVar8 = DAT_100b3a710;
  pcVar9 = DAT_100b3a708;
  if (DAT_100b3a708 == (code *)0x0) {
    __Block_copy(param_4);
  }
  else {
    __Block_copy(param_4);
    FUN_10004090c(pcVar9,uVar8);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(auStack_b0 + lVar1);
    uVar3 = param_1;
    lVar6 = param_2;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
              (param_1,param_2,auStack_b0 + lVar1);
    local_98 = 0;
    if (lVar6 != 0) {
      local_98 = uVar3;
    }
    local_80 = PTR___sSSN_1009957f8;
    lStack_90 = -0x2000000000000000;
    if (lVar6 != 0) {
      lStack_90 = lVar6;
    }
    puVar4 = &local_98;
    puVar7 = PTR___sypN_100995e88 + 8;
    __sSS10describingSSx_tclufC(puVar4,puVar7);
    *(undefined8 *)((long)&uStack_b8 + lVar1) = 0x19;
    auStack_c0[lVar1] = 2;
    (*pcVar9)(0,puVar4,puVar7,
              "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Extend/XPCExportObject.swift"
              ,0xaf,2,"receiveAsync(_:reply:)",0x16);
    FUN_10007ed2c(pcVar9,uVar8);
    _swift_bridgeObjectRelease(puVar7);
  }
  _swift_beginAccess(param_3 + 0x10,&local_98,0,0);
  lVar1 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((lVar1 != 0) &&
     (uVar5 = NSXPCConnection::currentConnection
                        ((ID)&_OBJC_CLASS___NSXPCConnection,"currentConnection"), uVar5 != 0)) {
    FUN_1005d5374(0);
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,lVar1);
    if ((uVar5 & 1) != 0) {
      _swift_beginAccess(param_3 + 0x18,auStack_b0,0,0);
      pcVar9 = *(code **)(param_3 + 0x18);
      if (pcVar9 == (code *)0x0) {
        _swift_release(puVar2);
        return;
      }
      uVar8 = *(undefined8 *)(param_3 + 0x20);
      _swift_retain(uVar8);
      (*pcVar9)(lVar1,param_1,param_2,thunk_FUN_1005d5c68,puVar2);
      FUN_10007ed2c(pcVar9,uVar8);
      _swift_release(puVar2);
      return;
    }
  }
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
  (**(code **)((long)param_4 + 0x10))(param_4,param_1);
  _swift_release(puVar2);
  return;
}

