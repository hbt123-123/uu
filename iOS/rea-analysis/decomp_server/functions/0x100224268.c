// rea decompile_all
// name: FUN_100224268
// address: 0x100224268
// body: available
// range: 0x100224268-0x10022441f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100224268(long param_1,long param_2)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  undefined8 uVar3;
  char *pcVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  ID local_70;
  char *pcStack_68;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar6);
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,lVar6);
  if (param_2 == 0) {
    lVar5 = 0;
    uVar7 = 0xf000000000000000;
  }
  else {
    IVar2 = 0;
    FUN_100241b14();
    _objc_allocWithZone();
    _objc_msgSend(IVar2,"init");
    FUN_100242668(param_1,param_2);
    lVar5 = param_1;
    FUN_100241bf8();
    _swift_bridgeObjectRelease(param_1);
    uVar7 = *(undefined8 *)(lVar5 + 0x10);
    self = &_OBJC_CLASS___NSData;
    _objc_allocWithZone();
    IVar2 = _objc_msgSend((ID)self,"initWithBytes:length:",lVar5 + 0x20,uVar7);
    pcVar4 = "base64EncodedStringWithOptions:";
    IVar2 = _objc_msgSend(IVar2,"base64EncodedStringWithOptions:",0);
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(lVar5);
    uVar3 = 0;
    local_70 = IVar2;
    pcStack_68 = pcVar4;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar6,0);
    FUN_10021e96c();
    uVar7 = 0;
    lVar5 = lVar6;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (lVar6,0,PTR___sSSN_1009957f8,uVar3);
    (**(code **)(lVar8 + 8))(lVar6,lVar1);
    _swift_bridgeObjectRelease(pcVar4);
  }
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = lVar5;
  return auVar9;
}

