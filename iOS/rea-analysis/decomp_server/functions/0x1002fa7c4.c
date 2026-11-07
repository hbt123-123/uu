// rea decompile_all
// name: FUN_1002fa7c4
// address: 0x1002fa7c4
// body: available
// range: 0x1002fa7c4-0x1002facdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002fa7c4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ID self;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  ulong uVar14;
  char *pcVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [32];
  
  lVar4 = 0;
  local_e0 = param_3;
  uStack_d8 = param_4;
  local_d0 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f0 = *(long *)(lVar4 + -8);
  lVar21 = (long)&local_120 - (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  local_100 = *(long *)(lVar5 + -8);
  lVar23 = lVar21 - (*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  lStack_f8 = lVar5;
  __s10Foundation4DateVMa();
  local_e8 = *(long *)(lVar6 + -8);
  local_118 = *(long *)(local_e8 + 0x40);
  uVar14 = local_118 + 0xfU & 0xfffffffffffffff0;
  local_110 = lVar23 - uVar14;
  lVar5 = local_110 - uVar14;
  lVar7 = 0;
  local_108 = lVar6;
  FUN_1002c76a8();
  pcVar15 = (char *)(lVar5 - (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  plVar18 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar16 = *(undefined8 *)(plVar18[2] + 0x10);
  _os_unfair_lock_lock(uVar16);
  lVar6 = *(long *)(*plVar18 + 0x60);
  _swift_beginAccess((long)plVar18 + lVar6,auStack_90,0,0);
  FUN_100082394((long)plVar18 + lVar6,pcVar15,FUN_1002c76a8);
  cVar1 = *pcVar15;
  FUN_1000d27dc(pcVar15,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar16);
  uVar14 = local_d0;
  uVar2 = uStack_d8;
  uVar16 = local_e0;
  if (cVar1 == '\x01') {
    __s10Foundation4DateVACycfC(lVar5);
    self = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
    NSProcessInfo::systemUptime(self,"systemUptime");
    uVar17 = *(undefined8 *)(plVar18[2] + 0x10);
    _os_unfair_lock_lock(uVar17);
    FUN_100082394((long)plVar18 + lVar6,pcVar15,FUN_1002c76a8);
    uVar22 = *(ulong *)(pcVar15 + 0x150);
    _swift_bridgeObjectRetain(uVar22);
    FUN_1000d27dc(pcVar15,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar17);
    if (uVar22 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar22 & 0xffffffffffffff8;
      if ((long)uVar22 < 0) {
        uVar8 = uVar22;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    lVar4 = local_e8;
    if (uVar8 == 0) {
      _swift_bridgeObjectRelease(uVar22);
      lVar6 = local_108;
    }
    else {
      uVar9 = uVar8 - 1;
      if (SBORROW8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002facc8);
        (*pcVar3)();
      }
      if ((uVar22 & 0xc000000000000001) == 0) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002facd8);
          (*pcVar3)();
        }
        if (*(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002facdc);
          (*pcVar3)();
        }
        uVar9 = *(ulong *)(uVar22 + uVar9 * 8 + 0x20);
      }
      else {
        FUN_1002d38f8(uVar9,uVar22);
      }
      _swift_bridgeObjectRelease(uVar22);
      uVar22 = uVar9;
      _swift_dynamicCastObjCClass(uVar9,&_OBJC_CLASS___NSURLSessionWebSocketTask);
      lVar6 = local_108;
      lVar7 = local_110;
      if (uVar22 != 0) {
        local_120 = lVar5;
        (**(code **)(lVar4 + 0x10))(local_110,lVar5,local_108);
        uVar8 = (ulong)*(byte *)(lVar4 + 0x50);
        uVar19 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
        uVar20 = local_118 + uVar19 + 7 & 0xfffffffffffffff8;
        puVar11 = &DAT_1009af6d0;
        _swift_allocObject(&DAT_1009af6d0,uVar20 + 8,uVar8 | 7);
        *(ulong *)(puVar11 + 0x10) = uVar14;
        *(undefined8 *)(puVar11 + 0x18) = uVar16;
        *(undefined8 *)(puVar11 + 0x20) = uVar2;
        local_d0 = uVar9;
        (**(code **)(lVar4 + 0x20))(puVar11 + uVar19,lVar7,lVar6);
        *(undefined8 *)(puVar11 + uVar20) = param_1;
        local_a0 = FUN_1003005b8;
        local_c0 = PTR___NSConcreteStackBlock_100995490;
        local_b8 = 0x42000000;
        local_b0 = FUN_1002fcd88;
        puStack_a8 = &DAT_1009af6e8;
        local_98 = puVar11;
        pvVar10 = __Block_copy(&local_c0);
        puVar11 = local_98;
        _swift_retain(uVar2);
        _swift_release(puVar11);
        _objc_msgSend(uVar22,"sendPingWithPongReceiveHandler:",pvVar10);
        __Block_release(pvVar10);
        lVar5 = local_120;
      }
    }
    (**(code **)(lVar4 + 8))(lVar5,lVar6);
  }
  else {
    puVar11 = &DAT_1009af680;
    _swift_allocObject(&DAT_1009af680,0x20,7);
    uVar16 = uStack_d8;
    *(undefined8 *)(puVar11 + 0x10) = local_e0;
    *(undefined8 *)(puVar11 + 0x18) = uStack_d8;
    local_a0 = FUN_100300518;
    local_c0 = PTR___NSConcreteStackBlock_100995490;
    local_b8 = 0x42000000;
    local_b0 = FUN_1000acdb4;
    puStack_a8 = &DAT_1009af698;
    local_98 = puVar11;
    pvVar10 = __Block_copy(&local_c0);
    _swift_retain(uVar16);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar23);
    local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar12 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar11 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar13 = puVar11;
    FUN_10028abfc();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar21,&local_c8,puVar11,puVar13,lVar4,puVar12);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar23,lVar21,pvVar10);
    __Block_release(pvVar10);
    (**(code **)(local_f0 + 8))(lVar21,lVar4);
    (**(code **)(local_100 + 8))(lVar23,lStack_f8);
    _swift_release(local_98);
  }
  return;
}

