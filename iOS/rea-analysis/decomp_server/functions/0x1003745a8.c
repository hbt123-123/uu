// rea decompile_all
// name: FUN_1003745a8
// address: 0x1003745a8
// body: available
// range: 0x1003745a8-0x100374b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003746e4 to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003745a8(float param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ID unaff_x20;
  long lVar14;
  long lVar15;
  ID IVar16;
  code *pcVar17;
  code *pcVar18;
  float fVar19;
  code *local_e0;
  long local_d8;
  ulong local_d0;
  long local_c8;
  ID local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  
  puVar3 = &DAT_100a888b8;
  local_b8 = param_4;
  local_b0 = param_5;
  FUN_100004bb4(&DAT_100a888b8,&DAT_10081cb00);
  uVar12 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)&local_e0 - uVar12;
  uVar12 = lVar6 - uVar12;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar4 + -8);
  uVar13 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  IVar16 = uVar12 - uVar13;
  lVar15 = IVar16 - uVar13;
  pcVar10 = "absoluteString";
  IVar5 = _objc_msgSend(unaff_x20,"absoluteString");
  if (IVar5 == 0) {
    return unaff_x20;
  }
  local_c8 = lVar6;
  local_c0 = IVar16;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __s10Foundation3URLV6stringACSgSSh_tcfC(uVar12,IVar5,pcVar10);
  _swift_bridgeObjectRelease(pcVar10);
  pcVar18 = *(code **)(lVar14 + 0x30);
  uVar13 = uVar12;
  (*pcVar18)(uVar12,1,lVar4);
  if ((int)uVar13 == 1) {
    FUN_10036e94c(uVar12);
    return unaff_x20;
  }
  pcVar17 = *(code **)(lVar14 + 0x20);
  lVar6 = lVar15;
  (*pcVar17)(lVar15,uVar12,lVar4);
  __s10Foundation3URLV6schemeSSSgvg();
  if (uVar12 != 0) {
    lVar7 = lVar6;
    uVar13 = uVar12;
    __s10Foundation3URLV4hostSSSgvg();
    local_d0 = uVar13;
    if (uVar13 != 0) {
      local_80 = 0;
      local_78 = 0xe000000000000000;
      local_e0 = pcVar17;
      local_d8 = lVar7;
      __ss11_StringGutsV4growyySiF(0x10);
      _swift_bridgeObjectRelease(local_78);
      local_80 = 0x67616d693d706f66;
      local_78 = 0xee002f7765695665;
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      local_90 = param_2;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar3);
      if (0 < param_3) {
        local_90 = 0x2f772f;
        uStack_88 = 0xe300000000000000;
        puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        local_a0 = param_3;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar3);
        uVar13 = uStack_88;
        __sSS6appendyySSF(local_90,uStack_88);
        _swift_bridgeObjectRelease(uVar13);
      }
      if (0 < local_b8) {
        local_90 = 0x2f682f;
        uStack_88 = 0xe300000000000000;
        local_a0 = local_b8;
        puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar3);
        uVar13 = uStack_88;
        __sSS6appendyySSF(local_90,uStack_88);
        _swift_bridgeObjectRelease(uVar13);
      }
      if (0xffffffffffffff9b < local_b0 - 0x65U) {
        local_90 = 0x2f712f;
        uStack_88 = 0xe300000000000000;
        local_a0 = local_b0;
        puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar3);
        uVar13 = uStack_88;
        __sSS6appendyySSF(local_90,uStack_88);
        _swift_bridgeObjectRelease(uVar13);
      }
      local_90 = lVar6;
      uStack_88 = uVar12;
      _swift_bridgeObjectRetain(uVar12);
      __sSS6appendyySSF(0x2f2f3a,0xe300000000000000);
      uVar8 = local_d0;
      __sSS6appendyySSF(local_d8);
      __s10Foundation3URLV4pathSSvg();
      uVar11 = uVar8;
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease();
      uVar13 = uStack_88;
      lVar6 = local_90;
      __s10Foundation3URLV5querySSSgvg();
      if (uVar11 == 0) {
LAB_100374990:
        local_90 = lVar6;
        uStack_88 = uVar13;
        _swift_bridgeObjectRetain(uVar13);
        uVar9 = 0x3f;
      }
      else {
        uVar1 = uVar8 & 0xffffffffffff;
        if ((uVar11 & 0x2000000000000000) != 0) {
          uVar1 = uVar11 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          _swift_bridgeObjectRelease(uVar11);
          goto LAB_100374990;
        }
        local_90 = lVar6;
        uStack_88 = uVar13;
        _swift_bridgeObjectRetain(uVar13);
        __sSS6appendyySSF(0x3f,0xe100000000000000);
        __sSS6appendyySSF(uVar8,uVar11);
        _swift_bridgeObjectRelease(uVar11);
        uVar9 = 0x26;
      }
      __sSS6appendyySSF(uVar9,0xe100000000000000);
      uVar9 = local_78;
      __sSS6appendyySSF(local_80,local_78);
      fVar19 = (float)(int)(param_1 * 100.0);
      if (100.0 <= fVar19) {
        fVar19 = 100.0;
      }
      else if (0x7f7fffff < (uint)ABS(fVar19)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100374b30);
        (*pcVar18)();
      }
      if (fVar19 <= -9.223373e+18) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100374b34);
        (*pcVar18)();
      }
      if (9.223372e+18 <= fVar19) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100374b38);
        (*pcVar18)();
      }
      local_a8 = (long)fVar19;
      local_a0 = 0x702f632f;
      uStack_98 = 0xe400000000000000;
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar3);
      uVar2 = uStack_98;
      __sSS6appendyySSF(local_a0,uStack_98);
      _swift_bridgeObjectRelease(uVar2);
      uVar8 = uStack_88;
      lVar6 = local_c8;
      __s10Foundation3URLV6stringACSgSSh_tcfC(local_c8,local_90,uStack_88);
      lVar7 = lVar6;
      (*pcVar18)(lVar6,1,lVar4);
      if ((int)lVar7 == 1) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100374b3c);
        (*pcVar18)();
      }
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(uVar13);
      _swift_bridgeObjectRelease(local_d0);
      _swift_bridgeObjectRelease(uVar12);
      _swift_bridgeObjectRelease(uVar9);
      pcVar18 = local_e0;
      goto LAB_100374ad8;
    }
    _swift_bridgeObjectRelease(uVar12);
  }
  pcVar18 = *(code **)(lVar14 + 0x10);
  lVar6 = lVar15;
LAB_100374ad8:
  IVar5 = local_c0;
  IVar16 = local_c0;
  (*pcVar18)(local_c0,lVar6,lVar4);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  pcVar18 = *(code **)(lVar14 + 8);
  (*pcVar18)(IVar5,lVar4);
  (*pcVar18)(lVar15,lVar4);
  return IVar16;
}

