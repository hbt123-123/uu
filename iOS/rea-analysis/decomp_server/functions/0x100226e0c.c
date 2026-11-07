// rea decompile_all
// name: FUN_100226e0c
// address: 0x100226e0c
// body: available
// range: 0x100226e0c-0x1002276d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100226e0c(double param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 *******pppppppuVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  code *pcVar15;
  undefined8 *******pppppppuVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  code *local_e0;
  long local_d8;
  code *local_d0;
  code *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 ******local_b0;
  undefined8 ******ppppppuStack_a8;
  double dStack_a0;
  long lStack_98;
  undefined8 ******local_90;
  undefined8 ******ppppppuStack_88;
  double dStack_80;
  undefined *local_78;
  
  pcVar2 = (code *)0x0;
  __s10Foundation6LocaleVMa();
  local_c0 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar21 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar19 = lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar20 + 0x40));
  lVar18 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x30) = 0x707061;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe300000000000000;
  __s10Foundation4DateVACycfC(lVar18);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  pcVar15 = *(code **)(lVar20 + 8);
  lVar20 = lVar18;
  local_d8 = lVar4;
  (*pcVar15)();
  dVar22 = (double)(long)(param_1 * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar22)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002276a0);
    (*pcVar2)();
  }
  if (dVar22 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002276a4);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar22) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002276a8);
    (*pcVar2)();
  }
  *(long *)(unaff_x20 + 0x40) = (long)dVar22;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xe000000000000000;
  local_e0 = pcVar15;
  local_c8 = pcVar2;
  __s10Foundation4UUIDVACycfC(lVar19);
  __s10Foundation4UUIDV10uuidStringSSvg();
  local_d0 = *(code **)(lVar17 + 8);
  lVar17 = lVar19;
  lVar11 = lVar3;
  (*local_d0)();
  *(long *)(unaff_x20 + 0x58) = lVar20;
  *(long *)(unaff_x20 + 0x60) = lVar4;
  *(undefined8 *)(unaff_x20 + 0x68) = 0x534f63616d;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xe500000000000000;
  FUN_100221e60();
  *(long *)(unaff_x20 + 0x78) = lVar17;
  *(long *)(unaff_x20 + 0x80) = lVar11;
  IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar5 = NSBundle::infoDictionary(IVar5,"infoDictionary");
  if (IVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002276d0);
    (*pcVar2)();
  }
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar5,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  if (*(long *)(IVar5 + 0x10) == 0) {
LAB_1002270ac:
    ppppppuStack_88 = (undefined8 *******)0x0;
    local_90 = (undefined8 *******)0x0;
    local_78 = (undefined *)0x0;
    dStack_80 = 0.0;
  }
  else {
    _swift_bridgeObjectRetain(IVar5);
    lVar20 = 0x656c646e75424643;
    uVar12 = 0;
    FUN_1001a2c70(0x656c646e75424643);
    if ((uVar12 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar5);
      goto LAB_1002270ac;
    }
    FUN_10003e8bc(*(long *)(IVar5 + 0x38) + lVar20 * 0x20,&local_90);
    _swift_bridgeObjectRelease(IVar5);
  }
  _swift_bridgeObjectRelease(IVar5);
  if (local_78 == (undefined *)0x0) {
    FUN_100224220(&local_90);
    pppppppuVar7 = (undefined8 *******)0x0;
    pppppppuVar14 = (undefined8 *******)0x0;
  }
  else {
    pppppppuVar6 = &local_b0;
    _swift_dynamicCast(pppppppuVar6,&local_90,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    pppppppuVar7 = (undefined8 *******)local_b0;
    pppppppuVar14 = (undefined8 *******)ppppppuStack_a8;
    if ((int)pppppppuVar6 == 0) {
      pppppppuVar7 = (undefined8 *******)0x0;
      pppppppuVar14 = (undefined8 *******)0x0;
    }
  }
  *(undefined8 ********)(unaff_x20 + 0x88) = pppppppuVar7;
  *(undefined8 ********)(unaff_x20 + 0x90) = pppppppuVar14;
  IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar5 = NSBundle::infoDictionary(IVar5,"infoDictionary");
  if (IVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002276d4);
    (*pcVar2)();
  }
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar5,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  if (*(long *)(IVar5 + 0x10) == 0) {
LAB_1002271d0:
    ppppppuStack_88 = (undefined8 *******)0x0;
    local_90 = (undefined8 *******)0x0;
    local_78 = (undefined *)0x0;
    dStack_80 = 0.0;
  }
  else {
    _swift_bridgeObjectRetain(IVar5);
    lVar20 = -0x2fffffffffffffe6;
    uVar12 = 0;
    FUN_1001a2c70(0xd00000000000001a);
    if ((uVar12 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar5);
      goto LAB_1002271d0;
    }
    FUN_10003e8bc(*(long *)(IVar5 + 0x38) + lVar20 * 0x20,&local_90);
    _swift_bridgeObjectRelease(IVar5);
  }
  _swift_bridgeObjectRelease(IVar5);
  if (local_78 == (undefined *)0x0) {
    FUN_100224220(&local_90);
LAB_100227220:
    pppppppuVar7 = (undefined8 *******)0x0;
    pppppppuVar14 = (undefined8 *******)0xe000000000000000;
  }
  else {
    pppppppuVar6 = &local_b0;
    _swift_dynamicCast(pppppppuVar6,&local_90,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    pppppppuVar7 = (undefined8 *******)local_b0;
    pppppppuVar14 = (undefined8 *******)ppppppuStack_a8;
    if (((ulong)pppppppuVar6 & 1) == 0) goto LAB_100227220;
  }
  *(undefined8 ********)(unaff_x20 + 0x98) = pppppppuVar7;
  *(undefined8 ********)(unaff_x20 + 0xa0) = pppppppuVar14;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0xe000000000000000;
  IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  pcVar13 = "bundleIdentifier";
  IVar5 = NSBundle::bundleIdentifier(IVar5,"bundleIdentifier");
  if (IVar5 == 0) {
    IVar5 = 0;
    pcVar13 = (char *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar4 = local_c0;
  *(ID *)(unaff_x20 + 0xb8) = IVar5;
  *(char **)(unaff_x20 + 0xc0) = pcVar13;
  lVar20 = DAT_100b36328;
  uVar9 = 0x726f74735f707061;
  if (DAT_100b36328 != 0) {
    uVar9 = DAT_100b36320;
  }
  lVar17 = -0x16ffffffffffff9b;
  if (DAT_100b36328 != 0) {
    lVar17 = DAT_100b36328;
  }
  *(undefined8 *)(unaff_x20 + 200) = uVar9;
  *(long *)(unaff_x20 + 0xd0) = lVar17;
  _swift_bridgeObjectRetain(lVar20);
  pcVar13 = "autoupdatingCurrentLocale";
  IVar5 = NSLocale::autoupdatingCurrentLocale
                    ((ID)&_OBJC_CLASS___NSLocale,"autoupdatingCurrentLocale");
  __s10Foundation6LocaleV36_unconditionallyBridgeFromObjectiveCyACSo8NSLocaleCSgFZ(lVar21,IVar5);
  uVar9 = 0;
  __s10Foundation6LocaleV10identifierSSvg();
  pcVar2 = local_c8;
  (**(code **)(lVar4 + 8))(lVar21);
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar9;
  *(char **)(unaff_x20 + 0xe0) = pcVar13;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  if (DAT_100a7ddd0 != -1) {
    pcVar2 = FUN_100220618;
    _swift_once(&DAT_100a7ddd0);
  }
  uVar9 = DAT_100b362d8;
  *(undefined8 *)(unaff_x20 + 0xf8) = DAT_100b362d0;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar9;
  _swift_bridgeObjectRetain();
  FUN_100226a2c();
  *(undefined8 *)(unaff_x20 + 0x108) = uVar9;
  *(code **)(unaff_x20 + 0x110) = pcVar2;
  FUN_100226bb4();
  *(undefined8 *)(unaff_x20 + 0x118) = uVar9;
  *(code **)(unaff_x20 + 0x120) = pcVar2;
  FUN_100226d20();
  *(undefined8 *)(unaff_x20 + 0x128) = uVar9;
  *(code **)(unaff_x20 + 0x130) = pcVar2;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined1 *)(unaff_x20 + 0x140) = 1;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  FUN_1002233f8(0);
  uVar9 = DAT_100a7e9a0;
  pppppppuVar7 = DAT_100a7e998;
  _swift_bridgeObjectRetain(DAT_100a7e9a0);
  FUN_100223100(&local_90,pppppppuVar7,uVar9);
  _swift_bridgeObjectRelease(uVar9);
  puVar1 = PTR___sSSN_1009957f8;
  pppppppuVar7 = &local_b0;
  pppppppuVar14 = &local_90;
  _swift_dynamicCast(pppppppuVar7,pppppppuVar14,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
  if (((ulong)pppppppuVar7 & 1) != 0) {
    uVar12 = (ulong)local_b0 & 0xffffffffffff;
    if (((ulong)ppppppuStack_a8 & 0x2000000000000000) != 0) {
      uVar12 = (ulong)ppppppuStack_a8 >> 0x38 & 0xf;
    }
    pppppppuVar6 = pppppppuVar14;
    pppppppuVar16 = (undefined8 *******)ppppppuStack_a8;
    pppppppuVar7 = (undefined8 *******)local_b0;
    if (uVar12 != 0) goto LAB_100227470;
    pppppppuVar7 = (undefined8 *******)ppppppuStack_a8;
    _swift_bridgeObjectRelease();
  }
  __s10Foundation4UUIDVACycfC(lVar19);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (*local_d0)(lVar19,lVar3);
  uVar9 = DAT_100a7e9a0;
  pppppppuVar6 = DAT_100a7e998;
  local_78 = puVar1;
  local_90 = pppppppuVar7;
  ppppppuStack_88 = pppppppuVar14;
  _swift_bridgeObjectRetain(pppppppuVar14);
  _swift_bridgeObjectRetain(uVar9);
  FUN_1002234e0(&local_90,pppppppuVar6,uVar9);
  _swift_bridgeObjectRelease(uVar9);
  FUN_10003f094(&local_90);
  pppppppuVar16 = pppppppuVar14;
LAB_100227470:
  uVar8 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 ********)(unaff_x20 + 0xa8) = pppppppuVar7;
  *(undefined8 ********)(unaff_x20 + 0xb0) = pppppppuVar16;
  _swift_bridgeObjectRelease();
  FUN_10023bde4();
  uVar9 = 0;
  if (pppppppuVar6 != (undefined8 *******)0x0) {
    uVar9 = uVar8;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0xf0);
  pppppppuVar7 = (undefined8 *******)0xe000000000000000;
  if (pppppppuVar6 != (undefined8 *******)0x0) {
    pppppppuVar7 = pppppppuVar6;
  }
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar9;
  *(undefined8 ********)(unaff_x20 + 0xf0) = pppppppuVar7;
  _swift_bridgeObjectRelease(uVar8);
  if (*(char *)(unaff_x20 + 0x140) == '\x01') {
    IVar5 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    uVar9 = 0xd000000000000019;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x80000001008a6680);
    IVar5 = NSUserDefaults::valueForKey_(IVar5,"valueForKey:",uVar9);
    if (IVar5 == 0) {
      ppppppuStack_a8 = (undefined8 *******)0x0;
      local_b0 = (undefined8 *******)0x0;
      lStack_98 = 0;
      dStack_a0 = 0.0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_b0,IVar5);
      _swift_unknownObjectRelease(IVar5);
    }
    ppppppuStack_88 = ppppppuStack_a8;
    local_90 = local_b0;
    local_78 = (undefined *)lStack_98;
    dStack_80 = dStack_a0;
    dVar22 = dStack_a0;
    if (lStack_98 == 0) {
      FUN_100224220(&local_90);
    }
    else {
      puVar10 = &local_b8;
      _swift_dynamicCast(puVar10,&local_90,PTR___sypN_100995e88 + 8,PTR___ss5Int64VN_100995cc0,6);
      if (((ulong)puVar10 & 1) != 0) {
        *(undefined8 *)(unaff_x20 + 0x138) = local_b8;
        *(undefined1 *)(unaff_x20 + 0x140) = 0;
        return;
      }
    }
    __s10Foundation4DateVACycfC(lVar18);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (*local_e0)(lVar18,local_d8);
    dVar22 = (double)(long)(dVar22 * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar22)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002276c4);
      (*pcVar2)();
    }
    if (dVar22 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002276c8);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar22) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002276cc);
      (*pcVar2)();
    }
    lVar20 = (long)dVar22;
    *(long *)(unaff_x20 + 0x138) = lVar20;
    *(undefined1 *)(unaff_x20 + 0x140) = 0;
    IVar5 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    __ss5Int64V10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(lVar20);
    uVar9 = 0xd000000000000019;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x80000001008a6680);
    NSUserDefaults::setObject_forKey_(IVar5,"setObject:forKey:",lVar20,uVar9);
  }
  return;
}

