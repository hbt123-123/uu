// rea decompile_all
// name: FUN_1002417c4
// address: 0x1002417c4
// body: available
// range: 0x1002417c4-0x100241a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100241a50 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002417c4(undefined8 param_1)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined *self;
  ID IVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long extraout_x8;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 auStack_90 [8];
  long local_88;
  ID local_80;
  char *pcStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar11 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_1,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  local_80 = 0;
  pcVar6 = "dataWithJSONObject:options:error:";
  IVar2 = NSJSONSerialization::dataWithJSONObject_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                     param_1,0,&local_80);
  if (IVar2 == 0) {
    IVar2 = local_80;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_80);
    _swift_willThrow(0);
    _swift_errorRelease(IVar2);
  }
  else {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar11,0);
    IVar4 = IVar2;
    pcVar7 = pcVar6;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(IVar2,pcVar6,puVar11);
    if (pcVar7 == (char *)0x0) {
      FUN_100006cdc(IVar2,pcVar6);
    }
    else {
      FUN_100242668();
      IVar3 = IVar4;
      local_88 = lVar1;
      FUN_100241bf8();
      _swift_bridgeObjectRelease(IVar4);
      uVar12 = *(undefined8 *)(IVar3 + 0x10);
      self = &_OBJC_CLASS___NSData;
      _objc_allocWithZone();
      IVar4 = _objc_msgSend((ID)self,"initWithBytes:length:",IVar3 + 0x20,uVar12);
      pcVar8 = "base64EncodedStringWithOptions:";
      IVar4 = _objc_msgSend(IVar4,"base64EncodedStringWithOptions:",0);
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _swift_bridgeObjectRelease(pcVar7);
      _swift_bridgeObjectRelease(IVar3);
      uVar12 = 0;
      local_80 = IVar4;
      pcStack_78 = pcVar8;
      __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar11,0);
      FUN_10021e96c();
      uVar9 = 0;
      puVar5 = puVar11;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (puVar11,0,PTR___sSSN_1009957f8,uVar12);
      FUN_100006cdc(IVar2,pcVar6);
      (**(code **)(lVar10 + 8))(puVar11,local_88);
      _swift_bridgeObjectRelease(pcVar8);
      if (uVar9 >> 0x3c < 0xf) goto LAB_100241a18;
    }
  }
  puVar5 = (undefined1 *)0x0;
  uVar9 = 0xc000000000000000;
LAB_100241a18:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(puVar5,uVar9);
  }
  return;
}

