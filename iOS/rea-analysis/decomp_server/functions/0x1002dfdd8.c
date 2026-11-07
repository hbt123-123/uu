// rea decompile_all
// name: FUN_1002dfdd8
// address: 0x1002dfdd8
// body: available
// range: 0x1002dfdd8-0x1002e09cb inclusive
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

undefined8 FUN_1002dfdd8(void)

{
  undefined1 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  undefined8 uVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  ID IVar13;
  char *pcVar14;
  undefined *puVar15;
  ID IVar16;
  undefined *self;
  undefined *puVar17;
  undefined *puVar18;
  undefined4 *puVar19;
  undefined *puVar20;
  char *pcVar21;
  long lVar22;
  undefined1 auStack_270 [8];
  ID local_268;
  ID local_260;
  char *local_258;
  ID local_250;
  undefined8 local_248;
  undefined *local_240;
  long local_238;
  undefined *local_230;
  undefined8 uStack_228;
  undefined *local_220;
  ID local_218;
  long local_210;
  undefined8 *local_208;
  undefined1 *local_200;
  undefined4 local_1f4;
  code *local_1f0;
  undefined8 *local_1e8;
  undefined *puStack_1e0;
  undefined *local_1d8;
  long local_1d0;
  ID local_1c8;
  long local_1c0;
  undefined1 auStack_1b8 [24];
  undefined *local_1a0;
  char *local_198;
  undefined *local_188;
  undefined **ppuStack_180;
  undefined1 auStack_178 [40];
  undefined1 auStack_150 [40];
  undefined *local_128;
  char *local_120;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar4 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_1c8 = *(long *)(lVar4 + -8);
  lVar22 = *(long *)(local_1c8 + 0x40);
  lVar5 = 0;
  local_200 = auStack_270 + -(lVar22 + 0xfU & 0xfffffffffffffff0);
  local_1c0 = lVar4;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar22 = (long)(auStack_270 + -(lVar22 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_1d0 = lVar22;
  __s8Dispatch0A3QoSVMa();
  lVar22 = lVar22 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  IVar6 = NSURLSessionConfiguration::defaultSessionConfiguration
                    ((ID)&_OBJC_CLASS___NSURLSessionConfiguration,"defaultSessionConfiguration");
  if (DAT_100a81b38 != -1) {
    _swift_once(&DAT_100a81b38,FUN_1002bdc84);
  }
  uVar9 = DAT_100b36478;
  FUN_1002bc258(DAT_100b36478);
  uVar7 = uVar9;
  FUN_1002bf548();
  _swift_bridgeObjectRelease(uVar9);
  uVar9 = uVar7;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar7,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
             PTR___ss11AnyHashableVSHsWP_100995ad8);
  _swift_bridgeObjectRelease(uVar7);
  NSURLSessionConfiguration::setHTTPAdditionalHeaders_(IVar6,"setHTTPAdditionalHeaders:",uVar9);
  IVar8 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar9 = 0;
  FUN_1002f21ac(0);
  _objc_allocWithZone();
  FUN_1002f20c0(IVar8,uVar9);
  uVar9 = 0;
  local_218 = IVar8;
  FUN_10004003c(0,&DAT_100a82228,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar22);
  local_128 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar10 = &DAT_100a82230;
  FUN_100005c90(&DAT_100a82230,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar11 = &DAT_100a82238;
  FUN_100004bb4(&DAT_100a82238,&DAT_100819bc0);
  puVar12 = &DAT_100a82240;
  FUN_1000d61d8(&DAT_100a82240,&DAT_100a82238,&DAT_100819bc0);
  lVar4 = local_1d0;
  local_210 = lVar5;
  local_1e8 = puVar12;
  puStack_1e0 = puVar11;
  local_1d8 = puVar10;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_1d0,&local_128,puVar11,puVar12,lVar5,puVar10);
  lVar5 = local_1c0;
  puVar1 = local_200;
  local_1f4 = *(undefined4 *)
               PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
  ;
  local_1f0 = *(code **)(local_1c8 + 0x68);
  (*local_1f0)(local_200,local_1f4,local_1c0);
  IVar13 = 0xd00000000000001f;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000001f,0x800000010088f0f0,lVar22,lVar4,puVar1,0);
  puVar10 = &DAT_100a82208;
  FUN_100004bb4(&DAT_100a82208,&DAT_100817900);
  local_220 = puVar10;
  _swift_allocObject();
  uStack_228 = 2;
  local_230 = (undefined *)0x1;
  *(undefined8 *)(puVar10 + 0x18) = 2;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  IVar8 = 0;
  FUN_1002c2264();
  lVar4 = IVar8;
  _swift_allocObject();
  *(ID *)(puVar10 + 0x38) = IVar8;
  *(undefined ***)(puVar10 + 0x40) = &PTR_PTR_1009ad308;
  *(long *)(puVar10 + 0x20) = lVar4;
  pcVar21 = "identifier";
  local_208 = (undefined8 *)IVar6;
  IVar6 = NSURLSessionConfiguration::identifier(IVar6,"identifier");
  if (IVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e09bc);
    (*pcVar3)();
  }
  IVar6 = IVar13;
  local_240 = puVar10;
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  IVar16 = 0;
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_250 = IVar13;
  local_248 = uVar9;
  local_238 = lVar22;
  if (IVar13 != IVar6) {
    __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
    local_258 = pcVar21;
    local_1c8 = IVar8;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar22,IVar13);
    lVar4 = local_1d0;
    puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_128 = PTR___swiftEmptyArrayStorage_100995ea0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_1d0,&local_128,puStack_1e0,local_1e8,local_210,local_1d8);
    (*local_1f0)(puVar1,local_1f4,lVar5);
    IVar8 = local_1c8;
    pcVar21 = local_258;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (IVar16,local_258,lVar22,lVar4,puVar1,IVar13);
    IVar13 = IVar16;
  }
  local_128 = (undefined *)0x0;
  local_120 = (undefined *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x12);
  pcVar14 = local_120;
  _swift_bridgeObjectRelease();
  __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
  local_128 = pcVar14;
  local_120 = pcVar21;
  __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008aa060);
  pcVar21 = local_120;
  puVar11 = local_128;
  puVar15 = &_OBJC_CLASS___NSOperationQueue;
  _objc_allocWithZone();
  IVar16 = _objc_msgSend((ID)puVar15,"init");
  _objc_msgSend(IVar16,"setQualityOfService:",0xffffffffffffffff);
  _objc_msgSend(IVar16,"setMaxConcurrentOperationCount:",1);
  _objc_msgSend(IVar16,"setUnderlyingQueue:",IVar13);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar11,pcVar21);
  _swift_bridgeObjectRelease(pcVar21);
  _objc_msgSend(IVar16,"setName:",puVar11);
  _objc_msgSend(IVar16,"setSuspended:",0);
  puVar12 = local_208;
  IVar6 = local_218;
  local_1c8 = IVar13;
  self = (undefined *)
         NSURLSession::sessionWithConfiguration_delegate_delegateQueue_
                   ((ID)&_OBJC_CLASS___NSURLSession,
                    "sessionWithConfiguration:delegate:delegateQueue:",local_208,local_218,IVar16);
  local_258 = (char *)puVar12;
  local_260 = IVar6;
  local_218 = IVar16;
  FUN_10007f314(&local_a0,&local_128,&DAT_100a83d18,0x1008188a0);
  FUN_10007f314(&local_d0,auStack_150,&DAT_100a83d20,0x1008188a8);
  puVar12 = &local_100;
  FUN_10007f314(puVar12,auStack_178,&DAT_100a83d28,0x1008188b0);
  FUN_1002ef3cc();
  _swift_allocObject();
  puVar11 = local_220;
  _swift_allocObject(local_220,0x48,7);
  *(undefined8 *)(puVar11 + 0x18) = uStack_228;
  *(undefined **)(puVar11 + 0x10) = local_230;
  lVar4 = IVar8;
  _swift_allocObject(IVar8,0x10,7);
  *(ID *)(puVar11 + 0x38) = IVar8;
  *(undefined ***)(puVar11 + 0x40) = &PTR_PTR_1009ad308;
  *(long *)(puVar11 + 0x20) = lVar4;
  local_208 = puVar12;
  puVar12[0x19] = puVar11;
  puVar11 = puVar10;
  FUN_100276cfc();
  puVar15 = puVar10;
  FUN_100276df0();
  puVar17 = puVar10;
  FUN_100276ee8();
  puVar20 = PTR___swiftEmptySetSingleton_100995eb0;
  if (((ulong)puVar10 >> 0x3e != 0) &&
     (puVar10 = PTR___swiftEmptyArrayStorage_100995ea0, __ss18_CocoaArrayWrapperV8endIndexSivg(),
     puVar20 = PTR___swiftEmptySetSingleton_100995eb0, puVar10 != (undefined *)0x0)) {
    puVar20 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10034757c();
  }
  puVar18 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100276fe0();
  puVar10 = &DAT_100a82210;
  FUN_100004bb4(&DAT_100a82210,&DAT_100816020);
  _swift_allocObject();
  lVar5 = 0;
  FUN_1002c6dd8();
  lVar4 = lVar5;
  _swift_allocObject();
  puVar19 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar4 + 0x10) = puVar19;
  *puVar19 = 0;
  *(long *)(puVar10 + 0x10) = lVar4;
  *(undefined **)(puVar10 + 0x18) = puVar11;
  *(undefined **)(puVar10 + 0x20) = puVar15;
  *(undefined **)(puVar10 + 0x28) = puVar17;
  *(undefined **)(puVar10 + 0x30) = puVar20;
  *(undefined **)(puVar10 + 0x38) = puVar18;
  local_208[0x1a] = puVar10;
  IVar6 = _objc_msgSend((ID)self,"configuration");
  IVar6 = _objc_msgSend(IVar6,"identifier");
  if (IVar6 == 0) {
    IVar6 = _objc_msgSend((ID)self,"delegateQueue");
    pcVar21 = "underlyingQueue";
    IVar6 = _objc_msgSend(IVar6,"underlyingQueue");
    local_268 = local_1c8;
    puVar12 = local_208;
    if (IVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e09cc);
      (*pcVar3)();
    }
    if (IVar6 != local_1c8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e09b4);
      (*pcVar3)();
    }
    local_208[2] = self;
    local_208[3] = local_260;
    local_208[4] = local_1c8;
    *(undefined2 *)(local_208 + 5) = 1;
    local_220 = (undefined *)local_260;
    local_230 = self;
    __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
    local_1a0 = self;
    local_198 = pcVar21;
    __sSS6appendyySSF(0x747365757165722e,0xed00006575657551);
    pcVar21 = local_198;
    puVar10 = local_1a0;
    lVar4 = local_238;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_238);
    lVar2 = local_1d0;
    lVar22 = local_210;
    local_1a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_260 = lVar5;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_1d0,&local_1a0,puStack_1e0,local_1e8,local_210,local_1d8);
    puVar1 = local_200;
    (*local_1f0)(local_200,local_1f4,local_1c0);
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (puVar10,pcVar21,lVar4,lVar2,puVar1,local_1c8);
    puVar12[6] = puVar10;
    local_1a0 = (undefined *)0x0;
    local_198 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    pcVar14 = local_198;
    _swift_bridgeObjectRelease();
    __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
    local_1a0 = pcVar14;
    local_198 = pcVar21;
    __sSS6appendyySSF(&DAT_d000000000000013,0x80000001008aa080);
    pcVar21 = local_198;
    puVar10 = local_1a0;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar4);
    local_1a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar2,&local_1a0,puStack_1e0,local_1e8,lVar22,local_1d8);
    (*local_1f0)(puVar1,local_1f4,local_1c0);
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (puVar10,pcVar21,lVar4,lVar2,puVar1,local_1c8);
    puVar12[7] = puVar10;
    FUN_10007f314(&local_128,puVar12 + 8,&DAT_100a83d18,0x1008188a0);
    puVar12[0xd] = 0;
    FUN_10007f314(auStack_150,puVar12 + 0xe,&DAT_100a83d20,0x1008188a8);
    FUN_10007f314(auStack_178,puVar12 + 0x13,&DAT_100a83d28,0x1008188b0);
    puVar15 = (undefined *)0x0;
    FUN_100338154();
    puVar11 = puVar15;
    _swift_allocObject();
    *(ID *)(puVar11 + 0x10) = local_268;
    puVar10 = &DAT_100a84258;
    FUN_100004bb4(&DAT_100a84258,0x100818b40);
    _swift_allocObject();
    IVar6 = local_260;
    _swift_allocObject(local_260,0x18,7);
    puVar19 = (undefined4 *)0x4;
    _swift_slowAlloc(4,0xffffffffffffffff);
    *(undefined4 **)(IVar6 + 0x10) = puVar19;
    *puVar19 = 0;
    *(ID *)(puVar10 + 0x10) = IVar6;
    *(undefined **)(puVar10 + 0x18) = local_240;
    *(undefined **)(puVar11 + 0x18) = puVar10;
    puVar12[0x18] = puVar11;
    ppuStack_180 = &PTR_PTR_1009b2868;
    local_188 = puVar15;
    _swift_retain(puVar11);
    local_1a0 = puVar11;
    FUN_100040bb4(auStack_178,&DAT_100a83d28,0x1008188b0);
    FUN_100040bb4(auStack_150,&DAT_100a83d20,0x1008188a8);
    FUN_100040bb4(&local_128,&DAT_100a83d18,0x1008188a0);
    FUN_100040bb4(&local_100,&DAT_100a83d28,0x1008188b0);
    FUN_100040bb4(&local_d0,&DAT_100a83d20,0x1008188a8);
    FUN_100040bb4(&local_a0,&DAT_100a83d18,0x1008188a0);
    puVar10 = local_220;
    lVar4 = _TtC9Alamofire15SessionDelegate::eventMonitor;
    _swift_beginAccess((long)local_220 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_1b8,
                       0x21,0);
    FUN_1002eea4c(&local_1a0,(long)puVar10 + lVar4);
    _swift_endAccess(auStack_1b8);
    lVar4 = (long)puVar10 + _TtC9Alamofire15SessionDelegate::stateProvider;
    *(undefined ***)(lVar4 + 8) = &PTR_PTR_1009ae840;
    _swift_unknownObjectWeakAssign(lVar4,puVar12);
    DAT_100b36568 = puVar12;
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e09c8);
  (*pcVar3)();
}

