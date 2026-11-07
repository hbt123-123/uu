// rea decompile_all
// name: FUN_100374bb4
// address: 0x100374bb4
// body: available
// range: 0x100374bb4-0x100375237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100374cfc to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_100374bb4(double param_1,double param_2,float param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ID unaff_x20;
  ID IVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  code *pcVar21;
  float fVar22;
  double dVar23;
  undefined1 auStack_f0 [8];
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined1 *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 local_88;
  
  puVar1 = &DAT_100a888b8;
  dVar23 = param_1;
  FUN_100004bb4(&DAT_100a888b8,&DAT_10081cb00);
  uVar14 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar19 = (long)(auStack_f0 + -uVar14) - uVar14;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar2 + -8);
  uVar15 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  IVar16 = lVar19 - uVar15;
  puVar17 = (undefined1 *)(IVar16 - uVar15);
  pcVar9 = "absoluteString";
  IVar3 = _objc_msgSend(unaff_x20,"absoluteString");
  if (IVar3 == 0) {
    return unaff_x20;
  }
  local_c8 = auStack_f0 + -uVar14;
  local_c0 = param_5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar19,IVar3,pcVar9);
  _swift_bridgeObjectRelease(pcVar9);
  pcVar20 = *(code **)(lVar18 + 0x30);
  lVar4 = lVar19;
  (*pcVar20)(lVar19,1,lVar2);
  if ((int)lVar4 == 1) {
    FUN_10036e94c(lVar19);
    return unaff_x20;
  }
  pcVar21 = *(code **)(lVar18 + 0x20);
  (*pcVar21)(puVar17,lVar19,lVar2);
  pcVar9 = "mainScreen";
  IVar3 = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen,"mainScreen");
  if (IVar3 == 0) {
    dVar23 = 1.0;
  }
  else {
    pcVar9 = "backingScaleFactor";
    NSScreen::backingScaleFactor(IVar3,"backingScaleFactor");
  }
  uVar7 = 0;
  param_1 = dVar23 * param_1;
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x100375218);
    (*pcVar20)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x10037521c);
    (*pcVar20)();
  }
  dVar23 = dVar23 * param_2;
  if ((0x7fefffffffffffff < (ulong)ABS(param_1)) || (0x7fefffffffffffff < (ulong)ABS(dVar23))) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x100375220);
    (*pcVar20)();
  }
  if (dVar23 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x100375224);
    (*pcVar20)();
  }
  if (9.223372036854776e+18 <= dVar23) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x100375228);
    (*pcVar20)();
  }
  __s10Foundation3URLV6schemeSSSgvg();
  if (pcVar9 != (char *)0x0) {
    uVar5 = uVar7;
    pcVar10 = pcVar9;
    __s10Foundation3URLV4hostSSSgvg();
    local_d0 = pcVar10;
    if (pcVar10 != (char *)0x0) {
      local_90 = 0;
      local_88 = 0xe000000000000000;
      local_e8 = pcVar21;
      local_e0 = uVar7;
      local_d8 = uVar5;
      __ss11_StringGutsV4growyySiF(0x10);
      _swift_bridgeObjectRelease(local_88);
      local_90 = 0x67616d693d706f66;
      local_88 = 0xee002f7765695665;
      puVar1 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      local_a0 = param_4;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar1);
      if (0 < (long)param_1) {
        local_a0 = 0x2f772f;
        pcStack_98 = (char *)0xe300000000000000;
        puVar1 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        local_b0 = (long)param_1;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar1);
        pcVar10 = pcStack_98;
        __sSS6appendyySSF(local_a0,pcStack_98);
        _swift_bridgeObjectRelease(pcVar10);
      }
      uVar7 = local_e0;
      if (0 < (long)dVar23) {
        local_a0 = 0x2f682f;
        pcStack_98 = (char *)0xe300000000000000;
        puVar1 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        local_b0 = (long)dVar23;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar1);
        pcVar10 = pcStack_98;
        __sSS6appendyySSF(local_a0,pcStack_98);
        _swift_bridgeObjectRelease(pcVar10);
      }
      if (0xffffffffffffff9b < local_c0 - 0x65U) {
        local_a0 = 0x2f712f;
        pcStack_98 = (char *)0xe300000000000000;
        local_b0 = local_c0;
        puVar1 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar1);
        pcVar10 = pcStack_98;
        __sSS6appendyySSF(local_a0,pcStack_98);
        _swift_bridgeObjectRelease(pcVar10);
      }
      local_a0 = uVar7;
      pcStack_98 = pcVar9;
      _swift_bridgeObjectRetain(pcVar9);
      __sSS6appendyySSF(0x2f2f3a,0xe300000000000000);
      pcVar6 = local_d0;
      __sSS6appendyySSF(local_d8);
      __s10Foundation3URLV4pathSSvg();
      pcVar11 = pcVar6;
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease();
      pcVar10 = pcStack_98;
      uVar7 = local_a0;
      __s10Foundation3URLV5querySSSgvg();
      if (pcVar11 == (char *)0x0) {
LAB_100375078:
        local_a0 = uVar7;
        pcStack_98 = pcVar10;
        _swift_bridgeObjectRetain(pcVar10);
        uVar7 = 0x3f;
      }
      else {
        uVar14 = (ulong)pcVar6 & 0xffffffffffff;
        if (((ulong)pcVar11 & 0x2000000000000000) != 0) {
          uVar14 = (ulong)pcVar11 >> 0x38 & 0xf;
        }
        if (uVar14 == 0) {
          _swift_bridgeObjectRelease(pcVar11);
          goto LAB_100375078;
        }
        local_a0 = uVar7;
        pcStack_98 = pcVar10;
        _swift_bridgeObjectRetain(pcVar10);
        __sSS6appendyySSF(0x3f,0xe100000000000000);
        __sSS6appendyySSF(pcVar6,pcVar11);
        _swift_bridgeObjectRelease(pcVar11);
        uVar7 = 0x26;
      }
      __sSS6appendyySSF(uVar7,0xe100000000000000);
      uVar7 = local_88;
      __sSS6appendyySSF(local_90,local_88);
      fVar13 = 100.0;
      fVar22 = (float)(int)(param_3 * 100.0);
      if ((fVar22 < 100.0) && (fVar13 = fVar22, 0x7f7fffff < (uint)ABS(fVar22))) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x10037522c);
        (*pcVar20)();
      }
      if (fVar13 <= -9.223373e+18) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x100375230);
        (*pcVar20)();
      }
      if (9.223372e+18 <= fVar13) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x100375234);
        (*pcVar20)();
      }
      local_b8 = (long)fVar13;
      local_b0 = 0x702f632f;
      uStack_a8 = 0xe400000000000000;
      puVar1 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar1);
      uVar5 = uStack_a8;
      __sSS6appendyySSF(local_b0,uStack_a8);
      _swift_bridgeObjectRelease(uVar5);
      pcVar6 = pcStack_98;
      puVar12 = local_c8;
      __s10Foundation3URLV6stringACSgSSh_tcfC(local_c8,local_a0,pcStack_98);
      puVar8 = puVar12;
      (*pcVar20)(puVar12,1,lVar2);
      if ((int)puVar8 == 1) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x100375238);
        (*pcVar20)();
      }
      _swift_bridgeObjectRelease(pcVar6);
      _swift_bridgeObjectRelease(pcVar10);
      _swift_bridgeObjectRelease(local_d0);
      _swift_bridgeObjectRelease(pcVar9);
      _swift_bridgeObjectRelease(uVar7);
      pcVar20 = local_e8;
      goto LAB_1003751bc;
    }
    _swift_bridgeObjectRelease(pcVar9);
  }
  pcVar20 = *(code **)(lVar18 + 0x10);
  puVar12 = puVar17;
LAB_1003751bc:
  IVar3 = IVar16;
  (*pcVar20)(IVar16,puVar12,lVar2);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  pcVar20 = *(code **)(lVar18 + 8);
  (*pcVar20)(IVar16,lVar2);
  (*pcVar20)(puVar17,lVar2);
  return IVar3;
}

