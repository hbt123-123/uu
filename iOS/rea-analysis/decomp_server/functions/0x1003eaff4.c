// rea decompile_all
// name: FUN_1003eaff4
// address: 0x1003eaff4
// body: available
// range: 0x1003eaff4-0x1003eb673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003eaff4(undefined8 *param_1,double param_2,undefined8 param_3,code *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined *local_230;
  undefined *puStack_228;
  undefined8 local_220;
  long lStack_218;
  code *local_210;
  long *plStack_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined8 local_1a0;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long local_90;
  undefined8 uStack_88;
  
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  local_1f8 = *(long *)(lVar5 + -8);
  local_1f0 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1f8 + 0x40));
  lVar15 = (long)&local_270 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_200 = lVar15;
  __s10Foundation4DateVMa();
  local_1b0 = *(undefined **)(lVar5 + -8);
  puStack_1a8 = (undefined *)lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)((long)local_1b0 + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation6LocaleVMa();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a892e0 != -1) {
    param_4 = FUN_1003db370;
    _swift_once(&DAT_100a892e0);
  }
  plVar1 = DAT_100a8cce8;
  plVar6 = DAT_100a8cce8;
  _swift_retain(DAT_100a8cce8);
  FUN_1003d8888();
  (**(code **)(*plVar1 + 0x128))(&local_90);
  _swift_release(plVar1);
  FUN_100006cc8(plVar6);
  lVar2 = local_90;
  if (DAT_100a892d0 != -1) {
    param_4 = FUN_1003dab58;
    _swift_once(&DAT_100a892d0);
  }
  plVar1 = DAT_100a8ccd8;
  plVar6 = DAT_100a8ccd8;
  _swift_retain();
  FUN_1003d8888();
  (**(code **)(*plVar1 + 0x128))(&local_90);
  _swift_release(plVar1);
  FUN_100006cc8();
  lVar3 = local_90;
  __s10Foundation6LocaleV7currentACvgZ(lVar10);
  __s10Foundation6LocaleV10regionCodeSSSgvg();
  (**(code **)(lVar12 + 8))(lVar10,lVar5);
  plVar1 = (long *)0x656e6f4e;
  if (param_4 != (code *)0x0) {
    plVar1 = plVar6;
  }
  pcVar4 = (code *)0xe400000000000000;
  if (param_4 != (code *)0x0) {
    pcVar4 = param_4;
  }
  if (lVar2 == 0) {
    local_1c0 = 0;
    local_1b8 = 0;
    local_90 = 0;
    uStack_88 = 0xe000000000000000;
    local_1a0 = 0xe000000000000000;
    uVar18 = 0xe200000000000000;
    uVar14 = 0x687a;
    local_1d0 = 0xe000000000000000;
    local_1c8 = 0;
    local_1e0 = 0xe000000000000000;
    local_1d8 = 0;
    local_1e8 = 0xe000000000000000;
  }
  else {
    _swift_beginAccess(lVar2 + 0x10,auStack_150,0,0);
    local_1b8 = *(undefined8 *)(lVar2 + 0x10);
    local_1a0 = *(undefined8 *)(lVar2 + 0x18);
    _swift_beginAccess(lVar2 + 0x20,auStack_168,0,0);
    local_1c0 = *(undefined8 *)(lVar2 + 0x20);
    uVar14 = *(undefined8 *)(lVar2 + 0x28);
    _swift_beginAccess(lVar2 + 0x30,auStack_180,0,0);
    local_1c8 = *(undefined8 *)(lVar2 + 0x30);
    uVar18 = *(undefined8 *)(lVar2 + 0x38);
    _swift_beginAccess(lVar2 + 0x40,auStack_198,0,0);
    local_1d8 = *(undefined8 *)(lVar2 + 0x40);
    uVar13 = *(undefined8 *)(lVar2 + 0x48);
    _swift_bridgeObjectRetain(local_1a0);
    local_1d0 = uVar14;
    _swift_bridgeObjectRetain(uVar14);
    local_1e0 = uVar18;
    _swift_bridgeObjectRetain(uVar18);
    local_1e8 = uVar13;
    _swift_bridgeObjectRetain(uVar13);
    local_90 = 0;
    uStack_88 = 0xe000000000000000;
    _swift_beginAccess(lVar2 + 0x60,auStack_138,0,0);
    uVar14 = *(undefined8 *)(lVar2 + 0x60);
    uVar18 = *(undefined8 *)(lVar2 + 0x68);
    _swift_bridgeObjectRetain(uVar18);
  }
  __sSS6appendyySSF(uVar14,uVar18);
  _swift_bridgeObjectRelease(uVar18);
  __sSS6appendyySSF(0x2d,0xe100000000000000);
  __sSS6appendyySSF(plVar1,pcVar4);
  uVar14 = uStack_88;
  lVar5 = local_90;
  __s10Foundation4DateVACycfC(lVar15);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)((long)local_1b0 + 8))(lVar15,puStack_1a8);
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003eb654);
    (*pcVar4)();
  }
  if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003eb658);
    (*pcVar4)();
  }
  if (1.8446744073709552e+19 <= param_2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003eb65c);
    (*pcVar4)();
  }
  local_220 = uVar14;
  lStack_218 = lVar5;
  local_90 = (long)param_2;
  puVar7 = PTR___sSuN_100995a50;
  puVar8 = PTR___sSus23CustomStringConvertiblesWP_100995a80;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  lVar5 = local_200;
  local_230 = puVar8;
  puStack_228 = puVar7;
  __s10Foundation4UUIDVACycfC(local_200);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(local_1f8 + 8))(lVar5,local_1f0);
  puVar9 = puVar8;
  __sSS10lowercasedSSyF();
  local_1b0 = puVar9;
  puStack_1a8 = puVar7;
  _swift_bridgeObjectRelease(puVar8);
  local_210 = pcVar4;
  plStack_208 = plVar1;
  if (lVar2 == 0) {
    lVar5 = 0;
    lVar15 = 0xe000000000000000;
    if (lVar3 != 0) goto LAB_1003eb3fc;
LAB_1003eb438:
    if (DAT_100a893b8 != -1) {
      _swift_once(&DAT_100a893b8,FUN_1004075f0);
    }
    lVar10 = DAT_100b369f8;
    lVar12 = DAT_100b369f0;
    _swift_bridgeObjectRetain(DAT_100b369f8);
    _swift_bridgeObjectRelease(0);
    _swift_release(lVar2);
    if (lVar3 == 0) {
      uVar14 = 0;
      uVar18 = 0;
      local_250 = 0;
      uVar17 = 0;
      local_240 = 0;
      uVar16 = 0;
      local_260 = 0;
      uVar13 = 0;
      local_270 = 0;
      uVar11 = 0;
      goto LAB_1003eb57c;
    }
    local_200 = lVar12;
    local_1f8 = lVar15;
    local_1f0 = lVar5;
  }
  else {
    _swift_beginAccess(lVar2 + 0x50,auStack_120,0,0);
    lVar5 = *(undefined8 *)(lVar2 + 0x50);
    lVar15 = *(undefined8 *)(lVar2 + 0x58);
    _swift_bridgeObjectRetain(lVar15);
    if (lVar3 == 0) goto LAB_1003eb438;
LAB_1003eb3fc:
    _swift_beginAccess(lVar3 + 0x40,auStack_108,0,0);
    lVar10 = *(long *)(lVar3 + 0x48);
    if (lVar10 == 0) goto LAB_1003eb438;
    local_200 = *(undefined8 *)(lVar3 + 0x40);
    local_1f8 = lVar15;
    local_1f0 = lVar5;
    _swift_bridgeObjectRetain(lVar10);
    _swift_release(lVar2);
  }
  _swift_beginAccess(lVar3 + 0x30,&local_90,0,0);
  uVar16 = *(undefined8 *)(lVar3 + 0x38);
  local_240 = *(undefined8 *)(lVar3 + 0x30);
  uStack_238 = 0;
  _swift_beginAccess(lVar3 + 0x20,auStack_a8,0,0);
  uVar17 = *(undefined8 *)(lVar3 + 0x28);
  local_250 = *(undefined8 *)(lVar3 + 0x20);
  uStack_248 = 0;
  _swift_beginAccess(lVar3 + 0x10,auStack_c0,0,0);
  uVar13 = *(undefined8 *)(lVar3 + 0x18);
  local_260 = *(undefined8 *)(lVar3 + 0x10);
  uStack_258 = 0;
  _swift_beginAccess(lVar3 + 0x50,auStack_d8,0,0);
  uVar11 = *(undefined8 *)(lVar3 + 0x58);
  local_270 = *(undefined8 *)(lVar3 + 0x50);
  uStack_268 = 0;
  _swift_beginAccess(lVar3 + 0x60,auStack_f0,0,0);
  uVar14 = *(undefined8 *)(lVar3 + 0x60);
  uVar18 = *(undefined8 *)(lVar3 + 0x68);
  _swift_bridgeObjectRetain(uVar18);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar11);
  _swift_release(lVar3);
  lVar5 = local_1f0;
  lVar15 = local_1f8;
  lVar12 = local_200;
LAB_1003eb57c:
  *param_1 = local_1b8;
  param_1[1] = local_1a0;
  param_1[2] = local_1c0;
  param_1[3] = local_1d0;
  param_1[4] = local_1c8;
  param_1[5] = local_1e0;
  param_1[6] = local_1d8;
  param_1[7] = local_1e8;
  param_1[8] = lStack_218;
  param_1[9] = local_220;
  param_1[10] = plStack_208;
  param_1[0xb] = local_210;
  param_1[0xc] = puStack_228;
  param_1[0xd] = local_230;
  param_1[0xe] = 0x34;
  param_1[0xf] = 0xe100000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0xe000000000000000;
  param_1[0x12] = puStack_1a8;
  param_1[0x13] = local_1b0;
  param_1[0x14] = lVar5;
  param_1[0x15] = lVar15;
  param_1[0x16] = 0x656e6f4e;
  param_1[0x17] = 0xe400000000000000;
  param_1[0x18] = lVar12;
  param_1[0x19] = lVar10;
  param_1[0x1b] = uVar16;
  param_1[0x1a] = local_240;
  param_1[0x1d] = uVar17;
  param_1[0x1c] = local_250;
  param_1[0x1f] = uVar13;
  param_1[0x1e] = local_260;
  param_1[0x21] = uVar11;
  param_1[0x20] = local_270;
  param_1[0x22] = uVar14;
  param_1[0x23] = uVar18;
  return;
}

