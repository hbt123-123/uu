// rea decompile_all
// name: FUN_1002f41f8
// address: 0x1002f41f8
// body: available
// range: 0x1002f41f8-0x1002f4c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f41f8(undefined8 param_1,undefined8 *param_2,long param_3,code *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  void *aBlock;
  undefined *puVar9;
  void *pvVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  long local_128;
  long local_120;
  void *local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  code *local_e8;
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
  local_e8 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f8 = *(long *)(lVar4 + -8);
  lVar16 = (long)&local_140 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_108 = lVar4;
  local_f0 = lVar16;
  __s8Dispatch0A3QoSVMa();
  lVar4 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  lVar14 = *(long *)(lVar5 + -8);
  lVar16 = lVar16 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar5;
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_80,0,0);
  FUN_10007f314(unaff_x20 + lVar4,&local_b0,&DAT_100a82c40,&DAT_100817200);
  if (local_98 == (undefined *)0x0) {
    FUN_100040bb4(&local_b0,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_1000b142c(&local_b0,auStack_e0);
    FUN_100040bb4(&local_b0,&DAT_100a82c40,&DAT_100817200);
    FUN_10003f030(auStack_e0,local_c8);
    (**(code **)(lStack_c0 + 0x50))(param_1,param_2,param_3,local_c8,lStack_c0);
    FUN_10003f094(auStack_e0);
  }
  lVar4 = param_3;
  _swift_dynamicCastObjCClass(param_3,&_OBJC_CLASS___NSHTTPURLResponse);
  if (lVar4 == 0) {
    (*local_e8)(1);
    return;
  }
  lVar5 = unaff_x20 + _TtC9Alamofire15SessionDelegate::stateProvider;
  lVar12 = lVar5;
  local_118 = (void *)lVar4;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar12 == 0) {
LAB_1002f4638:
    lVar4 = lVar5;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar4 != 0) {
      lVar12 = *(long *)(lVar5 + 8);
      lVar5 = lVar4;
      _swift_getObjectType();
      (**(code **)(lVar12 + 0x20))(param_2,lVar5,lVar12);
      _swift_unknownObjectRelease(lVar4);
      if (param_2 != (undefined8 *)0x0) {
        if ((class_t *)*param_2 == &objc::class_t::_TtC9Alamofire17DataStreamRequest) {
          lVar5 = *(long *)((long)param_2 + _TtC9Alamofire17DataStreamRequest::streamMutableState);
          local_120 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10);
          local_128 = lVar16;
          local_110 = param_3;
          _os_unfair_lock_lock();
          _swift_beginAccess(lVar5 + 0x18,auStack_e0,0,0);
          pcVar1 = *(code **)(lVar5 + 0x18);
          uVar2 = *(undefined8 *)(lVar5 + 0x20);
          uVar7 = *(undefined8 *)(lVar5 + 0x30);
          lVar4 = *(long *)(lVar5 + 0x38);
          if (lVar4 == 0) {
            local_118 = *(void **)((long)param_2 + _TtC9Alamofire7Request::underlyingQueue);
            puVar9 = &DAT_1009af300;
            _swift_allocObject(&DAT_1009af300,0x20,7);
            *(code **)(puVar9 + 0x10) = local_e8;
            *(undefined8 *)(puVar9 + 0x18) = param_5;
            local_90 = FUN_1002f4c50;
            local_b0 = PTR___NSConcreteStackBlock_100995490;
            local_a8 = 0x42000000;
            local_a0 = FUN_1000acdb4;
            local_98 = &DAT_1009af318;
            local_88 = puVar9;
            pvVar10 = __Block_copy(&local_b0);
            local_e8 = pcVar1;
            _swift_bridgeObjectRetain(uVar2);
            _swift_bridgeObjectRetain(uVar7);
            _swift_retain(param_5);
            lVar4 = local_128;
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_128);
            local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
            FUN_1002f4c70();
            puVar9 = &DAT_100a82c18;
            FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
            puVar11 = puVar9;
            FUN_10028abfc();
            lVar16 = local_f0;
            lVar5 = local_108;
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (local_f0,&local_b8,puVar9,puVar11,local_108,param_5);
            __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                      (0,lVar4,lVar16,pvVar10);
            __Block_release(pvVar10);
            (**(code **)(local_f8 + 8))(lVar16,lVar5);
            (**(code **)(lVar14 + 8))(lVar4,local_100);
            puVar9 = local_88;
            _swift_bridgeObjectRelease(uVar7);
            _swift_bridgeObjectRelease(uVar2);
            _swift_release(puVar9);
          }
          else {
            uVar15 = *(undefined8 *)(lVar5 + 0x40);
            uVar3 = *(undefined8 *)(lVar5 + 0x48);
            puVar9 = &DAT_1009af350;
            _swift_allocObject(&DAT_1009af350,0x48,7);
            *(long *)(puVar9 + 0x10) = lVar4;
            *(undefined8 *)(puVar9 + 0x18) = uVar15;
            *(undefined8 *)(puVar9 + 0x20) = uVar3;
            *(void **)(puVar9 + 0x28) = local_118;
            *(undefined8 **)(puVar9 + 0x30) = param_2;
            *(code **)(puVar9 + 0x38) = local_e8;
            *(undefined8 *)(puVar9 + 0x40) = param_5;
            local_90 = FUN_1002f4cb4;
            local_b0 = PTR___NSConcreteStackBlock_100995490;
            local_a8 = 0x42000000;
            local_a0 = FUN_1000acdb4;
            local_98 = &DAT_1009af368;
            local_88 = puVar9;
            local_118 = __Block_copy(&local_b0);
            local_130 = uVar15;
            FUN_1002d8884(lVar4,uVar15,uVar3);
            _swift_retain(param_5);
            local_140 = uVar3;
            FUN_1002d8884(lVar4,uVar15,uVar3);
            local_e8 = pcVar1;
            _swift_bridgeObjectRetain(uVar2);
            _swift_bridgeObjectRetain(uVar7);
            _swift_retain(uVar3);
            puVar6 = param_2;
            _swift_retain(param_2);
            lVar5 = local_128;
            local_138 = uVar2;
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_128);
            local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
            FUN_1002f4c70();
            puVar9 = &DAT_100a82c18;
            FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
            puVar11 = puVar9;
            FUN_10028abfc();
            lVar12 = local_f0;
            lVar16 = local_108;
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (local_f0,&local_b8,puVar9,puVar11,local_108,puVar6);
            pvVar10 = local_118;
            __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                      (0,lVar5,lVar12,local_118);
            __Block_release(pvVar10);
            uVar2 = local_140;
            _swift_release(local_140);
            (**(code **)(local_f8 + 8))(lVar12,lVar16);
            (**(code **)(lVar14 + 8))(lVar5,local_100);
            puVar9 = local_88;
            _swift_bridgeObjectRelease(uVar7);
            _swift_bridgeObjectRelease(local_138);
            _swift_release(puVar9);
            FUN_10028a014(lVar4,local_130,uVar2);
          }
          _os_unfair_lock_unlock(local_120);
          goto LAB_1002f4c24;
        }
        _swift_release(param_2);
      }
    }
    (*local_e8)(1);
  }
  else {
    lVar13 = *(long *)(lVar5 + 8);
    lVar4 = lVar12;
    _swift_getObjectType();
    puVar6 = param_2;
    local_120 = param_3;
    local_110 = lVar14;
    (**(code **)(lVar13 + 0x20))(param_2,lVar4,lVar13);
    lVar14 = local_110;
    _swift_unknownObjectRelease(lVar12);
    if (puVar6 == (undefined8 *)0x0) goto LAB_1002f4638;
    uVar7 = 0;
    FUN_10028a504(0);
    puVar8 = puVar6;
    _swift_dynamicCastClass(puVar6,uVar7);
    if (puVar8 == (undefined8 *)0x0) {
      _swift_release(puVar6);
      goto LAB_1002f4638;
    }
    lVar14 = *(long *)((long)puVar8 + _TtC9Alamofire11DataRequest::dataMutableState);
    local_128 = *(long *)(*(long *)(lVar14 + 0x10) + 0x10);
    _os_unfair_lock_lock();
    _swift_beginAccess(lVar14 + 0x18,auStack_e0,0,0);
    uVar7 = *(undefined8 *)(lVar14 + 0x18);
    pvVar10 = *(void **)(lVar14 + 0x20);
    lVar4 = *(long *)(lVar14 + 0x28);
    uVar2 = *(undefined8 *)(lVar14 + 0x30);
    uVar15 = *(undefined8 *)(lVar14 + 0x38);
    local_130 = uVar2;
    if (lVar4 == 0) {
      local_118 = *(void **)((long)puVar8 + _TtC9Alamofire7Request::underlyingQueue);
      puVar9 = &DAT_1009af3a0;
      _swift_allocObject(&DAT_1009af3a0,0x20,7);
      *(code **)(puVar9 + 0x10) = local_e8;
      *(undefined8 *)(puVar9 + 0x18) = param_5;
      local_90 = FUN_1002f4c50;
      local_b0 = PTR___NSConcreteStackBlock_100995490;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000acdb4;
      local_98 = &DAT_1009af3b8;
      local_88 = puVar9;
      aBlock = __Block_copy(&local_b0);
      FUN_10010bd10(uVar7,pvVar10);
      FUN_1002d8884(0,uVar2,uVar15);
      _swift_retain(param_5);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar16);
      local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1002f4c70();
      puVar9 = &DAT_100a82c18;
      FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
      puVar11 = puVar9;
      FUN_10028abfc();
      lVar14 = local_f0;
      lVar4 = local_108;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_f0,&local_b8,puVar9,puVar11,local_108,param_5);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar16,lVar14,aBlock);
      __Block_release(aBlock);
      (**(code **)(local_f8 + 8))(lVar14,lVar4);
      (**(code **)(local_110 + 8))(lVar16,local_100);
      _swift_release(local_88);
      FUN_100006cc8(uVar7,pvVar10);
      FUN_10028a014(0,local_130,uVar15);
    }
    else {
      puVar9 = &DAT_1009af3f0;
      _swift_allocObject(&DAT_1009af3f0,0x48,7);
      *(long *)(puVar9 + 0x10) = lVar4;
      *(undefined8 *)(puVar9 + 0x18) = uVar2;
      *(undefined8 *)(puVar9 + 0x20) = uVar15;
      *(void **)(puVar9 + 0x28) = local_118;
      *(undefined8 **)(puVar9 + 0x30) = puVar8;
      *(code **)(puVar9 + 0x38) = local_e8;
      *(undefined8 *)(puVar9 + 0x40) = param_5;
      local_90 = FUN_1002f4ce8;
      local_b0 = PTR___NSConcreteStackBlock_100995490;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000acdb4;
      local_98 = &DAT_1009af408;
      local_88 = puVar9;
      local_e8 = __Block_copy(&local_b0);
      FUN_10010bd10(uVar7,pvVar10);
      FUN_1002d8884(lVar4,uVar2,uVar15);
      _swift_retain(param_5);
      FUN_1002d8884(lVar4,uVar2,uVar15);
      _swift_retain(uVar15);
      puVar8 = puVar6;
      _swift_retain(puVar6);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar16);
      local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1002f4c70();
      puVar9 = &DAT_100a82c18;
      FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
      puVar11 = puVar9;
      FUN_10028abfc();
      lVar5 = local_f0;
      lVar14 = local_108;
      local_118 = pvVar10;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_f0,&local_b8,puVar9,puVar11,local_108,puVar8);
      pcVar1 = local_e8;
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar16,lVar5,local_e8);
      __Block_release(pcVar1);
      _swift_release(uVar15);
      (**(code **)(local_f8 + 8))(lVar5,lVar14);
      (**(code **)(local_110 + 8))(lVar16,local_100);
      _swift_release(local_88);
      FUN_100006cc8(uVar7,local_118);
      FUN_10028a014(lVar4,local_130,uVar15);
    }
    _os_unfair_lock_unlock(local_128);
    param_2 = puVar6;
LAB_1002f4c24:
    _swift_release(param_2);
  }
  return;
}

