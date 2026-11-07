// rea decompile_all
// name: FUN_1003c0564
// address: 0x1003c0564
// body: available
// range: 0x1003c0564-0x1003c086b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c0564(ID param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  lVar7 = *(long *)(param_2 + 0x18);
  if (lVar7 != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    _swift_bridgeObjectRetain(lVar7);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,lVar7);
    _swift_bridgeObjectRelease(lVar7);
    _objc_msgSend(param_1,"setDsn:",uVar8);
  }
  _objc_msgSend(param_1,"setDebug:",0);
  uVar8 = 0x69746375646f7270;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x69746375646f7270,0xea00000000006e6f);
  _objc_msgSend(param_1,"setEnvironment:",uVar8);
  uVar8 = 0;
  FUN_10004003c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
  __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(0x3ff0000000000000);
  _objc_msgSend(param_1,"setTracesSampleRate:",uVar8);
  _objc_msgSend(param_1,"setAppHangTimeoutInterval:",0x4024000000000000);
  _objc_msgSend(param_1,"setEnableCaptureFailedRequests:",0);
  lVar7 = *(long *)(param_2 + 0x38);
  if (lVar7 != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    _swift_bridgeObjectRetain(lVar7);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,lVar7);
    _swift_bridgeObjectRelease(lVar7);
    _objc_msgSend(param_1,"setReleaseName:",uVar8);
  }
  puVar3 = &DAT_1009b9400;
  _swift_allocObject(&DAT_1009b9400,0x18,7);
  _swift_weakInit(puVar3 + 0x10,param_2);
  puVar4 = &DAT_1009b9428;
  _swift_allocObject(&DAT_1009b9428,0x18,7);
  _swift_weakInit(puVar4 + 0x10,param_3);
  puVar5 = &DAT_1009b9450;
  _swift_allocObject(&DAT_1009b9450,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_100995490;
  local_80 = FUN_1003c1918;
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0x42000000;
  local_90 = FUN_1003c0bb4;
  puStack_88 = &DAT_1009b9490;
  local_78 = puVar5;
  pvVar6 = __Block_copy(&local_a0);
  puVar2 = local_78;
  _swift_retain(puVar3);
  _swift_retain(puVar4);
  FUN_10004090c(FUN_1003c1918,puVar5);
  _swift_release(puVar2);
  _objc_msgSend(param_1,"setBeforeSend:",pvVar6);
  __Block_release(pvVar6);
  _swift_release(puVar3);
  _swift_release(puVar4);
  _swift_release(puVar5);
  local_80 = FUN_1003c1920;
  local_a0 = puVar1;
  local_98 = 0x42000000;
  local_90 = FUN_1003c0bb4;
  puStack_88 = &DAT_1009b9468;
  local_78 = (undefined *)param_2;
  pvVar6 = __Block_copy(&local_a0);
  puVar3 = local_78;
  _swift_retain(param_2);
  _swift_release(puVar3);
  _objc_msgSend(param_1,"setInitialScope:",pvVar6);
  __Block_release(pvVar6);
  return;
}

