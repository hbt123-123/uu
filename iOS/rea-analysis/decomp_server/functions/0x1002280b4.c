// rea decompile_all
// name: FUN_1002280b4
// address: 0x1002280b4
// body: available
// range: 0x1002280b4-0x100228b8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100228b38) */
/* WARNING: Removing unreachable block (ram,0x000100228858) */

void FUN_1002280b4(double param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  char *pcVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  long unaff_x21;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80 [4];
  
  puVar1 = &DAT_100a7ecf8;
  FUN_100004bb4(&DAT_100a7ecf8,&DAT_100813800);
  local_c0 = *(long *)(puVar1 + -8);
  local_b8 = puVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&local_c0 - extraout_x8;
  pcVar2 = (code *)0x0;
  __s10Foundation6LocaleVMa();
  local_b0 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar18 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar14 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x30) = 0x707061;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe300000000000000;
  __s10Foundation4DateVACycfC(lVar14);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar17 + 8))();
  dVar19 = (double)(long)(param_1 * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002288ac);
    (*pcVar2)();
  }
  if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002288b0);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002288b4);
    (*pcVar2)();
  }
  *(long *)(unaff_x20 + 0x40) = (long)dVar19;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xe000000000000000;
  __s10Foundation4UUIDVACycfC(lVar16);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar15 + 8))();
  *(long *)(unaff_x20 + 0x58) = lVar14;
  *(long *)(unaff_x20 + 0x60) = lVar4;
  *(undefined8 *)(unaff_x20 + 0x68) = 0x534f63616d;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xe500000000000000;
  FUN_100221e60();
  *(long *)(unaff_x20 + 0x78) = lVar16;
  *(long *)(unaff_x20 + 0x80) = lVar3;
  IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar5 = NSBundle::infoDictionary(IVar5,"infoDictionary");
  puVar1 = PTR___sypN_100995e88;
  if (IVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100228b5c);
    (*pcVar2)();
  }
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar5,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  if (*(long *)(IVar5 + 0x10) == 0) {
LAB_100228388:
    local_80[1] = 0;
    local_80[0] = 0;
    local_80[3] = 0;
    local_80[2] = 0;
  }
  else {
    _swift_bridgeObjectRetain(IVar5);
    lVar3 = 0x656c646e75424643;
    uVar8 = 0;
    FUN_1001a2c70(0x656c646e75424643);
    if ((uVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar5);
      goto LAB_100228388;
    }
    FUN_10003e8bc(*(long *)(IVar5 + 0x38) + lVar3 * 0x20,local_80);
    _swift_bridgeObjectRelease(IVar5);
  }
  _swift_bridgeObjectRelease(IVar5);
  if (local_80[3] == 0) {
    FUN_100224220(local_80);
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    puVar6 = &local_90;
    _swift_dynamicCast(puVar6,local_80,puVar1 + 8,PTR___sSSN_1009957f8,6);
    uVar12 = local_90;
    uVar13 = uStack_88;
    if ((int)puVar6 == 0) {
      uVar12 = 0;
      uVar13 = 0;
    }
  }
  *(undefined8 *)(unaff_x20 + 0x88) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar13;
  IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar5 = NSBundle::infoDictionary(IVar5,"infoDictionary");
  if (IVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100228b60);
    (*pcVar2)();
  }
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar5,PTR___sSSN_1009957f8,puVar1 + 8,PTR___sSSSHsWP_100995808);
  if (*(long *)(IVar5 + 0x10) == 0) {
LAB_100228498:
    local_80[1] = 0;
    local_80[0] = 0;
    local_80[3] = 0;
    local_80[2] = 0;
  }
  else {
    _swift_bridgeObjectRetain(IVar5);
    uVar8 = 0;
    lVar3 = -0x2fffffffffffffe6;
    FUN_1001a2c70(0xd00000000000001a);
    if ((uVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar5);
      goto LAB_100228498;
    }
    FUN_10003e8bc(*(long *)(IVar5 + 0x38) + lVar3 * 0x20,local_80);
    _swift_bridgeObjectRelease(IVar5);
  }
  _swift_bridgeObjectRelease(IVar5);
  if (local_80[3] == 0) {
    FUN_100224220(local_80);
  }
  else {
    puVar6 = &local_90;
    _swift_dynamicCast(puVar6,local_80,puVar1 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)puVar6 & 1) != 0) goto LAB_1002284e8;
  }
  local_90 = 0;
  uStack_88 = 0xe000000000000000;
LAB_1002284e8:
  *(undefined8 *)(unaff_x20 + 0x98) = local_90;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0xe000000000000000;
  IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  pcVar9 = "bundleIdentifier";
  IVar5 = NSBundle::bundleIdentifier(IVar5,"bundleIdentifier");
  if (IVar5 == 0) {
    IVar5 = 0;
    pcVar9 = (char *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar4 = local_b0;
  *(ID *)(unaff_x20 + 0xb8) = IVar5;
  *(char **)(unaff_x20 + 0xc0) = pcVar9;
  lVar3 = DAT_100b36328;
  uVar12 = 0x726f74735f707061;
  if (DAT_100b36328 != 0) {
    uVar12 = DAT_100b36320;
  }
  lVar14 = -0x16ffffffffffff9b;
  if (DAT_100b36328 != 0) {
    lVar14 = DAT_100b36328;
  }
  *(undefined8 *)(unaff_x20 + 200) = uVar12;
  *(long *)(unaff_x20 + 0xd0) = lVar14;
  _swift_bridgeObjectRetain(lVar3);
  pcVar9 = "autoupdatingCurrentLocale";
  IVar5 = NSLocale::autoupdatingCurrentLocale
                    ((ID)&_OBJC_CLASS___NSLocale,"autoupdatingCurrentLocale");
  __s10Foundation6LocaleV36_unconditionallyBridgeFromObjectiveCyACSo8NSLocaleCSgFZ(lVar18,IVar5);
  uVar12 = 0;
  __s10Foundation6LocaleV10identifierSSvg();
  (**(code **)(lVar4 + 8))(lVar18);
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar12;
  *(char **)(unaff_x20 + 0xe0) = pcVar9;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  if (DAT_100a7ddd0 != -1) {
    pcVar2 = FUN_100220618;
    _swift_once(&DAT_100a7ddd0);
  }
  uVar12 = DAT_100b362d8;
  *(undefined8 *)(unaff_x20 + 0xf8) = DAT_100b362d0;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar12;
  _swift_bridgeObjectRetain();
  FUN_100226a2c();
  *(undefined8 *)(unaff_x20 + 0x108) = uVar12;
  *(code **)(unaff_x20 + 0x110) = pcVar2;
  FUN_100226bb4();
  *(undefined8 *)(unaff_x20 + 0x118) = uVar12;
  *(code **)(unaff_x20 + 0x120) = pcVar2;
  FUN_100226d20();
  *(undefined8 *)(unaff_x20 + 0x128) = uVar12;
  *(code **)(unaff_x20 + 0x130) = pcVar2;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined1 *)(unaff_x20 + 0x140) = 1;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  uVar12 = *(undefined8 *)(param_2 + 0x18);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = param_2;
  FUN_10003f030(param_2,uVar12);
  FUN_100228c00();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar11,&DAT_1009a60e8,&DAT_1009a60e8,lVar3,uVar12,uVar13);
  puVar1 = local_b8;
  if (unaff_x21 == 0) {
    local_80[0] = local_80[0] & 0xffffffffffffff00;
    puVar7 = local_80;
    puVar10 = local_b8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
    *(ulong **)(unaff_x20 + 0x10) = puVar7;
    *(undefined **)(unaff_x20 + 0x18) = puVar10;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 1;
    puVar7 = local_80;
    puVar10 = puVar1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
    *(ulong **)(unaff_x20 + 0x20) = puVar7;
    *(undefined **)(unaff_x20 + 0x28) = puVar10;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 2;
    puVar7 = local_80;
    puVar10 = puVar1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
    *(ulong **)(unaff_x20 + 0x30) = puVar7;
    *(undefined **)(unaff_x20 + 0x38) = puVar10;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 3;
    puVar7 = local_80;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int64VAFm_xtKF(puVar7,puVar1);
    *(ulong **)(unaff_x20 + 0x40) = puVar7;
    local_80[0]._0_1_ = 4;
    puVar7 = local_80;
    puVar10 = puVar1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
    *(ulong **)(unaff_x20 + 0x48) = puVar7;
    *(undefined **)(unaff_x20 + 0x50) = puVar10;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 5;
    puVar7 = local_80;
    puVar10 = puVar1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
    *(ulong **)(unaff_x20 + 0x58) = puVar7;
    *(undefined **)(unaff_x20 + 0x60) = puVar10;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 6;
    puVar7 = local_80;
    puVar10 = puVar1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x70);
    *(ulong **)(unaff_x20 + 0x68) = puVar7;
    *(undefined **)(unaff_x20 + 0x70) = puVar10;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 7;
    puVar7 = local_80;
    puVar10 = puVar1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x80);
    *(ulong **)(unaff_x20 + 0x78) = puVar7;
    *(undefined **)(unaff_x20 + 0x80) = puVar10;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 8;
    puVar7 = local_80;
    puVar10 = puVar1;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x90);
    *(ulong **)(unaff_x20 + 0x88) = puVar7;
    *(undefined **)(unaff_x20 + 0x90) = puVar10;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 9;
    puVar7 = local_80;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0xa0);
    *(ulong **)(unaff_x20 + 0x98) = puVar7;
    *(undefined **)(unaff_x20 + 0xa0) = puVar1;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 10;
    puVar7 = local_80;
    puVar1 = local_b8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0xb0);
    *(ulong **)(unaff_x20 + 0xa8) = puVar7;
    *(undefined **)(unaff_x20 + 0xb0) = puVar1;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 0xb;
    puVar7 = local_80;
    puVar1 = local_b8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0xc0);
    *(ulong **)(unaff_x20 + 0xb8) = puVar7;
    *(undefined **)(unaff_x20 + 0xc0) = puVar1;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 0xc;
    puVar7 = local_80;
    puVar1 = local_b8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0xd0);
    *(ulong **)(unaff_x20 + 200) = puVar7;
    *(undefined **)(unaff_x20 + 0xd0) = puVar1;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 0xd;
    puVar7 = local_80;
    puVar1 = local_b8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0xe0);
    *(ulong **)(unaff_x20 + 0xd8) = puVar7;
    *(undefined **)(unaff_x20 + 0xe0) = puVar1;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 0xe;
    puVar7 = local_80;
    puVar1 = local_b8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0xf0);
    *(ulong **)(unaff_x20 + 0xe8) = puVar7;
    *(undefined **)(unaff_x20 + 0xf0) = puVar1;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 0xf;
    puVar7 = local_80;
    puVar1 = local_b8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x100);
    *(ulong **)(unaff_x20 + 0xf8) = puVar7;
    *(undefined **)(unaff_x20 + 0x100) = puVar1;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 0x10;
    puVar7 = local_80;
    puVar1 = local_b8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x110);
    *(ulong **)(unaff_x20 + 0x108) = puVar7;
    *(undefined **)(unaff_x20 + 0x110) = puVar1;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 0x11;
    puVar7 = local_80;
    puVar1 = local_b8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x120);
    *(ulong **)(unaff_x20 + 0x118) = puVar7;
    *(undefined **)(unaff_x20 + 0x120) = puVar1;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 0x12;
    puVar7 = local_80;
    puVar1 = local_b8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x130);
    *(ulong **)(unaff_x20 + 0x128) = puVar7;
    *(undefined **)(unaff_x20 + 0x130) = puVar1;
    _swift_bridgeObjectRelease(uVar12);
    local_80[0]._0_1_ = 0x13;
    puVar7 = local_80;
    puVar1 = local_b8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeys5Int64VSgAFm_xtKF();
    *(ulong **)(unaff_x20 + 0x138) = puVar7;
    *(byte *)(unaff_x20 + 0x140) = (byte)puVar1 & 1;
    local_80[0] = CONCAT71(local_80[0]._1_7_,0x14);
    puVar7 = local_80;
    puVar1 = local_b8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    (**(code **)(local_c0 + 8))(lVar11,local_b8);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x150);
    *(ulong **)(unaff_x20 + 0x148) = puVar7;
    *(undefined **)(unaff_x20 + 0x150) = puVar1;
    _swift_bridgeObjectRelease(uVar12);
  }
  else {
    _swift_release();
  }
  FUN_10003f094(param_2);
  return;
}

