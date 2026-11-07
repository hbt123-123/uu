// rea decompile_all
// name: FUN_100025804
// address: 0x100025804
// body: available
// range: 0x100025804-0x100026093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100025804(ID param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  ID IVar14;
  undefined8 uVar15;
  ulong uVar16;
  ID IVar17;
  undefined *puVar18;
  ID IVar19;
  ulong uVar20;
  ID IVar21;
  char *pcVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  long unaff_x20;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  ushort uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auStack_220 [16];
  uint local_210 [2];
  ID *local_208;
  uint local_200;
  undefined8 *local_1f8;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  undefined *local_1e0;
  char *local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_188 [40];
  undefined8 local_160;
  int iStack_158;
  int iStack_154;
  int local_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  ID local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_108;
  undefined8 local_100;
  char local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  char local_c8;
  undefined8 local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  
  IVar14 = param_1;
  FUN_100450330();
  local_138 = IVar14;
  uStack_130 = param_2;
  local_128 = param_3;
  FUN_1003d541c();
  uVar16 = IVar14;
  FUN_1003d71a4();
  FUN_10044e088(IVar14);
  FUN_10044f278((uint)uVar16 & 1);
  uVar16 = IVar14;
  FUN_10004ffa0();
  if ((uVar16 & 1) == 0) {
    IVar17 = local_138;
    FUN_10044e04c(local_138,uStack_130,local_128);
    iVar13 = (int)IVar17;
    if (*(char *)(*(long *)(unaff_x20 + 0x38) + 0x14) != '\x01') {
      if (iVar13 != *(int *)(*(long *)(unaff_x20 + 0x38) + 0x10)) goto LAB_1000258c8;
      goto LAB_10002587c;
    }
    FUN_100039b50();
    if (((IVar17 & 1) != 0) && (iVar13 == -1)) goto LAB_10002587c;
LAB_1000258c8:
    uVar15 = 0;
  }
  else {
LAB_10002587c:
    uVar15 = 1;
  }
  FUN_10044eb98(uVar15,1);
  _objc_msgSend(param_1,"backingScaleFactor");
  FUN_10044f46c();
  pcVar22 = "localizedName";
  uVar16 = _objc_msgSend(param_1,"localizedName");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if ((uVar16 == 0x206e776f6e6b6e55) && (pcVar22 == (char *)0xef79616c70736944)) {
    _swift_bridgeObjectRelease(0xef79616c70736944);
LAB_100025984:
    IVar17 = 0;
    pcVar22 = (char *)0xe000000000000000;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar16,pcVar22,0x206e776f6e6b6e55,0xef79616c70736944,0);
    _swift_bridgeObjectRelease(pcVar22);
    if ((uVar16 & 1) != 0) goto LAB_100025984;
    pcVar22 = "localizedName";
    IVar17 = _objc_msgSend(param_1,"localizedName");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar17);
  }
  FUN_10044fab0(IVar17,pcVar22);
  puVar27 = (undefined *)(IVar14 & 0xffffffff);
  puVar18 = puVar27;
  _CGDisplayIsBuiltin();
  uVar16 = 1;
  if ((int)puVar18 == 0) {
    uVar16 = 2;
  }
  FUN_10045014c(uVar16,1);
  FUN_100041248();
  uVar15 = 0;
  FUN_100401b14();
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_200 = CONCAT31(local_200._1_3_,(char)uVar16) & 0xffffff01;
  local_1d8 = "secondScreenInfo()";
  local_1d0 = "captureFailedRetryCount";
  local_210[0] = (uint)IVar14;
  local_208 = &local_138;
  local_1c8 = uVar15;
  FUN_1003fb48c(FUN_10003ef78,auStack_220,0xd0000000000000a9,0x8000000100877660,0xd000000000000012,
                0x8000000100877b40,0x473,0);
  FUN_10003990c(&local_120,puVar27);
  FUN_10003b8a0();
  puVar18 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar27 != (undefined *)0x0) {
    puVar18 = puVar27;
  }
  lVar28 = *(long *)(puVar18 + 0x10);
  if (lVar28 != 0) {
    lVar29 = 0;
    local_1e0 = puVar18;
LAB_100025b0c:
    uVar32 = *(undefined8 *)((long)(puVar18 + lVar29 * 0x30 + 0x24) + 8);
    uVar15 = *(undefined8 *)(puVar18 + lVar29 * 0x30 + 0x24);
    IVar17 = local_138;
    FUN_10044e434(local_138,uStack_130,local_128);
    lVar24 = *(long *)(IVar17 + 0x10) + 1;
    lVar25 = 0x28;
    iVar13 = (int)((ulong)uVar15 >> 0x20);
    if ((uVar16 & 1) == 0) {
      do {
        lVar24 = lVar24 + -1;
        if (lVar24 == 0) goto LAB_100025b8c;
        puVar23 = (undefined8 *)(IVar17 + lVar25);
        lVar25 = lVar25 + 0x28;
      } while ((int)*puVar23 != (int)uVar15 || (int)((ulong)*puVar23 >> 0x20) != iVar13);
    }
    else {
      do {
        lVar24 = lVar24 + -1;
        if (lVar24 == 0) goto LAB_100025b8c;
        uVar33 = ((undefined8 *)(IVar17 + lVar25))[1];
        uVar31 = *(undefined8 *)(IVar17 + lVar25);
        lVar25 = lVar25 + 0x28;
        uVar30 = NEON_uminv(CONCAT26(-(ushort)((int)((ulong)uVar33 >> 0x20) ==
                                              (int)((ulong)uVar32 >> 0x20)),
                                     CONCAT24(-(ushort)((int)uVar33 == (int)uVar32),
                                              CONCAT22(-(ushort)((int)((ulong)uVar31 >> 0x20) ==
                                                                iVar13),
                                                       -(ushort)((int)uVar31 == (int)uVar15)))),2);
      } while ((uVar30 & 1) == 0);
    }
    _swift_bridgeObjectRelease();
    goto LAB_100025ae8;
  }
  _swift_bridgeObjectRelease();
  goto LAB_100025c58;
LAB_100025b8c:
  _swift_bridgeObjectRelease();
  local_f0 = 0;
  uStack_d0 = 0xc000000000000000;
  local_d8 = 0.0;
  IVar17 = local_138;
  uStack_e8 = uVar15;
  uStack_e0 = uVar32;
  FUN_10044e434(local_138,uStack_130,local_128);
  FUN_10003efc8(&local_f0,&local_98);
  IVar19 = IVar17;
  _swift_isUniquelyReferenced_nonNull_native();
  IVar21 = IVar17;
  if ((IVar19 & 1) == 0) {
    IVar21 = 0;
    FUN_100034048(0,*(long *)(IVar17 + 0x10) + 1,1,IVar17);
  }
  uVar20 = *(ulong *)(IVar21 + 0x10);
  IVar17 = IVar21;
  if (*(ulong *)(IVar21 + 0x18) >> 1 <= uVar20) {
    IVar17 = (ID)(1 < *(ulong *)(IVar21 + 0x18));
    FUN_100034048(IVar17,uVar20 + 1,1,IVar21);
  }
  *(ulong *)(IVar17 + 0x10) = uVar20 + 1;
  lVar24 = IVar17 + uVar20 * 0x28;
  *(undefined8 *)(lVar24 + 0x40) = uStack_d0;
  *(undefined8 *)(lVar24 + 0x28) = uStack_e8;
  *(undefined8 *)(lVar24 + 0x20) = local_f0;
  *(double *)(lVar24 + 0x38) = local_d8;
  *(undefined8 *)(lVar24 + 0x30) = uStack_e0;
  FUN_10044e474(IVar17);
LAB_100025ae8:
  lVar29 = lVar29 + 1;
  local_f0 = 0;
  uStack_d0 = 0xc000000000000000;
  local_d8 = 0.0;
  uStack_e8 = uVar15;
  uStack_e0 = uVar32;
  FUN_10003ef88(&local_f0);
  if (lVar29 == lVar28) goto LAB_100025c44;
  goto LAB_100025b0c;
LAB_100025c44:
  _swift_bridgeObjectRelease(local_1e0);
LAB_100025c58:
  if (local_f8 != '\x02') {
    uStack_e8 = uStack_118;
    local_f0 = local_120;
    local_d8 = dStack_108;
    uStack_e0 = uStack_110;
    uStack_d0 = local_100;
    local_c8 = local_f8;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_1f8 = &local_f0;
    local_200 = (uint)IVar14;
    FUN_1003fb48c(FUN_10003efbc,local_210,0xd0000000000000a9,(ulong)local_1d0 | 0x8000000000000000,
                  0xd000000000000012,(ulong)local_1d8 | 0x8000000000000000,0x48a,0);
    if (local_d8 <= 0.0) {
      iVar13 = 0x3c;
    }
    else {
      if (0x7fe < (ulong)local_d8 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10002604c);
        (*pcVar12)();
      }
      if (local_d8 <= -2147483649.0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100026050);
        (*pcVar12)();
      }
      if (2147483648.0 <= local_d8) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100026054);
        (*pcVar12)();
      }
      iVar13 = (int)local_d8;
    }
    FUN_10044e27c(iVar13);
    iVar11 = local_f0._4_4_;
    iVar13 = (int)uStack_e8;
    iVar3 = uStack_e8._4_4_;
    iVar5 = (int)uStack_e0;
    local_98 = 0;
    local_90 = local_f0._4_4_;
    iStack_8c = (int)uStack_e8;
    local_88 = uStack_e8._4_4_;
    iStack_84 = (int)uStack_e0;
    uStack_78 = 0xc000000000000000;
    local_80 = 0;
    FUN_10003efc8(&local_98,&local_c0);
    FUN_10044e774(&local_98);
    puVar23 = &local_c0;
    _swift_beginAccess(unaff_x20 + 0xa8,puVar23,0x20,0);
    lVar28 = *(long *)(unaff_x20 + 0xa8);
    local_1c8 = CONCAT44(local_1c8._4_4_,iVar3);
    local_1d0 = (char *)CONCAT44(local_1d0._4_4_,iVar5);
    if (*(long *)(lVar28 + 0x10) == 0) {
LAB_100025e48:
      _swift_endAccess(&local_c0);
      local_c0 = 0;
      local_b8 = iVar11;
      local_b4 = iVar13;
      local_b0 = iVar3;
      local_ac = iVar5;
      uStack_a0 = 0xc000000000000000;
      local_a8 = 0;
      FUN_10003efc8(&local_c0,&local_160);
      FUN_10044ee44(&local_c0);
      iVar6 = iVar11;
      iVar7 = iVar13;
      iVar8 = iVar3;
      iVar9 = iVar5;
      IVar17 = local_138;
    }
    else {
      uVar20 = IVar14 & 0xffffffff;
      thunk_FUN_1001a2c34();
      iVar9 = iStack_84;
      iVar8 = local_88;
      iVar7 = iStack_8c;
      iVar6 = local_90;
      if (((ulong)puVar23 & 1) == 0) goto LAB_100025e48;
      lVar28 = *(long *)(lVar28 + 0x38) + uVar20 * 0x30;
      iVar3 = *(int *)(lVar28 + 4);
      local_1ec = *(int *)(lVar28 + 8);
      local_1d8 = (char *)CONCAT44(local_1d8._4_4_,iVar13);
      iVar13 = *(int *)(lVar28 + 0xc);
      iVar5 = *(int *)(lVar28 + 0x10);
      local_1e0 = (undefined *)CONCAT44(local_1e0._4_4_,iVar5);
      local_1e8 = iVar3;
      local_1e4 = iVar13;
      _swift_endAccess(&local_c0);
      iVar10 = local_1ec;
      local_c0 = 0;
      local_b4 = local_1ec;
      uStack_a0 = 0xc000000000000000;
      local_a8 = 0;
      local_b8 = iVar3;
      local_b0 = iVar13;
      local_ac = iVar5;
      FUN_10003efc8(&local_c0,&local_160);
      FUN_10044ee44(&local_c0);
      local_160 = 0;
      iStack_158 = local_1e8;
      iStack_154 = iVar10;
      iVar13 = (int)local_1d8;
      local_150 = local_1e4;
      uStack_14c = local_1e0._0_4_;
      uStack_140 = 0xc000000000000000;
      local_148 = 0;
      FUN_10003ef88(&local_160);
      IVar17 = local_138;
    }
    local_138 = IVar17;
    if ((uVar16 & 1) != 0) {
      FUN_10044e434(IVar17,uStack_130,local_128);
      piVar26 = (int *)(IVar17 + 0x34);
      lVar28 = *(long *)(IVar17 + 0x10) + 1;
      do {
        lVar28 = lVar28 + -1;
        if (lVar28 == 0) {
          _swift_bridgeObjectRelease();
          local_160 = 0;
          iStack_158 = iVar11;
          local_150 = (int)local_1c8;
          uStack_14c = local_1d0._0_4_;
          uStack_140 = 0xc000000000000000;
          local_148 = 0;
          IVar17 = local_138;
          iStack_154 = iVar13;
          FUN_10044e434(local_138,uStack_130,local_128);
          FUN_10003efc8(&local_160,auStack_188);
          IVar19 = IVar17;
          _swift_isUniquelyReferenced_nonNull_native();
          IVar21 = IVar17;
          if ((IVar19 & 1) == 0) {
            IVar21 = 0;
            FUN_100034048(0,*(long *)(IVar17 + 0x10) + 1,1,IVar17);
          }
          uVar16 = *(ulong *)(IVar21 + 0x10);
          IVar17 = IVar21;
          if (*(ulong *)(IVar21 + 0x18) >> 1 <= uVar16) {
            IVar17 = (ID)(1 < *(ulong *)(IVar21 + 0x18));
            FUN_100034048(IVar17,uVar16 + 1,1,IVar21);
          }
          *(ulong *)(IVar17 + 0x10) = uVar16 + 1;
          lVar28 = IVar17 + uVar16 * 0x28;
          *(undefined8 *)(lVar28 + 0x40) = uStack_140;
          *(ulong *)(lVar28 + 0x28) = CONCAT44(iStack_154,iStack_158);
          *(undefined8 *)(lVar28 + 0x20) = local_160;
          *(undefined8 *)(lVar28 + 0x38) = local_148;
          *(ulong *)(lVar28 + 0x30) = CONCAT44(uStack_14c,local_150);
          FUN_10044e474(IVar17);
          goto LAB_100025f54;
        }
        piVar1 = piVar26 + -1;
        iVar3 = *piVar26;
        piVar2 = piVar26 + -3;
        piVar4 = piVar26 + -2;
        piVar26 = piVar26 + 10;
      } while (((*piVar2 != iVar6 || *piVar4 != iVar7) || *piVar1 != iVar8) || iVar3 != iVar9);
      _swift_bridgeObjectRelease();
    }
LAB_100025f54:
    local_160 = 0;
    iStack_158 = iVar11;
    local_150 = (int)local_1c8;
    uStack_14c = local_1d0._0_4_;
    uStack_140 = 0xc000000000000000;
    local_148 = 0;
    iStack_154 = iVar13;
    FUN_10003ef88(&local_160);
  }
  FUN_10044fd34(4,1);
  puVar23 = &local_160;
  _swift_beginAccess(unaff_x20 + 0x80,puVar23,0x20,0);
  lVar28 = *(long *)(unaff_x20 + 0x80);
  if (*(long *)(lVar28 + 0x10) != 0) {
    uVar16 = IVar14 & 0xffffffff;
    thunk_FUN_1001a2c34();
    if (((ulong)puVar23 & 1) != 0) {
      iVar13 = *(int *)(*(long *)(lVar28 + 0x38) + uVar16 * 4);
      _swift_endAccess(&local_160);
      if (iVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100025fd8);
        (*pcVar12)();
      }
      goto LAB_100025fe4;
    }
  }
  _swift_endAccess(&local_160);
  iVar13 = -1;
LAB_100025fe4:
  FUN_10044ff54(iVar13);
  uVar32 = local_128;
  uVar15 = uStack_130;
  IVar14 = local_138;
  FUN_100008184(local_138,uStack_130);
  _swift_retain(uVar32);
  FUN_100006cdc(IVar14,uVar15);
  _swift_release(uVar32);
  return IVar14;
}

