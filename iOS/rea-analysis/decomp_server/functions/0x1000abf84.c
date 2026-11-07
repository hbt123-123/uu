// rea decompile_all
// name: FUN_1000abf84
// address: 0x1000abf84
// body: available
// range: 0x1000abf84-0x1000ac537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1000abf84(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ID IVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long extraout_x8;
  long lVar13;
  code *pcVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long alStack_e0 [4];
  code *local_c0;
  code *local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar3 = (undefined8 *)0x0;
  __s10Foundation3URLVMa();
  lVar15 = puVar3[-1];
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar13 - extraout_x12;
  local_b0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100995498)();
  pcVar14 = (code *)(lVar13 - extraout_x12_00);
  local_c0 = pcVar14;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = (long)pcVar14 - extraout_x12_01;
  local_70 = 0;
  local_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x14);
  _swift_bridgeObjectRelease(local_68);
  local_70 = 0x6874617028707041;
  local_68 = 0xe90000000000003d;
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x3d656d616e202c,0xe700000000000000);
  uVar4 = param_1;
  uVar10 = param_2;
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar17);
  __s10Foundation3URLV17lastPathComponentSSvg();
  local_b8 = *(code **)(lVar15 + 8);
  lVar13 = lVar17;
  (*local_b8)(lVar17,puVar3);
  local_90 = 0x7070612e;
  uStack_88 = 0xe400000000000000;
  local_a0 = 0;
  uStack_98 = 0xe000000000000000;
  local_80 = (undefined1 *)uVar4;
  local_78 = (char *)uVar10;
  FUN_10009ff0c();
  puVar9 = PTR___sSSN_1009957f8;
  *(long *)(lVar17 + -0x10) = lVar13;
  *(long *)(lVar17 + -8) = lVar13;
  *(undefined **)(lVar17 + -0x20) = PTR___sSSN_1009957f8;
  *(long *)(lVar17 + -0x18) = lVar13;
  puVar5 = &local_90;
  puVar11 = &local_a0;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar5,puVar11,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
  _swift_bridgeObjectRelease(uVar10);
  __sSS6appendyySSF(puVar5,puVar11);
  _swift_bridgeObjectRelease(puVar11);
  IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar4 = param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  pcVar12 = "displayNameAtPath:";
  puVar7 = (undefined1 *)NSFileManager::displayNameAtPath_(IVar6,"displayNameAtPath:",uVar4);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  local_90 = 0x7070612e;
  uStack_88 = 0xe400000000000000;
  local_a0 = 0;
  uStack_98 = 0xe000000000000000;
  local_80 = puVar7;
  local_78 = pcVar12;
  *(long *)(lVar17 + -0x10) = lVar13;
  *(long *)(lVar17 + -8) = lVar13;
  pcVar14 = (code *)&local_90;
  puVar5 = &local_a0;
  *(undefined **)(lVar17 + -0x20) = puVar9;
  *(long *)(lVar17 + -0x18) = lVar13;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (pcVar14,puVar5,0,0,0,1,puVar9,puVar9);
  _swift_bridgeObjectRelease(pcVar12);
  uVar1 = (ulong)pcVar14 & 0xffffffffffff;
  if (((ulong)puVar5 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)puVar5 >> 0x38 & 0xf;
  }
  pcVar16 = local_b8;
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(puVar5);
    pcVar14 = local_c0;
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(local_c0,param_1,param_2);
    puVar8 = &_OBJC_CLASS___NSBundle;
    _objc_allocWithZone();
    puVar9 = puVar8;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    IVar6 = _objc_msgSend((ID)puVar8,"initWithURL:",puVar9);
    pcVar16 = local_b8;
    puVar5 = puVar3;
    (*local_b8)(pcVar14);
    if ((IVar6 == 0) || (FUN_100407880(), puVar5 == (undefined8 *)0x0)) goto LAB_1000ac2cc;
  }
  local_80 = (undefined1 *)0x0;
  local_78 = (char *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x10);
  _swift_bridgeObjectRelease(local_78);
  local_80 = (undefined1 *)0x616c70736964202c;
  local_78 = (char *)0xee003d656d614e79;
  __sSS6appendyySSF(pcVar14,puVar5);
  _swift_bridgeObjectRelease(puVar5);
  pcVar12 = local_78;
  __sSS6appendyySSF(local_80,local_78);
  _swift_bridgeObjectRelease(pcVar12);
LAB_1000ac2cc:
  lVar13 = local_b0;
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(local_b0,param_1,param_2);
  puVar8 = &_OBJC_CLASS___NSBundle;
  _objc_allocWithZone();
  puVar9 = puVar8;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  IVar6 = _objc_msgSend((ID)puVar8,"initWithURL:",puVar9);
  puVar5 = puVar3;
  (*pcVar16)(lVar13);
  if ((IVar6 != 0) && (FUN_1004078d8(), puVar5 != (undefined8 *)0x0)) {
    local_80 = (undefined1 *)0x0;
    local_78 = (char *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    _swift_bridgeObjectRelease(local_78);
    local_80 = &DAT_d000000000000013;
    local_78 = (char *)0x80000001008813a0;
    __sSS6appendyySSF(lVar13,puVar5);
    _swift_bridgeObjectRelease(puVar5);
    pcVar12 = local_78;
    __sSS6appendyySSF(local_80,local_78);
    _swift_bridgeObjectRelease(pcVar12);
  }
  lVar13 = local_a8;
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(local_a8,param_1,param_2);
  puVar8 = &_OBJC_CLASS___NSBundle;
  _objc_allocWithZone();
  puVar9 = puVar8;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  IVar6 = _objc_msgSend((ID)puVar8,"initWithURL:",puVar9);
  (*pcVar16)(lVar13);
  if ((IVar6 != 0) && (FUN_1004078f4(), puVar3 != (undefined8 *)0x0)) {
    local_80 = (undefined1 *)0x6f6973726576202c;
    local_78 = (char *)0xea00000000003d6e;
    __sSS6appendyySSF(lVar13,puVar3);
    _swift_bridgeObjectRelease(puVar3);
    pcVar12 = local_78;
    __sSS6appendyySSF(local_80,local_78);
    _swift_bridgeObjectRelease(pcVar12);
  }
  __sSS6appendyySSF(0x29,0xe100000000000000);
  auVar2._8_8_ = local_68;
  auVar2._0_8_ = local_70;
  return auVar2;
}

