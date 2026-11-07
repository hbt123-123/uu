// rea decompile_all
// name: FUN_10009d564
// address: 0x10009d564
// body: available
// range: 0x10009d564-0x10009e96f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009e5c4 to 0x1007dd078 _$ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10009e950 to 0x1007df160 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10009e96c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010009e130) */
/* WARNING: Removing unreachable block (ram,0x00010009e044) */
/* WARNING: Removing unreachable block (ram,0x00010009e1f8) */
/* WARNING: Removing unreachable block (ram,0x00010009dee4) */

void FUN_10009d564(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ID IVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ID IVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  void *aBlock;
  undefined8 *puVar19;
  undefined8 *puVar20;
  char *pcVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  long unaff_x22;
  undefined8 uVar30;
  undefined8 uVar31;
  ulong uVar32;
  ulong uVar33;
  code *pcVar34;
  long lVar35;
  
  lVar22 = *(long *)PTR____stack_chk_guard_1009954a0;
  *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x1e8);
  *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0x1f0);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0x478) = *(undefined8 *)(unaff_x22 + 0x210);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x480) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x488) = *(undefined8 *)(unaff_x22 + 0x220);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x490) = uVar30;
  *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x210);
  *(undefined8 *)(unaff_x22 + 0x288) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x290) = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x298) = uVar30;
  *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x230);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar30);
  FUN_100040bb4((undefined8 *)(unaff_x22 + 0x1f8),&DAT_100a766a8,&DAT_1008103e0);
  lVar3 = 0x20;
  _swift_task_alloc();
  *(long *)(lVar3 + 0x10) = unaff_x22 + 0x280;
  lVar14 = lVar3;
  FUN_1003fb48c(FUN_10009fc50,lVar3,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                0x800000010087fcb0,0x1e,0);
  _swift_task_dealloc(lVar3);
  uVar29 = uVar30;
  _swift_bridgeObjectRetain();
  _NSTemporaryDirectory();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(unaff_x22 + 0x3e0) = 0xd000000000000012;
  *(undefined8 *)(unaff_x22 + 1000) = 0x800000010087fce0;
  *(undefined8 *)(unaff_x22 + 0x3d0) = uVar29;
  *(long *)(unaff_x22 + 0x3d8) = lVar14;
  puVar16 = PTR___sSSSTsWP_100995820;
  puVar7 = PTR___sSSN_1009957f8;
  lVar14 = unaff_x22 + 0x3d0;
  puVar17 = PTR___sSSN_1009957f8;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (lVar14,PTR___sSSN_1009957f8,PTR___sSSs25LosslessStringConvertiblesWP_100995838,
             PTR___sSSSTsWP_100995820);
  __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(unaff_x22 + 0x3e0,puVar7,puVar16);
  if (DAT_100a73bb0 != -1) {
    _swift_once(&DAT_100a73bb0,FUN_10019b250);
  }
  uVar13 = DAT_100b36260;
  uVar31 = DAT_100b36258;
  puVar19 = (undefined8 *)(unaff_x22 + 0x3f8);
  lVar23 = *(long *)(unaff_x22 + 0x448);
  lVar26 = *(long *)(unaff_x22 + 0x440);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x438);
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(0x676f6c2e,0xe400000000000000);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  *(long *)(unaff_x22 + 0x498) = lVar4;
  lVar24 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x4a0) = lVar24;
  lVar3 = *(long *)(lVar24 + 0x40);
  *(long *)(unaff_x22 + 0x4a8) = lVar3;
  uVar18 = lVar3 + 0xf;
  uVar5 = uVar18 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4b0) = uVar5;
  lVar9 = lVar14;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar14,puVar17);
  IVar6 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",lVar9);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(uVar5,IVar6);
  pcVar34 = FUN_1000935f4;
  FUN_1003fb48c(FUN_1000935f4,0,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                0x800000010087fcb0,0x26,0);
  FUN_1003ab578();
  uVar29 = *(undefined8 *)pcVar34;
  _swift_retain(uVar29);
  FUN_1003eaf68(unaff_x22 + 0x90);
  _swift_release(uVar29);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x170);
  lVar9 = *(long *)(unaff_x22 + 0x178);
  _swift_bridgeObjectRetain(lVar9);
  FUN_10009fc58(unaff_x22 + 0x90);
  uVar29 = 0;
  if (lVar9 != 0) {
    uVar29 = uVar8;
  }
  lVar1 = -0x2000000000000000;
  if (lVar9 != 0) {
    lVar1 = lVar9;
  }
  puVar7 = &_OBJC_CLASS___NSDateFormatter;
  _objc_allocWithZone();
  IVar6 = _objc_msgSend((ID)puVar7,"init");
  *(ID *)(unaff_x22 + 0x4b8) = IVar6;
  uVar8 = 0x64644d4d79797979;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x64644d4d79797979,0xef73736d6d48485f);
  _objc_msgSend(IVar6,"setDateFormat:",uVar8);
  lVar9 = 0;
  __s10Foundation6LocaleVMa();
  lVar35 = *(long *)(lVar9 + -8);
  uVar10 = *(long *)(lVar35 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar10);
  uVar8 = 0x4f505f53555f6e65;
  __s10Foundation6LocaleV10identifierACSS_tcfC(uVar10,0x4f505f53555f6e65,0xeb00000000584953);
  __s10Foundation6LocaleV19_bridgeToObjectiveCSo8NSLocaleCyF();
  (**(code **)(lVar35 + 8))(uVar10,lVar9);
  _swift_task_dealloc(uVar10);
  _objc_msgSend(IVar6,"setLocale:",uVar8);
  lVar9 = lVar1;
  FUN_100093620();
  _swift_bridgeObjectRelease(lVar1);
  __sSS6appendyySSF(0x5f,0xe100000000000000);
  uVar11 = lVar23 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar11);
  uVar10 = uVar11;
  __s10Foundation4DateVACycfC(uVar11);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  pcVar34 = *(code **)(lVar26 + 8);
  *(code **)(unaff_x22 + 0x4c0) = pcVar34;
  (*pcVar34)(uVar11,uVar25);
  _swift_task_dealloc(uVar11);
  pcVar21 = "stringFromDate:";
  IVar6 = _objc_msgSend(IVar6,"stringFromDate:",uVar10);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
  __sSS6appendyySSF(IVar6,pcVar21);
  _swift_bridgeObjectRelease(pcVar21);
  __sSS6appendyySSF(uVar29,lVar9);
  _swift_bridgeObjectRelease(lVar9);
  *(undefined8 *)(unaff_x22 + 0x3b0) = 0x2f;
  *(undefined8 *)(unaff_x22 + 0x3b8) = 0xe100000000000000;
  *(long *)(unaff_x22 + 0x3c0) = lVar14;
  *(undefined **)(unaff_x22 + 0x3c8) = puVar17;
  puVar16 = PTR___sSSSTsWP_100995820;
  puVar7 = PTR___sSSN_1009957f8;
  lVar14 = unaff_x22 + 0x3c0;
  puVar17 = PTR___sSSN_1009957f8;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (lVar14,PTR___sSSN_1009957f8,PTR___sSSs25LosslessStringConvertiblesWP_100995838,
             PTR___sSSSTsWP_100995820);
  __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(unaff_x22 + 0x3b0,puVar7,puVar16);
  _swift_bridgeObjectRelease(0xe100000000000000);
  *(long *)(unaff_x22 + 0x4c8) = lVar14;
  *(undefined **)(unaff_x22 + 0x4d0) = puVar17;
  IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  *(ID *)(unaff_x22 + 0x4d8) = IVar6;
  lVar9 = lVar14;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar14,puVar17);
  *(undefined8 *)(unaff_x22 + 0x3f0) = 0;
  IVar12 = NSFileManager::removeItemAtPath_error_
                     (IVar6,"removeItemAtPath:error:",lVar9,unaff_x22 + 0x3f0);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x3f0);
  if ((int)IVar12 == 0) {
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(uVar29);
    _swift_willThrow(0);
    _swift_errorRelease(uVar29);
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(unaff_x22 + 0x470);
  }
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  *puVar19 = 0;
  IVar12 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                     (IVar6,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                      uVar29,1,0,puVar19);
  uVar29 = *puVar19;
  if ((int)IVar12 == 0) {
LAB_10009dd7c:
    uVar8 = *(undefined8 *)(unaff_x22 + 0x450);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x438);
    _swift_bridgeObjectRelease_n(uVar30,2);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(puVar17);
    _swift_bridgeObjectRelease(uVar2);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(uVar29);
    _swift_willThrow(0);
    (**(code **)(lVar24 + 8))(uVar5,lVar4);
  }
  else {
    puVar19 = (undefined8 *)(unaff_x22 + 0x400);
    lVar23 = lVar14;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar14,puVar17);
    *puVar19 = 0;
    IVar12 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                       (IVar6,"createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                        lVar23,1,0,puVar19);
    uVar29 = *puVar19;
    if ((int)IVar12 == 0) goto LAB_10009dd7c;
    FUN_1003fb48c(FUN_100093950,0,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                  0x800000010087fcb0,0x35,0);
    FUN_1003fd764();
    uVar29 = uVar31;
    uVar8 = uVar13;
    FUN_1003fbef4(uVar31,uVar13);
    FUN_10009a3a0();
    _swift_bridgeObjectRelease(uVar8);
    *(undefined8 *)(unaff_x22 + 0x408) = uVar29;
    FUN_10009aaac(0xd00000000000001b,0x800000010087fd00,10);
    FUN_10005f374();
    FUN_10009aaac(0xd00000000000001a,0x800000010087fd20,10);
    FUN_10005f374();
    uVar29 = *(undefined8 *)(unaff_x22 + 0x408);
    *(undefined8 *)(unaff_x22 + 0x4e0) = uVar29;
    FUN_10009acd0(uVar29,lVar14,puVar17,0x726576726573,0xe600000000000000);
    if (lVar9 == 0) {
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      puVar19 = (undefined8 *)
                (*(long *)(DAT_100b360a8 + 0x28) + _TtC14UURemoteServer15StreamerManager::logPath);
      uVar29 = *puVar19;
      uVar2 = puVar19[1];
      _swift_bridgeObjectRetain(uVar2);
      FUN_10009a3a0(uVar29,uVar2,5,0,0);
      _swift_bridgeObjectRelease(uVar2);
      FUN_10009acd0(uVar29,lVar14,puVar17,0x72656d6165727473,0xef7265767265732f);
      _swift_bridgeObjectRelease(uVar29);
      FUN_10009b4d4();
      uVar2 = uVar29;
      FUN_10009bbbc();
      FUN_10009bea0(uVar29);
      _swift_bridgeObjectRelease(uVar29);
      uVar29 = 0x746e65696c63;
      FUN_10009c974(0x746e65696c63,0xe600000000000000,uVar2,10);
      FUN_10009acd0();
      _swift_bridgeObjectRelease(uVar29);
      uVar29 = 0x735f746e65696c63;
      FUN_10009c974(0x735f746e65696c63,0xef72656d61657274,uVar2,5);
      FUN_10009acd0();
      _swift_bridgeObjectRelease(uVar29);
      uVar29 = 0x72657461647075;
      FUN_10009c974(0x72657461647075,0xe700000000000000,uVar2,10);
      _swift_bridgeObjectRelease(uVar2);
      lVar9 = lVar14;
      FUN_10009acd0(uVar29,lVar14,puVar17,0x72657461647075,0xe700000000000000);
      _swift_bridgeObjectRelease(uVar29);
      FUN_10009cee8();
      if (lVar9 != 0) {
        FUN_10009a3a0();
        _swift_bridgeObjectRelease(lVar9);
        FUN_10009acd0(uVar29,lVar14,puVar17,0x7265706c6568,0xe600000000000000);
        _swift_bridgeObjectRelease(uVar29);
      }
      uVar5 = uVar18 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x4e8) = uVar5;
      __sSS6appendyySSF(0x70697a2e,0xe400000000000000);
      uVar29 = uVar13;
      __s10Foundation3URLV22appendingPathComponentyACSSF(uVar5,uVar31,uVar13);
      _swift_bridgeObjectRelease(uVar13);
      __s10Foundation3URLV4pathSSvg();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(uVar29);
      IVar12 = NSFileManager::fileExistsAtPath_(IVar6,"fileExistsAtPath:",uVar13);
      uVar29 = 0;
      if ((int)IVar12 != 0) {
        puVar19 = (undefined8 *)(unaff_x22 + 0x428);
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
        *puVar19 = 0;
        IVar6 = NSFileManager::removeItemAtURL_error_(IVar6,"removeItemAtURL:error:",uVar29,puVar19)
        ;
        uVar29 = *puVar19;
        if ((int)IVar6 == 0) {
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(uVar29);
          _swift_willThrow(0);
          _swift_errorRelease(uVar29);
        }
      }
      lVar23 = *(long *)(unaff_x22 + 0x448);
      lVar9 = 0x20;
      _swift_task_alloc();
      *(ulong *)(lVar9 + 0x10) = uVar5;
      FUN_1003fb48c(FUN_10009fc8c,lVar9,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                    0x800000010087fcb0,0x5f,0);
      _swift_task_dealloc(lVar9);
      uVar10 = lVar23 + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x4f0) = uVar10;
      __s10Foundation4DateVACycfC(uVar10);
      puVar7 = &DAT_100a75a28;
      FUN_100004bb4(&DAT_100a75a28,&DAT_100809ad0);
      uVar27 = (ulong)*(byte *)(lVar24 + 0x50);
      _swift_allocObject();
      *(undefined **)(unaff_x22 + 0x4f8) = puVar7;
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC
                (puVar7 + (uVar27 + 0x20 & (uVar27 ^ 0xffffffffffffffff)),lVar14,puVar17);
      FUN_100004b70(0);
      lVar14 = 0;
      __s8Dispatch0A3QoSV0B6SClassOMa();
      lVar9 = *(long *)(lVar14 + -8);
      uVar11 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      (**(code **)(lVar9 + 0x68))();
      uVar10 = uVar11;
      __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
      *(ulong *)(unaff_x22 + 0x500) = uVar10;
      (**(code **)(lVar9 + 8))(uVar11,lVar14);
      _swift_task_dealloc(uVar11);
      lVar14 = 0x50;
      _swift_task_alloc();
      *(long *)(unaff_x22 + 0x508) = lVar14;
      *(ulong *)(lVar14 + 0x10) = uVar10;
      *(undefined **)(lVar14 + 0x18) = puVar7;
      *(ulong *)(lVar14 + 0x20) = uVar5;
      *(undefined8 *)(lVar14 + 0x28) = 0;
      *(undefined8 *)(lVar14 + 0x30) = 0;
      *(undefined1 *)(lVar14 + 0x38) = 2;
      *(undefined8 *)(lVar14 + 0x40) = 0;
      *(undefined8 *)(lVar14 + 0x48) = 0;
      uVar5 = 0xf;
      __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xf,0,0,0x12,0,0);
      if ((uVar5 & 1) == 0) {
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_10009ea6c;
        lVar14 = unaff_x22 + 0x10;
        _swift_continuation_init(lVar14,1);
        puVar16 = &DAT_100a766c0;
        FUN_100004bb4(&DAT_100a766c0,&DAT_10080b1c8);
        lVar9 = *(long *)(puVar16 + -8);
        lVar23 = *(long *)(lVar9 + 0x40);
        uVar5 = lVar23 + 0xf;
        uVar10 = uVar5 & 0xfffffffffffffff0;
        _swift_task_alloc();
        puVar17 = &DAT_100a75b40;
        FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
        __sScC12continuation8functionScCyxq_GSccyxq_G_SStcfC
                  (uVar10,lVar14,0xd000000000000042,0x800000010087fd40,PTR___sytN_100995e90 + 8,
                   puVar17,PTR___ss5ErrorWS_100995c48);
        uVar18 = uVar18 & 0xfffffffffffffff0;
        _swift_task_alloc();
        (**(code **)(lVar24 + 0x10))();
        uVar5 = uVar5 & 0xfffffffffffffff0;
        _swift_task_alloc();
        (**(code **)(lVar9 + 0x10))();
        uVar28 = uVar27 + 0x18 & ~uVar27;
        lVar3 = uVar28 + lVar3;
        uVar32 = lVar3 + 0x1fU & 0xfffffffffffffff8;
        uVar11 = (ulong)*(byte *)(lVar9 + 0x50);
        uVar33 = uVar32 + uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
        puVar17 = &DAT_100999ea8;
        _swift_allocObject(&DAT_100999ea8,uVar33 + lVar23,uVar27 | 7 | uVar11);
        *(undefined **)(puVar17 + 0x10) = puVar7;
        (**(code **)(lVar24 + 0x20))(puVar17 + uVar28,uVar18,lVar4);
        puVar19 = (undefined8 *)(puVar17 + (lVar3 + 7U & 0xfffffffffffffff8));
        *puVar19 = 0;
        puVar19[1] = 0;
        *(undefined1 *)(puVar19 + 2) = 2;
        *(undefined8 *)(puVar17 + uVar32) = 0;
        *(undefined8 *)((long)(puVar17 + uVar32) + 8) = 0;
        (**(code **)(lVar9 + 0x20))(puVar17 + uVar33,uVar5,puVar16);
        *(code **)(unaff_x22 + 0x2d0) = FUN_10009fdcc;
        *(undefined **)(unaff_x22 + 0x2d8) = puVar17;
        *(undefined **)(unaff_x22 + 0x2b0) = PTR___NSConcreteStackBlock_100995490;
        *(undefined8 *)(unaff_x22 + 0x2b8) = 0x42000000;
        *(code **)(unaff_x22 + 0x2c0) = FUN_1000acdb4;
        *(undefined **)(unaff_x22 + 0x2c8) = &DAT_100999ec0;
        aBlock = __Block_copy((void *)(unaff_x22 + 0x2b0));
        lVar14 = 0;
        __s8Dispatch0A3QoSVMa();
        lVar4 = *(long *)(lVar14 + -8);
        uVar11 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar11);
        _swift_bridgeObjectRetain(puVar7);
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(uVar11);
        lVar3 = 0;
        __s8Dispatch0A13WorkItemFlagsVMa();
        puVar7 = PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40;
        lVar23 = *(long *)(lVar3 + -8);
        uVar27 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar27);
        *(undefined **)(unaff_x22 + 0x410) = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar19 = &DAT_100a75a90;
        FUN_100005c90(&DAT_100a75a90,puVar7,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar7 = &DAT_100a75a98;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar20 = &DAT_100a75aa0;
        FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (uVar27,unaff_x22 + 0x410,puVar7,puVar20,lVar3,puVar19);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,uVar11,uVar27,aBlock);
        __Block_release(aBlock);
        (**(code **)(lVar23 + 8))(uVar27,lVar3);
        (**(code **)(lVar4 + 8))(uVar11,lVar14);
        (**(code **)(lVar9 + 8))(uVar10,puVar16);
        _swift_task_dealloc(uVar27);
        _swift_task_dealloc(uVar11);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x2d8));
        _swift_task_dealloc(uVar5);
        _swift_task_dealloc(uVar18);
        _swift_task_dealloc(uVar10);
        if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar22) {
          _swift_continuation_await(unaff_x22 + 0x10);
          return;
        }
      }
      else {
        plVar15 = (long *)(ulong)*(uint *)(
                                          PTR___ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlFTu_1009960a0
                                          + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x510) = plVar15;
        *plVar15 = unaff_x22;
        plVar15[1] = (long)FUN_10009e970;
        if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar22) {
          __ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlF
                    ();
          return;
        }
      }
      goto LAB_10009e96c;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x450);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x438);
    _swift_bridgeObjectRelease_n(uVar30,2);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar29);
    FUN_10009385c(IVar6,lVar14,puVar17);
    _swift_bridgeObjectRelease(puVar17);
    (**(code **)(lVar24 + 8))(uVar5,lVar4);
  }
  (*pcVar34)(uVar8,uVar31);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x450));
  if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x00010009de48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_10009e96c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

