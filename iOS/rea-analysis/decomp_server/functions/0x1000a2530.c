// rea decompile_all
// name: FUN_1000a2530
// address: 0x1000a2530
// body: available
// range: 0x1000a2530-0x1000a2cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a2cd4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 * FUN_1000a2530(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ID IVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  undefined1 *puVar17;
  long lVar18;
  undefined1 auStack_b0 [8];
  char *local_78;
  char *pcStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar15 = *unaff_x20;
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar16 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  puVar17 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar18 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar4);
  local_78 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000aad00();
  puVar6 = &DAT_100a750d8;
  FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
  puVar14 = &DAT_100a750e0;
  FUN_10003f840(&DAT_100a750e0,&DAT_100a750d8,&DAT_1008083f0,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar18,&local_78,puVar6,puVar14,lVar3,uVar5);
  (**(code **)(lVar16 + 0x68))
            (puVar17,*(undefined4 *)
                      PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lVar2);
  uVar5 = 0xd00000000000002c;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000002c,0x8000000100881230,lVar4,lVar18,puVar17,0);
  unaff_x20[2] = uVar5;
  puVar6 = &DAT_100a76a30;
  FUN_100004bb4(&DAT_100a76a30,&DAT_10080b4d0);
  _swift_allocObject();
  __s8Dispatch0A11SpecificKeyCACyxGycfc();
  unaff_x20[3] = puVar6;
  *(undefined1 *)(unaff_x20 + 4) = 0;
  puVar6 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar7 = _objc_msgSend((ID)puVar6,"init");
  unaff_x20[5] = IVar7;
  uVar5 = unaff_x20[3];
  local_78 = (char *)CONCAT62(local_78._2_6_,1);
  _swift_retain(uVar5);
  __sSo17OS_dispatch_queueC8DispatchE11setSpecific3key5valueyAC0dF3KeyCyxG_xSgtlF();
  _swift_release(uVar5);
  IVar7 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar5 = 0x78756d2d63797575;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x78756d2d63797575,0xe800000000000000);
  uVar8 = 0x78756d74;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x78756d74,0xe400000000000000);
  pcVar12 = "pathForResource:ofType:inDirectory:";
  IVar7 = NSBundle::pathForResource_ofType_inDirectory_
                    (IVar7,"pathForResource:ofType:inDirectory:",uVar5,0,uVar8);
  if (IVar7 == 0) {
    bVar1 = false;
  }
  else {
    IVar9 = IVar7;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    unaff_x20[6] = IVar9;
    unaff_x20[7] = pcVar12;
    IVar9 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar5 = 0x65746f6d65727575;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65746f6d65727575,0xe800000000000000);
    uVar8 = 0x666e6f63;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x666e6f63,0xe400000000000000);
    uVar10 = 0x78756d74;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x78756d74,0xe400000000000000);
    pcVar12 = "pathForResource:ofType:inDirectory:";
    IVar9 = NSBundle::pathForResource_ofType_inDirectory_
                      (IVar9,"pathForResource:ofType:inDirectory:",uVar5,uVar8,uVar10);
    bVar1 = IVar9 != 0;
    if (IVar9 != 0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      unaff_x20[8] = IVar9;
      unaff_x20[9] = pcVar12;
      IVar9 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
      pcVar13 = "resourcePath";
      pcVar12 = (char *)NSBundle::resourcePath(IVar9,"resourcePath");
      if (pcVar12 != (char *)0x0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        local_78 = pcVar12;
        pcStack_70 = pcVar13;
        _swift_bridgeObjectRetain(pcVar13);
        puVar14 = (undefined8 *)0xee006f666e696d72;
        __sSS6appendyySSF(0x65742f78756d742f);
        _swift_bridgeObjectRelease();
        unaff_x20[10] = local_78;
        unaff_x20[0xb] = pcStack_70;
        _NSHomeDirectory();
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        local_78 = pcVar13;
        pcStack_70 = (char *)puVar14;
        _swift_bridgeObjectRetain(puVar14);
        __sSS6appendyySSF(0xd000000000000025,0x8000000100881260);
        _swift_bridgeObjectRelease(puVar14);
        pcVar13 = pcStack_70;
        pcVar12 = local_78;
        unaff_x20[0xe] = local_78;
        unaff_x20[0xf] = pcStack_70;
        _swift_bridgeObjectRetain_n(pcStack_70,2);
        __sSS6appendyySSF(0x6f732e78756d742f,0xea00000000006b63);
        unaff_x20[0xc] = local_78;
        unaff_x20[0xd] = pcStack_70;
        IVar9 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
        IVar7 = NSFileManager::isExecutableFileAtPath_(IVar9,"isExecutableFileAtPath:",IVar7);
        if ((int)IVar7 == 0) {
          _swift_bridgeObjectRelease();
          FUN_1000aacc0();
          _swift_allocError(&DAT_10099a280,pcVar13,0,0);
          *(undefined8 *)pcVar13 = 1;
          *(undefined8 *)((long)pcVar13 + 0x10) = 0;
          *(undefined8 *)((long)pcVar13 + 8) = 0;
          *(undefined8 *)((long)pcVar13 + 0x20) = 0;
          *(undefined8 *)((long)pcVar13 + 0x18) = 0;
          *(undefined1 *)((long)pcVar13 + 0x28) = 5;
          _swift_willThrow();
LAB_1000a2c58:
          _swift_release(unaff_x20);
        }
        else {
          IVar7 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
          pcVar11 = pcVar12;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(pcVar12,pcVar13);
          IVar7 = NSFileManager::fileExistsAtPath_(IVar7,"fileExistsAtPath:",pcVar11);
          if ((IVar7 & 1) == 0) {
            IVar7 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager")
            ;
            pcVar11 = pcVar12;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(pcVar12,pcVar13);
            local_78 = (char *)0x0;
            IVar7 = NSFileManager::
                    createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                              (IVar7,
                               "createDirectoryAtPath:withIntermediateDirectories:attributes:error:"
                               ,pcVar11,1,0,&local_78);
            if ((int)IVar7 == 0) {
              pcVar11 = local_78;
              __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_78);
              puVar14 = (undefined8 *)0x0;
              _swift_willThrow();
              FUN_1000aacc0();
              _swift_allocError(&DAT_10099a280,puVar14,0,0);
              *puVar14 = pcVar12;
              puVar14[1] = pcVar13;
              puVar14[3] = 0;
              puVar14[4] = 0;
              puVar14[2] = 0;
              *(undefined1 *)(puVar14 + 5) = 4;
              _swift_willThrow();
              _swift_errorRelease(pcVar11);
              goto LAB_1000a2c58;
            }
          }
          _swift_bridgeObjectRelease(pcVar13);
        }
        goto LAB_1000a2bcc;
      }
    }
  }
  puVar14 = (undefined8 *)0x0;
  FUN_1000aacc0();
  _swift_allocError(&DAT_10099a280,puVar14,0,0);
  puVar14[1] = 0;
  *puVar14 = 0;
  puVar14[3] = 0;
  puVar14[2] = 0;
  puVar14[4] = 0;
  *(undefined1 *)(puVar14 + 5) = 5;
  _swift_willThrow();
  _swift_release(unaff_x20[3]);
  if (IVar7 != 0) {
    _swift_bridgeObjectRelease(unaff_x20[7]);
  }
  if (bVar1) {
    _swift_bridgeObjectRelease(unaff_x20[9]);
  }
  _swift_deallocPartialClassInstance(unaff_x20,uVar15,0x80,7);
LAB_1000a2bcc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return unaff_x20;
}

