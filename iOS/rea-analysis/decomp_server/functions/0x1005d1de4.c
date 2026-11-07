// rea decompile_all
// name: FUN_1005d1de4
// address: 0x1005d1de4
// body: available
// range: 0x1005d1de4-0x1005d2003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d1de4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  char *pcVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_60;
  undefined1 auStack_58 [24];
  
  _objc_msgSend(*(ID *)(unaff_x20 + 0x10),"invalidate");
  _swift_beginAccess(&DAT_100b3a708,auStack_58,0,0);
  uVar2 = DAT_100b3a710;
  pcVar1 = DAT_100b3a708;
  if (DAT_100b3a708 != (code *)0x0) {
    pcVar7 = (char *)0xe000000000000000;
    local_78 = 0;
    local_70 = 0xe000000000000000;
    _swift_retain(DAT_100b3a710);
    __ss11_StringGutsV4growyySiF(0x1d);
    _swift_bridgeObjectRelease(local_70);
    local_78 = 0x656369767265535b;
    local_70 = 0xea0000000000203a;
    pcVar5 = "serviceName";
    IVar3 = _objc_msgSend(*(ID *)(unaff_x20 + 0x10),"serviceName");
    if (IVar3 == 0) {
      IVar3 = 0;
    }
    else {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      pcVar7 = pcVar5;
    }
    __sSS6appendyySSF(IVar3,pcVar7);
    _swift_bridgeObjectRelease(pcVar7);
    __sSS6appendyySSF(0x203a6469505b5d,0xe700000000000000);
    _objc_msgSend(*(ID *)(unaff_x20 + 0x10),"processIdentifier");
    puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar6);
    __sSS6appendyySSF(0x74696e696544205d,0xe800000000000000);
    local_60 = PTR___sSSN_1009957f8;
    puVar4 = &local_78;
    puVar6 = PTR___sypN_100995e88 + 8;
    __sSS10describingSSx_tclufC(puVar4,puVar6);
    (*pcVar1)(1,puVar4,puVar6,
              "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Extend/XPCConnection.swift"
              ,0xad,2,"deinit",6,2);
    FUN_10007ed2c(pcVar1,uVar2);
    _swift_bridgeObjectRelease(puVar6);
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100091734(unaff_x20 + 0x28);
  return;
}

