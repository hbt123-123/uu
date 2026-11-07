// rea decompile_all
// name: FUN_10064fc34
// address: 0x10064fc34
// body: available
// range: 0x10064fc34-0x10065030f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064fc34(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined1 auStack_f0 [8];
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined1 local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined1 local_70;
  undefined *local_68;
  
  local_b8 = *(long *)(param_4 + 0x10);
  uVar18 = *(undefined8 *)(*(long *)(*(long *)(local_b8 + 0x10) + 8) + 0x10);
  lVar3 = 0;
  local_d8 = param_5;
  local_c0 = param_6;
  local_a8 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar18,param_3,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  puVar9 = PTR___sSBTL_100995758;
  puVar19 = auStack_f0 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___sSBTL_100995758,PTR___s14RawSignificandSBTl_1009956d8);
  lVar16 = (long)puVar19 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_d0 = lVar4;
  lStack_c8 = lVar16;
  _swift_getAssociatedTypeWitness(0,param_4,param_3,puVar9,PTR___s11RawExponentSBTl_1009956c8);
  lStack_e0 = lVar16 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined *)*param_2;
  puVar8 = (undefined *)param_2[1];
  bVar1 = *(byte *)(param_2 + 2);
  puVar20 = (undefined *)(ulong)bVar1;
  puVar21 = (undefined *)param_2[3];
  if (bVar1 == 0) {
    if (puVar9 == (undefined *)0x0 && puVar8 == (undefined *)0x0) goto LAB_10064fdd8;
  }
  else if ((bVar1 != 1) && (*(long *)(puVar21 + 0x10) == 0)) {
LAB_10064fdd8:
    FUN_1006433f0(param_2);
    uVar7 = uVar18;
    _swift_getAssociatedConformanceWitness
              (uVar18,param_3,lVar3,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
               PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (puVar19,&DAT_10084d4f0,0x100,lVar3,uVar7);
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(local_a8,puVar19,param_3,uVar18)
    ;
    return;
  }
  puVar6 = puVar9;
  local_e8 = lVar5;
  FUN_10065f798(puVar9,puVar8,puVar20,puVar21);
  puVar13 = puVar6 + -1;
  if (SBORROW8((long)puVar6,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006502e0);
    (*pcVar2)();
  }
  lVar4 = param_3;
  __sSB19significandBitCountSivgZTj(param_3,param_4);
  lVar3 = (long)puVar6 - lVar4;
  if (SBORROW8((long)puVar6,lVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006502e4);
    (*pcVar2)();
  }
  if (SBORROW8(lVar3,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006502e8);
    (*pcVar2)();
  }
  puVar6 = (undefined *)(lVar3 + -2);
  if (SBORROW8(lVar3 + -1,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006502ec);
    (*pcVar2)();
  }
  local_b0 = puVar13;
  if ((long)puVar6 < 0) {
    if (SBORROW8(0,(long)puVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100650300);
      (*pcVar2)();
    }
    _swift_bridgeObjectRetain(puVar21);
    FUN_10064fbe0();
  }
  else {
    _swift_bridgeObjectRetain(puVar21);
    puVar13 = puVar9;
    puVar14 = puVar8;
    puVar21 = puVar20;
    FUN_10065933c();
    puVar9 = puVar6;
    puVar8 = puVar13;
    puVar20 = puVar14;
  }
  FUN_1006433f0(param_2);
  uVar17 = (uint)puVar20;
  local_70 = SUB81(puVar20,0);
  uVar15 = (uint)puVar9;
  local_80 = puVar9;
  puStack_78 = puVar8;
  local_68 = puVar21;
  if (((ulong)puVar20 & 0xff) == 0) {
LAB_10064fed8:
    if ((~uVar15 & 3) == 0) {
      FUN_10065f798(puVar9,puVar8,puVar20,puVar21);
      puVar8 = local_b0;
      if ((long)puVar9 < 2) {
        if ((uVar17 & 0xff) < 2) {
          _swift_bridgeObjectRelease(puVar21);
          local_80 = (undefined *)0x0;
          puStack_78 = (undefined *)0x0;
          local_70 = 0;
          local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
        else {
          puVar9 = puVar21;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar9 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100629f38(0,*(ulong *)(puVar21 + 0x18) >> 1);
            _swift_bridgeObjectRelease(puVar21);
          }
          else {
            uVar18 = *(undefined8 *)(puVar21 + 0x10);
            puVar20 = puVar21;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar9 = puVar21;
            if (((ulong)puVar20 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_10062958c(0,uVar18,1,puVar21);
              local_68 = puVar9;
            }
            FUN_1003d2e64(0,uVar18,0);
          }
          local_68 = puVar9;
          FUN_100628ce8(0,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
        }
      }
      else {
        FUN_1006599cc(1);
        puVar8 = local_b0;
      }
      FUN_100642874(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
      puVar9 = local_80;
      FUN_10065f87c(local_80,puStack_78,local_70,local_68);
      lVar3 = param_3;
      __sSB19significandBitCountSivgZTj(param_3,param_4);
      puVar20 = puVar8;
      if ((lVar3 <= (long)puVar9) && (puVar20 = puVar8 + 1, SCARRY8((long)puVar8,1))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100650310);
        (*pcVar2)();
      }
      goto LAB_10065011c;
    }
  }
  else if ((uVar17 & 0xff) == 1) {
    if (SBORROW8((long)puVar8,(long)puVar9)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100650304);
      (*pcVar2)();
    }
    if (0 < (long)puVar8 - (long)puVar9) {
      if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100650308);
        (*pcVar2)();
      }
      if (*(undefined **)(puVar21 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10065030c);
        (*pcVar2)();
      }
      puVar13 = puVar21 + (long)puVar9 * 8;
LAB_10064fed4:
      uVar15 = (uint)*(undefined8 *)(puVar13 + 0x20);
      goto LAB_10064fed8;
    }
  }
  else {
    puVar13 = puVar21;
    if (*(long *)(puVar21 + 0x10) != 0) goto LAB_10064fed4;
  }
  FUN_10065f798(puVar9,puVar8,puVar20,puVar21);
  puVar20 = local_b0;
  if ((long)puVar9 < 2) {
    if ((uVar17 & 0xff) < 2) {
      _swift_bridgeObjectRelease(puVar21);
      local_80 = (undefined *)0x0;
      puStack_78 = (undefined *)0x0;
      local_70 = 0;
      local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      puVar9 = puVar21;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar9 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_100629f38(0,*(ulong *)(puVar21 + 0x18) >> 1);
        _swift_bridgeObjectRelease(puVar21);
      }
      else {
        uVar18 = *(undefined8 *)(puVar21 + 0x10);
        puVar8 = puVar21;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar9 = puVar21;
        if (((ulong)puVar8 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_10062958c(0,uVar18,1,puVar21);
          local_68 = puVar9;
        }
        FUN_1003d2e64(0,uVar18,0);
      }
      local_68 = puVar9;
      FUN_100628ce8(0,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
    }
  }
  else {
    FUN_1006599cc(1);
    puVar20 = local_b0;
  }
LAB_10065011c:
  lVar3 = param_3;
  __sSB16exponentBitCountSivgZTj(param_3,param_4);
  uVar10 = lVar3 - 1;
  if (SBORROW8(lVar3,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006502f0);
    (*pcVar2)();
  }
  lVar3 = 1L << (uVar10 & 0x3f);
  if (0x3f < uVar10) {
    lVar3 = 0;
  }
  lVar4 = 0;
  if (uVar10 < 0x41) {
    lVar4 = lVar3;
  }
  lVar3 = lVar4 + -1;
  if (SBORROW8(lVar4,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006502f4);
    (*pcVar2)();
  }
  if (lVar3 < (long)puVar20) {
    FUN_1006433f0(param_2);
    __sSF8infinityxvgZTj(local_a8,param_3,local_b8);
    puVar9 = local_68;
  }
  else {
    __sSB19significandBitCountSivgZTj(param_3,param_4);
    puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar21 = (undefined *)0x1;
    uVar18 = 0;
    local_90 = 0;
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10064fbe0();
    uVar10 = 1;
    local_a0 = puVar21;
    puStack_98 = (undefined *)uVar18;
    local_88 = puVar8;
    FUN_10065eb84(1,0,0,puVar9,0);
    puVar9 = local_88;
    if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006502f8);
      (*pcVar2)();
    }
    FUN_1006489ac(&local_80,local_a0,puStack_98,local_90,local_88);
    _swift_bridgeObjectRelease(puVar9);
    plVar11 = param_2;
    FUN_1006433f0(param_2);
    if (SCARRY8(lVar3,(long)puVar20)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006502fc);
      (*pcVar2)();
    }
    lVar4 = param_2[4];
    uVar18 = *(undefined8 *)(local_d8 + 8);
    local_a0 = puVar20 + lVar3;
    FUN_10064af28();
    lVar3 = lStack_e0;
    ppuVar12 = &local_a0;
    __sSzyxqd__cSzRd__lufCTj(lStack_e0,ppuVar12,PTR___sSiN_100995968,plVar11,local_e8,uVar18);
    puVar9 = local_68;
    puStack_98 = puStack_78;
    local_a0 = local_80;
    local_90 = local_70;
    local_88 = local_68;
    uVar18 = *(undefined8 *)(local_c0 + 8);
    FUN_1006441d8();
    _swift_bridgeObjectRetain(puVar9);
    lVar5 = lStack_c8;
    __sSzyxqd__cSzRd__lufCTj(lStack_c8,&local_a0,&DAT_1009e3af0,ppuVar12,local_d0,uVar18);
    __sSB4sign18exponentBitPattern011significandcD0xs17FloatingPointSignO_11RawExponentQz0I11SignificandQztcfCTj
              (local_a8,(char)lVar4,lVar3,lVar5,param_3,param_4);
  }
  _swift_bridgeObjectRelease(puVar9);
  return;
}

