// rea decompile_all
// name: FUN_1000dedf4
// address: 0x1000dedf4
// body: available
// range: 0x1000dedf4-0x1000dfb63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000dfb60 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000dedf4(char *param_1,char param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  char cVar10;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x12;
  undefined8 extraout_x12_00;
  undefined8 extraout_x12_01;
  undefined8 extraout_x12_02;
  undefined8 extraout_x12_03;
  undefined8 extraout_x13;
  ID extraout_x14;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  ID IVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  ID IVar18;
  undefined1 auStack_f0 [16];
  undefined8 auStack_e0 [2];
  undefined8 uStack_d0;
  int aiStack_c8 [2];
  undefined8 uStack_c0;
  ID IStack_b8;
  char *local_b0;
  code *local_a8;
  ID local_a0;
  ulong local_98;
  long local_90;
  undefined8 local_80;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar2 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID;
  lVar15 = lVar2 - extraout_x12;
  if (param_2 != '\x01') {
    puVar7 = &local_80;
    _swift_beginAccess(param_3 + _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID,
                       puVar7,0x20,0);
    lVar11 = *(long *)(param_3 + lVar11);
    if ((*(long *)(lVar11 + 0x10) == 0) ||
       (lVar1 = param_4, thunk_FUN_1001a2c34(), ((ulong)puVar7 & 1) == 0)) {
      _swift_endAccess(&local_80);
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + lVar1 * 8);
      _swift_endAccess(&local_80);
      _swift_retain(lVar11);
      FUN_1000dbca4();
      if (param_2 == '\b') {
        uVar9 = *(undefined8 *)(lVar11 + 0x20);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined8 *)(lVar15 + -0x20) = extraout_x8_01;
        *(undefined8 *)(lVar15 + -0x18) = extraout_x12_01;
        *(undefined8 *)(lVar15 + -0x10) = uVar9;
        _swift_bridgeObjectRetain(uVar9);
        puVar4 = &DAT_100a77cf8;
        FUN_100004bb4(&DAT_100a77cf8,&DAT_10080ca20);
      }
      else {
        if (param_2 == '\t') {
          FUN_1000dbf54(lVar11,1);
          _swift_release(lVar11);
          goto LAB_1000df454;
        }
        uVar9 = *(undefined8 *)(lVar11 + 0x20);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined8 *)(lVar15 + -0x20) = extraout_x8_02;
        *(undefined8 *)(lVar15 + -0x18) = extraout_x12_02;
        *(undefined8 *)(lVar15 + -0x10) = uVar9;
        _swift_bridgeObjectRetain(uVar9);
        puVar4 = &DAT_100a77cf8;
        FUN_100004bb4(&DAT_100a77cf8,&DAT_10080ca20);
      }
      __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                (&local_80,FUN_1000e3bbc,lVar15 + -0x30,puVar4);
      _swift_bridgeObjectRelease(uVar9);
      FUN_1000dfb64(lVar11 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                             ::temporaryDirectoryURL);
      _swift_release(lVar11);
    }
LAB_1000df454:
    FUN_1000dfc54(param_4);
LAB_1000df460:
    cVar10 = '\x01';
    goto LAB_1000df464;
  }
  iVar16 = (int)param_5;
  uVar13 = (undefined4)param_4;
  if (iVar16 == -1) {
    puVar7 = &local_80;
    _swift_beginAccess(param_3 + _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID,
                       puVar7,0x20,0);
    lVar11 = *(long *)(param_3 + lVar11);
    if ((*(long *)(lVar11 + 0x10) != 0) &&
       (lVar1 = param_4, thunk_FUN_1001a2c34(), ((ulong)puVar7 & 1) != 0)) {
      lVar1 = *(long *)(*(long *)(lVar11 + 0x38) + lVar1 * 8);
      _swift_endAccess(&local_80);
      lVar11 = lVar1;
      _swift_retain(lVar1);
      FUN_1000dbca4();
      IVar14 = *(ID *)(param_3 + 0x10);
      __s10Foundation3URLV4pathSSvg();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar7);
      IVar18 = _objc_msgSend(IVar14,"fileExistsAtPath:",lVar11);
      uVar9 = 0;
      if ((int)IVar18 != 0) {
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
        local_80 = 0;
        IVar18 = _objc_msgSend(IVar14,"removeItemAtURL:error:",uVar9,&local_80);
        uVar9 = local_80;
        if ((int)IVar18 == 0) {
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
          _swift_willThrow(0);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(undefined8 *)(lVar15 + -0x10) = uVar9;
          FUN_1003fb4ec(thunk_FUN_1000e3724,lVar15 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                        0xd000000000000021,0x8000000100887ab0,0x1e3,0);
          uVar6 = uVar9;
          FUN_1000e3240();
          param_2 = (char)uVar6;
          _swift_errorRelease(uVar9);
          _swift_release(lVar1);
          goto LAB_1000df460;
        }
      }
      uVar6 = *(undefined8 *)(lVar1 + 0x20);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar9);
      *(undefined8 *)(lVar15 + -0x20) = extraout_x8_00;
      *(undefined8 *)(lVar15 + -0x18) = extraout_x12_00;
      *(undefined8 *)(lVar15 + -0x10) = uVar6;
      _swift_bridgeObjectRetain(uVar6);
      puVar4 = &DAT_100a77cf8;
      FUN_100004bb4(&DAT_100a77cf8,&DAT_10080ca20);
      __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                (&local_80,FUN_1000e3bbc,lVar15 + -0x30,puVar4);
      _swift_bridgeObjectRelease(uVar6);
      FUN_1000dfc54(param_4);
      _swift_release(lVar1);
      param_2 = '\0';
      cVar10 = '\0';
      goto LAB_1000df464;
    }
    _swift_endAccess(&local_80);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)(lVar15 + -0x10) = uVar13;
    pcVar3 = FUN_1000e3870;
    uVar9 = 0x1d9;
LAB_1000df320:
    FUN_1003fb4ec(pcVar3,lVar15 + -0x20,0xd0000000000000ae,0x8000000100886ab0,0xd000000000000021,
                  0x8000000100887ab0,uVar9,0);
    param_2 = '\n';
  }
  else {
    puVar7 = &local_80;
    local_90 = lVar1;
    _swift_beginAccess(param_3 + _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID,
                       puVar7,0x20,0);
    lVar11 = *(long *)(param_3 + lVar11);
    if ((*(long *)(lVar11 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar7 & 1) == 0)) {
LAB_1000df0a4:
      _swift_endAccess(&local_80);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined4 *)(lVar15 + -0x10) = uVar13;
      *(int *)(lVar15 + -0xc) = iVar16;
      pcVar3 = thunk_FUN_1000e36f0;
      uVar9 = 0x1eb;
      goto LAB_1000df320;
    }
    uVar17 = *(ulong *)(*(long *)(lVar11 + 0x38) + param_4 * 8);
    _swift_endAccess(&local_80);
    lVar11 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask::
             files;
    puVar7 = &local_80;
    _swift_beginAccess(uVar17 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                                ::files,puVar7,0x20,0);
    lVar11 = *(long *)(uVar17 + lVar11);
    local_98 = uVar17;
    if ((*(long *)(lVar11 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar7 & 1) == 0))
    goto LAB_1000df0a4;
    IVar18 = *(ID *)(*(long *)(lVar11 + 0x38) + param_5 * 8);
    _swift_endAccess(&local_80);
    uVar17 = local_98;
    _swift_retain(local_98);
    _swift_retain(IVar18);
    FUN_1000e2e54();
    lVar11 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
             finalURL;
    if ((_TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
         isCompleted[IVar18] & 1U) == 0) {
      if (*(long *)(IVar18 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                             ::writtenSize) == *(long *)(IVar18 + 0x20)) {
        local_b0 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                   ::isCompleted;
        IVar14 = IVar18;
        FUN_1000e0308(lVar2,IVar18,uVar17);
        local_a0 = *(ID *)(param_3 + 0x10);
        __s10Foundation3URLV25deletingLastPathComponentACyF(lVar15);
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
        local_a8 = *(code **)(lVar12 + 8);
        (*local_a8)(lVar15,local_90);
        local_80 = 0;
        pcVar8 = "createDirectoryAtURL:withIntermediateDirectories:attributes:error:";
        IVar14 = _objc_msgSend(local_a0,
                               "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                               IVar14,1,0,&local_80);
        if ((int)IVar14 != 0) {
          uVar9 = local_80;
          __s10Foundation3URLV4pathSSvg(local_80);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(pcVar8);
          IVar14 = _objc_msgSend(local_a0,"fileExistsAtPath:",uVar9);
          uVar9 = 0;
          if ((int)IVar14 != 0) {
            __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
            local_80 = 0;
            IVar14 = _objc_msgSend(local_a0,"removeItemAtURL:error:",uVar9,&local_80);
            uVar9 = local_80;
            if ((int)IVar14 == 0) goto LAB_1000df9e0;
          }
          __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF
                    (_TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                     ::temporaryURL,uVar9);
          uVar6 = uVar9;
          __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
          local_80 = 0;
          IVar14 = _objc_msgSend(local_a0,"moveItemAtURL:toURL:error:",uVar9,uVar6,&local_80);
          lVar11 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                   ::finalURL;
          local_a0 = CONCAT44(local_a0._4_4_,(int)IVar14);
          if ((int)IVar14 != 0) {
            _swift_beginAccess(IVar18 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                        ::finalURL,&local_80,0x21,0);
            (**(code **)(lVar12 + 0x18))(IVar18 + lVar11,lVar2,local_90);
            _swift_endAccess(&local_80);
            uVar17 = local_98;
            local_b0[IVar18] = '\x01';
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(undefined8 *)(lVar15 + -0x30) = extraout_x8_03;
            *(undefined8 *)(lVar15 + -0x28) = extraout_x12_03;
            *(undefined8 *)(lVar15 + -0x20) = extraout_x13;
            *(int *)(lVar15 + -0x18) = iVar16;
            *(code **)(lVar15 + -0x10) = thunk_FUN_1000e374c;
            *(ID *)(lVar15 + -8) = extraout_x14;
            puVar4 = &DAT_100a77cf8;
            local_a0 = extraout_x14;
            FUN_100004bb4(&DAT_100a77cf8,&DAT_10080ca20);
            __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                      (&local_80,FUN_1000e3bd4,lVar15 + -0x40,puVar4);
            if (local_80._1_1_ == '\x01') {
              FUN_100401b14(0);
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(ulong *)(lVar15 + -0x10) = uVar17;
              *(int *)(lVar15 + -8) = iVar16;
              local_b0 = "taskIDByUniqueID";
              FUN_1003fb4bc(thunk_FUN_1000e3784,lVar15 + -0x20,0xd0000000000000ae,0x8000000100886ab0
                            ,&DAT_d000000000000028,0x8000000100887620,0x3b3,0);
              uVar5 = uVar17;
              FUN_1000dbf54(uVar17,0);
              if ((uVar5 & 1) == 0) {
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(undefined4 *)(lVar15 + -0x10) = uVar13;
                *(int *)(lVar15 + -0xc) = iVar16;
                FUN_1003fb4ec(FUN_1000e385c,lVar15 + -0x20,0xd0000000000000ae,
                              (ulong)local_b0 | 0x8000000000000000,0xd000000000000021,
                              0x8000000100887ab0,0x209,0);
                _swift_release(uVar17);
                _swift_release(local_a0);
                (*local_a8)(lVar2,local_90);
                cVar10 = '\x01';
                param_2 = '\a';
                goto LAB_1000df464;
              }
            }
            _swift_release(uVar17);
            _swift_release(local_a0);
            (*local_a8)(lVar2,local_90);
            goto LAB_1000df000;
          }
        }
LAB_1000df9e0:
        uVar9 = local_80;
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _swift_willThrow(0);
        (*local_a8)(lVar2,local_90);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined8 *)(lVar15 + -0x10) = uVar9;
        FUN_1003fb4ec(thunk_FUN_1000e3724,lVar15 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                      0xd000000000000021,0x8000000100887ab0,0x20e,0);
        uVar6 = uVar9;
        FUN_1000e3240();
        param_2 = (char)uVar6;
        _swift_errorRelease(uVar9);
        _swift_release(local_98);
        _swift_release(IVar18);
        goto LAB_1000df460;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined4 *)(lVar15 + -0x10) = uVar13;
      *(int *)(lVar15 + -0xc) = iVar16;
      *(ID *)(lVar15 + -8) = IVar18;
      FUN_1003fb4ec(FUN_1000e382c,lVar15 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                    0xd000000000000021,0x8000000100887ab0,0x1f7,0);
      _swift_release(IVar18);
      _swift_release(uVar17);
      param_2 = '\a';
    }
    else {
      IVar14 = *(ID *)(param_3 + 0x10);
      _swift_beginAccess(IVar18 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                  ::finalURL,&local_80,0,0);
      lVar1 = local_90;
      lVar11 = IVar18 + lVar11;
      lVar2 = lVar15;
      local_a0 = IVar18;
      (**(code **)(lVar12 + 0x10))(lVar15,lVar11,local_90);
      __s10Foundation3URLV4pathSSvg();
      (**(code **)(lVar12 + 8))(lVar15,lVar1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar2,lVar11);
      _swift_bridgeObjectRelease(lVar11);
      IVar18 = _objc_msgSend(IVar14,"fileExistsAtPath:",lVar2);
      if ((int)IVar18 != 0) {
        _swift_release(local_98);
        _swift_release(local_a0);
LAB_1000df000:
        param_2 = '\0';
        cVar10 = '\0';
        goto LAB_1000df464;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined4 *)(lVar15 + -0x10) = uVar13;
      *(int *)(lVar15 + -0xc) = iVar16;
      IVar18 = local_a0;
      *(ID *)(lVar15 + -8) = local_a0;
      FUN_1003fb4ec(FUN_1000e3864,lVar15 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                    0xd000000000000021,0x8000000100887ab0,0x1f1,0);
      _swift_release(IVar18);
      _swift_release(local_98);
      param_2 = '\v';
    }
  }
  cVar10 = '\x01';
LAB_1000df464:
  *param_1 = param_2;
  param_1[1] = cVar10;
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

