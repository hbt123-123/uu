// rea decompile_all
// name: FUN_1001c04a8
// address: 0x1001c04a8
// body: available
// range: 0x1001c04a8-0x1001c0c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001c0c38 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001c0c50 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1001c04a8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ID IVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  undefined1 *puVar13;
  ulong uVar14;
  undefined8 extraout_x12;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  char *local_150;
  char *local_148;
  undefined1 *local_140;
  long local_138;
  ushort local_ca;
  ulong local_c8;
  byte local_c0;
  undefined1 local_b8;
  ulong local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar13 = (undefined1 *)((long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_100401b14();
  FUN_1003fb48c(FUN_1001c0c54,0,0xd00000000000008f,0x800000010089cc40,&DAT_d000000000000018,
                0x800000010089cd10,0x163,0);
  lVar2 = _TtC14UURemoteServer12InputHandler::keyCodeStates;
  lVar16 = *(long *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::keyCodeStates);
  lVar8 = lVar16;
  _swift_retain();
  FUN_1003bdcd0();
  _swift_release(lVar16);
  lVar16 = _TtC14UURemoteServer12InputHandler::controller;
  uVar15 = *(ulong *)(lVar8 + 0x10);
  if (uVar15 == 0) {
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_80) {
      _swift_bridgeObjectRelease(lVar8);
      return;
    }
  }
  else {
    uVar20 = 0;
    local_148 = s__100881dd0 + 0x10;
    local_150 = "meout:interval:)";
    puVar4 = puVar13;
    local_138 = lVar7;
    do {
      if (*(ulong *)(lVar8 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001c0c40);
        (*pcVar3)();
      }
      uVar23 = *(ulong *)(lVar8 + 0x20 + uVar20 * 8);
      uVar17 = param_1;
      if (-1 < (long)uVar23) {
        if (uVar23 >> 0x10 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001c0c44);
          (*pcVar3)();
        }
        iVar6 = 1;
        _CGEventSourceKeyState(1,(uint)uVar23 & 0xffff);
        uVar17 = param_1;
        if (iVar6 != 0) {
          uVar17 = *(undefined8 *)(unaff_x20 + lVar2);
          local_ca = local_ca & 0xff00;
          local_c8 = uVar23;
          _swift_retain(uVar17);
          FUN_1003be2ac(&local_ca,&local_c8);
          _swift_release(uVar17);
          __s10Foundation4DateVACycfC(puVar13);
          __s10Foundation4DateV21timeIntervalSince1970Sdvg();
          uVar17 = param_1;
          (**(code **)(lVar12 + 8))(puVar13,lVar7);
          local_b8 = 2;
          local_a8 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = 1;
          lVar22 = *(long *)(unaff_x20 + lVar16);
          local_b0 = uVar23;
          local_88 = param_1;
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(undefined8 *)(puVar4 + -0x10) = extraout_x12;
          FUN_1003fb45c(FUN_1001c1568,puVar4 + -0x20,0xd000000000000092,0x8000000100882970,
                        0xd000000000000017,0x800000010088d2a0,0x2de,0);
          if (uVar23 == 0x39) {
            FUN_10011ddac();
            uVar5 = (undefined1)uVar23;
            (*(code *)PTR____chkstk_darwin_100995498)();
            puVar4[-0x10] = uVar5;
            *(undefined2 *)(puVar4 + -0xf) = 0x101;
            FUN_1003fb48c(thunk_FUN_10011cdbc,puVar4 + -0x20,0xd00000000000009a,0x800000010088d2c0,
                          0xd000000000000029,0x800000010088d360,0x16,0);
            FUN_10011cb1c();
          }
          else {
            uVar9 = 0;
            _CGEventCreateKeyboardEvent(0,(uint)uVar23 & 0xffff,0);
            if (uVar9 != 0) {
              uVar11 = uVar23;
              FUN_10011ddac();
              uVar5 = (undefined1)uVar11;
              (*(code *)PTR____chkstk_darwin_100995498)();
              puVar4[-0x10] = uVar5;
              *(undefined2 *)(puVar4 + -0xf) = 0x101;
              pcVar3 = FUN_10011cdbc;
              FUN_1003fb48c(FUN_10011cdbc,puVar4 + -0x20,0xd00000000000009a,0x800000010088d2c0,
                            0xd000000000000029,0x800000010088d360,0x16,0);
              FUN_100117740();
              _objc_msgSend((ID)pcVar3,"lock");
              uVar18 = 0;
              FUN_1001175b0(0);
              local_ca = (ushort)uVar23;
              FUN_1003be1c4(&local_c8,&local_ca);
              _swift_release(uVar18);
              if (((local_c0 & 1) == 0) && (local_c8 != 0)) {
                uVar11 = local_c8;
                FUN_10011c6b8();
                lVar7 = _TtC14UURemoteServer15InputController::___lazy_storage___keyboardPressedMap;
                uVar21 = *(ulong *)(uVar11 + 0x10);
                if (uVar21 != 0) {
                  uVar19 = 0;
                  do {
                    if (*(ulong *)(uVar11 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001c0c48);
                      (*pcVar3)();
                    }
                    uVar14 = *(ulong *)(uVar11 + uVar19 * 8 + 0x20);
                    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001c0c4c);
                      (*pcVar3)();
                    }
                    if (uVar14 >> 0x10 != 0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001c0c50);
                      (*pcVar3)();
                    }
                    uVar18 = *(undefined8 *)(lVar22 + lVar7);
                    local_ca = (ushort)uVar14;
                    _swift_retain(uVar18);
                    FUN_1003be1c4(&local_c8,&local_ca);
                    _swift_release(uVar18);
                    if ((local_c0 & 1) == 0) {
                      _swift_bridgeObjectRelease(uVar11);
                      goto LAB_1001c0974;
                    }
                    uVar19 = uVar19 + 1;
                  } while (uVar21 != uVar19);
                }
                _swift_bridgeObjectRelease(uVar11);
                _CGEventSetFlags(uVar9,0);
              }
              else {
                _CGEventSetFlags(uVar9,0);
              }
LAB_1001c0974:
              if (DAT_100a73b60 != -1) {
                _swift_once(&DAT_100a73b60,FUN_1000efc4c);
              }
              uVar21 = *(ulong *)(DAT_100b360a8 + 0x70);
              uVar11 = uVar21;
              FUN_1000b42dc();
              if ((((uint)uVar11 & 0xff) == 2) && (FUN_1000b462c(), ((uint)uVar11 & 0xff) == 2)) {
                lVar7 = local_138;
                if (*(char *)(uVar21 + _TtC14UURemoteServer17LockScreenManager::
                                       currentScreenIsLocked) == '\x01') {
LAB_1001c0abc:
                  lVar7 = local_138;
                  local_c8 = local_c8 & 0xffffffffffffff00;
                  uVar11 = 0;
                  FUN_10011bbac(0x10000,&local_c8);
                  if ((uVar11 & 1) == 0) {
                    IVar10 = NSEvent::modifierFlags((ID)&_OBJC_CLASS___NSEvent,"modifierFlags");
                    if (((uint)IVar10 >> 0x10 & 1) == 0) goto LAB_1001c0ae4;
LAB_1001c0b18:
                    uVar11 = uVar9;
                    _CGEventGetFlags(uVar9);
                    uVar11 = uVar11 | 0x10000;
                  }
                  else {
                    if ((char)local_c8 == '\x01') goto LAB_1001c0b18;
LAB_1001c0ae4:
                    uVar11 = uVar9;
                    _CGEventGetFlags(uVar9);
                    uVar11 = uVar11 & 0xfffffffffffeffff;
                  }
                  _CGEventSetFlags(uVar9,uVar11);
                }
              }
              else {
                lVar7 = _TtC14UURemoteServer17LockScreenManager::currentScreenIsLocked;
                uVar1 = (uint)uVar11 & 1;
                if (uVar1 != *(byte *)(uVar21 + _TtC14UURemoteServer17LockScreenManager::
                                                currentScreenIsLocked)) {
                  local_140 = puVar4;
                  (*(code *)PTR____chkstk_darwin_100995498)();
                  *(ulong *)(puVar4 + -0x10) = uVar21;
                  uVar5 = (undefined1)uVar1;
                  puVar4[-8] = uVar5;
                  FUN_1003fb48c(FUN_1000b48f8,puVar4 + -0x20,0xd000000000000099,
                                (ulong)local_148 | 0x8000000000000000,0xd000000000000024,
                                (ulong)local_150 | 0x8000000000000000,0x1cd,0);
                  *(undefined1 *)(uVar21 + lVar7) = uVar5;
                  puVar4 = local_140;
                }
                lVar7 = local_138;
                if ((uVar11 & 1) != 0) goto LAB_1001c0abc;
              }
              uVar18 = *(undefined8 *)
                        (lVar22 + _TtC14UURemoteServer15InputController::
                                  ___lazy_storage___keyboardPressedMap);
              local_ca = (ushort)uVar23;
              _swift_retain(uVar18);
              FUN_1003bdab0(&local_c8,&local_ca);
              _swift_release(uVar18);
              _CGEventPost(0,uVar9);
              _objc_msgSend(*(ID *)(lVar22 + _TtC14UURemoteServer15InputController::
                                             ___lazy_storage___lock),"unlock");
            }
          }
        }
      }
      uVar20 = uVar20 + 1;
      param_1 = uVar17;
    } while (uVar20 != uVar15);
    _swift_bridgeObjectRelease(lVar8);
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_80) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

