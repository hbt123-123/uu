// rea decompile_all
// name: FUN_100269f9c
// address: 0x100269f9c
// body: available
// range: 0x100269f9c-0x10026a4b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100269f9c(class_t *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  class_t *pcVar5;
  undefined8 uVar6;
  dispatch_semaphore_t pdVar7;
  undefined *puVar8;
  ulong uVar9;
  long *unaff_x20;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_110 [8];
  long local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  undefined1 *local_e8;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  long *local_70 [2];
  
  local_b8 = param_9;
  local_c8 = *unaff_x20;
  lVar15 = *(long *)(local_c8 + 0x50);
  local_d0 = *(long *)(lVar15 + -8);
  local_100 = *(long *)(local_d0 + 0x40);
  local_e8 = auStack_110 + -(local_100 + 0xfU & 0xfffffffffffffff0);
  lVar16 = unaff_x20[9];
  puVar8 = &DAT_1009a9050;
  local_f8 = param_2;
  local_c0 = param_6;
  local_a0 = param_7;
  _swift_allocObject(&DAT_1009a9050,0x18,7);
  puVar10 = (undefined8 *)(puVar8 + 0x10);
  *puVar10 = param_1;
  puVar4 = &DAT_1009a9078;
  local_e0 = puVar8;
  _swift_allocObject(&DAT_1009a9078,0x28,7);
  *(long *)(puVar4 + 0x10) = param_4;
  *(long *)(puVar4 + 0x18) = param_5;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  local_f0 = param_4;
  local_d8 = param_5;
  local_b0 = param_3;
  local_a8 = puVar4;
  local_98 = puVar10;
  if (param_4 == 0) {
    _swift_bridgeObjectRetain(lVar16);
    _swift_retain(param_1);
  }
  else {
    pcVar5 = param_1;
    _object_getClass();
    puVar8 = puVar4;
    if (pcVar5 == &objc::class_t::_TtC9Alamofire15DownloadRequest && param_1 != (class_t *)0x0) {
      local_108 = lVar15;
      FUN_100265294(0);
      _swift_bridgeObjectRetain(lVar16);
      _swift_retain(param_1);
      FUN_10004090c(param_4,param_5);
      _swift_retain(param_1);
      _swift_retain();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      FUN_1002cc320();
    }
    else {
      if ((pcVar5 != &objc::class_t::_TtC9Alamofire13UploadRequest) || (param_1 == (class_t *)0x0))
      {
        uVar6 = 0;
        FUN_10028a504(0);
        pcVar5 = param_1;
        _swift_dynamicCastClass(param_1,uVar6);
        if (pcVar5 == (class_t *)0x0) {
          _swift_bridgeObjectRetain(lVar16);
          _swift_retain(param_1);
          FUN_10004090c(param_4,param_5);
        }
        else {
          FUN_100265294(0);
          local_108 = lVar16;
          _swift_bridgeObjectRetain(lVar16);
          _swift_retain(param_1);
          FUN_10004090c(param_4,param_5);
          _swift_retain(param_1);
          _swift_retain();
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          (*(code *)pcVar5->isa[0x12].data)();
          _swift_release(puVar4);
          _swift_release(param_1);
          puVar4 = puVar8;
          _swift_dynamicCastClass(puVar8,param_8);
          if (puVar4 != (undefined *)0x0) {
            puVar8 = (undefined *)*local_98;
            *local_98 = puVar4;
          }
          _swift_release(puVar8);
          lVar16 = local_108;
        }
        goto LAB_10026a1d8;
      }
      local_108 = lVar15;
      FUN_100265294(0);
      _swift_bridgeObjectRetain(lVar16);
      _swift_retain(param_1);
      FUN_10004090c(param_4,param_5);
      _swift_retain(param_1);
      _swift_retain();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      FUN_1002cc410();
    }
    _swift_release(puVar4);
    _swift_release(param_1);
    puVar4 = puVar8;
    _swift_dynamicCastClass(puVar8,param_8);
    if (puVar4 != (undefined *)0x0) {
      puVar8 = (undefined *)*local_98;
      *local_98 = puVar4;
    }
    _swift_release(puVar8);
    lVar15 = local_108;
  }
LAB_10026a1d8:
  lVar2 = local_d0;
  puVar1 = local_e8;
  (**(code **)(local_d0 + 0x10))(local_e8,local_f8,lVar15);
  uVar9 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar11 = uVar9 + 0x38 & (uVar9 ^ 0xffffffffffffffff);
  uVar13 = local_100 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar8 = &DAT_1009a90a0;
  _swift_allocObject(&DAT_1009a90a0,uVar13 + 0x28,uVar9 | 7);
  lVar3 = local_b8;
  *(long *)(puVar8 + 0x10) = lVar15;
  *(undefined8 *)(puVar8 + 0x18) = param_8;
  *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(local_c8 + 0x58);
  *(long *)(puVar8 + 0x28) = local_b8;
  *(long *)(puVar8 + 0x30) = lVar16;
  (**(code **)(lVar2 + 0x20))(puVar8 + uVar11,puVar1,lVar15);
  uVar6 = local_a0;
  lVar16 = local_d8;
  puVar4 = local_e0;
  lVar15 = local_f0;
  *(long *)(puVar8 + uVar13) = local_f0;
  *(long *)((long)(puVar8 + uVar13) + 8) = local_d8;
  *(undefined **)(puVar8 + uVar13 + 0x10) = local_e0;
  *(undefined8 *)(puVar8 + uVar13 + 0x18) = local_c0;
  *(undefined8 *)((long)(puVar8 + uVar13 + 0x18) + 8) = local_a0;
  _swift_beginAccess(local_98,auStack_88,1,0);
  uVar12 = *(undefined8 *)(puVar4 + 0x10);
  pcVar14 = *(code **)(lVar3 + 8);
  local_90 = uVar12;
  FUN_10004090c(lVar15,lVar16);
  _swift_retain(puVar4);
  _swift_retain(uVar6);
  _swift_retain(uVar12);
  (*pcVar14)(local_70,local_b0,FUN_10026b540,puVar8,param_8,lVar3);
  _swift_release(uVar12);
  uVar6 = *(undefined8 *)(puVar4 + 0x10);
  *(long **)(puVar4 + 0x10) = local_70[0];
  _swift_release(uVar6);
  pcVar14 = *(code **)(*local_70[0] + 0x2d8);
  _swift_retain(local_70[0]);
  (*pcVar14)();
  _swift_release();
  _swift_release(local_70[0]);
  uVar6 = *(undefined8 *)(puVar4 + 0x10);
  lVar15 = 0;
  FUN_100264ccc();
  _swift_allocObject();
  *(undefined1 *)(lVar15 + 0x28) = 0;
  _swift_retain(uVar6);
  pdVar7 = _dispatch_semaphore_create(1);
  _swift_release(local_a8);
  _swift_release(puVar8);
  *(dispatch_semaphore_t *)(lVar15 + 0x30) = pdVar7;
  *(undefined8 *)(lVar15 + 0x20) = uVar6;
  _swift_retain(uVar6);
  _swift_release(puVar4);
  *(code **)(lVar15 + 0x10) = FUN_10026b5c4;
  *(undefined8 *)(lVar15 + 0x18) = uVar6;
  return lVar15;
}

