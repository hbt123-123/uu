// rea decompile_all
// name: FUN_1002e0fe4
// address: 0x1002e0fe4
// body: available
// range: 0x1002e0fe4-0x1002e17f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1002e0fe4(ID param_1,long param_2,undefined *param_3,undefined4 param_4,undefined4 param_5,
                  undefined *param_6,undefined *param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 *puVar1;
  ID self;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  ID IVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long unaff_x20;
  undefined1 auStack_130 [8];
  undefined *local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined1 *local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  long local_b8;
  ID local_b0;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined8 *local_88;
  undefined *local_78;
  undefined **ppuStack_70;
  
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,param_5);
  local_e0 = (undefined *)CONCAT44(local_e0._4_4_,param_4);
  lVar4 = 0;
  local_c8 = param_6;
  local_c0 = param_8;
  local_b8 = param_2;
  local_b0 = param_1;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_108 = *(long *)(lVar4 + -8);
  lVar17 = *(long *)(local_108 + 0x40);
  lVar5 = 0;
  local_100 = auStack_130 + -(lVar17 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar4;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar17 = (long)(auStack_130 + -(lVar17 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_118 = lVar5;
  local_110 = lVar17;
  __s8Dispatch0A3QoSVMa();
  local_120 = lVar17 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_allocObject();
  puVar11 = &DAT_100a82208;
  FUN_100004bb4(&DAT_100a82208,&DAT_100817900);
  _swift_allocObject();
  *(undefined8 *)(puVar11 + 0x18) = 2;
  *(undefined8 *)(puVar11 + 0x10) = 1;
  uVar6 = 0;
  FUN_1002c2264();
  uVar12 = uVar6;
  _swift_allocObject();
  *(undefined8 *)(puVar11 + 0x38) = uVar6;
  *(undefined ***)(puVar11 + 0x40) = &PTR_PTR_1009ad308;
  *(undefined8 *)(puVar11 + 0x20) = uVar12;
  *(undefined **)(unaff_x20 + 200) = puVar11;
  puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100276cfc();
  puVar15 = puVar11;
  FUN_100276df0();
  puVar7 = puVar11;
  FUN_100276ee8();
  puVar16 = PTR___swiftEmptySetSingleton_100995eb0;
  if (((ulong)puVar11 >> 0x3e != 0) &&
     (puVar11 = PTR___swiftEmptyArrayStorage_100995ea0, __ss18_CocoaArrayWrapperV8endIndexSivg(),
     puVar16 = PTR___swiftEmptySetSingleton_100995eb0, puVar11 != (undefined *)0x0)) {
    puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10034757c();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100276fe0();
  puVar11 = &DAT_100a82210;
  FUN_100004bb4(&DAT_100a82210,&DAT_100816020);
  _swift_allocObject();
  lVar4 = 0;
  FUN_1002c6dd8();
  local_d0 = lVar4;
  _swift_allocObject();
  puVar9 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  self = local_b0;
  *(undefined4 **)(lVar4 + 0x10) = puVar9;
  *puVar9 = 0;
  *(long *)(puVar11 + 0x10) = lVar4;
  *(undefined **)(puVar11 + 0x18) = puVar14;
  *(undefined **)(puVar11 + 0x20) = puVar15;
  *(undefined **)(puVar11 + 0x28) = puVar7;
  *(undefined **)(puVar11 + 0x30) = puVar16;
  *(undefined **)(puVar11 + 0x38) = puVar8;
  *(undefined **)(unaff_x20 + 0xd0) = puVar11;
  IVar10 = _objc_msgSend(local_b0,"configuration");
  IVar10 = _objc_msgSend(IVar10,"identifier");
  if (IVar10 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e17f0);
    (*pcVar3)();
  }
  IVar10 = _objc_msgSend(self,"delegateQueue");
  puVar11 = (undefined *)_objc_msgSend(IVar10,"underlyingQueue");
  if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e17f4);
    (*pcVar3)();
  }
  if (puVar11 != param_3) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e17e4);
    (*pcVar3)();
  }
  local_f0 = param_11;
  local_e8 = param_10;
  *(ID *)(unaff_x20 + 0x10) = self;
  *(long *)(unaff_x20 + 0x18) = local_b8;
  *(undefined **)(unaff_x20 + 0x20) = param_3;
  *(byte *)(unaff_x20 + 0x28) = (byte)local_e0 & 1;
  *(byte *)(unaff_x20 + 0x29) = (byte)local_d8 & 1;
  puVar14 = local_c8;
  puVar11 = local_c8;
  if (local_c8 == (undefined *)0x0) {
    puVar13 = &DAT_100a82228;
    uVar12 = 0;
    FUN_10004003c(0,&DAT_100a82228,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    puVar11 = param_3;
    local_d8 = (undefined *)uVar12;
    __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
    local_90 = puVar11;
    local_88 = puVar13;
    __sSS6appendyySSF(0x747365757165722e,0xed00006575657551);
    puVar2 = local_88;
    lVar4 = local_120;
    local_e0 = local_90;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_120,param_3);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar11 = &DAT_100a82230;
    FUN_100005c90(&DAT_100a82230,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                  PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
    puVar14 = &DAT_100a82238;
    FUN_100004bb4(&DAT_100a82238,&DAT_100819bc0);
    puVar13 = &DAT_100a82240;
    FUN_1000d61d8(&DAT_100a82240,&DAT_100a82238,&DAT_100819bc0);
    lVar5 = local_110;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_110,&local_90,puVar14,puVar13,local_118,puVar11);
    puVar1 = local_100;
    (**(code **)(local_108 + 0x68))
              (local_100,
               *(undefined4 *)
                PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,local_f8);
    puVar11 = local_c8;
    puVar14 = local_e0;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (local_e0,puVar2,lVar4,lVar5,puVar1,param_3);
  }
  local_c8 = (undefined *)param_12;
  *(undefined **)(unaff_x20 + 0x30) = puVar14;
  if (param_7 == (undefined *)0x0) {
    puVar13 = &DAT_100a82228;
    puVar14 = (undefined *)0x0;
    FUN_10004003c(0,&DAT_100a82228,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    local_90 = (undefined *)0x0;
    local_88 = (undefined8 *)0xe000000000000000;
    puVar15 = (undefined *)0x15;
    local_e0 = puVar14;
    local_d8 = puVar11;
    __ss11_StringGutsV4growyySiF();
    puVar2 = local_88;
    __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
    _swift_bridgeObjectRelease(puVar2);
    local_90 = puVar15;
    local_88 = puVar13;
    __sSS6appendyySSF(&DAT_d000000000000013,0x80000001008aa080);
    puVar2 = local_88;
    lVar4 = local_120;
    local_128 = local_90;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_120,param_3);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar11 = &DAT_100a82230;
    FUN_100005c90(&DAT_100a82230,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                  PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
    puVar14 = &DAT_100a82238;
    FUN_100004bb4(&DAT_100a82238,&DAT_100819bc0);
    puVar13 = &DAT_100a82240;
    FUN_1000d61d8(&DAT_100a82240,&DAT_100a82238,&DAT_100819bc0);
    lVar5 = local_110;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_110,&local_90,puVar14,puVar13,local_118,puVar11);
    puVar1 = local_100;
    (**(code **)(local_108 + 0x68))
              (local_100,
               *(undefined4 *)
                PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,local_f8);
    param_7 = local_128;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (local_128,puVar2,lVar4,lVar5,puVar1,param_3);
    puVar11 = local_d8;
  }
  local_d8 = puVar11;
  *(undefined **)(unaff_x20 + 0x38) = param_7;
  FUN_10007f314(local_c0,unaff_x20 + 0x40,&DAT_100a83d18,0x1008188a0);
  uVar6 = local_e8;
  *(undefined8 *)(unaff_x20 + 0x68) = param_9;
  FUN_10007f314(local_e8,unaff_x20 + 0x70,&DAT_100a83d20,0x1008188a8);
  uVar12 = local_f0;
  FUN_10007f314(local_f0,unaff_x20 + 0x98,&DAT_100a83d28,0x1008188b0);
  puVar15 = (undefined *)0x0;
  FUN_100338154();
  puVar14 = puVar15;
  _swift_allocObject();
  *(undefined **)(puVar14 + 0x10) = param_3;
  puVar11 = &DAT_100a84258;
  FUN_100004bb4(&DAT_100a84258,0x100818b40);
  _swift_allocObject();
  lVar4 = local_d0;
  _swift_allocObject(local_d0,0x18,7);
  _swift_retain(param_9);
  puVar9 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar4 + 0x10) = puVar9;
  *puVar9 = 0;
  *(long *)(puVar11 + 0x10) = lVar4;
  *(undefined **)(puVar11 + 0x18) = local_c8;
  *(undefined **)(puVar14 + 0x18) = puVar11;
  *(undefined **)(unaff_x20 + 0xc0) = puVar14;
  ppuStack_70 = &PTR_PTR_1009b2868;
  local_78 = puVar15;
  _swift_retain(puVar14);
  _swift_release(param_9);
  local_90 = puVar14;
  FUN_100040bb4(uVar12,&DAT_100a83d28,0x1008188b0);
  FUN_100040bb4(uVar6,&DAT_100a83d20,0x1008188a8);
  FUN_100040bb4(local_c0,&DAT_100a83d18,0x1008188a0);
  lVar4 = local_b8;
  lVar5 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  _swift_beginAccess(local_b8 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_a8,0x21,0);
  FUN_1002eea4c(&local_90,lVar4 + lVar5);
  _swift_endAccess(auStack_a8);
  lVar4 = lVar4 + _TtC9Alamofire15SessionDelegate::stateProvider;
  *(undefined ***)(lVar4 + 8) = &PTR_PTR_1009ae840;
  _swift_unknownObjectWeakAssign(lVar4,unaff_x20);
  return unaff_x20;
}

