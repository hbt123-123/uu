// rea decompile_all
// name: FUN_1000c0aa8
// address: 0x1000c0aa8
// body: available
// range: 0x1000c0aa8-0x1000c0c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1000c0aa8(ID param_1,undefined8 param_2)

{
  long lVar1;
  ID IVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ID *pIVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  ID local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = 0x6e6565726353534e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6565726353534e,0xee007265626d754e);
  IVar2 = _objc_msgSend(param_1,"deviceDescription");
  uVar3 = 0;
  FUN_100006014();
  puVar4 = &DAT_100a752d0;
  FUN_100005c90(&DAT_100a752d0,FUN_100006014,&TargetProtocolConformanceDescriptor_10081f130);
  puVar7 = PTR___sypN_100995e88;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar2,uVar3,PTR___sypN_100995e88 + 8,puVar4);
  if (*(long *)(IVar2 + 0x10) == 0) {
LAB_1000c0c20:
    uStack_58 = 0;
    local_60 = 0;
    local_48 = 0;
    uStack_50 = 0;
    _swift_bridgeObjectRelease(IVar2);
LAB_1000c0c30:
    FUN_100040bb4(&local_60,&DAT_100a766e0,&DAT_10080bdb0);
  }
  else {
    _swift_bridgeObjectRetain(IVar2);
    thunk_FUN_1001a2e90(lVar1);
    if ((uVar3 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar2);
      goto LAB_1000c0c20;
    }
    FUN_10003e8bc(*(long *)(IVar2 + 0x38) + lVar1 * 0x20,&local_60);
    _swift_bridgeObjectRelease_n(IVar2,2);
    if (local_48 == 0) goto LAB_1000c0c30;
    uVar5 = 0;
    FUN_10004003c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
    pIVar6 = &local_68;
    _swift_dynamicCast(pIVar6,&local_60,puVar7 + 8,uVar5,6);
    if (((ulong)pIVar6 & 1) != 0) {
      pcVar8 = "stringValue";
      puVar7 = (undefined *)_objc_msgSend(local_68,"stringValue");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar7);
      goto LAB_1000c0c70;
    }
  }
  puVar7 = PTR___sSiN_100995968;
  pcVar8 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_60 = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
LAB_1000c0c70:
  auVar9._8_8_ = pcVar8;
  auVar9._0_8_ = puVar7;
  return auVar9;
}

