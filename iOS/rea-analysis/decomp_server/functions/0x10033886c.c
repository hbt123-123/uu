// rea decompile_all
// name: FUN_10033886c
// address: 0x10033886c
// body: available
// range: 0x10033886c-0x100338dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100338dd4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100338920) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10033886c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ID *pIVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  ID IVar12;
  ID aIStack_b0 [2];
  byte local_99 [9];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  FUN_100278198();
  lVar11 = (long)aIStack_b0 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10033abb0(param_2,param_3,param_4,param_5,param_6,param_7);
  uVar6 = param_2;
  __s10Foundation3URLV06isFileB0Sbvg();
  if ((uVar6 & 1) == 0) {
    _swift_bridgeObjectRelease(param_2);
    lVar5 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(lVar11,param_1,lVar5);
    uVar10 = 0;
LAB_1003389c8:
    _swift_storeEnumTagMultiPayload(lVar11,lVar2,uVar10);
    FUN_100339c3c(lVar11);
  }
  else {
    __s10Foundation3URLV28checkPromisedItemIsReachableSbyKF();
    if ((uVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(lVar11,param_1,lVar5);
      uVar10 = 2;
      goto LAB_1003389c8;
    }
    local_99[0] = 0;
    __s10Foundation3URLV4pathSSvg();
    IVar12 = *(ID *)(unaff_x20 + 0x30);
    uVar3 = uVar6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    IVar4 = _objc_msgSend(IVar12,"fileExistsAtPath:isDirectory:",uVar3,local_99);
    if (((int)IVar4 == 0) || ((local_99[0] & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(param_3);
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(lVar11,param_1,lVar5);
      uVar10 = 4;
      goto LAB_1003389c8;
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,param_3);
    _swift_bridgeObjectRelease(param_3);
    aIStack_b0[1] = 0;
    IVar12 = _objc_msgSend(IVar12,"attributesOfItemAtPath:error:",uVar6,aIStack_b0 + 1);
    IVar4 = aIStack_b0[1];
    if (IVar12 != 0) {
      uVar6 = 0;
      FUN_1002772e0();
      puVar7 = &DAT_100a823e8;
      FUN_100005c90(&DAT_100a823e8,FUN_1002772e0,&TargetProtocolConformanceDescriptor_100816878);
      puVar9 = PTR___sypN_100995e88;
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                (IVar12,uVar6,PTR___sypN_100995e88 + 8,puVar7);
      if (*(long *)(IVar12 + 0x10) == 0) {
LAB_100338c7c:
        uStack_88 = 0;
        local_90 = 0;
        local_78 = 0;
        uStack_80 = 0;
      }
      else {
        lVar5 = *(long *)PTR__NSFileSize_1009952c8;
        _swift_bridgeObjectRetain(IVar12);
        FUN_100234398(lVar5);
        if ((uVar6 & 1) == 0) {
          _swift_bridgeObjectRelease(IVar12);
          goto LAB_100338c7c;
        }
        FUN_10003e8bc(*(long *)(IVar12 + 0x38) + lVar5 * 0x20,&local_90);
        _swift_bridgeObjectRelease(IVar12);
      }
      _swift_bridgeObjectRelease(IVar12);
      if (local_78 == 0) {
        _swift_bridgeObjectRelease(param_2);
        FUN_100040bb4(&local_90,&DAT_100a82480,&DAT_1008182d0);
      }
      else {
        uVar10 = 0;
        FUN_1002c63f4(0);
        pIVar8 = aIStack_b0 + 1;
        _swift_dynamicCast(pIVar8,&local_90,puVar9 + 8,uVar10,6);
        if (((ulong)pIVar8 & 1) != 0) {
          IVar4 = _objc_msgSend(aIStack_b0[1],"unsignedLongLongValue");
          puVar9 = &_OBJC_CLASS___NSInputStream;
          _objc_allocWithZone();
          puVar7 = puVar9;
          __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
          IVar12 = _objc_msgSend((ID)puVar9,"initWithURL:",puVar7);
          if (IVar12 != 0) {
            FUN_100338e34(IVar12,IVar4,param_2);
            _swift_bridgeObjectRelease(param_2);
            goto LAB_1003389e8;
          }
          _swift_bridgeObjectRelease(param_2);
          lVar5 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar5 + -8) + 0x10))(lVar11,param_1,lVar5);
          uVar10 = 7;
          goto LAB_1003389c8;
        }
        _swift_bridgeObjectRelease(param_2);
      }
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(lVar11,param_1,lVar5);
      uVar10 = 5;
      goto LAB_1003389c8;
    }
    _swift_bridgeObjectRelease(param_2);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    puVar7 = &DAT_100a824b8;
    FUN_100004bb4(&DAT_100a824b8,&DAT_1008176b0);
    iVar1 = *(int *)(puVar7 + 0x30);
    lVar5 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(lVar11,param_1,lVar5);
    *(ID *)(lVar11 + iVar1) = IVar4;
    _swift_storeEnumTagMultiPayload(lVar11,lVar2,6);
    _swift_errorRetain(IVar4);
    FUN_100339c3c(lVar11);
    _swift_errorRelease(IVar4);
  }
  FUN_1000d27dc(lVar11,FUN_100278198);
LAB_1003389e8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

