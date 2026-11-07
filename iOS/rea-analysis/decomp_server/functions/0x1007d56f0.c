// rea decompile_all
// name: FUN_1007d56f0
// address: 0x1007d56f0
// body: available
// range: 0x1007d56f0-0x1007d59c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1007d56f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_68 [24];
  
  puVar3 = &DAT_100abd468;
  FUN_1007b4550();
  lVar7 = *(long *)(*(long *)(puVar3 + -8) + 0x40);
  lVar6 = unaff_x20 + _TtC6Sentry12UrlSanitized::components;
  lVar4 = 0;
  __s10Foundation13URLComponentsVMa();
  lVar8 = *(long *)(lVar4 + -8);
  (**(code **)(lVar8 + 0x38))(lVar6,1,1,lVar4);
  __s10Foundation13URLComponentsV3url23resolvingAgainstBaseURLACSgAA0G0Vh_SbtcfC
            (auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_1,0);
  _swift_beginAccess(lVar6,auStack_68,0x21,0);
  FUN_1007d5e00(auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar6);
  _swift_endAccess(auStack_68);
  _swift_beginAccess(lVar6,auStack_68,0x20,0);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar8 = 1;
  lVar7 = lVar6;
  (*pcVar9)(lVar6,1,lVar4);
  if ((int)lVar7 == 0) {
    __s10Foundation13URLComponentsV4userSSSgvg();
    _swift_endAccess(auStack_68);
    if (lVar8 == 0) goto LAB_1007d57f0;
    _swift_bridgeObjectRelease(lVar8);
    _swift_beginAccess(lVar6,auStack_68,0x21,0);
    lVar7 = lVar6;
    (*pcVar9)(lVar6,1,lVar4);
    if ((int)lVar7 == 0) {
      if (DAT_100abba60 != -1) {
        _swift_once(&DAT_100abba60,FUN_1007d5330);
      }
      uVar2 = DAT_100b3a9a8;
      uVar1 = DAT_100b3a9a0;
      _swift_bridgeObjectRetain(DAT_100b3a9a8);
      __s10Foundation13URLComponentsV4userSSSgvs(uVar1,uVar2);
    }
  }
  _swift_endAccess(auStack_68);
LAB_1007d57f0:
  _swift_beginAccess(lVar6,auStack_68,0x20,0);
  lVar8 = 1;
  lVar7 = lVar6;
  (*pcVar9)(lVar6,1,lVar4);
  if ((int)lVar7 == 0) {
    __s10Foundation13URLComponentsV8passwordSSSgvg();
    _swift_endAccess(auStack_68);
    if (lVar8 != 0) {
      _swift_bridgeObjectRelease(lVar8);
      _swift_beginAccess(lVar6,auStack_68,0x21,0);
      (*pcVar9)(lVar6,1,lVar4);
      if ((int)lVar6 == 0) {
        if (DAT_100abba60 != -1) {
          _swift_once(&DAT_100abba60,FUN_1007d5330);
        }
        uVar2 = DAT_100b3a9a8;
        uVar1 = DAT_100b3a9a0;
        _swift_bridgeObjectRetain(DAT_100b3a9a8);
        __s10Foundation13URLComponentsV8passwordSSSgvs(uVar1,uVar2);
      }
      _swift_endAccess(auStack_68);
    }
  }
  else {
    _swift_endAccess(auStack_68);
  }
  FUN_1007d5cbc();
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"init");
  lVar6 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 8))(param_1,lVar6);
  return IVar5;
}

