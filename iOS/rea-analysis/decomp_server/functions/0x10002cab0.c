// rea decompile_all
// name: FUN_10002cab0
// address: 0x10002cab0
// body: available
// range: 0x10002cab0-0x10002d2d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10002cc74 to 0x100011e08 FUN_100011e08 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10002cab0(long param_1,ulong param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ID IVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  long lVar16;
  long unaff_x20;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_130 [16];
  long local_120;
  long lStack_118;
  long local_110;
  undefined8 local_108;
  uint local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined1 *local_f0;
  long local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [8];
  char *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 auStack_78 [24];
  
  if (((*(byte *)(unaff_x20 + 0xf4) & 1) == 0) && (*(long *)(unaff_x20 + 0xd8) == param_1)) {
    lVar18 = *(long *)(unaff_x20 + 0xe0);
    uVar15 = *(undefined4 *)(unaff_x20 + 0xec);
    uVar2 = *(uint *)(unaff_x20 + 0xf0);
    puVar14 = (undefined1 *)(ulong)uVar2;
    piVar1 = (int *)(unaff_x20 + 0xe8);
    iVar3 = *piVar1;
    uVar5 = *(undefined8 *)piVar1;
    uVar4 = *(undefined8 *)piVar1;
    uVar8 = *(undefined8 *)(unaff_x20 + 0xf8);
    *(undefined8 *)(unaff_x20 + 0xf8) = 0;
    _swift_release(uVar8);
    if ((((lVar18 != *(long *)(unaff_x20 + 0x108)) ||
         (lVar16 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                            _TtC14UURemoteServer15StreamerManager::dispatcher), lVar16 == 0)) ||
        (lVar16 = *(long *)(lVar16 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession
                           ), lVar16 == 0)) ||
       (*(int *)(lVar16 + _TtC14UURemoteServer22StreamerConnectSession::handle) != iVar3)) {
      FUN_100011e08(0x736553656c617473,0xec0000006e6f6973);
      return;
    }
    _swift_beginAccess(unaff_x20 + 0x88,auStack_78,0,0);
    if (*(long *)(*(long *)(unaff_x20 + 0x88) + 0x10) == 0) {
      puVar9 = &DAT_100a759b8;
      FUN_100004bb4(&DAT_100a759b8,&DAT_10080a9a0);
      _swift_initStackObject();
      *(undefined8 *)(puVar9 + 0x18) = 2;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(undefined4 *)(puVar9 + 0x20) = uVar15;
      puVar10 = puVar9;
      FUN_100128278();
      _swift_setDeallocating(puVar9);
      FUN_100022f10(uVar15,puVar10);
      _swift_bridgeObjectRelease(puVar10);
      uVar17 = param_2 >> 0x20 & 1;
      puVar11 = (undefined1 *)(param_2 & 0xffffffff | uVar17 << 0x20);
      FUN_10002d5d0(puVar11,uVar15);
      local_120 = param_1;
      lStack_118 = lVar18;
      local_110 = param_1;
      local_108 = lVar18;
      uStack_fc = uVar15;
      if (((ulong)puVar11 >> 0x20 & 1) == 0) {
        local_b8 = puVar11;
        FUN_10001a914();
        if ((*(char *)(unaff_x20 + 0x99) == '\x01') &&
           (*(long *)(*(long *)(unaff_x20 + 0x90) + 0x10) != 0)) {
          puVar12 = puVar14;
          thunk_FUN_100152fd0();
          if (((ulong)puVar12 & 1) == 0) {
            IVar13 = _objc_msgSend((ID)puVar11,"videoTrackIndex",puVar14);
            puVar14 = local_b8;
            FUN_10001e990(local_b8,IVar13 & 0xffffffff);
            if (((ulong)puVar14 >> 0x20 & 1) != 0) {
              lVar18 = param_3 + 1;
              if (SCARRY8(param_3,1)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10002d2d4);
                (*pcVar6)();
              }
              FUN_100401b14(0);
              if (2 < lVar18) {
                (*(code *)PTR____chkstk_darwin_100995498)();
                local_108 = CONCAT44((int)local_b8,uVar2);
                local_100 = local_100 & 0xffffff00;
                local_f0 = (undefined1 *)0x6b636172546f6e;
                local_e8 = 0xe700000000000000;
                local_110 = uVar5;
                local_f8 = lVar18;
                FUN_1003fb4ec(thunk_FUN_10003fbcc,auStack_130,0xd0000000000000a9,0x8000000100877660,
                              0xd000000000000053,0x80000001008797b0,0x796,0);
                return;
              }
              (*(code *)PTR____chkstk_darwin_100995498)();
              puVar14 = local_b8;
              local_f8 = CONCAT44((int)local_b8,uVar2);
              local_f0 = (undefined1 *)((ulong)local_f0 & 0xffffffffffffff00);
              local_e0 = (undefined1 *)0x6b636172546f6e;
              local_d8 = 0xe700000000000000;
              local_100 = iVar3;
              local_e8 = lVar18;
              FUN_1003fb4bc(thunk_FUN_10003fb88,&local_120,0xd0000000000000a9,0x8000000100877660,
                            0xd000000000000053,0x80000001008797b0,0x799,0);
              FUN_10002c4e8((ulong)puVar14 & 0xffffffff,lVar18,0x6b636172546f6e,0xe700000000000000);
              return;
            }
          }
        }
        else {
          puVar14 = (undefined1 *)0x0;
        }
        _objc_msgSend((ID)puVar11,"setVideoTrackIndex:",puVar14);
        iVar7 = iVar3;
        FUN_10001adc4(iVar3,puVar11,1);
        FUN_100401b14(0);
        local_c0 = auStack_d0;
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_f8 = CONCAT44((int)local_b8,uVar2);
        local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,iVar7);
        local_c8 = "captureFailedRetryCount";
        local_100 = iVar3;
        local_f0 = puVar11;
        local_e8 = param_3;
        FUN_1003fb48c(FUN_10003fb94,&local_120,0xd0000000000000a9,0x8000000100877660,
                      0xd000000000000051,0x8000000100879710,0x76d,0);
        puVar14 = local_c0;
        if (iVar7 == 0) {
          FUN_1000162bc(iVar3,0);
        }
        else {
          lVar16 = param_3 + 1;
          if (SCARRY8(param_3,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10002d2d0);
            (*pcVar6)();
          }
          if (lVar16 < 3) {
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(long *)(puVar14 + -0x40) = param_1;
            *(long *)(puVar14 + -0x38) = lVar18;
            *(int *)(puVar14 + -0x30) = iVar3;
            *(undefined4 *)(puVar14 + -0x2c) = uVar15;
            puVar11 = local_b8;
            uVar15 = SUB84(local_b8,0);
            *(uint *)(puVar14 + -0x28) = uVar2;
            *(undefined4 *)(puVar14 + -0x24) = uVar15;
            puVar14[-0x20] = 0;
            *(long *)(puVar14 + -0x18) = lVar16;
            *(undefined8 *)(puVar14 + -0x10) = 0x6961467472617473;
            *(undefined8 *)(puVar14 + -8) = 0xeb0000000064656c;
            FUN_1003fb4bc(thunk_FUN_10003fb88,puVar14 + -0x50,0xd0000000000000a9,
                          (ulong)local_c8 | 0x8000000000000000,0xd000000000000053,0x80000001008797b0
                          ,0x799,0);
            FUN_10002c4e8((ulong)puVar11 & 0xffffffff,lVar16,0x6961467472617473,0xeb0000000064656c);
          }
          else {
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(long *)(puVar14 + -0x50) = param_1;
            *(long *)(puVar14 + -0x48) = lVar18;
            *(int *)(puVar14 + -0x40) = iVar3;
            *(undefined4 *)(puVar14 + -0x3c) = uVar15;
            uVar15 = SUB84(local_b8,0);
            *(uint *)(puVar14 + -0x38) = uVar2;
            *(undefined4 *)(puVar14 + -0x34) = uVar15;
            puVar14[-0x30] = 0;
            *(long *)(puVar14 + -0x28) = lVar16;
            *(undefined8 *)(puVar14 + -0x20) = 0x6961467472617473;
            *(undefined8 *)(puVar14 + -0x18) = 0xeb0000000064656c;
            *(long *)(puVar14 + -0x10) = unaff_x20;
            FUN_1003fb4ec(thunk_FUN_10003fbcc,puVar14 + -0x60,0xd0000000000000a9,
                          (ulong)local_c8 | 0x8000000000000000,0xd000000000000053,0x80000001008797b0
                          ,0x796,0);
          }
        }
      }
      else {
        lVar18 = param_3 + 1;
        if (SCARRY8(param_3,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10002d2cc);
          (*pcVar6)();
        }
        FUN_100401b14(0);
        if (lVar18 < 3) {
          local_b8 = auStack_d0;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_f8 = CONCAT44((int)param_2,uVar2);
          local_f0 = (undefined1 *)CONCAT71(local_f0._1_7_,(char)uVar17);
          local_e0 = &DAT_d000000000000010;
          local_d8 = 0x8000000100879790;
          local_100 = iVar3;
          local_e8 = lVar18;
          FUN_1003fb4bc(FUN_10003fb88,&local_120,0xd0000000000000a9,0x8000000100877660,
                        0xd000000000000053,0x80000001008797b0,0x799,0);
          FUN_10002c4e8(param_2 & 0xffffffff | uVar17 << 0x20,lVar18,&DAT_d000000000000010,
                        0x8000000100879790);
        }
        else {
          local_b8 = auStack_d0;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_108 = CONCAT44((int)param_2,uVar2);
          local_100 = CONCAT31(local_100._1_3_,(char)uVar17);
          local_f0 = &DAT_d000000000000010;
          local_e8 = 0x8000000100879790;
          local_110 = uVar4;
          local_f8 = lVar18;
          FUN_1003fb4ec(thunk_FUN_10003fbcc,auStack_130,0xd0000000000000a9,0x8000000100877660,
                        0xd000000000000053,0x80000001008797b0,0x796,0);
        }
      }
    }
    else {
      FUN_100011e08(0xd000000000000014,0x8000000100879770);
    }
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_e0 = (undefined1 *)param_1;
    FUN_1003fb48c(FUN_10003fb7c,&local_f0,0xd0000000000000a9,0x8000000100877660,0xd000000000000051,
                  0x8000000100879710,0x737,0);
  }
  return;
}

