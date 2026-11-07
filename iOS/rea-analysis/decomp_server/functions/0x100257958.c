// rea decompile_all
// name: FUN_100257958
// address: 0x100257958
// body: available
// range: 0x100257958-0x100257df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100257958(code *param_1,undefined8 param_2)

{
  code *pcVar1;
  ID IVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [24];
  
  uVar9 = *unaff_x20;
  local_b8 = (undefined *)0x0;
  local_b0 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  _swift_bridgeObjectRelease(local_b0);
  local_b8 = (undefined *)0xd000000000000012;
  local_b0 = 0x80000001008a7e50;
  IVar2 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  pcVar8 = "description";
  IVar2 = NSThread::description(IVar2,"description");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar2);
  __sSS6appendyySSF(IVar2,pcVar8);
  _swift_bridgeObjectRelease(pcVar8);
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  _swift_bridgeObjectRelease(local_b0);
  _swift_beginAccess(unaff_x20 + 6,auStack_88,0,0);
  uVar10 = unaff_x20[6];
  if (uVar10 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar10 & 0xffffffffffffff8;
    if ((long)uVar10 < 0) {
      uVar3 = uVar10;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar3 == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    FUN_100257df4(param_1,param_2);
    while( true ) {
      uVar10 = unaff_x20[6];
      if (uVar10 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar10 & 0xffffffffffffff8;
        if ((long)uVar10 < 0) {
          uVar3 = uVar10;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar3 == 0) break;
      _swift_beginAccess(unaff_x20 + 6,&local_b8,0x21,0);
      uVar3 = unaff_x20[6];
      uVar10 = uVar3;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      unaff_x20[6] = uVar3;
      if ((((int)uVar10 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
        FUN_100258e88();
        unaff_x20[6] = uVar3;
      }
      uVar10 = uVar3 & 0xffffffffffffff8;
      if (*(long *)(uVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100257cfc);
        (*pcVar1)();
      }
      lVar11 = *(long *)(uVar10 + 0x10) + -1;
      uVar12 = *(undefined8 *)(uVar10 + 0x20);
      _memmove((undefined8 *)(uVar10 + 0x20),(void *)(uVar10 + 0x28),lVar11 * 8);
      *(long *)(uVar10 + 0x10) = lVar11;
      unaff_x20[6] = uVar3;
      _swift_endAccess(&local_b8);
      puVar4 = unaff_x20 + 3;
      _swift_weakLoadStrong();
      if (puVar4 == (undefined8 *)0x0) {
        local_b8 = (undefined *)0x0;
        local_b0 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x26);
        _swift_bridgeObjectRelease(local_b0);
        local_b8 = (undefined *)0x5b726f727245;
        local_b0 = 0xe600000000000000;
        uVar12 = 0;
        __ss9_typeName_9qualifiedSSypXp_SbtF(uVar9,0);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar12);
        __sSS6appendyySSF(0xd00000000000001e,0x80000001008a7de0);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,local_b8,local_b0,"FlerkenSDKCore/LogManager.swift",0x1f,2,
                   0x6b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100257df4);
        (*pcVar1)();
      }
      _swift_release();
      puVar4 = unaff_x20 + 3;
      _swift_weakLoadStrong();
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100257d48);
        (*pcVar1)();
      }
      uVar13 = puVar4[2];
      puVar5 = &DAT_1009a8468;
      _swift_allocObject(&DAT_1009a8468,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar12;
      *(undefined8 **)(puVar5 + 0x18) = puVar4;
      puVar6 = &DAT_1009a8490;
      _swift_allocObject(&DAT_1009a8490,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_10025838c;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      local_98 = FUN_1000f4ed4;
      local_b8 = PTR___NSConcreteStackBlock_100995490;
      local_b0 = 0x42000000;
      local_a8 = FUN_1000fcdcc;
      puStack_a0 = &DAT_1009a84a8;
      local_90 = puVar6;
      aBlock = __Block_copy(&local_b8);
      puVar7 = local_90;
      _swift_retain(uVar12);
      _swift_retain(puVar4);
      _swift_retain(puVar6);
      _swift_release(puVar7);
      _dispatch_sync(uVar13,aBlock);
      _swift_release(puVar4);
      _swift_release(uVar12);
      __Block_release(aBlock);
      puVar7 = puVar6;
      _swift_isEscapingClosureAtFileLocation(puVar6,"",0xb4,0x2a,0x21,1);
      _swift_release(puVar5);
      _swift_release(puVar6);
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100257d00);
        (*pcVar1)();
      }
      __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
    }
    local_b8 = (undefined *)0x0;
    local_b0 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x22);
    _swift_bridgeObjectRelease(local_b0);
    local_b8 = (undefined *)0x206c6c41;
    local_b0 = 0xe400000000000000;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    __sSS6appendyySSF(0xd00000000000001c,0x80000001008a7e70);
    _swift_bridgeObjectRelease(local_b0);
  }
  return;
}

