// rea decompile_all
// name: FUN_1001177b4
// address: 0x1001177b4
// body: available
// range: 0x1001177b4-0x1001183fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1001177b4(long param_1,uint param_2)

{
  double *pdVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  long local_d0;
  long local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  
  lVar5 = 0;
  __s10Foundation4DateVMa();
  local_c8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c8 + 0x40));
  lVar11 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar11 - extraout_x12;
  cVar3 = *(char *)(param_1 + 0x31);
  uVar14 = *(undefined8 *)(&DAT_10080dfc0 + (long)cVar3 * 8);
  dVar16 = *(double *)(param_1 + 8);
  dVar17 = *(double *)(param_1 + 0x10);
  lVar6 = 1;
  _CGEventSourceCreate();
  lVar7 = lVar6;
  dVar15 = dVar16;
  _CGEventCreateMouseEvent(dVar16,dVar17);
  if (lVar7 == 0) goto LAB_100118390;
  lVar10 = lVar7;
  local_d0 = lVar6;
  _CGEventSetIntegerValueField(lVar7,3,uVar14);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    if (*(long *)(param_1 + 0x18) + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1001183d0);
      (*pcVar9)();
    }
    bVar8 = false;
    lVar6 = *(long *)(param_1 + 0x18) << 1;
LAB_100117920:
    bVar2 = *(byte *)(param_1 + 0x30);
joined_r0x000100117928:
    if ((bVar2 & 1) == 0) goto LAB_10011792c;
LAB_1001179a0:
    bVar4 = true;
    if (((0x1b < param_2) || ((1 << (ulong)(param_2 & 0x1f) & 0x80000c0U) == 0)) ||
       ((*(byte *)(unaff_x20 + _TtC14UURemoteServer15InputController::lastPostedMousePoint + 0x10) &
        1) != 0)) {
      lVar13 = 0;
      goto joined_r0x0001001179d8;
    }
    dVar15 = (double)(long)(dVar17 - *(double *)
                                      (unaff_x20 +
                                       _TtC14UURemoteServer15InputController::lastPostedMousePoint +
                                      8));
    if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1001183e0);
      (*pcVar9)();
    }
    if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1001183e8);
      (*pcVar9)();
    }
    if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1001183ec);
      (*pcVar9)();
    }
    bVar4 = false;
    lVar13 = (long)dVar15;
    if (!bVar8) goto LAB_100117b90;
LAB_1001179dc:
    if (bVar4) goto LAB_1001179e0;
LAB_100117ba0:
    lVar10 = lVar7;
    _CGEventSetIntegerValueField(lVar7,5,lVar13);
    if (3 < (int)param_2) goto LAB_100117bb8;
LAB_1001179e8:
    if (param_2 == 1) {
      __s10Foundation4DateVACycfC(lVar12);
      FUN_100117638();
      lVar13 = lVar10;
      FUN_100117318();
      _swift_release(lVar10);
      lVar6 = _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp;
      _swift_beginAccess(lVar13 + _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp,
                         auStack_a8,0,0);
      lVar10 = local_c8;
      (**(code **)(local_c8 + 0x10))(lVar11,lVar13 + lVar6,lVar5);
      _swift_release(lVar13);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar11);
      pcVar9 = *(code **)(lVar10 + 8);
      (*pcVar9)(lVar11,lVar5);
      (*pcVar9)(lVar12,lVar5);
      lVar6 = _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState;
      lVar10 = *(long *)(unaff_x20 +
                        _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState);
      lVar11 = lVar10;
      _swift_retain();
      FUN_100117318();
      _swift_release(lVar10);
      dVar18 = *(double *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::lastPressedLocation);
      dVar19 = ((double *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::lastPressedLocation))[1]
      ;
      _swift_release(lVar11);
      lVar10 = *(long *)(unaff_x20 + lVar6);
      lVar11 = lVar10;
      _swift_retain();
      FUN_100117318();
      _swift_release(lVar10);
      if ((0.3 <= dVar15) ||
         (dVar18 = dVar18 - dVar16, dVar19 = dVar19 - dVar17,
         30.0 < SQRT(dVar18 * dVar18 + dVar19 * dVar19))) {
        *(undefined8 *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::clickCount) = 0;
      }
      else {
        if (SCARRY8(*(long *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::clickCount),1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1001183f0);
          (*pcVar9)();
        }
        *(long *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::clickCount) =
             *(long *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::clickCount) + 1;
      }
      _swift_release(lVar11);
      lVar11 = *(long *)(unaff_x20 + lVar6);
      lVar10 = lVar11;
      _swift_retain(lVar11);
      FUN_100117318();
      _swift_release(lVar11);
      __s10Foundation4DateVACycfC(lVar12);
      lVar11 = _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp;
      _swift_beginAccess(lVar10 + _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp,
                         auStack_c0,0x21,0);
      (**(code **)(local_c8 + 0x28))(lVar10 + lVar11,lVar12,lVar5);
      _swift_endAccess(auStack_c0);
      _swift_release(lVar10);
      lVar12 = *(long *)(unaff_x20 + lVar6);
      lVar5 = lVar12;
      _swift_retain();
      FUN_100117318();
      _swift_release(lVar12);
      *(undefined1 *)(lVar5 + 0x10) = 1;
      _swift_release(lVar5);
      lVar12 = *(long *)(unaff_x20 + lVar6);
      lVar5 = lVar12;
      _swift_retain();
      FUN_100117318();
      _swift_release(lVar12);
      pdVar1 = (double *)(lVar5 + _TtC14UURemoteServer16MouseButtonState::lastPressedLocation);
      *pdVar1 = dVar16;
      pdVar1[1] = dVar17;
      _swift_release(lVar5);
      lVar6 = *(long *)(unaff_x20 + lVar6);
      lVar5 = lVar6;
      _swift_retain();
      FUN_100117318();
      _swift_release(lVar6);
      lVar6 = *(long *)(lVar5 + _TtC14UURemoteServer16MouseButtonState::clickCount);
      _swift_release(lVar5);
      lVar5 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100118148);
        (*pcVar9)();
      }
    }
    else if (param_2 == 2) {
      FUN_100117638();
      lVar5 = lVar10;
      FUN_100117318();
      _swift_release(lVar10);
      bVar2 = *(byte *)(lVar5 + 0x10);
      _swift_release(lVar5);
      lVar5 = _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState;
      if ((bVar2 & 1) == 0) goto LAB_100118390;
      lVar12 = *(long *)(unaff_x20 +
                        _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState);
      lVar6 = lVar12;
      _swift_retain();
      FUN_100117318();
      _swift_release(lVar12);
      *(undefined1 *)(lVar6 + 0x10) = 0;
      _swift_release(lVar6);
      lVar6 = *(long *)(unaff_x20 + lVar5);
      lVar5 = lVar6;
      _swift_retain();
      FUN_100117318();
      _swift_release(lVar6);
      lVar6 = *(long *)(lVar5 + _TtC14UURemoteServer16MouseButtonState::clickCount);
      _swift_release(lVar5);
      lVar5 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100117ee4);
        (*pcVar9)();
      }
    }
    else {
      if (param_2 != 3) goto LAB_100118364;
      __s10Foundation4DateVACycfC(lVar12);
      FUN_100117638();
      lVar13 = lVar10;
      FUN_1001173b8();
      _swift_release(lVar10);
      lVar6 = _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp;
      _swift_beginAccess(lVar13 + _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp,
                         auStack_a8,0,0);
      lVar10 = local_c8;
      (**(code **)(local_c8 + 0x10))(lVar11,lVar13 + lVar6,lVar5);
      _swift_release(lVar13);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar11);
      pcVar9 = *(code **)(lVar10 + 8);
      (*pcVar9)(lVar11,lVar5);
      (*pcVar9)(lVar12,lVar5);
      lVar6 = _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState;
      lVar10 = *(long *)(unaff_x20 +
                        _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState);
      lVar11 = lVar10;
      _swift_retain();
      FUN_1001173b8();
      _swift_release(lVar10);
      dVar18 = *(double *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::lastPressedLocation);
      dVar19 = ((double *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::lastPressedLocation))[1]
      ;
      _swift_release(lVar11);
      lVar10 = *(long *)(unaff_x20 + lVar6);
      lVar11 = lVar10;
      _swift_retain();
      FUN_1001173b8();
      _swift_release(lVar10);
      if ((0.3 <= dVar15) ||
         (dVar18 = dVar18 - dVar16, dVar19 = dVar19 - dVar17,
         30.0 < SQRT(dVar18 * dVar18 + dVar19 * dVar19))) {
        *(undefined8 *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::clickCount) = 0;
      }
      else {
        if (SCARRY8(*(long *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::clickCount),1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1001183f4);
          (*pcVar9)();
        }
        *(long *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::clickCount) =
             *(long *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::clickCount) + 1;
      }
      _swift_release(lVar11);
      lVar11 = *(long *)(unaff_x20 + lVar6);
      lVar10 = lVar11;
      _swift_retain(lVar11);
      FUN_1001173b8();
      _swift_release(lVar11);
      __s10Foundation4DateVACycfC(lVar12);
      lVar11 = _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp;
      _swift_beginAccess(lVar10 + _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp,
                         auStack_c0,0x21,0);
      (**(code **)(local_c8 + 0x28))(lVar10 + lVar11,lVar12,lVar5);
      _swift_endAccess(auStack_c0);
      _swift_release(lVar10);
      lVar12 = *(long *)(unaff_x20 + lVar6);
      lVar5 = lVar12;
      _swift_retain();
      FUN_1001173b8();
      _swift_release(lVar12);
      *(undefined1 *)(lVar5 + 0x10) = 1;
      _swift_release(lVar5);
      lVar12 = *(long *)(unaff_x20 + lVar6);
      lVar5 = lVar12;
      _swift_retain();
      FUN_1001173b8();
      _swift_release(lVar12);
      pdVar1 = (double *)(lVar5 + _TtC14UURemoteServer16MouseButtonState::lastPressedLocation);
      *pdVar1 = dVar16;
      pdVar1[1] = dVar17;
      _swift_release(lVar5);
      lVar6 = *(long *)(unaff_x20 + lVar6);
      lVar5 = lVar6;
      _swift_retain();
      FUN_1001173b8();
      _swift_release(lVar6);
      lVar6 = *(long *)(lVar5 + _TtC14UURemoteServer16MouseButtonState::clickCount);
      _swift_release(lVar5);
      lVar5 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100118250);
        (*pcVar9)();
      }
    }
LAB_100118354:
    _CGEventSetIntegerValueField(lVar7,1,lVar5);
  }
  else {
    lVar6 = 0;
    bVar8 = true;
    if (0x1b < param_2) goto LAB_100117920;
    if ((1 << (ulong)(param_2 & 0x1f) & 0x80000c0U) == 0) {
LAB_100117998:
      bVar2 = *(byte *)(param_1 + 0x30);
      goto joined_r0x000100117928;
    }
    if (((ulong)((double *)(unaff_x20 + _TtC14UURemoteServer15InputController::lastPostedMousePoint)
                )[2] & 1) == 0) {
      dVar15 = (double)(long)(dVar16 - *(double *)
                                        (unaff_x20 +
                                        _TtC14UURemoteServer15InputController::lastPostedMousePoint)
                             );
      if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1001183d8);
        (*pcVar9)();
      }
      if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1001183dc);
        (*pcVar9)();
      }
      if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1001183e4);
        (*pcVar9)();
      }
      bVar8 = false;
      lVar6 = (long)dVar15;
      goto LAB_100117998;
    }
    lVar6 = 0;
    bVar8 = true;
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) goto LAB_1001179a0;
LAB_10011792c:
    if (*(long *)(param_1 + 0x28) + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1001183d4);
      (*pcVar9)();
    }
    bVar4 = false;
    lVar13 = *(long *)(param_1 + 0x28) << 1;
joined_r0x0001001179d8:
    if (bVar8) goto LAB_1001179dc;
LAB_100117b90:
    lVar10 = lVar7;
    _CGEventSetIntegerValueField(lVar7,4,lVar6);
    if (!bVar4) goto LAB_100117ba0;
LAB_1001179e0:
    if ((int)param_2 < 4) goto LAB_1001179e8;
LAB_100117bb8:
    if (param_2 == 4) {
      FUN_100117638();
      lVar5 = lVar10;
      FUN_1001173b8();
      _swift_release(lVar10);
      bVar2 = *(byte *)(lVar5 + 0x10);
      _swift_release(lVar5);
      lVar5 = _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState;
      if ((bVar2 & 1) == 0) goto LAB_100118390;
      lVar12 = *(long *)(unaff_x20 +
                        _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState);
      lVar6 = lVar12;
      _swift_retain();
      FUN_1001173b8();
      _swift_release(lVar12);
      *(undefined1 *)(lVar6 + 0x10) = 0;
      _swift_release(lVar6);
      lVar6 = *(long *)(unaff_x20 + lVar5);
      lVar5 = lVar6;
      _swift_retain();
      FUN_1001173b8();
      _swift_release(lVar6);
      lVar6 = *(long *)(lVar5 + _TtC14UURemoteServer16MouseButtonState::clickCount);
      _swift_release(lVar5);
      lVar5 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100117e4c);
        (*pcVar9)();
      }
      goto LAB_100118354;
    }
    if (param_2 == 0x19) {
      if (cVar3 == '\x02') {
        __s10Foundation4DateVACycfC(lVar12);
        FUN_100117638();
        lVar13 = lVar10;
        FUN_100117458();
        _swift_release(lVar10);
        lVar6 = _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp;
        _swift_beginAccess(lVar13 + _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp,
                           auStack_a8,0,0);
        lVar10 = local_c8;
        (**(code **)(local_c8 + 0x10))(lVar11,lVar13 + lVar6,lVar5);
        _swift_release(lVar13);
        __s10Foundation4DateV17timeIntervalSinceySdACF(lVar11);
        pcVar9 = *(code **)(lVar10 + 8);
        (*pcVar9)(lVar11,lVar5);
        (*pcVar9)(lVar12,lVar5);
        lVar6 = _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState;
        lVar10 = *(long *)(unaff_x20 +
                          _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState)
        ;
        lVar11 = lVar10;
        _swift_retain();
        FUN_100117458();
        _swift_release(lVar10);
        dVar18 = *(double *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::lastPressedLocation);
        dVar19 = ((double *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::lastPressedLocation))
                 [1];
        _swift_release(lVar11);
        lVar10 = *(long *)(unaff_x20 + lVar6);
        lVar11 = lVar10;
        _swift_retain();
        FUN_100117458();
        _swift_release(lVar10);
        if ((0.3 <= dVar15) ||
           (dVar18 = dVar18 - dVar16, dVar19 = dVar19 - dVar17,
           30.0 < SQRT(dVar18 * dVar18 + dVar19 * dVar19))) {
          *(undefined8 *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::clickCount) = 0;
        }
        else {
          if (SCARRY8(*(long *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::clickCount),1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1001183fc);
            (*pcVar9)();
          }
          *(long *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::clickCount) =
               *(long *)(lVar11 + _TtC14UURemoteServer16MouseButtonState::clickCount) + 1;
        }
        _swift_release(lVar11);
        lVar11 = *(long *)(unaff_x20 + lVar6);
        lVar10 = lVar11;
        _swift_retain(lVar11);
        FUN_100117458();
        _swift_release(lVar11);
        __s10Foundation4DateVACycfC(lVar12);
        lVar11 = _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp;
        _swift_beginAccess(lVar10 + _TtC14UURemoteServer16MouseButtonState::lastPressedTimeStamp,
                           auStack_c0,0x21,0);
        (**(code **)(local_c8 + 0x28))(lVar10 + lVar11,lVar12,lVar5);
        _swift_endAccess(auStack_c0);
        _swift_release(lVar10);
        lVar12 = *(long *)(unaff_x20 + lVar6);
        lVar5 = lVar12;
        _swift_retain();
        FUN_100117458();
        _swift_release(lVar12);
        *(undefined1 *)(lVar5 + 0x10) = 1;
        _swift_release(lVar5);
        lVar12 = *(long *)(unaff_x20 + lVar6);
        lVar5 = lVar12;
        _swift_retain();
        FUN_100117458();
        _swift_release(lVar12);
        pdVar1 = (double *)(lVar5 + _TtC14UURemoteServer16MouseButtonState::lastPressedLocation);
        *pdVar1 = dVar16;
        pdVar1[1] = dVar17;
        _swift_release(lVar5);
        lVar6 = *(long *)(unaff_x20 + lVar6);
        lVar5 = lVar6;
        _swift_retain();
        FUN_100117458();
        _swift_release(lVar6);
        lVar6 = *(long *)(lVar5 + _TtC14UURemoteServer16MouseButtonState::clickCount);
        _swift_release(lVar5);
        lVar5 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1001183f8);
          (*pcVar9)();
        }
        goto LAB_100118354;
      }
    }
    else if ((param_2 == 0x1a) && (cVar3 == '\x02')) {
      FUN_100117638();
      lVar5 = lVar10;
      FUN_100117458();
      _swift_release(lVar10);
      bVar2 = *(byte *)(lVar5 + 0x10);
      _swift_release(lVar5);
      lVar5 = _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState;
      if ((bVar2 & 1) == 0) goto LAB_100118390;
      lVar12 = *(long *)(unaff_x20 +
                        _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState);
      lVar6 = lVar12;
      _swift_retain();
      FUN_100117458();
      _swift_release(lVar12);
      *(undefined1 *)(lVar6 + 0x10) = 0;
      _swift_release(lVar6);
      lVar6 = *(long *)(unaff_x20 + lVar5);
      lVar5 = lVar6;
      _swift_retain();
      FUN_100117458();
      _swift_release(lVar6);
      lVar6 = *(long *)(lVar5 + _TtC14UURemoteServer16MouseButtonState::clickCount);
      _swift_release(lVar5);
      lVar5 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100117c78);
        (*pcVar9)();
      }
      goto LAB_100118354;
    }
  }
LAB_100118364:
  _CGEventPost(0,lVar7);
  pdVar1 = (double *)(unaff_x20 + _TtC14UURemoteServer15InputController::lastPostedMousePoint);
  *pdVar1 = dVar16;
  pdVar1[1] = dVar17;
  *(undefined1 *)(pdVar1 + 2) = 0;
LAB_100118390:
  return lVar7 != 0;
}

