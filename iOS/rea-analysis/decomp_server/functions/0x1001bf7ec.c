// rea decompile_all
// name: FUN_1001bf7ec
// address: 0x1001bf7ec
// body: available
// range: 0x1001bf7ec-0x1001bfceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1001bf7ec(double param_1,double param_2,undefined8 param_3,double param_4,double *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  double *pdVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  uint5 uVar8;
  code *pcVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ID self;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  long lVar19;
  double dVar20;
  undefined1 auStack_100 [16];
  long alStack_f0 [2];
  undefined1 local_c0 [8];
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_8f;
  double local_88;
  
  puVar12 = (undefined8 *)0x0;
  __s10Foundation4DateVMa();
  lVar19 = puVar12[-1];
  puVar13 = puVar12;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = local_c0 + lVar7 + -0x20;
  dVar17 = *param_5;
  bVar4 = *(byte *)(param_5 + 1);
  dVar18 = param_5[2];
  bVar5 = *(byte *)(param_5 + 3);
  if ((((bVar4 & 1) == 0) && (((ulong)dVar17 & 0x7ff0000000000000) == 0x7ff0000000000000)) ||
     (((bVar5 & 1) == 0 && (((ulong)dVar18 & 0x7ff0000000000000) == 0x7ff0000000000000)))) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(double **)((long)alStack_f0 + lVar7) = param_5;
    FUN_1003fb4ec(FUN_1001c1578,auStack_100 + lVar7,0xd00000000000008f,0x800000010089cc40,
                  0xd000000000000021,0x800000010089cdc0,0xd7,5);
    uVar11 = 0;
    goto LAB_1001bfb40;
  }
  if (DAT_100a73b78 != -1) {
    puVar13 = &DAT_100a73b78;
    _swift_once(&DAT_100a73b78,FUN_100121efc);
  }
  if (DAT_100a73b70 != -1) {
    puVar13 = &DAT_100a73b70;
    _swift_once(&DAT_100a73b70,FUN_100121d90);
  }
  if (DAT_100a79650 == (code *)0x0) {
    *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::isCursorHidden) = 0;
  }
  else {
    (*DAT_100a79650)();
    uVar11 = (uint)puVar13 ^ 1;
    bVar6 = *(byte *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::isCursorHidden);
    *(char *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::isCursorHidden) = (char)uVar11;
    if (bVar6 == uVar11) {
      if (((ulong)puVar13 & 1) == 0) goto LAB_1001bf990;
    }
    else if (((ulong)puVar13 & 1) == 0) {
      puVar1 = (undefined8 *)
               (unaff_x20 + _TtC14UURemoteServer12InputHandler::___lazy_storage___remainAbsCount);
      *puVar1 = 0x14;
      *(undefined1 *)(puVar1 + 1) = 0;
LAB_1001bf990:
      FUN_1001bf7bc();
      if (0 < (long)puVar13) {
        plVar2 = (long *)(unaff_x20 +
                         _TtC14UURemoteServer12InputHandler::___lazy_storage___remainAbsCount);
        if (SBORROW8(*plVar2,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1001bfcd4);
          (*pcVar9)();
        }
        *plVar2 = *plVar2 + -1;
        *(undefined1 *)(plVar2 + 1) = 0;
        if (((ulong)((double *)
                    (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime)
                    )[1] & 1) == 0) {
          dVar17 = *(double *)
                    (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime)
          ;
          __s10Foundation4DateVACycfC(puVar15);
          __s10Foundation4DateV21timeIntervalSince1970Sdvg();
          puVar14 = puVar15;
          (**(code **)(lVar19 + 8))(puVar15,puVar12);
          uVar10 = SUB81(puVar14,0);
          dVar17 = param_1 - dVar17;
          param_2 = 0.05;
          param_1 = dVar17;
          if (0.05 <= dVar17) goto LAB_1001bfb6c;
          param_1 = *(double *)
                     (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint);
          param_2 = ((double *)
                    (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint))[1]
          ;
        }
        else {
LAB_1001bfb6c:
          if (DAT_100a73b60 != -1) {
            _swift_once(&DAT_100a73b60,FUN_1000efc4c);
          }
          NSEvent::mouseLocation((ID)&_OBJC_CLASS___NSEvent,"mouseLocation");
          self = 0;
          dVar17 = param_1;
          FUN_1000f6060();
          thunk_FUN_1003d7218();
          if (self != 0) {
            _objc_msgSend(self,"frame");
            param_2 = param_4 - param_2;
          }
          uVar10 = 0;
        }
        FUN_1001be744();
        __s10Foundation4DateVACycfC(puVar15);
        __s10Foundation4DateV21timeIntervalSince1970Sdvg();
        (**(code **)(lVar19 + 8))(puVar15,puVar12);
        local_a8 = 1;
        local_a0 = 0;
        local_98 = 1;
        local_90 = 0;
        local_8f = 5;
        puVar15 = local_c0;
        local_c0[0] = uVar10;
        local_b8 = param_1;
        dStack_b0 = param_2;
        local_88 = dVar17;
        FUN_10011878c(puVar15,6);
        uVar11 = (uint)puVar15;
        goto LAB_1001bfb40;
      }
    }
  }
  if ((bVar4 & 1) == 0) {
    dVar20 = 0.0;
    if (0.0 < dVar17) {
      dVar20 = dVar17;
    }
    param_2 = 1.0;
    dVar17 = 1.0;
    param_1 = 1.0;
    if (dVar20 <= 1.0) {
      dVar17 = dVar20;
      param_1 = dVar20;
    }
  }
  if ((bVar5 & 1) == 0) {
    dVar20 = 0.0;
    if (0.0 < dVar18) {
      dVar20 = dVar18;
    }
    param_2 = 1.0;
    dVar18 = 1.0;
    param_1 = 1.0;
    if (dVar20 <= 1.0) {
      dVar18 = dVar20;
      param_1 = dVar20;
    }
  }
  uVar10 = *(undefined1 *)(param_5 + 4);
  uVar8 = *(uint5 *)((long)param_5 + 0x1c);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar16 = *(undefined8 *)(DAT_100b360a8 + 0x80);
  _swift_retain(uVar16);
  local_c0[0] = uVar10;
  FUN_1000333e0(dVar17,bVar4,dVar18,bVar5,(ulong)uVar8);
  _swift_release(uVar16);
  FUN_1000f5db0();
  pdVar3 = (double *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint);
  *pdVar3 = param_1;
  pdVar3[1] = param_2;
  dVar17 = param_1;
  __s10Foundation4DateVACycfC(puVar15);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar19 + 8))(puVar15,puVar12);
  uVar11 = (uint)puVar15;
  pdVar3 = (double *)
           (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime);
  *pdVar3 = dVar17;
  *(undefined1 *)(pdVar3 + 1) = 0;
  FUN_1001be7d0(param_1,param_2);
LAB_1001bfb40:
  return uVar11 & 1;
}

