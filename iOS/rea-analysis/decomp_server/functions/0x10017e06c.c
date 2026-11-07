// rea decompile_all
// name: FUN_10017e06c
// address: 0x10017e06c
// body: available
// range: 0x10017e06c-0x10017e1ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10017e06c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  ID self;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_90 [8];
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  local_80 = param_1;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar4 + -8);
  local_88 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  self = *(ID *)(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain_n(uVar2,2);
  lVar4 = 1;
  uVar10 = uVar2;
  uVar11 = uVar1;
  while( true ) {
    uVar7 = uVar10;
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
              (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar11,uVar10,1);
    uVar5 = uVar10;
    _swift_bridgeObjectRelease(uVar10);
    __s10Foundation3URLV4pathSSvg();
    (**(code **)(lVar9 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),local_88);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar7);
    _swift_bridgeObjectRelease(uVar7);
    IVar6 = _objc_msgSend(self,"fileExistsAtPath:",uVar5);
    if ((int)IVar6 == 0) {
      auVar12._8_8_ = uVar10;
      auVar12._0_8_ = uVar11;
      return auVar12;
    }
    _swift_bridgeObjectRelease(uVar10);
    local_78 = lVar4;
    local_70 = uVar1;
    uStack_68 = uVar2;
    _swift_bridgeObjectRetain(uVar2);
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar8);
    uVar10 = uStack_68;
    uVar11 = local_70;
    if (SCARRY8(lVar4,1)) break;
    _swift_bridgeObjectRetain(uStack_68);
    lVar4 = lVar4 + 1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e1f0);
  (*pcVar3)();
}

