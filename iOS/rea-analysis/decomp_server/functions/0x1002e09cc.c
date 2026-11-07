// rea decompile_all
// name: FUN_1002e09cc
// address: 0x1002e09cc
// body: available
// range: 0x1002e09cc-0x1002e0ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_1002e09cc(ID param_1,undefined8 param_2,long param_3,uint param_4,uint param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ID IVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *pcVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  undefined8 auStack_180 [4];
  undefined8 *local_160;
  long local_158;
  long local_150;
  long local_148;
  undefined8 local_140;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined *local_90;
  undefined8 *local_88;
  
  lVar5 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_150 = *(long *)(lVar5 + -8);
  lVar15 = (long)&local_160 - (*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_148 = lVar5;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar14 = lVar15 - (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar5 = lVar14 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar7 = _objc_msgSend(param_1,"identifier");
  if (IVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x1002e0ed8);
    (*pcVar13)();
  }
  local_140 = param_12;
  local_128 = param_11;
  local_120 = param_10;
  local_130 = param_9;
  puVar10 = &DAT_100a82228;
  local_118 = param_7;
  FUN_10004003c(0,&DAT_100a82228,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  lVar8 = param_3;
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  lVar9 = 0;
  local_138 = param_3;
  if (lVar8 != param_3) {
    __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
    local_160 = puVar10;
    local_158 = lVar9;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar5,param_3);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar11 = &DAT_100a82230;
    FUN_100005c90(&DAT_100a82230,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                  PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
    puVar12 = &DAT_100a82238;
    FUN_100004bb4(&DAT_100a82238,&DAT_100819bc0);
    puVar10 = &DAT_100a82240;
    FUN_1000d61d8(&DAT_100a82240,&DAT_100a82238,&DAT_100819bc0);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar14,&local_90,puVar12,puVar10,lVar6,puVar11);
    (**(code **)(local_150 + 0x68))
              (lVar15,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,local_148);
    lVar6 = local_158;
    puVar10 = local_160;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (local_158,local_160,lVar5,lVar14,lVar15,param_3);
    param_3 = lVar6;
  }
  local_90 = (undefined *)0x0;
  local_88 = (undefined8 *)0xe000000000000000;
  puVar11 = (undefined *)0x12;
  __ss11_StringGutsV4growyySiF();
  puVar4 = local_88;
  __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
  _swift_bridgeObjectRelease(puVar4);
  local_90 = puVar11;
  local_88 = puVar10;
  __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008aa060);
  puVar10 = local_88;
  puVar11 = local_90;
  puVar12 = &_OBJC_CLASS___NSOperationQueue;
  _objc_allocWithZone();
  IVar7 = _objc_msgSend((ID)puVar12,"init");
  _objc_msgSend(IVar7,"setQualityOfService:",0xffffffffffffffff);
  _objc_msgSend(IVar7,"setMaxConcurrentOperationCount:",1);
  _objc_msgSend(IVar7,"setUnderlyingQueue:",param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar11,puVar10);
  _swift_bridgeObjectRelease(puVar10);
  _objc_msgSend(IVar7,"setName:",puVar11);
  _objc_msgSend(IVar7,"setSuspended:",0);
  IVar7 = NSURLSession::sessionWithConfiguration_delegate_delegateQueue_
                    ((ID)&_OBJC_CLASS___NSURLSession,
                     "sessionWithConfiguration:delegate:delegateQueue:",param_1,param_2,IVar7);
  FUN_10007f314(param_8,&local_90,&DAT_100a83d18,0x1008188a0);
  uVar3 = local_120;
  FUN_10007f314(local_120,auStack_b8,&DAT_100a83d20,0x1008188a8);
  uVar2 = local_128;
  FUN_10007f314(local_128,auStack_e0,&DAT_100a83d28,0x1008188b0);
  uVar1 = local_140;
  pcVar13 = *(code **)(unaff_x20 + 0xc0);
  *(undefined1 **)(lVar5 + -0x10) = auStack_e0;
  *(undefined8 *)(lVar5 + -8) = uVar1;
  *(undefined1 **)(lVar5 + -0x18) = auStack_b8;
  *(undefined8 *)(lVar5 + -0x20) = local_130;
  (*pcVar13)(IVar7,param_2,param_3,param_4 & 1,param_5 & 1,param_6,local_118,&local_90);
  FUN_100040bb4(uVar2,&DAT_100a83d28,0x1008188b0);
  FUN_100040bb4(uVar3,&DAT_100a83d20,0x1008188a8);
  FUN_100040bb4(param_8,&DAT_100a83d18,0x1008188a0);
  return IVar7;
}

