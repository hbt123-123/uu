// rea decompile_all
// name: FUN_1002223d0
// address: 0x1002223d0
// body: available
// range: 0x1002223d0-0x10022297f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1002223d0(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_240 [8];
  undefined8 *local_238;
  long local_230;
  long lStack_228;
  long local_220;
  long lStack_218;
  undefined1 *local_210;
  undefined1 auStack_208 [424];
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  local_220 = *(long *)(lVar2 + -8);
  lStack_218 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_220 + 0x40));
  puVar16 = auStack_240 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation8TimeZoneVMa();
  local_230 = *(long *)(lVar2 + -8);
  lStack_228 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_230 + 0x40));
  lVar17 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar19 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation6LocaleVMa();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar18 + 0x40));
  lVar13 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a7e440;
  FUN_100004bb4(&DAT_100a7e440,&DAT_1008134a8);
  puVar7 = auStack_208;
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 0x18;
  *(undefined8 *)(puVar3 + 0x10) = 0xc;
  local_238 = (undefined8 *)(puVar3 + 0x20);
  *local_238 = 0x656d6954746f6f62;
  *(undefined8 *)(puVar3 + 0x28) = 0xed00006365536e49;
  puVar4 = puVar3;
  FUN_10022166c();
  *(undefined **)(puVar3 + 0x30) = puVar4;
  *(undefined1 **)(puVar3 + 0x38) = puVar7;
  *(undefined8 *)(puVar3 + 0x40) = 0x437972746e756f63;
  *(undefined8 *)(puVar3 + 0x48) = 0xeb0000000065646f;
  __s10Foundation6LocaleV7currentACvgZ(lVar13);
  __s10Foundation6LocaleV10regionCodeSSSgvg();
  (**(code **)(lVar18 + 8))(lVar13,lVar2);
  puVar6 = (undefined *)0x0;
  if (puVar7 != (undefined1 *)0x0) {
    puVar6 = puVar4;
  }
  uVar14 = 0xe000000000000000;
  puVar1 = (undefined1 *)0xe000000000000000;
  if (puVar7 != (undefined1 *)0x0) {
    puVar1 = puVar7;
  }
  *(undefined **)(puVar3 + 0x50) = puVar6;
  *(undefined1 **)(puVar3 + 0x58) = puVar1;
  *(undefined8 *)(puVar3 + 0x60) = 0x65676175676e616c;
  *(undefined8 *)(puVar3 + 0x68) = 0xe800000000000000;
  __s10Foundation6LocaleV18preferredLanguagesSaySSGvgZ();
  if (*(long *)(lVar13 + 0x10) == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(undefined8 *)(lVar13 + 0x20);
    uVar14 = *(undefined8 *)(lVar13 + 0x28);
    _swift_bridgeObjectRetain(uVar14);
  }
  _swift_bridgeObjectRelease();
  *(undefined8 *)(puVar3 + 0x70) = uVar20;
  *(undefined8 *)(puVar3 + 0x78) = uVar14;
  *(undefined8 *)(puVar3 + 0x80) = 0x614e656369766564;
  *(undefined8 *)(puVar3 + 0x88) = 0xea0000000000656d;
  IVar5 = NSHost::currentHost((ID)&_OBJC_CLASS___NSHost,"currentHost");
  pcVar8 = "localizedName";
  IVar5 = NSHost::localizedName(IVar5,"localizedName");
  if (IVar5 == 0) {
    pcVar8 = (char *)0xeb0000000063614d;
    IVar5 = 0x206e776f6e6b6e55;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  pcVar9 = pcVar8;
  FUN_100221ca0();
  pcVar10 = pcVar9;
  _swift_bridgeObjectRelease();
  *(ID *)(puVar3 + 0x90) = IVar5;
  *(char **)(puVar3 + 0x98) = pcVar9;
  *(undefined8 *)(puVar3 + 0xa0) = 0x65566d6574737973;
  *(undefined8 *)(puVar3 + 0xa8) = 0xed00006e6f697372;
  FUN_100221e60();
  *(char **)(puVar3 + 0xb0) = pcVar8;
  *(char **)(puVar3 + 0xb8) = pcVar10;
  *(undefined8 *)(puVar3 + 0xc0) = 0x656e696863616d;
  *(undefined8 *)(puVar3 + 200) = 0xe700000000000000;
  FUN_100221f70();
  *(char **)(puVar3 + 0xd0) = pcVar8;
  *(char **)(puVar3 + 0xd8) = pcVar10;
  *(undefined8 *)(puVar3 + 0xe0) = 0x4972656972726163;
  *(undefined8 *)(puVar3 + 0xe8) = 0xeb000000006f666e;
  *(undefined8 *)(puVar3 + 0xf0) = 0x6e776f6e6b6e75;
  *(undefined8 *)(puVar3 + 0xf8) = 0xe700000000000000;
  *(undefined8 *)(puVar3 + 0x100) = 0x79726f6d656d;
  *(undefined8 *)(puVar3 + 0x108) = 0xe600000000000000;
  IVar5 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  local_210 = (undefined1 *)NSProcessInfo::physicalMemory(IVar5,"physicalMemory");
  puVar6 = PTR___ss6UInt64VN_100995e10;
  puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  *(undefined **)(puVar3 + 0x110) = puVar6;
  *(undefined **)(puVar3 + 0x118) = puVar4;
  *(undefined8 *)(puVar3 + 0x120) = 0x6b736964;
  *(undefined8 *)(puVar3 + 0x128) = 0xe400000000000000;
  FUN_1002220a8();
  *(undefined **)(puVar3 + 0x130) = puVar6;
  *(undefined **)(puVar3 + 0x138) = puVar4;
  *(undefined8 *)(puVar3 + 0x140) = 0x54656c6946737973;
  *(undefined8 *)(puVar3 + 0x148) = 0xeb00000000656d69;
  uVar11 = 0x80000001008a5f00;
  uVar14 = 0xd00000000000005c;
  __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
            (0xd00000000000005c,0x80000001008a5f00,0);
  if (uVar11 >> 0x3c < 0xf) {
    FUN_100008184(uVar14,uVar11);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar19);
    uVar20 = uVar14;
    uVar12 = uVar11;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(uVar14,uVar11,lVar19);
    if (uVar12 == 0) {
      uVar20 = 0;
      uVar15 = 0xe000000000000000;
    }
    else {
      uVar15 = uVar12;
      FUN_100220638();
      _swift_bridgeObjectRelease(uVar12);
    }
    FUN_100006cc8(uVar14,uVar11);
  }
  else {
    uVar20 = 0;
    uVar15 = 0xe000000000000000;
  }
  FUN_100006cc8();
  *(undefined8 *)(puVar3 + 0x150) = uVar20;
  *(ulong *)(puVar3 + 0x158) = uVar15;
  *(undefined8 *)(puVar3 + 0x160) = 0x6c65646f6d;
  *(undefined8 *)(puVar3 + 0x168) = 0xe500000000000000;
  FUN_1002222e0();
  *(undefined8 *)(puVar3 + 0x170) = uVar14;
  *(ulong *)(puVar3 + 0x178) = uVar11;
  *(undefined8 *)(puVar3 + 0x180) = 0x656e6f5a656d6974;
  *(undefined8 *)(puVar3 + 0x188) = 0xe800000000000000;
  IVar5 = NSTimeZone::systemTimeZone((ID)&_OBJC_CLASS___NSTimeZone,"systemTimeZone");
  __s10Foundation8TimeZoneV36_unconditionallyBridgeFromObjectiveCyACSo06NSTimeC0CSgFZ(lVar17,IVar5);
  __s10Foundation4DateVACycfC(puVar16,0);
  puVar7 = puVar16;
  __s10Foundation8TimeZoneV14secondsFromGMT3forSiAA4DateV_tF();
  (**(code **)(local_220 + 8))(puVar16,lStack_218);
  (**(code **)(local_230 + 8))(lVar17,lStack_228);
  puVar6 = PTR___sSiN_100995968;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_210 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  *(undefined **)(puVar3 + 400) = puVar6;
  *(undefined **)(puVar3 + 0x198) = puVar4;
  puVar6 = puVar3;
  FUN_100234524(puVar3);
  _swift_setDeallocating(puVar3);
  puVar3 = &DAT_100a7e448;
  FUN_100004bb4(&DAT_100a7e448,&DAT_100813ee0);
  _swift_arrayDestroy(local_238,0xc,puVar3);
  return puVar6;
}

