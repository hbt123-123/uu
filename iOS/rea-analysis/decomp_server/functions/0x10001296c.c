// rea decompile_all
// name: FUN_10001296c
// address: 0x10001296c
// body: available
// range: 0x10001296c-0x1000130a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000130a0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10001296c(void)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 **ppuVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  ID IVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ushort uVar19;
  undefined1 *local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined *local_e0;
  undefined4 local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_70;
  
  ppuVar4 = &local_120;
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar6 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar7 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar6,uVar7);
  if (uVar6 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = uVar6 & 0xffffffffffffff8;
    if ((long)uVar6 < 0) {
      uVar14 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar14 == 0) {
    local_108 = 0;
    _swift_bridgeObjectRelease(uVar6);
    puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_108 = 0;
    local_d0 = SUB84(PTR___swiftEmptyArrayStorage_100995ea0,0);
    iStack_cc = (int)((ulong)PTR___swiftEmptyArrayStorage_100995ea0 >> 0x20);
    FUN_10006fbb8(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000130a0);
      (*pcVar3)();
    }
    uVar15 = 0;
    puVar11 = (undefined *)CONCAT44(iStack_cc,local_d0);
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar5 = (undefined4)*(undefined8 *)(uVar6 + uVar15 * 8 + 0x20);
      }
      else {
        uVar8 = uVar15;
        FUN_100169c00(uVar15,uVar6);
        uVar5 = (undefined4)uVar8;
      }
      FUN_1003d541c();
      local_d0 = SUB84(puVar11,0);
      iStack_cc = (int)((ulong)puVar11 >> 0x20);
      uVar8 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar8) {
        FUN_10006fbb8(1 < *(ulong *)(puVar11 + 0x18),uVar8 + 1,1);
        puVar11 = (undefined *)CONCAT44(iStack_cc,local_d0);
      }
      uVar15 = uVar15 + 1;
      *(ulong *)(puVar11 + 0x10) = uVar8 + 1;
      *(undefined4 *)(puVar11 + uVar8 * 4 + 0x20) = uVar5;
    } while (uVar14 != uVar15);
    _swift_bridgeObjectRelease(uVar6);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar14 = *(ulong *)(puVar11 + 0x10);
  _swift_unknownObjectRetain(uVar7);
  uVar6 = 0;
  puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
  while (uVar14 != uVar6) {
    if (*(ulong *)(puVar11 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10001309c);
      (*pcVar3)();
    }
    uVar1 = *(uint *)(puVar11 + uVar6 * 4 + 0x20);
    uVar15 = (ulong)uVar1;
    uVar6 = uVar6 + 1;
    FUN_10004ffa0();
    if ((uVar15 & 1) != 0) {
      puVar9 = puVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      local_d0 = SUB84(puVar12,0);
      iStack_cc = (int)((ulong)puVar12 >> 0x20);
      if (((ulong)puVar9 & 1) == 0) {
        FUN_10006fbb8(0,*(long *)(puVar12 + 0x10) + 1,1);
        puVar12 = (undefined *)CONCAT44(iStack_cc,local_d0);
      }
      uVar15 = *(ulong *)(puVar12 + 0x10);
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar15) {
        FUN_10006fbb8(1 < *(ulong *)(puVar12 + 0x18),uVar15 + 1,1);
        puVar12 = (undefined *)CONCAT44(iStack_cc,local_d0);
      }
      *(ulong *)(puVar12 + 0x10) = uVar15 + 1;
      *(uint *)(puVar12 + uVar15 * 4 + 0x20) = uVar1;
    }
  }
  _swift_unknownObjectRelease(uVar7);
  _swift_bridgeObjectRelease(puVar11);
  lVar16 = *(long *)(puVar12 + 0x10);
  if (lVar16 == 0) {
    _swift_release(puVar12);
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_100013d8c,0,0xd0000000000000a9,0x8000000100877660,0xd000000000000023,
                  0x800000010087b430,0x17c,0);
  }
  else if (*(long *)(unaff_x20 + 0x140) == 0) {
    _swift_release(puVar12);
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_100013db8,0,0xd0000000000000a9,0x8000000100877660,0xd000000000000023,
                  0x800000010087b430,0x180,0);
  }
  else {
    local_118 = *(undefined8 *)(unaff_x20 + 0x138);
    local_f8 = "ace- remove begin screenIDs:";
    local_e8 = " reason:missingRemoteDeviceId";
    local_110 = *(long *)(unaff_x20 + 0x140);
    local_e0 = puVar12;
    _swift_bridgeObjectRetain();
    lVar13 = 0x20;
    local_100 = 0xd000000000000017;
    local_f0 = 0xd000000000000023;
    lVar18 = 0;
    do {
      uVar1 = *(uint *)(local_e0 + lVar13);
      uVar6 = (ulong)uVar1;
      FUN_10000290c();
      if (uVar6 == 0) {
        FUN_100401b14();
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(uint *)((long)ppuVar4 + -0x10) = uVar1;
        FUN_1003fb4ec(thunk_FUN_10003e8f8,(undefined1 *)((long)ppuVar4 + -0x20),0xd0000000000000a9,
                      0x8000000100877660,local_100,(ulong)local_f8 | 0x8000000000000000,0x78,0);
LAB_100012c9c:
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(uint *)((long)ppuVar4 + -0x10) = uVar1;
        FUN_1003fb4ec(FUN_10003fff4,(undefined1 *)((long)ppuVar4 + -0x20),0xd0000000000000a9,
                      0x8000000100877660,local_f0,(ulong)local_e8 | 0x8000000000000000,0x187,0);
        lVar17 = lVar18;
      }
      else {
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_bc = 0;
        local_a8 = 0;
        uStack_b0 = 0;
        iStack_c8 = 0;
        iStack_c4 = 0;
        local_d0 = 0;
        iStack_cc = 0;
        _objc_msgSend(uVar6,"getValue:",&local_d0);
        local_a0 = local_d0;
        uStack_80 = uStack_b0;
        local_88 = uStack_b8;
        local_78 = (undefined1)local_a8;
        uStack_94 = CONCAT44(local_c0,iStack_c4);
        local_9c = CONCAT44(iStack_c8,iStack_cc);
        uVar19 = NEON_umaxv(CONCAT26(-(ushort)(local_c0 < 1),
                                     CONCAT24(-(ushort)(iStack_c4 < 1),
                                              CONCAT22(-(ushort)(iStack_c8 < 1),
                                                       -(ushort)(iStack_cc < 1)))),2);
        if ((uVar19 & 1) != 0) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(uint *)((long)ppuVar4 + -0x10) = uVar1;
          *(undefined4 **)((long)ppuVar4 + -8) = &local_a0;
          FUN_1003fb4ec(thunk_FUN_10003e900,(undefined1 *)((long)ppuVar4 + -0x20),0xd0000000000000a9
                        ,0x8000000100877660,local_100,(ulong)local_f8 | 0x8000000000000000,0x7d,0);
          goto LAB_100012c9c;
        }
        IVar10 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
        if ((int)IVar10 == 0) {
          FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          puVar11 = &DAT_1009975c0;
          _swift_allocObject(&DAT_1009975c0,0x18,7);
          _swift_weakInit(puVar11 + 0x10,uVar7);
          local_120 = (undefined1 *)ppuVar4;
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(undefined **)((long)ppuVar4 + -0x30) = puVar11;
          *(uint *)((long)ppuVar4 + -0x28) = uVar1;
          lVar17 = local_110;
          *(undefined8 *)((long)ppuVar4 + -0x20) = local_118;
          *(long *)((long)ppuVar4 + -0x18) = lVar17;
          *(undefined4 **)((long)ppuVar4 + -0x10) = &local_a0;
          puVar12 = &DAT_100a75b48;
          FUN_100004bb4(&DAT_100a75b48,&DAT_100809bd8);
          uVar2 = local_108;
          __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                    (&local_d0,FUN_100041214,(undefined1 *)((long)ppuVar4 + -0x40),puVar12);
          local_108 = uVar2;
          _swift_release(puVar11);
          ppuVar4 = (undefined1 **)local_120;
        }
        else {
          FUN_1000501e4((ulong)uVar1,local_118,local_110,&local_a0);
        }
        lVar17 = lVar18 + 1;
        if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100012f18);
          (*pcVar3)();
        }
      }
      lVar13 = lVar13 + 4;
      lVar16 = lVar16 + -1;
      lVar18 = lVar17;
    } while (lVar16 != 0);
    local_d0 = (undefined4)lVar17;
    iStack_cc = (int)((ulong)lVar17 >> 0x20);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar16 = local_110;
    *(undefined8 *)((long)ppuVar4 + -0x20) = local_118;
    *(long *)((long)ppuVar4 + -0x18) = lVar16;
    puVar11 = local_e0;
    *(undefined4 **)((long)ppuVar4 + -0x10) = &local_d0;
    *(undefined **)((long)ppuVar4 + -8) = puVar11;
    FUN_1003fb48c(FUN_10003fffc,(undefined1 *)((long)ppuVar4 + -0x30),0xd0000000000000a9,
                  0x8000000100877660,local_f0,(ulong)local_e8 | 0x8000000000000000,0x191,0);
    _swift_release(puVar11);
    _swift_bridgeObjectRelease(lVar16);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

