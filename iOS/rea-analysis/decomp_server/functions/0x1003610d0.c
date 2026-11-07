// rea decompile_all
// name: FUN_1003610d0
// address: 0x1003610d0
// body: available
// range: 0x1003610d0-0x10036145f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003610d0(undefined8 param_1,ID param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong *unaff_x20;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar11 = *(long *)(lVar1 + -8);
  lVar14 = (long)&local_a0 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_1009b4ee0;
  _swift_allocObject(&DAT_1009b4ee0,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  puVar13 = (ulong *)PTR__swift_isaMask_100995ee0;
  if (param_3 == 0) {
    _swift_retain(puVar2);
  }
  else {
    pcVar12 = *(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 & *unaff_x20) + 0xd8);
    _swift_retain(puVar2);
    _swift_errorRetain(param_3);
    IVar3 = param_2;
    (*pcVar12)();
    if (IVar3 == 0) {
      _swift_errorRelease(param_3);
      puVar13 = (ulong *)PTR__swift_isaMask_100995ee0;
    }
    else {
      lVar4 = param_3;
      local_90 = param_1;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
      IVar5 = _objc_msgSend(IVar3,"shouldRetryWithError:",lVar4);
      if ((IVar5 & 1) != 0) {
        lVar4 = (long)unaff_x20 + _TtC10Filepicker25FilePickerSessionDelegate::sessionManager;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar4 != 0) {
          _swift_release(puVar2);
          lVar10 = *(long *)(lVar4 + _TtC10Filepicker17FilepickerManager::filePickerConfig);
          uVar6 = 0;
          local_98 = lVar4;
          FUN_100361acc();
          local_a0 = uVar6;
          (**(code **)(lVar11 + 0x68))
                    (lVar14,*(undefined4 *)
                             PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_100995f68,lVar1);
          __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar14);
          (**(code **)(lVar11 + 8))(lVar14,lVar1);
          lVar1 = _TtC10Filepicker16FilePickerConfig::retryTimeDelay;
          _swift_beginAccess(lVar10 + _TtC10Filepicker16FilePickerConfig::retryTimeDelay,auStack_88,
                             0,0);
          uVar6 = *(undefined8 *)(lVar10 + lVar1);
          puVar7 = &DAT_1009b4ee0;
          _swift_allocObject(&DAT_1009b4ee0,0x18,7);
          _swift_unknownObjectWeakInit(puVar7 + 0x10);
          puVar8 = &DAT_1009b4f08;
          _swift_allocObject(&DAT_1009b4f08,0x48,7);
          *(undefined **)(puVar8 + 0x10) = puVar7;
          *(ID *)(puVar8 + 0x18) = IVar3;
          *(code **)(puVar8 + 0x20) = FUN_100361ac4;
          *(undefined **)(puVar8 + 0x28) = puVar2;
          *(undefined8 *)(puVar8 + 0x30) = local_90;
          *(ID *)(puVar8 + 0x38) = param_2;
          *(long *)(puVar8 + 0x40) = param_3;
          _swift_errorRetain(param_3);
          _swift_retain(puVar7);
          _swift_retain(puVar2);
          FUN_10036f9f0(uVar6,FUN_100361b5c,puVar8);
          _swift_release(puVar7);
          _swift_release(puVar8);
          _swift_errorRelease(param_3);
          goto LAB_100361434;
        }
      }
      _swift_errorRelease(param_3);
      puVar13 = (ulong *)PTR__swift_isaMask_100995ee0;
      param_1 = local_90;
    }
  }
  _swift_beginAccess(puVar2 + 0x10,auStack_88,0,0);
  puVar9 = (ulong *)(puVar2 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  if (puVar9 != (ulong *)0x0) {
    IVar3 = param_2;
    (**(code **)((*puVar13 & *puVar9) + 0xd8))();
    if (IVar3 != 0) {
      if (param_3 != 0) {
        __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
      }
      _objc_msgSend(IVar3,"urlSession:task:didCompleteWithError:",param_1,param_2,param_3);
    }
    (**(code **)((*puVar13 & *puVar9) + 0xe0))(0,param_2);
  }
  _swift_release(puVar2);
LAB_100361434:
  _swift_release(puVar2);
  return;
}

