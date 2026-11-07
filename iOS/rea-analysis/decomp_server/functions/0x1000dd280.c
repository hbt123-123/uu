// rea decompile_all
// name: FUN_1000dd280
// address: 0x1000dd280
// body: available
// range: 0x1000dd280-0x1000dd9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000dd9c0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000dd7bc) */

void FUN_1000dd280(ulong param_1,long param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ID IVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ID *pIVar11;
  code *pcVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  char *pcVar16;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  long unaff_x20;
  long lVar17;
  ID self;
  long lVar18;
  undefined1 auStack_f0 [16];
  undefined8 auStack_e0 [2];
  ulong uStack_d0;
  undefined4 auStack_c8 [2];
  ulong uStack_c0;
  long lStack_b8;
  ID local_a0 [2];
  ulong local_90 [5];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar5 = 0;
  lVar18 = param_2;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar4 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
          isCompleted;
  lVar3 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
          temporaryURL;
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = &stack0xffffffffffffff50 + lVar2;
  if (*(char *)(param_2 +
               _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
               isCompleted) == '\x01') {
    uVar15 = 0;
    uVar6 = *(ulong *)(param_2 + 0x20);
    goto LAB_1000dd740;
  }
  self = *(ID *)(unaff_x20 + 0x10);
  lVar7 = lVar5;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(lVar18);
  pcVar16 = "fileExistsAtPath:";
  IVar8 = _objc_msgSend(self,"fileExistsAtPath:",lVar7);
  uVar15 = 0;
  if ((int)IVar8 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)((long)&uStack_d0 + lVar2) = param_1;
    *(undefined4 *)((long)auStack_c8 + lVar2) = param_3;
    *(long *)((long)&uStack_c0 + lVar2) = param_2;
    pcVar12 = FUN_1000e3714;
    uVar15 = 0x368;
LAB_1000dd72c:
    FUN_1003fb4ec(pcVar12,(long)auStack_e0 + lVar2,0xd0000000000000ae,0x8000000100886ab0,
                  0xd000000000000027,0x80000001008875f0,uVar15,0);
  }
  else {
    __s10Foundation3URLV4pathSSvg(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar16);
    local_90[0] = 0;
    IVar8 = _objc_msgSend(self,"attributesOfItemAtPath:error:",uVar15,local_90);
    if (IVar8 == 0) {
      uVar10 = local_90[0];
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _swift_willThrow(0);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(ulong *)((long)&uStack_c0 + lVar2) = uVar10;
      FUN_1003fb4ec(FUN_1000e3724,(long)&uStack_d0 + lVar2,0xd0000000000000ae,0x8000000100886ab0,
                    0xd000000000000027,0x80000001008875f0,0x381,0);
      uVar6 = uVar10;
      FUN_1000e3240(uVar10);
      _swift_errorRelease(uVar10);
      uVar6 = uVar6 & 0xff;
      uVar15 = 1;
      goto LAB_1000dd740;
    }
    uVar6 = 0;
    FUN_100006050();
    puVar9 = &DAT_100a752f0;
    FUN_100005c90(&DAT_100a752f0,FUN_100006050,&TargetProtocolConformanceDescriptor_1008511b8);
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (IVar8,uVar6,PTR___sypN_100995e88 + 8,puVar9);
    if (*(long *)(IVar8 + 0x10) == 0) {
LAB_1000dd598:
      local_90[1] = 0;
      local_90[0] = 0;
      local_90[3] = 0;
      local_90[2] = 0;
    }
    else {
      lVar18 = *(long *)PTR__NSFileSize_1009952c8;
      _swift_bridgeObjectRetain(IVar8);
      thunk_FUN_1001a2e90(lVar18);
      if ((uVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(IVar8);
        goto LAB_1000dd598;
      }
      FUN_10003e8bc(*(long *)(IVar8 + 0x38) + lVar18 * 0x20,local_90);
      _swift_bridgeObjectRelease(IVar8);
    }
    _swift_bridgeObjectRelease(IVar8);
    if (local_90[3] == 0) {
      FUN_100040bb4(local_90,&DAT_100a766e0,&DAT_10080bdb0);
LAB_1000dd6b4:
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(ulong *)((long)&uStack_d0 + lVar2) = param_1;
      *(undefined4 *)((long)auStack_c8 + lVar2) = param_3;
      *(long *)((long)&uStack_c0 + lVar2) = param_2;
      pcVar12 = FUN_1000e373c;
      uVar15 = 0x36f;
      goto LAB_1000dd72c;
    }
    uVar15 = 0;
    FUN_10004003c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
    pIVar11 = local_a0;
    _swift_dynamicCast(pIVar11,local_90,PTR___sypN_100995e88 + 8,uVar15,6);
    if (((ulong)pIVar11 & 1) == 0) goto LAB_1000dd6b4;
    uVar6 = _objc_msgSend(local_a0[0],"unsignedLongLongValue");
    if (uVar6 <= *(ulong *)(param_2 + 0x20)) {
      FUN_10004003c(0,&DAT_100a77d00,&PTR__OBJC_CLASS___NSFileHandle_100a658e8);
      (**(code **)(lVar17 + 0x10))(puVar13,param_2 + lVar3,lVar5);
      FUN_10018c040();
      *(undefined1 **)
       (param_2 +
       _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::handle) =
           puVar13;
      *(ulong *)(param_2 +
                _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
                writtenSize) = uVar6;
      puVar1 = (undefined4 *)
               (param_2 +
               _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
               nextBlockID);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)(param_2 + lVar4) = 0;
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(undefined8 *)((long)auStack_e0 + lVar2) = extraout_x8_00;
      *(undefined8 *)((long)auStack_e0 + lVar2 + 8) = extraout_x12;
      *(undefined8 *)((long)&uStack_d0 + lVar2) = extraout_x13;
      *(undefined4 *)((long)auStack_c8 + lVar2) = param_3;
      *(code **)((long)&uStack_c0 + lVar2) = FUN_1000e374c;
      *(long *)((long)&lStack_b8 + lVar2) = param_2;
      puVar14 = &DAT_100a77cf8;
      FUN_100004bb4(&DAT_100a77cf8,&DAT_10080ca20);
      __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                (local_90,FUN_1000e3770,auStack_f0 + lVar2,puVar14);
      if ((local_90[0] & 0x100) != 0) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong *)((long)&uStack_c0 + lVar2) = param_1;
        *(undefined4 *)((long)&lStack_b8 + lVar2) = param_3;
        FUN_1003fb4bc(FUN_1000e3784,(long)&uStack_d0 + lVar2,0xd0000000000000ae,0x8000000100886ab0,
                      &DAT_d000000000000028,0x8000000100887620,0x3b3,0);
        uVar10 = param_1;
        FUN_1000dbf54(param_1,0);
        if ((uVar10 & 1) == 0) {
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(ulong *)((long)&uStack_c0 + lVar2) = param_1;
          *(undefined4 *)((long)&lStack_b8 + lVar2) = param_3;
          FUN_1003fb4ec(FUN_1000e3790,(long)&uStack_d0 + lVar2,0xd0000000000000ae,0x8000000100886ab0
                        ,0xd000000000000027,0x80000001008875f0,0x37c,0);
          uVar15 = 1;
          uVar6 = 7;
          goto LAB_1000dd740;
        }
      }
      uVar15 = 0;
      goto LAB_1000dd740;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)((long)&uStack_d0 + lVar2) = param_1;
    *(undefined4 *)((long)auStack_c8 + lVar2) = param_3;
    *(ulong *)((long)&uStack_c0 + lVar2) = uVar6;
    *(long *)((long)&lStack_b8 + lVar2) = param_2;
    FUN_1003fb4ec(FUN_1000e379c,(long)auStack_e0 + lVar2,0xd0000000000000ae,0x8000000100886ab0,
                  0xd000000000000027,0x80000001008875f0,0x374,0);
  }
  uVar15 = 1;
  uVar6 = 0xb;
LAB_1000dd740:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar6,uVar15);
  }
  return;
}

