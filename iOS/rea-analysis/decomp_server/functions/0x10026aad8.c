// rea decompile_all
// name: FUN_10026aad8
// address: 0x10026aad8
// body: available
// range: 0x10026aad8-0x10026ad7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10026aad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,code *param_8,
                  undefined8 param_9,long param_10,code *param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  ulong uVar1;
  class_t *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  class_t *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  
  FUN_10026b890();
  lVar7 = *(long *)(param_6 + 0x10);
  uVar4 = (uint)param_3;
  if (lVar7 != 0) {
    param_6 = param_6 + 0x20;
    do {
      FUN_10026ad80(param_6,param_1,param_2,uVar4 & 0x1ff,param_7,param_13,param_14,param_15,
                    param_16,param_8,param_12);
      param_6 = param_6 + 0x28;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (param_8 == (code *)0x0) goto LAB_10026ad04;
  if ((uVar4 >> 8 & 1) == 0) {
    FUN_10004090c(param_8,param_9);
    FUN_100260254(param_1,param_2,param_3,0);
    uVar8 = param_1;
  }
  else {
    local_78 = (undefined1)param_3;
    uVar1 = 0xf;
    local_88 = param_1;
    uStack_80 = param_2;
    __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xf,0,0,0x12,0,0);
    if ((uVar1 & 1) == 0) {
      _swift_retain(param_9);
    }
    else {
      FUN_100262084();
      _swift_retain(param_9);
      _swift_willThrowTypedImpl(&local_88,&DAT_1009a8e98,uVar1);
    }
    uVar8 = 0;
  }
  _swift_beginAccess(param_10 + 0x10,&local_88,0,0);
  pcVar6 = *(class_t **)(param_10 + 0x10);
  pcVar2 = pcVar6;
  _object_getClass();
  if (pcVar2 == &objc::class_t::_TtC9Alamofire15DownloadRequest && pcVar6 != (class_t *)0x0) {
    plVar5 = &_TtC9Alamofire7Request::downloadProgress;
LAB_10026acac:
    uVar3 = *(undefined8 *)((long)&pcVar6->isa + *plVar5);
  }
  else {
    if (pcVar2 == &objc::class_t::_TtC9Alamofire13UploadRequest && pcVar6 != (class_t *)0x0) {
      plVar5 = &_TtC9Alamofire7Request::uploadProgress;
      goto LAB_10026acac;
    }
    uVar3 = 0;
    FUN_10028a504(0);
    pcVar2 = pcVar6;
    _swift_dynamicCastClass(pcVar6,uVar3);
    if (pcVar2 == (class_t *)0x0) {
      (*param_8)(uVar8,0);
      _swift_release(uVar8);
      FUN_10007ed2c(param_8,param_9);
      goto LAB_10026ad04;
    }
    uVar3 = *(undefined8 *)((long)&pcVar2->isa + _TtC9Alamofire7Request::downloadProgress);
  }
  _swift_retain_n(pcVar6,2);
  (*param_8)(uVar8,uVar3);
  _swift_release(uVar8);
  FUN_10007ed2c(param_8,param_9);
  _swift_release_n(pcVar6,2);
LAB_10026ad04:
  (*param_11)(param_1,param_2,uVar4 & 0xff | (uVar4 >> 8 & 1) << 8);
  FUN_10025fdac(param_1,param_2,param_3,uVar4 >> 8 & 1);
  return;
}

