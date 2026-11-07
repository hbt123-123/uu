// rea decompile_all
// name: FUN_10041518c
// address: 0x10041518c
// body: available
// range: 0x10041518c-0x100415677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100415440 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041518c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  double dVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  long unaff_x20;
  double dVar11;
  undefined8 uVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  undefined1 auStack_280 [8];
  code *local_278;
  undefined8 local_270;
  double local_268;
  undefined8 local_260;
  undefined1 auStack_258 [24];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1cf;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_14f;
  undefined8 local_138;
  double local_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_9f;
  undefined1 *local_90;
  long lStack_88;
  
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  puVar8 = auStack_280 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar11 = *(double *)(unaff_x20 + 0x78);
  if (dVar11 == 0.0) {
    pcVar14 = *(code **)(unaff_x20 + 0x38);
    if (pcVar14 == (code *)0x0) {
      return;
    }
    local_138 = 0;
    local_130 = -2.6815615859885194e+154;
    __ss11_StringGutsV4growyySiF(0x34);
    __sSS6appendyySSF(0x1000000000000032,0x80000001008b66e0);
    uVar12 = 0xea00000000006465;
    if (*(char *)(unaff_x20 + 0x10) == '\0') {
      uVar12 = 0xea00000000007265;
    }
    __sSS6appendyySSF(0x6c6c6f72746e6f63,uVar12);
    _swift_bridgeObjectRelease(uVar12);
    dVar11 = local_130;
    (*pcVar14)(local_138,local_130);
LAB_100415420:
    _swift_bridgeObjectRelease(dVar11);
    return;
  }
  local_260 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar2 = *(uint *)(unaff_x20 + 0x80);
  pcVar14 = *(code **)(unaff_x20 + 0x18);
  dVar6 = dVar11;
  _swift_bridgeObjectRetain();
  (*pcVar14)();
  if ((param_2 & 1) == 0) {
    local_268 = dVar6;
    FUN_100415678(dVar6,uVar12);
    lVar10 = *(long *)((long)dVar11 + 0x10);
    do {
      if (lVar10 == 0) goto LAB_100415420;
      lVar1 = lVar10 * 8;
      lVar10 = lVar10 + -1;
      uVar13 = *(ulong *)((long)dVar11 + lVar1 + 0x18);
    } while (dVar6 < (double)(long)uVar13);
    if ((uVar2 & 1) != 0) {
      _swift_beginAccess(unaff_x20 + 0x90,auStack_258,0,0);
      uVar7 = uVar13;
      FUN_10034316c(uVar13,*(undefined8 *)(unaff_x20 + 0x90));
      if ((uVar7 & 1) != 0) goto LAB_10041530c;
    }
    _swift_beginAccess(unaff_x20 + 0x90,&local_138,0x21,0);
    FUN_10006dbc4(&local_1c0,uVar13);
    _swift_endAccess(&local_138);
    FUN_100416248(&local_240);
    uStack_178 = uStack_1f8;
    local_180 = local_200;
    uStack_168 = uStack_1e8;
    uStack_170 = uStack_1f0;
    local_160 = local_1e0;
    uStack_14f = uStack_1cf;
    uStack_1b8 = uStack_238;
    local_1c0 = local_240;
    uStack_1a8 = uStack_228;
    uStack_1b0 = uStack_230;
    uStack_198 = uStack_218;
    local_1a0 = local_220;
    uStack_188 = uStack_208;
    uStack_190 = uStack_210;
    iVar4 = (int)&local_1c0;
    FUN_10041230c();
    if ((iVar4 == 1) && (*(code **)(unaff_x20 + 0x38) != (code *)0x0)) {
      local_270 = *(undefined8 *)(unaff_x20 + 0x40);
      local_138 = 0;
      local_130 = -2.6815615859885194e+154;
      local_278 = *(code **)(unaff_x20 + 0x38);
      __ss11_StringGutsV4growyySiF(0x34);
      __sSS6appendyySSF(0x1000000000000032,0x80000001008b6750);
      uVar12 = 0xea00000000006465;
      if (*(char *)(unaff_x20 + 0x10) == '\0') {
        uVar12 = 0xea00000000007265;
      }
      __sSS6appendyySSF(0x6c6c6f72746e6f63,uVar12);
      _swift_bridgeObjectRelease(uVar12);
      dVar6 = local_130;
      (*local_278)(local_138,local_130);
      _swift_bridgeObjectRelease(dVar6);
    }
    uVar3 = *(undefined1 *)(unaff_x20 + 0x10);
    local_270 = CONCAT44(local_270._4_4_,*(undefined4 *)(unaff_x20 + 0x14));
    __s10Foundation4DateVACycfC(puVar8);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar15 + 8))();
    if (*(code **)(unaff_x20 + 0x48) == (code *)0x0) {
      if (DAT_100a893c0 != -1) {
        _swift_once(&DAT_100a893c0,FUN_10040fb8c);
      }
      lVar5 = DAT_100b36a08;
      puVar8 = DAT_100b36a00;
      _swift_bridgeObjectRetain(DAT_100b36a00);
      _swift_bridgeObjectRetain(lVar5);
    }
    else {
      (**(code **)(unaff_x20 + 0x48))();
    }
    _swift_bridgeObjectRelease(dVar11);
    uStack_c8 = uStack_1f8;
    local_d0 = local_200;
    uStack_b8 = uStack_1e8;
    local_c0 = uStack_1f0;
    local_b0 = local_1e0;
    uStack_9f = uStack_1cf;
    uStack_108 = uStack_238;
    local_110 = local_240;
    uStack_f8 = uStack_228;
    local_100 = uStack_230;
    uStack_e8 = uStack_218;
    local_f0 = local_220;
    local_138 = CONCAT71(local_138._1_7_,uVar3);
    local_138 = CONCAT44((undefined4)local_270,(undefined4)local_138);
    local_130 = local_268;
    local_120 = local_260;
    uStack_d8 = uStack_208;
    local_e0 = uStack_210;
    uStack_128 = uVar13;
    local_90 = puVar8;
    lStack_88 = lVar5;
    (**(code **)(unaff_x20 + 0x28))(&local_138);
    FUN_1004157cc(&local_138);
  }
  else {
    _swift_bridgeObjectRelease(dVar11);
    pcVar14 = *(code **)(unaff_x20 + 0x38);
    if (pcVar14 == (code *)0x0) {
      return;
    }
    local_138 = 0;
    local_130 = -2.6815615859885194e+154;
    __ss11_StringGutsV4growyySiF(0x31);
    _swift_bridgeObjectRelease(local_130);
    local_138 = 0x1000000000000026;
    local_130 = -2.12650952727538e-314;
    uVar12 = 0xea00000000006465;
    if (*(char *)(unaff_x20 + 0x10) == '\0') {
      uVar12 = 0xea00000000007265;
    }
    __sSS6appendyySSF(0x6c6c6f72746e6f63,uVar12);
    _swift_bridgeObjectRelease(uVar12);
    __sSS6appendyySSF(0x3d6469708cbcef,0xa700000000000000);
    local_1c0 = CONCAT44(local_1c0._4_4_,*(undefined4 *)(unaff_x20 + 0x14));
    puVar9 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    dVar11 = local_130;
    (*pcVar14)(local_138,local_130);
LAB_10041530c:
    _swift_bridgeObjectRelease(dVar11);
  }
  return;
}

