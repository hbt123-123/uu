// rea decompile_all
// name: FUN_1000d7a60
// address: 0x1000d7a60
// body: available
// range: 0x1000d7a60-0x1000d7ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d7cc8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000d7a60(ulong param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  undefined *puVar1;
  bool bVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ID *pIVar7;
  long lVar8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  ID local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar6 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  local_80 = 0;
  IVar3 = _objc_msgSend(param_4,"attributesOfFileSystemForPath:error:",uVar6,&local_80);
  if (IVar3 == 0) {
    uVar6 = local_80;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_80);
    _swift_willThrow(0);
    _swift_errorRelease(uVar6);
  }
  else {
    uVar4 = 0;
    FUN_100006050();
    uVar5 = uVar4;
    FUN_1000d3e68();
    puVar1 = PTR___sypN_100995e88;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (IVar3,uVar4,PTR___sypN_100995e88 + 8,uVar5);
    if (*(long *)(IVar3 + 0x10) == 0) {
LAB_1000d7ba4:
      uStack_78 = 0;
      local_80 = 0;
      local_68 = 0;
      uStack_70 = 0;
    }
    else {
      lVar8 = *(long *)PTR__NSFileSystemFreeSize_1009952d0;
      _swift_bridgeObjectRetain(IVar3);
      thunk_FUN_1001a2e90(lVar8);
      if ((uVar4 & 1) == 0) {
        _swift_bridgeObjectRelease(IVar3);
        goto LAB_1000d7ba4;
      }
      FUN_10003e8bc(*(long *)(IVar3 + 0x38) + lVar8 * 0x20,&local_80);
      _swift_bridgeObjectRelease(IVar3);
    }
    _swift_bridgeObjectRelease(IVar3);
    if (local_68 == 0) {
      FUN_1000c776c(&local_80);
    }
    else {
      uVar6 = 0;
      FUN_1000d3848(0);
      pIVar7 = local_90;
      _swift_dynamicCast(pIVar7,&local_80,puVar1 + 8,uVar6,6);
      if (((ulong)pIVar7 & 1) != 0) {
        IVar3 = _objc_msgSend(local_90[0],"unsignedLongLongValue");
        bVar2 = param_1 < IVar3;
        goto LAB_1000d7c94;
      }
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_a0 = param_2;
  uStack_98 = param_3;
  FUN_1003fb4bc(FUN_1000d7ccc,auStack_b0,0xd0000000000000a3,0x8000000100886660,0xd00000000000002c,
                0x80000001008867b0,299,0);
  bVar2 = true;
LAB_1000d7c94:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar2);
}

