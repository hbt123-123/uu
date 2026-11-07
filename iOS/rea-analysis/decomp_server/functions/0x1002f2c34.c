// rea decompile_all
// name: FUN_1002f2c34
// address: 0x1002f2c34
// body: available
// range: 0x1002f2c34-0x1002f2ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002f2f74) */
/* WARNING: Removing unreachable block (ram,0x0001002f2e08) */
/* WARNING: Removing unreachable block (ram,0x0001002f2e14) */

undefined1  [16] FUN_1002f2c34(undefined8 param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined *self;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  IVar1 = _objc_msgSend(param_2,"protectionSpace");
  pcVar7 = "host";
  IVar1 = _objc_msgSend(IVar1,"host");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar1);
  IVar2 = _objc_msgSend(param_2,"protectionSpace");
  pcVar8 = "authenticationMethod";
  uVar3 = _objc_msgSend(IVar2,"authenticationMethod");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  IVar2 = *(ID *)PTR__NSURLAuthenticationMethodServerTrust_100995208;
  pcVar9 = pcVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (uVar3 == IVar2 && pcVar8 == pcVar9) {
    _swift_bridgeObjectRelease(pcVar8);
    _swift_bridgeObjectRelease(pcVar9);
LAB_1002f2d64:
    IVar2 = _objc_msgSend(param_2,"protectionSpace");
    IVar2 = _objc_msgSend(IVar2,"serverTrust");
    if (IVar2 == 0) goto LAB_1002f2e94;
    plVar5 = (long *)(unaff_x20 + _TtC9Alamofire15SessionDelegate::stateProvider);
    plVar4 = plVar5;
    _swift_unknownObjectWeakLoadStrong();
    if (plVar4 == (long *)0x0) {
LAB_1002f2ea0:
      _swift_bridgeObjectRelease(pcVar7);
      local_90 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      local_98 = 0;
      uStack_a0 = 0;
    }
    else {
      lVar6 = plVar5[1];
      plVar5 = plVar4;
      _swift_getObjectType();
      (**(code **)(lVar6 + 8))();
      _swift_unknownObjectRelease(plVar4);
      if (plVar5 == (long *)0x0) goto LAB_1002f2ea0;
      (**(code **)(*plVar5 + 0x68))(&local_b0,IVar1,pcVar7);
      _swift_release(plVar5);
      if (local_98 != 0) {
        FUN_1000a0074(&local_b0,auStack_88);
        FUN_10003f030(auStack_88,local_70);
        (**(code **)(lStack_68 + 8))(IVar2,IVar1,pcVar7,local_70,lStack_68);
        _swift_bridgeObjectRelease(pcVar7);
        self = &_OBJC_CLASS___NSURLCredential;
        _objc_allocWithZone();
        IVar1 = _objc_msgSend((ID)self,"initWithTrust:",IVar2);
        lVar6 = 0;
        FUN_100277ad0();
        (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,1,1,lVar6);
        FUN_10003f094(auStack_88);
        uVar10 = 0;
        goto LAB_1002f2f00;
      }
      _swift_bridgeObjectRelease(pcVar7);
    }
    FUN_100040bb4(&local_b0,&DAT_100a84708,&DAT_100819058);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,pcVar8,IVar2,pcVar9,0);
    _swift_bridgeObjectRelease(pcVar8);
    _swift_bridgeObjectRelease(pcVar9);
    if ((uVar3 & 1) != 0) goto LAB_1002f2d64;
LAB_1002f2e94:
    _swift_bridgeObjectRelease(pcVar7);
  }
  lVar6 = 0;
  FUN_100277ad0();
  uVar10 = 1;
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,1,1,lVar6);
  IVar1 = 0;
LAB_1002f2f00:
  auVar11._8_8_ = IVar1;
  auVar11._0_8_ = uVar10;
  return auVar11;
}

