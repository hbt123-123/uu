// rea decompile_all
// name: FUN_100006e48
// address: 0x100006e48
// body: available
// range: 0x100006e48-0x100007cc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100006e48(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                  undefined4 param_5,ID param_6)

{
  double *pdVar1;
  bool bVar2;
  undefined4 uVar3;
  double dVar4;
  uint uVar5;
  undefined4 uVar6;
  ID IVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  code *pcVar11;
  ID self;
  double *pdVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  double *pdVar16;
  double **extraout_x8;
  long unaff_x20;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ushort uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  undefined2 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_6c0 [16];
  double local_6b0;
  double dStack_6a8;
  undefined8 local_6a0;
  double *local_698;
  long local_688;
  ulong local_680;
  undefined8 local_678;
  char *local_670;
  double *local_668;
  char *pcStack_660;
  double *local_658;
  char *local_650;
  uint local_644;
  double local_640;
  undefined4 local_634;
  double local_630;
  double dStack_628;
  double dStack_620;
  double dStack_618;
  double *local_608;
  ulong local_600;
  uint local_5f4;
  undefined8 local_5f0;
  ulong uStack_5e8;
  ID local_5e0;
  double *local_5d0;
  char *pcStack_5c8;
  double *local_5c0;
  char *pcStack_5b8;
  undefined8 local_5b0;
  double dStack_5a8;
  double dStack_5a0;
  undefined8 local_598;
  undefined8 local_590;
  ulong uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  double *local_530;
  char *pcStack_528;
  double *local_520;
  char *pcStack_518;
  ulong local_510;
  double dStack_508;
  double local_500;
  ulong uStack_4f8;
  undefined8 local_4f0;
  ulong uStack_4e8;
  undefined8 local_4e0;
  ulong uStack_4d8;
  double *local_4d0;
  char *pcStack_4c8;
  double *local_4c0;
  char *pcStack_4b8;
  ulong local_4b0;
  double dStack_4a8;
  double local_4a0;
  ulong uStack_498;
  undefined8 local_490;
  ulong uStack_488;
  undefined8 local_480;
  ulong uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 local_410;
  double *local_400;
  char *pcStack_3f8;
  double *pdStack_3f0;
  char *pcStack_3e8;
  ulong local_3e0;
  double dStack_3d8;
  double dStack_3d0;
  ulong uStack_3c8;
  undefined8 local_3c0;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 local_340;
  double *local_330;
  char *local_328;
  double *local_320;
  char *local_318;
  ulong local_310;
  double local_308;
  double local_300;
  ulong local_2f8;
  undefined8 local_2f0;
  ulong local_2e8;
  undefined8 local_2e0;
  ulong uStack_2d8;
  double *local_2d0;
  char *pcStack_2c8;
  double *pdStack_2c0;
  char *pcStack_2b8;
  undefined8 local_2b0;
  double dStack_2a8;
  double dStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  ulong uStack_288;
  undefined8 local_278;
  undefined8 uStack_270;
  double *local_268;
  char *pcStack_260;
  uint local_258;
  undefined4 uStack_254;
  double dStack_250;
  double local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  ulong uStack_230;
  double *local_228;
  char *local_220;
  double *local_218;
  double *local_210;
  char *pcStack_208;
  undefined1 auStack_1f8 [24];
  double local_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double local_1c0;
  byte local_1b8;
  double *local_1b0;
  char *pcStack_1a8;
  double *pdStack_1a0;
  char *pcStack_198;
  ulong local_190;
  double dStack_188;
  double dStack_180;
  ulong uStack_178;
  undefined8 local_170;
  ulong uStack_168;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  undefined2 local_a0;
  
  if (param_6 == 0) {
    FUN_100401b14(0);
    FUN_1003fb4bc(FUN_100007cc8,0,0xd000000000000091,0x80000001008767f0,0xd00000000000001f,
                  0x80000001008768e0,0x7e,0);
    return;
  }
  IVar7 = _objc_msgSend(param_6,"image");
  _objc_msgSend(param_6,"hotSpot");
  FUN_100008a00(&local_1e0,IVar7);
  dVar30 = local_1c0;
  dStack_628 = dStack_1c8;
  local_630 = dStack_1d0;
  dStack_618 = dStack_1d8;
  dStack_620 = local_1e0;
  uVar5 = 0;
  dVar31 = dStack_1d0;
  if (((local_1b8 & 1) == 0) &&
     ((*(byte *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::hasLoggedNonUniqueIdentity) & 1)
      == 0)) {
    *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::hasLoggedNonUniqueIdentity) = 1
    ;
    FUN_100401b14(0);
    uVar5 = 0x7cf4;
    FUN_1003fb4bc(FUN_100007cf4,0,0xd000000000000091,0x80000001008767f0,0xd00000000000001f,
                  0x80000001008768e0,0x85,0);
  }
  if (DAT_100a73b78 != -1) {
    uVar5 = 0xa73b78;
    _swift_once(&DAT_100a73b78,FUN_100121efc);
  }
  if (DAT_100a73b70 != -1) {
    uVar5 = 0xa73b70;
    _swift_once(&DAT_100a73b70,FUN_100121d90);
  }
  if (DAT_100a79650 == (code *)0x0) {
    local_5f4 = 0;
  }
  else {
    (*DAT_100a79650)();
    local_5f4 = uVar5 ^ 1;
  }
  pdVar1 = (double *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::baseline);
  pdVar16 = (double *)0x1;
  _swift_beginAccess(pdVar1,auStack_1f8,1,0);
  if (((local_1b8 & *(byte *)(pdVar1 + 8)) == 1) && (*(byte *)(pdVar1 + 5) != 2)) {
    param_2 = (double)-(ulong)(pdVar1[2] == dStack_1d0);
    uVar21 = NEON_uminv(CONCAT26(-(ushort)(pdVar1[3] == dStack_1c8),
                                 CONCAT24(SUB82(param_2,0),
                                          CONCAT22(-(ushort)(pdVar1[1] == dStack_1d8),
                                                   -(ushort)(*pdVar1 == local_1e0)))),2);
    dVar31 = local_1e0;
    param_4 = dStack_1d0;
    if (((uVar21 & 1) != 0) &&
       (((pdVar1[4] == local_1c0 && ((*(byte *)(pdVar1 + 5) & 1) != 0)) &&
        (((local_5f4 ^ *(byte *)((long)pdVar1 + 0x41)) & 1) == 0)))) {
      return;
    }
  }
  local_600 = CONCAT44(local_600._4_4_,(uint)(local_1b8 & *(byte *)(pdVar1 + 8)));
  local_640 = dVar30;
  uVar22 = 0;
  uVar24 = 0;
  uVar26 = 0;
  uVar28 = 0;
  uStack_5e8 = 0xc000000000000000;
  local_5f0 = 0;
  pcStack_208 = (char *)0xc000000000000000;
  local_210 = (double *)0x0;
  local_644 = (uint)local_1b8;
  local_634 = param_5;
  local_5e0 = param_6;
  if (local_644 == 0) {
LAB_1000070e8:
    IVar7 = _objc_msgSend(param_6,"image");
    FUN_100009afc();
    if (IVar7 == 0) {
LAB_10000725c:
      pcVar14 = "image";
      pcVar11 = (code *)_objc_msgSend(param_6,"image");
      FUN_1003eb674();
      if (0xe < (ulong)pcVar14 >> 0x3c) {
        if ((*(byte *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::hasLoggedEncodeFailure) & 1)
            == 0) {
          *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::hasLoggedEncodeFailure) =
               1;
          FUN_100401b14(0);
          FUN_1003fb4ec(FUN_100007d4c,0,0xd000000000000091,0x80000001008767f0,0xd00000000000001f,
                        0x80000001008768e0,0xa1,0);
        }
        goto LAB_100007bd4;
      }
      local_658 = (double *)((ulong)local_658 & 0xffffffff00000000);
      local_608 = (double *)0x0;
      local_650 = (char *)0xf000000000000000;
    }
    else {
      puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1000cbd50(PTR___swiftEmptyArrayStorage_100995ea0);
      uVar9 = 0;
      FUN_100005ef8(0);
      uVar13 = uVar9;
      FUN_100008350();
      puVar10 = puVar8;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (puVar8,uVar9,PTR___sypN_100995e88 + 8,uVar13);
      _swift_bridgeObjectRelease(puVar8);
      pcVar14 = "representationUsingType:properties:";
      pdVar16 = (double *)0x4;
      pcVar11 = (code *)_objc_msgSend(IVar7,"representationUsingType:properties:",4,puVar10);
      param_6 = local_5e0;
      if ((double *)pcVar11 == (double *)0x0) goto LAB_10000725c;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      FUN_100008184(pcVar11,pcVar14);
      local_658 = (double *)CONCAT44(local_658._4_4_,(uint)local_1b8);
      local_650 = pcVar14;
      local_608 = (double *)pcVar11;
    }
    *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::hasLoggedEncodeFailure) = 0;
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar20 = *(long *)(DAT_100b360a8 + 0x80);
    IVar7 = *(ID *)(lVar20 + 0x10);
    _swift_retain(lVar20);
    IVar7 = _objc_msgSend(IVar7,"screenId");
    FUN_100027f54();
    _swift_release(lVar20);
    if (IVar7 == 0) {
      dVar30 = 1.0;
    }
    else {
      _objc_msgSend(IVar7,"backingScaleFactor");
      dVar30 = (double)CONCAT26(uVar28,CONCAT24(uVar26,CONCAT22(uVar24,uVar22)));
    }
    IVar7 = local_5e0;
    self = _objc_msgSend(local_5e0,"image");
    _objc_msgSend(self,"size");
    IVar7 = _objc_msgSend(IVar7,"image");
    _objc_msgSend(IVar7,"size");
    uVar23 = SUB82(param_2,0);
    uVar25 = (short)((ulong)param_2 >> 0x10);
    uVar27 = (short)((ulong)param_2 >> 0x20);
    uVar29 = (short)((ulong)param_2 >> 0x30);
    if (param_2 < (double)CONCAT26(uVar28,CONCAT24(uVar26,CONCAT22(uVar24,uVar22)))) {
      uVar23 = uVar22;
      uVar25 = uVar24;
      uVar27 = uVar26;
      uVar29 = uVar28;
    }
    param_2 = 1.5;
    dVar32 = dVar30 * (double)CONCAT26(uVar29,CONCAT24(uVar27,CONCAT22(uVar25,uVar23))) * 1.5;
    FUN_1003ee76c(0);
    pdVar12 = (double *)pcVar11;
    pcVar15 = pcVar14;
    FUN_1003ec478(SUB82(dVar32,0));
    if (0xe < (ulong)pcVar15 >> 0x3c) {
      FUN_100008184(pcVar11,pcVar14);
      pdVar12 = (double *)pcVar11;
      pcVar15 = pcVar14;
    }
    FUN_100006cdc(local_210,pcStack_208);
    bVar2 = ((ulong)local_658 & 1) == 0;
    local_210 = pdVar12;
    pcStack_208 = pcVar15;
    if (bVar2) {
      FUN_100006cc8(local_608,local_650);
      FUN_100006cdc();
    }
    else {
      FUN_100009604(pdVar12,pcVar15,&local_1e0);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_6a0 = &local_210;
      pdVar16 = (double *)0xd000000000000091;
      local_6b0 = dVar30;
      dStack_6a8 = dVar32;
      FUN_1003fb48c(FUN_100008344,auStack_6c0,0xd000000000000091,0x80000001008767f0,
                    0xd00000000000001f,0x80000001008768e0,0xac,0);
      FUN_100006cc8(local_608,local_650);
      FUN_100006cdc();
    }
    uVar5 = (uint)!bVar2;
    param_6 = local_5e0;
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_698 = &local_1e0;
    pdVar16 = (double *)&DAT_100a75370;
    local_6a0 = extraout_x8;
    FUN_100004bb4(&DAT_100a75370,&DAT_10080e370);
    FUN_100407cdc(&local_1b0,FUN_100008394,&local_6b0);
    pcVar14 = pcStack_1a8;
    pdVar12 = local_1b0;
    if (0xe < (ulong)pcStack_1a8 >> 0x3c) goto LAB_1000070e8;
    FUN_100006cdc(local_210,pcStack_208);
    local_210 = pdVar12;
    pcStack_208 = pcVar14;
    FUN_100401b14(0);
    pcVar11 = FUN_100007d20;
    pdVar16 = (double *)0xd000000000000091;
    pcVar14 = (char *)0x0;
    FUN_1003fb48c();
    uVar5 = 1;
  }
  pdVar12 = local_210;
  if ((local_600 & 1) == 0) {
    dStack_d8 = pdVar1[1];
    param_2 = *pdVar1;
    dStack_c8 = pdVar1[3];
    local_d0 = pdVar1[2];
    dStack_b8 = pdVar1[5];
    local_c0 = pdVar1[4];
    dStack_a8 = pdVar1[7];
    dVar31 = pdVar1[6];
    local_a0 = *(undefined2 *)(pdVar1 + 8);
    local_e0 = param_2;
    local_b0 = dVar31;
    FUN_1000081c4(&local_e0,&local_1b0);
    uVar17 = 0;
    pcVar14 = (char *)(ulong)local_5f4;
    FUN_100008ec0();
    pcVar11 = (code *)&local_e0;
    FUN_10000810c();
    pdVar16 = pdVar12;
    if ((uVar17 & 1) != 0) goto LAB_100007bd4;
  }
  FUN_10047466c();
  uStack_270 = (char *)0x0;
  local_278 = (double *)0x0;
  local_268 = (double *)0x0;
  pcStack_260 = (char *)0xc000000000000000;
  local_248 = 0.0;
  dStack_250 = 0.0;
  uStack_240 = 0;
  uVar22 = (undefined2)local_5f0;
  uVar24 = (undefined2)((ulong)local_5f0 >> 0x10);
  uVar26 = (undefined2)((ulong)local_5f0 >> 0x20);
  uVar28 = (undefined2)((ulong)local_5f0 >> 0x30);
  uStack_230 = uStack_5e8;
  local_238 = local_5f0;
  local_228 = (double *)pcVar11;
  local_220 = pcVar14;
  local_218 = pdVar16;
  IVar7 = _objc_msgSend(param_6,"image");
  _objc_msgSend(IVar7,"size");
  dVar30 = (double)CONCAT26(uVar28,CONCAT24(uVar26,CONCAT22(uVar24,uVar22)));
  if (0x7fefffffffffffff < (ulong)ABS(dVar30)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100007c6c);
    (*pcVar11)();
  }
  if (dVar30 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100007c70);
    (*pcVar11)();
  }
  if (2147483648.0 <= dVar30) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100007c74);
    (*pcVar11)();
  }
  uStack_270 = (char *)CONCAT44(uStack_270._4_4_,(int)dVar30);
  IVar7 = _objc_msgSend(param_6,"image");
  _objc_msgSend(IVar7,"size");
  pcVar14 = pcStack_208;
  pdVar12 = local_210;
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100007c78);
    (*pcVar11)();
  }
  if (param_2 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100007c7c);
    (*pcVar11)();
  }
  uVar22 = 0;
  uVar24 = 0;
  uVar26 = 0;
  uVar28 = 0x41e0;
  if (2147483648.0 <= param_2) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100007c80);
    (*pcVar11)();
  }
  uStack_270 = (char *)CONCAT44((int)param_2,(undefined4)uStack_270);
  if (local_5f4 == 0) {
    local_258 = 0;
    FUN_100008184(local_210,pcStack_208);
    FUN_100006cdc(0,0xc000000000000000);
    local_268 = pdVar12;
    pcStack_260 = pcVar14;
  }
  else {
    local_258 = 0xffffffff;
  }
  _objc_msgSend(param_6,"hotSpot");
  if (0x7fefffffffffffff <
      (CONCAT26(uVar28,CONCAT24(uVar26,CONCAT22(uVar24,uVar22))) & 0x7fffffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100007c84);
    (*pcVar11)();
  }
  bVar2 = NAN((double)CONCAT26(uVar28,CONCAT24(uVar26,CONCAT22(uVar24,uVar22))));
  if (!bVar2 && (double)CONCAT26(uVar28,CONCAT24(uVar26,CONCAT22(uVar24,uVar22))) == -2147483649.0
      || (!bVar2 &&
         (double)CONCAT26(uVar28,CONCAT24(uVar26,CONCAT22(uVar24,uVar22))) < -2147483649.0) != bVar2
     ) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100007c88);
    (*pcVar11)();
  }
  dVar30 = 2147483648.0;
  if (NAN((double)CONCAT26(uVar28,CONCAT24(uVar26,CONCAT22(uVar24,uVar22)))) ||
      2147483648.0 <= (double)CONCAT26(uVar28,CONCAT24(uVar26,CONCAT22(uVar24,uVar22)))) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100007c8c);
    (*pcVar11)();
  }
  local_278 = (double *)
              CONCAT44(local_278._4_4_,
                       (int)(double)CONCAT26(uVar28,CONCAT24(uVar26,CONCAT22(uVar24,uVar22))));
  _objc_msgSend(param_6,"hotSpot");
  if (0x7fefffffffffffff < (ulong)ABS(dVar30)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100007c90);
    (*pcVar11)();
  }
  if (dVar30 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100007c94);
    (*pcVar11)();
  }
  if (2147483648.0 <= dVar30) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100007c98);
    (*pcVar11)();
  }
  local_650 = (char *)CONCAT44(local_650._4_4_,uVar5);
  local_278 = (double *)CONCAT44((int)dVar30,(undefined4)local_278);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar20 = DAT_100b360a8;
  pcVar14 = "screenId";
  local_658 = pdVar1;
  IVar7 = _objc_msgSend(*(ID *)(*(long *)(DAT_100b360a8 + 0x80) + 0x10),"screenId");
  uStack_240 = (uint)IVar7;
  dVar32 = *(double *)(lVar20 + 0x80);
  dVar30 = dVar32;
  _swift_retain();
  FUN_10000f5b4();
  _swift_release(dVar32);
  if (((ulong)pdVar16 & 1) == 0) {
    lVar18 = *(long *)(lVar20 + 0x80);
    IVar7 = *(ID *)(lVar18 + 0x10);
    _swift_retain(lVar18);
    IVar7 = _objc_msgSend(IVar7,"screenId");
    FUN_100027f54();
    _swift_release(lVar18);
    if (IVar7 != 0) {
      _objc_msgSend(IVar7,"frame");
      dStack_250 = dVar30 / dVar31;
      _objc_msgSend(IVar7,"frame");
      local_248 = (double)pcVar14 / param_4;
    }
  }
  uVar13 = local_238;
  dVar4 = local_248;
  dVar32 = dStack_250;
  pcVar15 = pcStack_260;
  pdVar16 = local_268;
  pcVar14 = uStack_270;
  pcStack_5c8 = uStack_270;
  local_5d0 = local_278;
  pcStack_5b8 = pcStack_260;
  local_5c0 = local_268;
  local_5b0 = CONCAT44(uStack_254,local_258);
  local_598 = CONCAT44(uStack_23c,uStack_240);
  dStack_5a8 = dStack_250;
  dStack_5a0 = local_248;
  uStack_588 = uStack_230;
  local_590 = local_238;
  local_668 = local_268;
  pcStack_660 = uStack_270;
  local_600 = (ulong)local_258;
  local_608 = local_278;
  local_678 = local_238;
  local_670 = pcStack_260;
  uVar19 = uStack_230 & 0xcfffffffffffffff;
  uVar17 = (ulong)uStack_240 | 0x8000000000000000;
  local_688 = lVar20;
  uStack_578 = 0;
  local_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  local_560 = 0xffffffff00000000;
  local_538 = 0;
  uStack_540 = 0;
  local_548 = 0;
  uStack_550 = 0;
  local_558 = 0;
  local_680 = uVar17;
  FUN_100008200(&local_5d0,&local_1b0);
  FUN_10000823c(&local_580);
  local_530 = local_608;
  pcStack_528 = pcVar14;
  local_520 = pdVar16;
  pcStack_518 = pcVar15;
  local_510 = local_600;
  dStack_508 = dVar32;
  local_500 = dVar4;
  local_4f0 = uVar13;
  uStack_4d8 = uStack_5e8;
  local_4e0 = local_5f0;
  pcStack_4c8 = pcVar14;
  local_4d0 = local_608;
  local_4a0 = dVar4;
  local_490 = uVar13;
  uStack_478 = uStack_5e8;
  local_480 = local_5f0;
  pcStack_4b8 = pcVar15;
  local_4c0 = pdVar16;
  dStack_4a8 = dVar32;
  local_4b0 = local_600;
  uStack_4f8 = uVar17;
  uStack_4e8 = uVar19;
  uStack_498 = uVar17;
  uStack_488 = uVar19;
  FUN_100008284(&local_4d0);
  uStack_358 = uStack_428;
  local_360 = local_430;
  uStack_348 = uStack_418;
  uStack_350 = uStack_420;
  local_340 = local_410;
  uStack_398 = uStack_468;
  local_3a0 = local_470;
  uStack_388 = uStack_458;
  uStack_390 = uStack_460;
  uStack_378 = uStack_448;
  local_380 = local_450;
  uStack_368 = uStack_438;
  uStack_370 = uStack_440;
  dStack_3d8 = dStack_4a8;
  local_3e0 = local_4b0;
  uStack_3c8 = uStack_498;
  dStack_3d0 = local_4a0;
  uStack_3b8 = uStack_488;
  local_3c0 = local_490;
  uStack_3a8 = uStack_478;
  uStack_3b0 = local_480;
  pcStack_3f8 = pcStack_4c8;
  local_400 = local_4d0;
  pcStack_3e8 = pcStack_4b8;
  pdStack_3f0 = local_4c0;
  FUN_100008290(&local_400);
  uStack_118 = uStack_368;
  local_120 = uStack_370;
  uStack_108 = uStack_358;
  local_110 = local_360;
  uStack_f8 = uStack_348;
  local_100 = uStack_350;
  uStack_158 = uStack_3a8;
  local_160 = uStack_3b0;
  uStack_148 = uStack_398;
  local_150 = local_3a0;
  local_f0 = local_340;
  uStack_138 = uStack_388;
  local_140 = uStack_390;
  uStack_128 = uStack_378;
  local_130 = local_380;
  dStack_188 = dStack_3d8;
  local_190 = local_3e0;
  uStack_178 = uStack_3c8;
  dStack_180 = dStack_3d0;
  uStack_168 = uStack_3b8;
  local_170 = local_3c0;
  pcStack_1a8 = pcStack_3f8;
  local_1b0 = local_400;
  pcStack_198 = pcStack_3e8;
  pdStack_1a0 = pdStack_3f0;
  FUN_100008294(&local_530,&local_330);
  FUN_100467dcc(&local_1b0);
  uVar3 = local_634;
  uVar6 = local_634;
  FUN_1001ad794(local_634,local_228,local_220,local_218,0);
  pdVar16 = local_658;
  local_658[1] = dStack_618;
  *local_658 = dStack_620;
  local_658[3] = dStack_628;
  local_658[2] = local_630;
  local_658[4] = local_640;
  *(char *)(local_658 + 5) = (char)local_644;
  dVar30 = local_658[6];
  dVar31 = local_658[7];
  local_658[6] = (double)local_210;
  local_658[7] = (double)pcStack_208;
  FUN_100008184();
  *(char *)(pdVar16 + 8) = (char)local_650;
  *(char *)((long)pdVar16 + 0x41) = (char)local_5f4;
  FUN_100006cc8(dVar30,dVar31);
  uVar13 = 0;
  FUN_100401b14();
  (*(code *)PTR____chkstk_darwin_100995498)(uVar13);
  local_6a0 = (double **)CONCAT44(uVar6,uVar3);
  local_698 = (double *)&local_278;
  FUN_1003fb48c(FUN_1000082d0,&local_6b0,0xd000000000000091,0x80000001008767f0,0xd00000000000001f,
                0x80000001008768e0,0xd3,0);
  local_330 = local_608;
  local_328 = pcStack_660;
  local_320 = local_668;
  local_318 = local_670;
  local_310 = local_600;
  local_308 = dVar32;
  local_300 = dVar4;
  local_2f8 = local_680;
  local_2f0 = local_678;
  uStack_2d8 = uStack_5e8;
  local_2e0 = local_5f0;
  local_2e8 = uVar19;
  FUN_1000082dc(&local_330);
  pdVar16 = local_218;
  FUN_100006cdc(local_228,local_220);
  _swift_release(pdVar16);
  local_2b0 = CONCAT44(uStack_254,local_258);
  uStack_298 = CONCAT44(uStack_23c,uStack_240);
  dStack_2a8 = dStack_250;
  dStack_2a0 = local_248;
  uStack_288 = uStack_230;
  local_290 = local_238;
  pcStack_2c8 = uStack_270;
  local_2d0 = local_278;
  pcStack_2b8 = pcStack_260;
  pdStack_2c0 = local_268;
  FUN_100008310(&local_2d0);
LAB_100007bd4:
  FUN_100006cdc(local_210,pcStack_208);
  return;
}

