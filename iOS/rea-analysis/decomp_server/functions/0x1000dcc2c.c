// rea decompile_all
// name: FUN_1000dcc2c
// address: 0x1000dcc2c
// body: available
// range: 0x1000dcc2c-0x1000dd27f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000dd27c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000dcc2c(ulong *param_1,long param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  byte bVar6;
  ulong *puVar7;
  char *pcVar8;
  long extraout_x8;
  long extraout_x12;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong unaff_x21;
  long lVar12;
  long lVar13;
  ID IVar14;
  undefined4 uVar15;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  long lStack_b8;
  ID local_b0;
  long local_a8;
  long local_a0;
  ulong local_98;
  ulong *local_90;
  ulong local_80 [3];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar5 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID;
  lVar13 = lVar5 - extraout_x12;
  puVar7 = local_80;
  _swift_beginAccess(param_2 + _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID,puVar7,
                     0x20,0);
  lVar11 = *(long *)(param_2 + lVar11);
  uVar15 = (undefined4)param_3;
  if ((*(long *)(lVar11 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar7 & 1) == 0)) {
    _swift_endAccess(local_80);
LAB_1000dcde4:
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)(lVar13 + -0x10) = uVar15;
    *(int *)(lVar13 + -0xc) = (int)param_4;
    FUN_1003fb4ec(FUN_1000e36f0,lVar13 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                  0xd00000000000001e,0x80000001008875d0,0x162,0);
    uVar9 = 10;
  }
  else {
    uVar9 = *(ulong *)(*(long *)(lVar11 + 0x38) + param_3 * 8);
    local_90 = param_1;
    _swift_endAccess(local_80);
    lVar11 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask::
             files;
    puVar7 = local_80;
    _swift_beginAccess(uVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                               ::files,puVar7,0x20,0);
    lVar11 = *(long *)(uVar9 + lVar11);
    local_98 = uVar9;
    if ((*(long *)(lVar11 + 0x10) == 0) ||
       (lVar10 = param_4, thunk_FUN_1001a2c34(), ((ulong)puVar7 & 1) == 0)) {
      _swift_endAccess(local_80);
      param_1 = local_90;
      goto LAB_1000dcde4;
    }
    lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + lVar10 * 8);
    _swift_endAccess(local_80);
    uVar9 = local_98;
    _swift_retain(local_98);
    lVar11 = lVar10;
    _swift_retain(lVar10);
    FUN_1000e2e54();
    uVar2 = local_98;
    if ((*(char *)(uVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                           ::strategy) == '\x04') &&
       (*(char *)(lVar10 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                           ::isResumable) == '\x01')) {
      uVar9 = local_98;
      lVar11 = lVar10;
      FUN_1000dd280(local_98,lVar10,param_4);
      bVar6 = (byte)lVar11;
      _swift_release(uVar2);
      _swift_release(lVar10);
      param_1 = local_90;
      goto LAB_1000dce6c;
    }
    IVar14 = *(ID *)(param_2 + 0x10);
    local_a0 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
               temporaryURL;
    __s10Foundation3URLV25deletingLastPathComponentACyF(lVar13);
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar12 + 8))(lVar13,lVar3);
    local_80[0] = 0;
    pcVar8 = "createDirectoryAtURL:withIntermediateDirectories:attributes:error:";
    IVar4 = _objc_msgSend(IVar14,
                          "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                          lVar11,1,0,local_80);
    local_a8 = lVar10;
    if ((int)IVar4 == 0) {
      unaff_x21 = local_80[0];
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _swift_willThrow(0);
      param_1 = local_90;
LAB_1000dd094:
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(ulong *)(lVar13 + -0x10) = unaff_x21;
      FUN_1003fb4ec(thunk_FUN_1000e3724,lVar13 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                    0xd00000000000001e,0x80000001008875d0,0x17d,0);
      uVar9 = unaff_x21;
      FUN_1000e3240();
      _swift_errorRelease(unaff_x21);
      _swift_release(local_98);
      _swift_release(local_a8);
      uVar9 = uVar9 & 0xff;
      bVar6 = 1;
      goto LAB_1000dce6c;
    }
    uVar9 = local_80[0];
    __s10Foundation3URLV4pathSSvg(local_a0,local_80[0]);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar8);
    pcVar8 = "fileExistsAtPath:";
    IVar4 = _objc_msgSend(IVar14,"fileExistsAtPath:",uVar9);
    param_1 = local_90;
    uVar9 = 0;
    if ((int)IVar4 != 0) {
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(lVar10,0);
      local_80[0] = 0;
      pcVar8 = "removeItemAtURL:error:";
      local_b0 = IVar14;
      IVar4 = _objc_msgSend(IVar14,"removeItemAtURL:error:",uVar9,local_80);
      uVar9 = local_80[0];
      lVar10 = local_a8;
      IVar14 = local_b0;
      if ((int)IVar4 == 0) {
        unaff_x21 = local_80[0];
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _swift_willThrow(0);
        goto LAB_1000dd094;
      }
    }
    __s10Foundation3URLV4pathSSvg(lVar10,uVar9);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar8);
    IVar14 = _objc_msgSend(IVar14,"createFileAtPath:contents:attributes:",uVar9,0,0);
    if ((int)IVar14 != 0) {
      FUN_10004003c(0,&DAT_100a77d00,&PTR__OBJC_CLASS___NSFileHandle_100a658e8);
      lVar11 = local_a8;
      (**(code **)(lVar12 + 0x10))(lVar5,local_a8 + local_a0,lVar3);
      FUN_10018c040();
      if (unaff_x21 == 0) {
        _swift_release(local_98);
        *(long *)(lVar11 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                           ::handle) = lVar5;
        *(undefined8 *)
         (lVar11 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                   ::writtenSize) = 0;
        puVar1 = (undefined4 *)
                 (lVar11 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                           ::nextBlockID);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)
         (lVar11 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                   ::isCompleted) = 0;
        _swift_release(lVar11);
        uVar9 = 0;
        bVar6 = 0;
        goto LAB_1000dce6c;
      }
      goto LAB_1000dd094;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)(lVar13 + -0x10) = uVar15;
    *(int *)(lVar13 + -0xc) = (int)param_4;
    lVar11 = local_a8;
    *(long *)(lVar13 + -8) = local_a8;
    FUN_1003fb4ec(FUN_1000e3708,lVar13 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                  0xd00000000000001e,0x80000001008875d0,0x174,0);
    _swift_release(lVar11);
    _swift_release(local_98);
    uVar9 = 7;
  }
  bVar6 = 1;
LAB_1000dce6c:
  *param_1 = uVar9;
  *(byte *)(param_1 + 1) = bVar6 & 1;
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

