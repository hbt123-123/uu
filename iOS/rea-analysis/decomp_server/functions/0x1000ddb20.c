// rea decompile_all
// name: FUN_1000ddb20
// address: 0x1000ddb20
// body: available
// range: 0x1000ddb20-0x1000de607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000de5f4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000ddb20(ulong *param_1,long param_2,long param_3,undefined4 param_4,ulong param_5,
                  undefined1 *param_6,uint param_7)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  long extraout_x8;
  long lVar17;
  ulong uVar18;
  undefined8 extraout_x8_00;
  long lVar19;
  ulong uVar20;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  undefined8 extraout_x14;
  long lVar21;
  ulong unaff_x21;
  ID IVar22;
  ulong uVar23;
  long lVar24;
  undefined1 *puVar25;
  undefined1 auStack_120 [16];
  undefined8 auStack_110 [2];
  undefined8 uStack_100;
  uint auStack_f8 [2];
  undefined8 uStack_f0;
  uint auStack_e8 [2];
  undefined1 auStack_e0 [8];
  uint *local_d8;
  ulong local_d0;
  ulong local_c8;
  ID local_c0;
  long local_b8;
  ulong local_b0;
  uint local_a4;
  ulong local_a0;
  undefined1 *local_98;
  undefined4 local_8c;
  ulong local_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  long local_68;
  
  local_88 = CONCAT44(local_88._4_4_,param_4);
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar10 = 0;
  local_a0 = param_5;
  local_98 = param_6;
  __s10Foundation3URLVMa();
  lVar24 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar24 + 0x40));
  lVar21 = _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID;
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar25 = auStack_e0 + lVar4;
  puVar12 = &local_80;
  _swift_beginAccess(param_2 + _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID,puVar12
                     ,0x20,0);
  lVar21 = *(long *)(param_2 + lVar21);
  local_8c = (undefined4)param_3;
  if ((*(long *)(lVar21 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar12 & 1) == 0)) {
LAB_1000ddc74:
    _swift_endAccess(&local_80);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar8 = (undefined4)local_88;
    *(undefined4 *)((long)&uStack_f0 + lVar4) = local_8c;
    *(undefined4 *)((long)&uStack_f0 + lVar4 + 4) = uVar8;
    FUN_1003fb4ec(thunk_FUN_1000e36f0,(long)&uStack_100 + lVar4,0xd0000000000000ae,
                  0x8000000100886ab0,0xd00000000000002a,0x80000001008878d0,0x18c,0);
    uVar23 = 10;
  }
  else {
    uVar23 = *(ulong *)(*(long *)(lVar21 + 0x38) + param_3 * 8);
    local_a4 = param_7;
    _swift_endAccess(&local_80);
    lVar21 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask::
             files;
    puVar12 = &local_80;
    _swift_beginAccess(uVar23 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                                ::files,puVar12,0x20,0);
    lVar21 = *(long *)(uVar23 + lVar21);
    local_b0 = uVar23;
    if (*(long *)(lVar21 + 0x10) == 0) goto LAB_1000ddc74;
    uVar23 = local_88 & 0xffffffff;
    thunk_FUN_1001a2c34();
    if (((ulong)puVar12 & 1) == 0) goto LAB_1000ddc74;
    lVar21 = *(long *)(*(long *)(lVar21 + 0x38) + uVar23 * 8);
    _swift_endAccess(&local_80);
    puVar7 = local_98;
    uVar6 = local_a4;
    uVar5 = (uint)((ulong)local_98 >> 0x20);
    iVar16 = (int)local_a0;
    if ((*(byte *)(lVar21 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                            ::isCompleted) & 1) != 0) {
      if (1 < uVar5 >> 0x1e) {
        if (uVar5 >> 0x1e == 2) {
          lVar17 = *(long *)(local_a0 + 0x10);
          lVar19 = *(long *)(local_a0 + 0x18);
          goto LAB_1000ddd70;
        }
LAB_1000ddd78:
        if (SCARRY4(local_a4,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de5e8);
          (*pcVar9)();
        }
        uVar14 = 0;
        piVar1 = (int *)(lVar21 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                  ::nextBlockID);
        *piVar1 = local_a4 + 1;
        *(undefined1 *)(piVar1 + 1) = 0;
        uVar23 = (ulong)local_a4;
        goto LAB_1000ddd0c;
      }
      if (uVar5 >> 0x1e == 0) {
        if (((ulong)local_98 & 0xff000000000000) == 0) goto LAB_1000ddd78;
      }
      else {
        lVar17 = (long)iVar16;
        lVar19 = (long)local_a0 >> 0x20;
LAB_1000ddd70:
        if (lVar17 == lVar19) goto LAB_1000ddd78;
      }
    }
    IVar22 = *(ID *)(lVar21 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                              ::handle);
    if (IVar22 != 0) {
      puVar2 = (uint *)(lVar21 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                 ::nextBlockID);
      local_b8 = lVar21;
      if ((puVar2[1] & 1) == 0) {
        uVar3 = *puVar2;
        if (uVar3 == local_a4) goto LAB_1000ddf40;
        FUN_100401b14(0);
        local_98 = puVar25;
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar8 = (undefined4)local_88;
        *(undefined4 *)((long)&uStack_f0 + lVar4) = local_8c;
        *(undefined4 *)((long)&uStack_f0 + lVar4 + 4) = uVar8;
        *(uint *)((long)auStack_e8 + lVar4) = uVar3;
        *(uint *)(auStack_e0 + lVar4 + -4) = uVar6;
        uVar23 = local_b0;
        _swift_retain(local_b0);
        lVar21 = local_b8;
        _swift_retain(local_b8);
        pcVar9 = FUN_1000e3820;
        uVar13 = 0x19b;
      }
      else {
        if (local_a4 < 2) {
LAB_1000ddf40:
          local_d0 = (ulong)local_98 >> 0x3e;
          local_d8 = puVar2;
          if (uVar5 >> 0x1e < 2) {
            if (uVar5 >> 0x1e == 0) {
              local_c8 = (ulong)local_98 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)(local_a0 >> 0x20);
              if (SBORROW4(iVar15,iVar16)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de5ec);
                (*pcVar9)();
              }
              local_c8 = (ulong)(iVar15 - iVar16);
LAB_1000de070:
              if ((long)local_c8 < 0) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de07c);
                (*pcVar9)();
              }
            }
          }
          else {
            if (uVar5 >> 0x1e == 2) {
              local_c8 = *(long *)(local_a0 + 0x18) - *(long *)(local_a0 + 0x10);
              if (SBORROW8(*(long *)(local_a0 + 0x18),*(long *)(local_a0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de05c);
                (*pcVar9)();
              }
              goto LAB_1000de070;
            }
            local_c8 = 0;
          }
          _swift_retain(local_b0);
          _swift_retain(local_b8);
          local_c0 = IVar22;
          __s10Foundation3URLV25deletingLastPathComponentACyF(puVar25);
          __s10Foundation3URLV4pathSSvg();
          (**(code **)(lVar24 + 8))(puVar25,lVar10);
          uVar23 = local_c8;
          FUN_1000d7a60(local_c8,IVar22,puVar12,*(undefined8 *)(param_2 + 0x10));
          _swift_bridgeObjectRelease(puVar12);
          lVar21 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                   ::writtenSize;
          if ((uVar23 & 1) == 0) {
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            uVar8 = (undefined4)local_88;
            *(undefined4 *)((long)&uStack_100 + lVar4) = local_8c;
            *(undefined4 *)((long)auStack_f8 + lVar4 + -4) = uVar8;
            *(uint *)((long)auStack_f8 + lVar4) = local_a4;
            *(ulong *)((long)&uStack_f0 + lVar4) = local_a0;
            *(undefined1 **)((long)auStack_e8 + lVar4) = puVar7;
            FUN_1003fb4ec(FUN_1000e37c4,(long)auStack_110 + lVar4,0xd0000000000000ae,
                          0x8000000100886ab0,0xd00000000000002a,0x80000001008878d0,0x1ab,0);
            _swift_release(local_b0);
            _swift_release(local_b8);
            uVar23 = 6;
            goto LAB_1000ddd08;
          }
          local_80 = 0;
          IVar22 = _objc_msgSend(local_c0,"seekToOffset:error:",
                                 *(undefined8 *)
                                  (local_b8 +
                                  _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                  ::writtenSize),&local_80);
          if ((int)IVar22 == 0) {
            unaff_x21 = local_80;
            __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
            _swift_willThrow(0);
          }
          else {
            local_80 = local_a0;
            puStack_78 = puVar7;
            FUN_1000e37d4();
            __sSo12NSFileHandleC10FoundationE5write10contentsOfyx_tKAC12DataProtocolRzlF
                      (&local_80,PTR___s10Foundation4DataVN_1009961e8,IVar22);
            uVar23 = local_b0;
            if (unaff_x21 == 0) {
              iVar16 = (int)local_d0;
              uVar8 = (undefined4)local_88;
              if (iVar16 < 2) {
                if (iVar16 == 0) {
                  uVar18 = (ulong)local_98 >> 0x30 & 0xff;
                }
                else {
                  iVar15 = (int)(local_a0 >> 0x20);
                  if (SBORROW4(iVar15,(int)local_a0)) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de600);
                    (*pcVar9)();
                  }
                  uVar18 = (ulong)(iVar15 - (int)local_a0);
LAB_1000de358:
                  if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de360);
                    (*pcVar9)();
                  }
                }
              }
              else {
                if (iVar16 == 2) {
                  uVar18 = *(long *)(local_a0 + 0x18) - *(long *)(local_a0 + 0x10);
                  if (SBORROW8(*(long *)(local_a0 + 0x18),*(long *)(local_a0 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de344);
                    (*pcVar9)();
                  }
                  goto LAB_1000de358;
                }
                uVar18 = 0;
              }
              uVar20 = *(ulong *)(local_b8 + lVar21);
              if (CARRY8(uVar20,uVar18)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de5f0);
                (*pcVar9)();
              }
              *(ulong *)(local_b8 + lVar21) = uVar20 + uVar18;
              if (SCARRY4(local_a4,1)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de5f4);
                (*pcVar9)();
              }
              *local_d8 = local_a4 + 1;
              *(undefined1 *)(local_d8 + 1) = 0;
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(undefined8 *)((long)auStack_110 + lVar4) = extraout_x8_00;
              *(undefined8 *)((long)auStack_110 + lVar4 + 8) = extraout_x12;
              *(undefined8 *)((long)&uStack_100 + lVar4) = extraout_x13;
              *(undefined4 *)((long)auStack_f8 + lVar4) = uVar8;
              *(code **)((long)&uStack_f0 + lVar4) = thunk_FUN_1000e374c;
              *(undefined8 *)((long)auStack_e8 + lVar4) = extraout_x14;
              puVar11 = &DAT_100a77cf8;
              FUN_100004bb4(&DAT_100a77cf8,&DAT_10080ca20);
              __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                        (&local_80,FUN_1000e3bd4,auStack_120 + lVar4,puVar11);
              if (local_80._1_1_ == '\x01') {
                uVar18 = 0;
                FUN_100401b14();
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(ulong *)((long)&uStack_f0 + lVar4) = uVar23;
                *(undefined4 *)((long)auStack_e8 + lVar4) = uVar8;
                local_88 = uVar18;
                FUN_1003fb4bc(thunk_FUN_1000e3784,(long)&uStack_100 + lVar4,0xd0000000000000ae,
                              0x8000000100886ab0,&DAT_d000000000000028,0x8000000100887620,0x3b3,0);
                uVar18 = uVar23;
                FUN_1000dbf54(uVar23,0);
                if ((uVar18 & 1) == 0) {
                  (*(code *)PTR____chkstk_darwin_100995498)();
                  *(undefined4 *)((long)&uStack_f0 + lVar4) = local_8c;
                  *(undefined4 *)((long)&uStack_f0 + lVar4 + 4) = uVar8;
                  *(uint *)((long)auStack_e8 + lVar4) = local_a4;
                  FUN_1003fb4ec(FUN_1000e3814,(long)&uStack_100 + lVar4,0xd0000000000000ae,
                                0x8000000100886ab0,0xd00000000000002a,0x80000001008878d0,0x1b5,0);
                  _swift_release(uVar23);
                  _swift_release(local_b8);
                  uVar23 = 7;
                  goto LAB_1000ddd08;
                }
              }
              _swift_release(uVar23);
              _swift_release(local_b8);
              if (iVar16 < 2) {
                if (iVar16 == 0) {
                  uVar23 = (ulong)local_98 >> 0x30 & 0xff;
                }
                else {
                  iVar16 = (int)(local_a0 >> 0x20);
                  if (SBORROW4(iVar16,(int)local_a0)) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de608);
                    (*pcVar9)();
                  }
                  uVar23 = (ulong)(iVar16 - (int)local_a0);
                }
              }
              else if (iVar16 == 2) {
                uVar23 = *(long *)(local_a0 + 0x18) - *(long *)(local_a0 + 0x10);
                if (SBORROW8(*(long *)(local_a0 + 0x18),*(long *)(local_a0 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de604);
                  (*pcVar9)();
                }
                if ((long)uVar23 < -0x80000000) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de5fc);
                  (*pcVar9)();
                }
                if (0x7fffffff < (long)uVar23) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x1000de524);
                  (*pcVar9)();
                }
              }
              else {
                uVar23 = 0;
              }
              uVar14 = 0;
              uVar23 = (ulong)local_a4 | uVar23 << 0x20;
              goto LAB_1000ddd0c;
            }
          }
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(ulong *)((long)&uStack_f0 + lVar4) = unaff_x21;
          FUN_1003fb4ec(thunk_FUN_1000e3724,(long)&uStack_100 + lVar4,0xd0000000000000ae,
                        0x8000000100886ab0,0xd00000000000002a,0x80000001008878d0,0x1ba,0);
          uVar23 = unaff_x21;
          FUN_1000e3240();
          _swift_errorRelease(unaff_x21);
          _swift_release(local_b0);
          _swift_release(local_b8);
          uVar23 = uVar23 & 0xff;
          uVar14 = 1;
          goto LAB_1000ddd0c;
        }
        FUN_100401b14(0);
        local_98 = puVar25;
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar8 = (undefined4)local_88;
        *(undefined4 *)((long)&uStack_f0 + lVar4) = local_8c;
        *(undefined4 *)((long)&uStack_f0 + lVar4 + 4) = uVar8;
        *(uint *)((long)auStack_e8 + lVar4) = uVar6;
        uVar23 = local_b0;
        _swift_retain(local_b0);
        lVar21 = local_b8;
        _swift_retain(local_b8);
        pcVar9 = FUN_1000e37b8;
        uVar13 = 0x1a2;
      }
      FUN_1003fb4ec(pcVar9,(long)&uStack_100 + lVar4,0xd0000000000000ae,0x8000000100886ab0,
                    0xd00000000000002a,0x80000001008878d0,uVar13,0);
      _swift_release(uVar23);
      _swift_release(lVar21);
      uVar14 = 1;
      uVar23 = 4;
      goto LAB_1000ddd0c;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar8 = (undefined4)local_88;
    *(undefined4 *)((long)&uStack_f0 + lVar4) = local_8c;
    *(undefined4 *)((long)&uStack_f0 + lVar4 + 4) = uVar8;
    *(uint *)((long)auStack_e8 + lVar4) = uVar6;
    uVar23 = local_b0;
    _swift_retain(local_b0);
    _swift_retain(lVar21);
    FUN_1003fb4ec(FUN_1000e37ac,(long)&uStack_100 + lVar4,0xd0000000000000ae,0x8000000100886ab0,
                  0xd00000000000002a,0x80000001008878d0,0x196,0);
    _swift_release(uVar23);
    _swift_release(lVar21);
    uVar23 = 4;
  }
LAB_1000ddd08:
  uVar14 = 1;
LAB_1000ddd0c:
  *param_1 = uVar23;
  *(undefined1 *)(param_1 + 1) = uVar14;
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

