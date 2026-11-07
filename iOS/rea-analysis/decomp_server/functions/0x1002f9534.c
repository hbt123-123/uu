// rea decompile_all
// name: FUN_1002f9534
// address: 0x1002f9534
// body: available
// range: 0x1002f9534-0x1002f97ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f97fc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002f9534(void)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  ID IVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_a0;
  long lStack_98;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  local_a0 = *(long *)(lVar2 + -8);
  lVar10 = (long)&local_a0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a84710;
  lStack_98 = lVar2;
  FUN_100004bb4(&DAT_100a84710,&DAT_1008190f0);
  lVar12 = lVar10 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1002f9800();
  lVar2 = _TtC9Alamofire13UploadRequest::uploadable;
  lVar7 = *(long *)(lVar4 + -8);
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = lVar12 - uVar6;
  lVar11 = lVar8 - uVar6;
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire13UploadRequest::uploadable,auStack_80,0,0);
  FUN_10007f314(unaff_x20 + lVar2,lVar12,&DAT_100a84710,&DAT_1008190f0);
  lVar2 = lVar12;
  (**(code **)(lVar7 + 0x30))(lVar12,1,lVar4);
  if ((int)lVar2 == 1) {
    FUN_100040bb4(lVar12,&DAT_100a84710,&DAT_1008190f0);
  }
  else {
    FUN_1002f9814(lVar12,lVar11);
    FUN_100082394(lVar11,lVar8,FUN_1002f9800);
    lVar2 = lVar8;
    _swift_getEnumCaseMultiPayload(lVar8,lVar4);
    if ((int)lVar2 == 1) {
      puVar3 = &DAT_100a84390;
      FUN_100004bb4(&DAT_100a84390,&DAT_100818cf8);
      lVar4 = lStack_98;
      lVar2 = local_a0;
      cVar1 = *(char *)(lVar8 + *(int *)(puVar3 + 0x30));
      lVar7 = lVar10;
      (**(code **)(local_a0 + 0x20))(lVar10,lVar8,lStack_98);
      if (cVar1 == '\x01') {
        IVar9 = *(ID *)(unaff_x20 + _TtC9Alamofire13UploadRequest::fileManager);
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
        local_88 = 0;
        IVar9 = _objc_msgSend(IVar9,"removeItemAtURL:error:",lVar7,&local_88);
        if ((int)IVar9 == 0) {
          uVar5 = local_88;
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_88);
          _swift_willThrow(0);
          _swift_errorRelease(uVar5);
        }
        (**(code **)(lVar2 + 8))(lVar10,lVar4);
        FUN_1000d27dc(lVar11,FUN_1002f9800);
        goto LAB_1002f97c0;
      }
      (**(code **)(lVar2 + 8))(lVar10,lVar4);
      lVar8 = lVar11;
    }
    else {
      FUN_1000d27dc(lVar11,FUN_1002f9800);
    }
    FUN_1000d27dc(lVar8,FUN_1002f9800);
  }
LAB_1002f97c0:
  FUN_1002cd038();
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

