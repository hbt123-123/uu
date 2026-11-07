// rea decompile_all
// name: FUN_10052c2a8
// address: 0x10052c2a8
// body: available
// range: 0x10052c2a8-0x10052cc7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052c2a8(byte *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_1 == (byte *)0x0) {
    return;
  }
  param_2 = param_2 - (long)param_1;
  if (param_2 < 1) {
    return;
  }
  lVar5 = 0;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    if (lVar5 == 3) {
      if (DAT_100aa26a8 != -1) {
        _swift_once(&DAT_100aa26a8,FUN_10052b750);
      }
      lVar5 = DAT_100aab428;
      uVar6 = uVar7 >> 0x12 & 0x3f;
      if (*(ulong *)(DAT_100aab428 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10052c940);
        (*pcVar3)();
      }
      lVar1 = DAT_100aab428 + 0x20;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar11 = *param_3;
      uVar6 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar11;
      uVar12 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar12 = 0;
        FUN_100506f84(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        *param_3 = uVar12;
      }
      uVar6 = *(ulong *)(uVar12 + 0x10);
      uVar11 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_100506f84(uVar11,uVar6 + 1,1,uVar12);
        *param_3 = uVar11;
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar11 + uVar6 + 0x20) = uVar8;
      uVar6 = uVar7 >> 0xc & 0x3f;
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10052c944);
        (*pcVar3)();
      }
      uVar11 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar6 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar11;
      uVar12 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar12 = 0;
        FUN_100506f84(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        *param_3 = uVar12;
      }
      uVar6 = *(ulong *)(uVar12 + 0x10);
      uVar11 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_100506f84(uVar11,uVar6 + 1,1,uVar12);
        *param_3 = uVar11;
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar11 + uVar6 + 0x20) = uVar8;
      uVar6 = uVar7 >> 6 & 0x3f;
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10052c948);
        (*pcVar3)();
      }
      uVar11 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar6 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar11;
      uVar12 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar12 = 0;
        FUN_100506f84(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        *param_3 = uVar12;
      }
      uVar6 = *(ulong *)(uVar12 + 0x10);
      uVar11 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_100506f84(uVar11,uVar6 + 1,1,uVar12);
        *param_3 = uVar11;
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar11 + uVar6 + 0x20) = uVar8;
      if (*(ulong *)(lVar5 + 0x10) <= (uVar7 & 0x3f)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10052c94c);
        (*pcVar3)();
      }
      uVar12 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + (uVar7 & 0x3f));
      uVar6 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar12;
      uVar7 = uVar12;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        FUN_100506f84(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
        *param_3 = uVar7;
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar12 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_100506f84(uVar12,uVar6 + 1,1,uVar7);
        *param_3 = uVar12;
      }
      lVar5 = 0;
      uVar7 = 0;
      *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    }
    bVar4 = SCARRY8(lVar5,1);
    lVar5 = lVar5 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10052c93c);
      (*pcVar3)();
    }
    bVar2 = *param_1;
    uVar11 = (ulong)bVar2;
    uVar12 = uVar7 << 8;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
    uVar6 = uVar11 | uVar12;
  } while (param_2 != 0);
  if (lVar5 == 1) {
    if (DAT_100aa26a8 != -1) {
      _swift_once(&DAT_100aa26a8,FUN_10052b750);
    }
    lVar5 = DAT_100aab428;
    uVar6 = (ulong)(bVar2 >> 2);
    if (*(ulong *)(DAT_100aab428 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10052c9a4);
      (*pcVar3)();
    }
    lVar1 = DAT_100aab428 + 0x20;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar12 = *param_3;
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar12;
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_100506f84(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_100506f84(uVar12,uVar6 + 1,1,uVar7);
      *param_3 = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    uVar6 = (uVar11 & 3) * 0x10;
    if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10052ca60);
      (*pcVar3)();
    }
    uVar12 = *param_3;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar12;
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_100506f84(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_100506f84(uVar12,uVar6 + 1,1,uVar7);
      *param_3 = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    uVar7 = *param_3;
    uVar6 = *(ulong *)(uVar7 + 0x10);
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_100506f84(uVar7,uVar6 + 1,1);
      *param_3 = uVar7;
    }
    *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
    uVar8 = 0x3d;
    *(undefined1 *)(uVar7 + uVar6 + 0x20) = 0x3d;
    uVar6 = *param_3;
LAB_10052c8f8:
    uVar7 = *(ulong *)(uVar6 + 0x10);
    lVar5 = uVar7 + 1;
    if (uVar7 < *(ulong *)(uVar6 + 0x18) >> 1) goto LAB_10052c908;
    uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_100506f84(uVar12,lVar5,1,uVar6);
  }
  else {
    if (lVar5 != 2) {
      if (lVar5 != 3) {
        return;
      }
      if (DAT_100aa26a8 != -1) {
        _swift_once(&DAT_100aa26a8,FUN_10052b750);
      }
      lVar5 = DAT_100aab428;
      uVar6 = (uVar7 & 0xffffffffffffff) >> 10 & 0x3f;
      if (*(ulong *)(DAT_100aab428 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10052c9c0);
        (*pcVar3)();
      }
      lVar1 = DAT_100aab428 + 0x20;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar9 = *param_3;
      uVar6 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar9;
      uVar10 = uVar9;
      if ((uVar6 & 1) == 0) {
        uVar10 = 0;
        FUN_100506f84(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
        *param_3 = uVar10;
      }
      uVar6 = *(ulong *)(uVar10 + 0x10);
      uVar9 = uVar10;
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
        FUN_100506f84(uVar9,uVar6 + 1,1,uVar10);
        *param_3 = uVar9;
      }
      *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar9 + uVar6 + 0x20) = uVar8;
      uVar6 = (uVar7 & 0xffffffffffffff) >> 4 & 0x3f;
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10052cab0);
        (*pcVar3)();
      }
      uVar10 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar6 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar10;
      uVar7 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        FUN_100506f84(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
        *param_3 = uVar7;
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_100506f84(uVar10,uVar6 + 1,1,uVar7);
        *param_3 = uVar10;
      }
      *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar10 + uVar6 + 0x20) = uVar8;
      uVar6 = (uVar11 | uVar12) >> 6 & 0x3f;
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10052cbbc);
        (*pcVar3)();
      }
      uVar12 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar6 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar12;
      uVar7 = uVar12;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        FUN_100506f84(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
        *param_3 = uVar7;
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar12 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_100506f84(uVar12,uVar6 + 1,1,uVar7);
        *param_3 = uVar12;
      }
      *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
      if (*(ulong *)(lVar5 + 0x10) <= (uVar11 & 0x3f)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10052cc80);
        (*pcVar3)();
      }
      uVar12 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + (uVar11 & 0x3f));
      uVar7 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar12;
      uVar6 = uVar12;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
        FUN_100506f84(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
        *param_3 = uVar6;
      }
      goto LAB_10052c8f8;
    }
    if (DAT_100aa26a8 != -1) {
      _swift_once(&DAT_100aa26a8,FUN_10052b750);
    }
    lVar5 = DAT_100aab428;
    uVar6 = (uVar12 & 0xffffffffffff00) >> 10 & 0x3f;
    if (*(ulong *)(DAT_100aab428 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10052c988);
      (*pcVar3)();
    }
    lVar1 = DAT_100aab428 + 0x20;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar10 = *param_3;
    uVar6 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar10;
    uVar7 = uVar10;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_100506f84(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar10 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_100506f84(uVar10,uVar6 + 1,1,uVar7);
      *param_3 = uVar10;
    }
    *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar10 + uVar6 + 0x20) = uVar8;
    uVar6 = (uVar11 | uVar12 & 0xffffffffffff00) >> 4 & 0x3f;
    if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10052ca10);
      (*pcVar3)();
    }
    uVar12 = *param_3;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar12;
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_100506f84(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_100506f84(uVar12,uVar6 + 1,1,uVar7);
      *param_3 = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    uVar6 = (uVar11 & 0xf) * 4;
    if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10052cb00);
      (*pcVar3)();
    }
    uVar12 = *param_3;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar12;
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_100506f84(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_100506f84(uVar12,uVar6 + 1,1,uVar7);
      *param_3 = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    uVar6 = *param_3;
    uVar7 = *(ulong *)(uVar6 + 0x10);
    lVar5 = uVar7 + 1;
    if (uVar7 < *(ulong *)(uVar6 + 0x18) >> 1) {
      uVar8 = 0x3d;
      goto LAB_10052c908;
    }
    uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_100506f84(uVar12,lVar5,1,uVar6);
    uVar8 = 0x3d;
  }
  *param_3 = uVar12;
  uVar6 = uVar12;
LAB_10052c908:
  *(long *)(uVar6 + 0x10) = lVar5;
  *(undefined1 *)(uVar6 + uVar7 + 0x20) = uVar8;
  return;
}

