// rea decompile_all
// name: FUN_1000f5988
// address: 0x1000f5988
// body: available
// range: 0x1000f5988-0x1000f5daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000f5988(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *self;
  double dVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined *local_a8;
  
  dVar6 = param_2;
  dVar16 = param_3;
  puVar2 = (undefined *)NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar3 = 0;
  FUN_1000f6060(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar2,uVar3);
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar7 = *(undefined **)((undefined *)((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar7 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
    if (((ulong)puVar2 & 0x8000000000000000) != 0) {
      puVar7 = puVar2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar7 != (undefined *)0x0) {
    uVar9 = 0;
    uVar11 = (ulong)puVar2 & 0xc000000000000001;
    puVar10 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
    do {
      if (uVar11 == 0) {
        if (*(ulong *)(puVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5d14);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(puVar2 + uVar9 * 8 + 0x20);
      }
      else {
        uVar4 = uVar9;
        FUN_100169c00(uVar9,puVar2);
      }
      puVar8 = (undefined *)(uVar9 + 1);
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5d10);
        (*pcVar1)();
      }
      uVar5 = uVar4;
      FUN_1003d71a4();
      if ((uVar5 & 1) != 0) goto LAB_1000f5ac8;
      uVar9 = uVar9 + 1;
    } while (puVar8 != puVar7);
    uVar4 = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen,"mainScreen");
    if (uVar4 == 0) {
      if (uVar11 == 0) {
        if (*(long *)(puVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5db0);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(puVar2 + 0x20);
      }
      else {
        uVar4 = 0;
        FUN_100169c00(0,puVar2);
      }
    }
LAB_1000f5ac8:
    uVar9 = 0;
    NSScreen::frame(uVar4,"frame");
    _CGRectGetHeight(dVar6,dVar16,0);
    dVar15 = dVar6;
    if ((ulong)puVar2 >> 0x3e == 0) {
      puVar7 = *(undefined **)(puVar10 + 0x10);
    }
    else {
      puVar7 = puVar10;
      if (((ulong)puVar2 & 0x8000000000000000) != 0) {
        puVar7 = puVar2;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar7 != (undefined *)0x0) {
      FUN_10006fd34(0,(ulong)puVar7 & ((long)puVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5d84);
        (*pcVar1)();
      }
      puVar8 = (undefined *)0x0;
      do {
        if (uVar11 == 0) {
          self = *(undefined **)(puVar2 + (long)puVar8 * 8 + 0x20);
          dVar12 = dVar15;
        }
        else {
          self = puVar8;
          FUN_100169c00(puVar8,puVar2);
          dVar12 = dVar15;
        }
        uVar9 = 0;
        _objc_msgSend((ID)self,"frame");
        dVar13 = dVar12;
        _CGRectGetMinX();
        dVar15 = dVar12;
        _CGRectGetMaxY(dVar12,dVar16,param_4,param_5);
        dVar14 = dVar12;
        _CGRectGetWidth(dVar12,dVar16,param_4,param_5);
        _CGRectGetHeight();
        uVar5 = *(ulong *)(local_a8 + 0x10);
        uVar4 = uVar5 + 1;
        if (*(ulong *)(local_a8 + 0x18) >> 1 <= uVar5) {
          uVar9 = uVar4;
          FUN_10006fd34(1 < *(ulong *)(local_a8 + 0x18),uVar4,1);
        }
        puVar8 = puVar8 + 1;
        dVar15 = dVar6 - dVar15;
        *(ulong *)(local_a8 + 0x10) = uVar4;
        *(double *)(local_a8 + uVar5 * 0x20 + 0x20) = dVar13;
        *(double *)(local_a8 + uVar5 * 0x20 + 0x28) = dVar15;
        *(double *)(local_a8 + uVar5 * 0x20 + 0x30) = dVar14;
        *(double *)(local_a8 + uVar5 * 0x20 + 0x38) = dVar12;
      } while (puVar7 != puVar8);
    }
    puVar7 = local_a8;
    FUN_1000f56f8();
    if ((uVar9 & 1) == 0) {
      if (uVar11 == 0) {
        if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5d98);
          (*pcVar1)();
        }
        if (*(undefined **)(puVar10 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5d9c);
          (*pcVar1)();
        }
        puVar10 = *(undefined **)((long)(puVar2 + 0x20) + puVar7 * 8);
      }
      else {
        puVar10 = puVar7;
        FUN_100169c00();
      }
      _swift_bridgeObjectRelease(puVar2);
      FUN_10005fde8(puVar7);
      dVar6 = param_2;
      _objc_msgSend((ID)puVar10,"backingScaleFactor");
      dVar16 = 1.0;
      if (1.0 < dVar6) {
        dVar16 = dVar6;
      }
      dVar16 = 0.01953125 / dVar16;
      dVar6 = 1.0;
      goto LAB_1000f5d44;
    }
    _swift_bridgeObjectRelease(puVar2);
    puVar2 = local_a8;
  }
  _swift_bridgeObjectRelease(puVar2);
  local_a8 = (undefined *)0x0;
  dVar6 = 0.0;
  param_2 = 0.0;
  param_3 = 0.0;
  dVar16 = 0.0;
  param_4 = 0.0;
  param_5 = 0.0;
LAB_1000f5d44:
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[4] = (double)local_a8;
  param_1[5] = dVar6;
  param_1[6] = dVar16;
  return;
}

