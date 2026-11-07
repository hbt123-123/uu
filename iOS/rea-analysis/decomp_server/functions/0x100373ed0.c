// rea decompile_all
// name: FUN_100373ed0
// address: 0x100373ed0
// body: available
// range: 0x100373ed0-0x1003745a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100373ed0(undefined8 param_1,double param_2,double param_3,undefined8 param_4,long param_5,
                  ulong param_6,ulong param_7,byte param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  code *pcVar9;
  undefined *puVar10;
  ID self;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 *puVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  float fVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long lVar22;
  float fVar23;
  double dVar24;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 local_88;
  
  puVar10 = &DAT_100a888b8;
  dVar24 = param_2;
  local_c0 = param_7;
  FUN_100004bb4(&DAT_100a888b8,&DAT_10081cb00);
  puVar21 = auStack_e0 + -(*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar16 = "mainScreen";
  self = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen,"mainScreen");
  if (self == 0) {
    dVar24 = 1.0;
  }
  else {
    pcVar16 = "backingScaleFactor";
    NSScreen::backingScaleFactor(self,"backingScaleFactor");
  }
  uVar13 = 0;
  param_2 = dVar24 * param_2;
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100374588);
    (*pcVar9)();
  }
  if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10037458c);
    (*pcVar9)();
  }
  dVar24 = dVar24 * param_3;
  if ((0x7fefffffffffffff < (ulong)ABS(param_2)) || (0x7fefffffffffffff < (ulong)ABS(dVar24))) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100374590);
    (*pcVar9)();
  }
  if (dVar24 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100374594);
    (*pcVar9)();
  }
  if (9.223372036854776e+18 <= dVar24) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100374598);
    (*pcVar9)();
  }
  __s10Foundation3URLV6schemeSSSgvg();
  if (pcVar16 == (char *)0x0) {
LAB_1003741ac:
    lVar14 = 0;
    __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x0001003741ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar14 + -8) + 0x10))(param_1);
    return;
  }
  uVar11 = uVar13;
  pcVar17 = pcVar16;
  __s10Foundation3URLV4hostSSSgvg();
  local_c8 = pcVar17;
  if (pcVar17 == (char *)0x0) {
    _swift_bridgeObjectRelease(pcVar16);
    goto LAB_1003741ac;
  }
  local_90 = 0;
  local_88 = 0xe000000000000000;
  local_d8 = param_1;
  local_d0 = uVar11;
  __ss11_StringGutsV4growyySiF(0x10);
  _swift_bridgeObjectRelease(local_88);
  local_90 = 0x67616d693d706f66;
  local_88 = 0xee002f7765695665;
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_a0 = param_4;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  if (0 < (long)param_2) {
    local_a0 = 0x2f772f;
    pcStack_98 = (char *)0xe300000000000000;
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_b0 = (long)param_2;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar10);
    pcVar17 = pcStack_98;
    __sSS6appendyySSF(local_a0,pcStack_98);
    _swift_bridgeObjectRelease(pcVar17);
  }
  if (0 < (long)dVar24) {
    local_a0 = 0x2f682f;
    pcStack_98 = (char *)0xe300000000000000;
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_b0 = (long)dVar24;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar10);
    pcVar17 = pcStack_98;
    __sSS6appendyySSF(local_a0,pcStack_98);
    _swift_bridgeObjectRelease(pcVar17);
  }
  uVar1 = (uint)param_8;
  if (uVar1 < 5) {
    uVar2 = 0xe400000000000000;
    if (1 < uVar1 - 3) {
      uVar2 = 0xe300000000000000;
    }
    uVar20 = 0xe400000000000000;
    if (1 < uVar1) {
      uVar20 = uVar2;
    }
LAB_100374204:
    _swift_bridgeObjectRelease(uVar20);
    if ((uVar20 & 0x700000000000000) != 0) {
      local_a0 = 0x2f662f;
      pcStack_98 = (char *)0xe300000000000000;
      uVar7 = 0x706d62;
      if (param_8 != 5) {
        uVar7 = 0x666967;
      }
      uVar11 = 0xe300000000000000;
      uVar5 = 0x66666974;
      if (param_8 != 3) {
        uVar5 = 0x63696568;
      }
      if (param_8 < 5) {
        uVar11 = 0xe400000000000000;
        uVar7 = uVar5;
      }
      uVar5 = 0x70626577;
      if (param_8 != 1) {
        uVar5 = 0x676e70;
      }
      uVar3 = 0xe400000000000000;
      if (param_8 != 1) {
        uVar3 = 0xe300000000000000;
      }
      uVar6 = 0x6765706a;
      if (param_8 != 0) {
        uVar6 = uVar5;
      }
      uVar4 = 0xe400000000000000;
      if (param_8 != 0) {
        uVar4 = uVar3;
      }
      if (param_8 < 3) {
        uVar11 = uVar4;
        uVar7 = uVar6;
      }
      __sSS6appendyySSF(uVar7,uVar11);
      _swift_bridgeObjectRelease(uVar11);
      pcVar17 = pcStack_98;
      __sSS6appendyySSF(local_a0,pcStack_98);
      _swift_bridgeObjectRelease(pcVar17);
    }
  }
  else if ((uVar1 == 5) || (uVar1 == 6)) {
    uVar20 = 0xe300000000000000;
    goto LAB_100374204;
  }
  if (((param_6 & 1) == 0) && (0xffffffffffffff9b < param_5 - 0x65U)) {
    local_a0 = 0x2f712f;
    pcStack_98 = (char *)0xe300000000000000;
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_b0 = param_5;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar10);
    pcVar17 = pcStack_98;
    __sSS6appendyySSF(local_a0,pcStack_98);
    _swift_bridgeObjectRelease(pcVar17);
  }
  local_a0 = uVar13;
  pcStack_98 = pcVar16;
  _swift_bridgeObjectRetain(pcVar16);
  __sSS6appendyySSF(0x2f2f3a,0xe300000000000000);
  pcVar17 = local_c8;
  pcVar12 = local_c8;
  __sSS6appendyySSF(local_d0);
  __s10Foundation3URLV4pathSSvg();
  pcVar18 = pcVar12;
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease();
  pcVar8 = pcStack_98;
  uVar13 = local_a0;
  __s10Foundation3URLV5querySSSgvg();
  if (pcVar18 != (char *)0x0) {
    uVar20 = (ulong)pcVar12 & 0xffffffffffff;
    if (((ulong)pcVar18 & 0x2000000000000000) != 0) {
      uVar20 = (ulong)pcVar18 >> 0x38 & 0xf;
    }
    if (uVar20 != 0) {
      local_a0 = uVar13;
      pcStack_98 = pcVar8;
      _swift_bridgeObjectRetain(pcVar8);
      __sSS6appendyySSF(0x3f,0xe100000000000000);
      __sSS6appendyySSF(pcVar12,pcVar18);
      _swift_bridgeObjectRelease(pcVar18);
      uVar13 = 0x26;
      goto LAB_10037440c;
    }
    _swift_bridgeObjectRelease(pcVar18);
  }
  local_a0 = uVar13;
  pcStack_98 = pcVar8;
  _swift_bridgeObjectRetain(pcVar8);
  uVar13 = 0x3f;
LAB_10037440c:
  __sSS6appendyySSF(uVar13,0xe100000000000000);
  uVar13 = local_88;
  __sSS6appendyySSF(local_90,local_88);
  if ((local_c0 >> 0x20 & 1) == 0) {
    fVar19 = 100.0;
    fVar23 = (float)(int)((float)local_c0 * 100.0);
    if ((fVar23 < 100.0) && (fVar19 = fVar23, 0x7f7fffff < (uint)ABS(fVar23))) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10037459c);
      (*pcVar9)();
    }
    if (fVar19 <= -9.223373e+18) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1003745a0);
      (*pcVar9)();
    }
    if (9.223372e+18 <= fVar19) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1003745a4);
      (*pcVar9)();
    }
    local_b8 = (long)fVar19;
    local_b0 = 0x702f632f;
    uStack_a8 = 0xe400000000000000;
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar10);
    uVar11 = uStack_a8;
    __sSS6appendyySSF(local_b0,uStack_a8);
    _swift_bridgeObjectRelease(uVar11);
  }
  pcVar12 = pcStack_98;
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar21,local_a0,pcStack_98);
  lVar14 = 0;
  __s10Foundation3URLVMa();
  lVar22 = *(long *)(lVar14 + -8);
  puVar15 = puVar21;
  (**(code **)(lVar22 + 0x30))(puVar21,1,lVar14);
  if ((int)puVar15 != 1) {
    _swift_bridgeObjectRelease(pcVar12);
    _swift_bridgeObjectRelease(pcVar8);
    _swift_bridgeObjectRelease(pcVar17);
    _swift_bridgeObjectRelease(pcVar16);
    _swift_bridgeObjectRelease(uVar13);
    (**(code **)(lVar22 + 0x20))(local_d8,puVar21,lVar14);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1003745a8);
  (*pcVar9)();
}

