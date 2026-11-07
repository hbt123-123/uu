// rea decompile_all
// name: FUN_1002f7030
// address: 0x1002f7030
// body: available
// range: 0x1002f7030-0x1002f7b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f7030(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,void *param_5)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  void *aBlock;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_150 [8];
  undefined8 local_148;
  void *local_140;
  void *local_138;
  void *local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined1 *local_f8;
  long local_f0;
  undefined *local_e8;
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  long lStack_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_100 = *(long *)(lVar4 + -8);
  lVar13 = *(long *)(local_100 + 0x40);
  lVar5 = 0;
  local_f8 = auStack_150 + -(lVar13 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  lVar15 = *(long *)(lVar5 + -8);
  local_110 = (long)(auStack_150 + -(lVar13 + 0xfU & 0xfffffffffffffff0)) -
              (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_1009af468;
  local_108 = lVar5;
  _swift_allocObject(&DAT_1009af468,0x18,7);
  *(void **)(puVar6 + 0x10) = param_5;
  lVar5 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  local_e8 = puVar6;
  _swift_beginAccess(param_4 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_80,0,0);
  FUN_10007f314(param_4 + lVar5,&local_b0,&DAT_100a82c40,&DAT_100817200);
  if (local_98 == (undefined *)0x0) {
    __Block_copy(param_5);
    FUN_100040bb4(&local_b0,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_1000b142c(&local_b0,auStack_e0);
    __Block_copy(param_5);
    FUN_100040bb4(&local_b0,&DAT_100a82c40,&DAT_100817200);
    FUN_10003f030(auStack_e0,local_c8);
    (**(code **)(lStack_c0 + 0x50))(param_1,param_2,param_3,local_c8,lStack_c0);
    FUN_10003f094(auStack_e0);
  }
  lVar5 = param_3;
  _swift_dynamicCastObjCClass(param_3,&_OBJC_CLASS___NSHTTPURLResponse);
  if (lVar5 == 0) {
    (**(code **)((long)param_5 + 0x10))(param_5,1);
    _swift_release(local_e8);
    return;
  }
  param_4 = param_4 + _TtC9Alamofire15SessionDelegate::stateProvider;
  lVar13 = param_4;
  local_120 = lVar15;
  local_118 = lVar4;
  local_f0 = param_3;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar13 == 0) {
LAB_1002f74b8:
    lVar4 = param_4;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar4 != 0) {
      lVar15 = *(long *)(param_4 + 8);
      lVar13 = lVar4;
      _swift_getObjectType();
      (**(code **)(lVar15 + 0x20))(param_2,lVar13,lVar15);
      _swift_unknownObjectRelease(lVar4);
      if (param_2 != (undefined8 *)0x0) {
        if ((class_t *)*param_2 == &objc::class_t::_TtC9Alamofire17DataStreamRequest) {
          lVar13 = *(long *)((long)param_2 + _TtC9Alamofire17DataStreamRequest::streamMutableState);
          local_128 = *(long *)(*(long *)(lVar13 + 0x10) + 0x10);
          _os_unfair_lock_lock();
          _swift_beginAccess(lVar13 + 0x18,auStack_e0,0,0);
          pvVar1 = *(void **)(lVar13 + 0x18);
          pvVar10 = *(void **)(lVar13 + 0x20);
          uVar8 = *(undefined8 *)(lVar13 + 0x30);
          lVar4 = *(long *)(lVar13 + 0x38);
          if (lVar4 == 0) {
            local_130 = *(void **)((long)param_2 + _TtC9Alamofire7Request::underlyingQueue);
            puVar6 = &DAT_1009af490;
            _swift_allocObject(&DAT_1009af490,0x20,7);
            puVar11 = local_e8;
            *(code **)(puVar6 + 0x10) = FUN_1002f7fa4;
            *(undefined **)(puVar6 + 0x18) = local_e8;
            local_90 = thunk_FUN_1002f4c50;
            local_b0 = PTR___NSConcreteStackBlock_100995490;
            local_a8 = 0x42000000;
            local_a0 = FUN_1000acdb4;
            local_98 = &DAT_1009af4a8;
            local_88 = puVar6;
            aBlock = __Block_copy(&local_b0);
            local_138 = pvVar1;
            _swift_bridgeObjectRetain(pvVar10);
            _swift_bridgeObjectRetain(uVar8);
            _swift_retain(puVar11);
            lVar4 = local_110;
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_110);
            local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
            FUN_1002f4c70();
            puVar6 = &DAT_100a82c18;
            FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
            puVar12 = puVar6;
            FUN_10028abfc();
            puVar3 = local_f8;
            lVar5 = local_118;
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (local_f8,&local_b8,puVar6,puVar12,local_118,puVar11);
            __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                      (0,lVar4,puVar3,aBlock);
            __Block_release(aBlock);
            (**(code **)(local_100 + 8))(puVar3,lVar5);
            (**(code **)(local_120 + 8))(lVar4,local_108);
            puVar6 = local_88;
            _swift_bridgeObjectRelease(uVar8);
            _swift_bridgeObjectRelease(pvVar10);
            _swift_release(puVar6);
          }
          else {
            uVar14 = *(undefined8 *)(lVar13 + 0x40);
            uVar2 = *(undefined8 *)(lVar13 + 0x48);
            puVar6 = &DAT_1009af4e0;
            _swift_allocObject(&DAT_1009af4e0,0x48,7);
            puVar11 = local_e8;
            *(long *)(puVar6 + 0x10) = lVar4;
            *(undefined8 *)(puVar6 + 0x18) = uVar14;
            *(undefined8 *)(puVar6 + 0x20) = uVar2;
            *(long *)(puVar6 + 0x28) = lVar5;
            *(undefined8 **)(puVar6 + 0x30) = param_2;
            *(code **)(puVar6 + 0x38) = FUN_1002f7fa4;
            *(undefined **)(puVar6 + 0x40) = local_e8;
            local_90 = thunk_FUN_1002f4cb4;
            local_b0 = PTR___NSConcreteStackBlock_100995490;
            local_a8 = 0x42000000;
            local_a0 = FUN_1000acdb4;
            local_98 = &DAT_1009af4f8;
            local_88 = puVar6;
            local_138 = __Block_copy(&local_b0);
            local_148 = uVar14;
            FUN_1002d8884(lVar4,uVar14,uVar2);
            _swift_retain(puVar11);
            FUN_1002d8884(lVar4,uVar14,uVar2);
            local_130 = pvVar1;
            _swift_bridgeObjectRetain(pvVar10);
            _swift_bridgeObjectRetain(uVar8);
            _swift_retain(uVar2);
            puVar7 = param_2;
            _swift_retain(param_2);
            lVar13 = local_110;
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_110);
            local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
            FUN_1002f4c70();
            puVar6 = &DAT_100a82c18;
            local_140 = pvVar10;
            FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
            puVar11 = puVar6;
            FUN_10028abfc();
            puVar3 = local_f8;
            lVar5 = local_118;
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (local_f8,&local_b8,puVar6,puVar11,local_118,puVar7);
            pvVar1 = local_138;
            __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                      (0,lVar13,puVar3,local_138);
            __Block_release(pvVar1);
            _swift_release(uVar2);
            (**(code **)(local_100 + 8))(puVar3,lVar5);
            (**(code **)(local_120 + 8))(lVar13,local_108);
            puVar6 = local_88;
            _swift_bridgeObjectRelease(uVar8);
            _swift_bridgeObjectRelease(local_140);
            _swift_release(puVar6);
            FUN_10028a014(lVar4,local_148,uVar2);
          }
          _os_unfair_lock_unlock(local_128);
          _swift_release(local_e8);
          goto LAB_1002f7ad8;
        }
        _swift_release(param_2);
      }
    }
    (**(code **)((long)param_5 + 0x10))(param_5,1);
    _swift_release(local_e8);
  }
  else {
    lVar15 = *(long *)(param_4 + 8);
    lVar4 = lVar13;
    _swift_getObjectType();
    local_128 = local_f0;
    puVar7 = param_2;
    (**(code **)(lVar15 + 0x20))(param_2,lVar4,lVar15);
    _swift_unknownObjectRelease(lVar13);
    if (puVar7 == (undefined8 *)0x0) goto LAB_1002f74b8;
    uVar8 = 0;
    FUN_10028a504(0);
    puVar9 = puVar7;
    _swift_dynamicCastClass(puVar7,uVar8);
    if (puVar9 == (undefined8 *)0x0) {
      _swift_release(puVar7);
      goto LAB_1002f74b8;
    }
    lVar13 = *(long *)((long)puVar9 + _TtC9Alamofire11DataRequest::dataMutableState);
    local_130 = *(void **)(*(long *)(lVar13 + 0x10) + 0x10);
    _os_unfair_lock_lock();
    _swift_beginAccess(lVar13 + 0x18,auStack_e0,0,0);
    local_f0 = *(long *)(lVar13 + 0x18);
    pvVar1 = *(void **)(lVar13 + 0x20);
    lVar4 = *(long *)(lVar13 + 0x28);
    uVar8 = *(undefined8 *)(lVar13 + 0x30);
    uVar14 = *(undefined8 *)(lVar13 + 0x38);
    local_138 = pvVar1;
    if (lVar4 == 0) {
      local_140 = *(void **)((long)puVar9 + _TtC9Alamofire7Request::underlyingQueue);
      puVar6 = &DAT_1009af530;
      _swift_allocObject(&DAT_1009af530,0x20,7);
      puVar11 = local_e8;
      *(code **)(puVar6 + 0x10) = FUN_1002f7fa4;
      *(undefined **)(puVar6 + 0x18) = local_e8;
      local_90 = thunk_FUN_1002f4c50;
      local_b0 = PTR___NSConcreteStackBlock_100995490;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000acdb4;
      local_98 = &DAT_1009af548;
      local_88 = puVar6;
      pvVar10 = __Block_copy(&local_b0);
      lVar13 = local_f0;
      FUN_10010bd10(local_f0,pvVar1);
      FUN_1002d8884(0,uVar8,uVar14);
      _swift_retain(puVar11);
      lVar4 = local_110;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_110);
      local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1002f4c70();
      puVar6 = &DAT_100a82c18;
      FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
      puVar12 = puVar6;
      FUN_10028abfc();
      puVar3 = local_f8;
      lVar5 = local_118;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_f8,&local_b8,puVar6,puVar12,local_118,puVar11);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar4,puVar3,pvVar10);
      __Block_release(pvVar10);
      (**(code **)(local_100 + 8))(puVar3,lVar5);
      (**(code **)(local_120 + 8))(lVar4,local_108);
      _swift_release(local_88);
      FUN_100006cc8(lVar13,local_138);
      FUN_10028a014(0,uVar8,uVar14);
    }
    else {
      puVar6 = &DAT_1009af580;
      _swift_allocObject(&DAT_1009af580,0x48,7);
      puVar11 = local_e8;
      *(long *)(puVar6 + 0x10) = lVar4;
      *(undefined8 *)(puVar6 + 0x18) = uVar8;
      *(undefined8 *)(puVar6 + 0x20) = uVar14;
      *(long *)(puVar6 + 0x28) = lVar5;
      *(undefined8 **)(puVar6 + 0x30) = puVar9;
      *(code **)(puVar6 + 0x38) = FUN_1002f7fa4;
      *(undefined **)(puVar6 + 0x40) = local_e8;
      local_90 = thunk_FUN_1002f4ce8;
      local_b0 = PTR___NSConcreteStackBlock_100995490;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000acdb4;
      local_98 = &DAT_1009af598;
      local_88 = puVar6;
      local_140 = __Block_copy(&local_b0);
      FUN_10010bd10(local_f0,pvVar1);
      FUN_1002d8884(lVar4,uVar8,uVar14);
      _swift_retain(puVar11);
      FUN_1002d8884(lVar4,uVar8,uVar14);
      _swift_retain(uVar14);
      puVar9 = puVar7;
      _swift_retain(puVar7);
      lVar13 = local_110;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_110);
      local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1002f4c70();
      puVar6 = &DAT_100a82c18;
      local_148 = uVar8;
      FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
      puVar11 = puVar6;
      FUN_10028abfc();
      puVar3 = local_f8;
      lVar5 = local_118;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_f8,&local_b8,puVar6,puVar11,local_118,puVar9);
      pvVar1 = local_140;
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar13,puVar3,local_140);
      __Block_release(pvVar1);
      _swift_release(uVar14);
      (**(code **)(local_100 + 8))(puVar3,lVar5);
      (**(code **)(local_120 + 8))(lVar13,local_108);
      _swift_release(local_88);
      FUN_100006cc8(local_f0,local_138);
      FUN_10028a014(lVar4,local_148,uVar14);
    }
    _os_unfair_lock_unlock(local_130);
    _swift_release(local_e8);
    param_2 = puVar7;
LAB_1002f7ad8:
    _swift_release(param_2);
  }
  return;
}

