// rea decompile_all
// name: FUN_10064f380
// address: 0x10064f380
// body: available
// range: 0x10064f380-0x10064fb77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10064f380(undefined8 param_1,ulong param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_130 [4];
  uint local_12c;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulong local_f0;
  long local_e8;
  undefined1 *local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  ulong local_c0;
  ulong local_b8;
  long local_b0;
  ulong local_a8;
  undefined *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined *local_70;
  
  puVar5 = PTR___sSFTL_1009957a0;
  lVar20 = *(long *)(param_3 + 0x10);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar20,param_2,PTR___sSFTL_1009957a0,PTR___s8ExponentSFTl_100995708);
  lVar3 = lVar20;
  _swift_getAssociatedConformanceWitness
            (lVar20,param_2,uVar2,puVar5,PTR___sSF8ExponentSF_SZTn_100995798);
  local_b0 = *(long *)(lVar3 + 8);
  local_d0 = *(undefined8 *)(*(long *)(local_b0 + 0x18) + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,local_d0,uVar2,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar14 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  uVar4 = 0;
  local_e0 = auStack_130 + -(lVar14 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar3;
  _swift_checkMetadataState(0,uVar2);
  lVar17 = *(long *)(uVar4 - 8);
  uVar15 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c0 = (long)(auStack_130 + -(lVar14 + 0xfU & 0xfffffffffffffff0)) - uVar15;
  uVar15 = local_c0 - uVar15;
  puVar5 = (undefined *)0x0;
  local_b8 = uVar4;
  local_a8 = uVar15;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,PTR___sSBTL_100995758,PTR___s14RawSignificandSBTl_1009956d8);
  local_c8 = *(long *)(puVar5 + -8);
  puVar16 = (undefined *)(uVar15 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  local_a0 = puVar16;
  local_98 = puVar5;
  __ss25FloatingPointRoundingRuleOMa();
  lVar14 = *(long *)(lVar3 + -8);
  lVar21 = (long)puVar16 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = *(long *)(param_2 - 8);
  local_90 = lVar21 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = param_2;
  __sSF8isFiniteSbvgTj(param_2,lVar20);
  if ((uVar4 & 1) == 0) {
LAB_10064f79c:
    (**(code **)(lVar19 + 8))(param_1,param_2);
    return 0;
  }
  uVar4 = param_2;
  __sSF6isZeroSbvgTj(param_2,lVar20);
  if ((uVar4 & 1) != 0) {
    (**(code **)(lVar19 + 8))(param_1,param_2);
    return 0;
  }
  uVar4 = param_2;
  __sSF4signs17FloatingPointSignOvgTj(param_2,lVar20);
  if ((uVar4 & 1) != 0) goto LAB_10064f79c;
  local_e8 = lVar19;
  (**(code **)(lVar14 + 0x68))
            (lVar21,*(undefined4 *)
                     PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_100995bc0,lVar3);
  uVar4 = local_90;
  __sSF7roundedyxs25FloatingPointRoundingRuleOFTj(local_90,lVar21,param_2,lVar20);
  (**(code **)(lVar14 + 8))(lVar21,lVar3);
  uVar15 = uVar4;
  __sSQ2eeoiySbx_xtFZTj(uVar4,param_1,param_2,*(undefined8 *)(*(long *)(lVar20 + 8) + 8));
  puVar5 = local_a0;
  if ((uVar15 & 1) == 0) {
    pcVar18 = *(code **)(local_e8 + 8);
    (*pcVar18)(param_1,param_2);
    (*pcVar18)(uVar4,param_2);
    return 0;
  }
  local_f8 = param_1;
  __sSB21significandBitPattern14RawSignificandQzvgTj(local_a0,param_2,param_3);
  uVar4 = local_a8;
  __sSF8exponent8ExponentQzvgTj(local_a8,param_2,lVar20);
  lVar3 = local_b0;
  uVar15 = local_b8;
  uVar2 = 1;
  uVar9 = 0;
  local_10c = 0;
  puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100657dd0();
  pcVar18 = *(code **)(lVar17 + 8);
  local_118 = puVar16;
  local_108 = uVar9;
  uStack_100 = uVar2;
  (*pcVar18)(uVar4,uVar15);
  puVar10 = local_98;
  lVar14 = param_3;
  puVar12 = PTR___sSBTL_100995758;
  _swift_getAssociatedConformanceWitness
            (param_3,param_2,local_98,PTR___sSBTL_100995758,
             PTR___sSB14RawSignificandSB_SUTn_100995750);
  puVar16 = *(undefined **)(lVar14 + 8);
  FUN_10065250c();
  uVar6 = param_2;
  local_128 = puVar5;
  local_120 = puVar10;
  __sSB19significandBitCountSivgZTj(param_2,param_3);
  uVar4 = local_c0;
  local_f0 = uVar6;
  __sSF8exponent8ExponentQzvgTj(local_c0,param_2,lVar20);
  uVar6 = uVar15;
  __sSz8isSignedSbvgZTj(uVar15,lVar3);
  if (((uVar6 & 1) != 0) && (uVar6 = uVar15, __sSz8bitWidthSivgTj(uVar15,lVar3), 0x40 < (long)uVar6)
     ) {
    local_88 = 0x8000000000000000;
    uVar6 = uVar15;
    __sSz8isSignedSbvgZTj(uVar15,lVar3);
    uVar8 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar6 = uVar15;
      __sSz8isSignedSbvgZTj(uVar15,lVar3);
      uVar7 = uVar15;
      __sSz8bitWidthSivgTj();
      uVar2 = local_d0;
      lVar14 = local_d8;
      if ((uVar6 & 1) == 0) {
        if (0x3f < (long)uVar7) goto LAB_10064f95c;
      }
      else {
        local_12c = (uint)puVar16;
        if (0x40 < (long)uVar7) {
          FUN_10064af28();
          uVar6 = local_a8;
          __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
                    (local_a8,&local_88,PTR___sSiN_100995968,uVar7,uVar15,lVar3);
          __sSL1loiySbx_xtFZTj(uVar4,uVar6,uVar15,*(undefined8 *)(*(long *)(lVar3 + 0x20) + 8));
          (*pcVar18)(uVar6,uVar15);
          puVar16 = (undefined *)(ulong)local_12c;
          goto joined_r0x00010064f89c;
        }
        uVar9 = local_d0;
        _swift_getAssociatedConformanceWitness
                  (local_d0,uVar15,local_d8,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
                   PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
        puVar1 = local_e0;
        __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
                  (local_e0,&DAT_10084d4f0,0x100,lVar14,uVar9);
        uVar6 = local_a8;
        __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj
                  (local_a8,puVar1,uVar15,uVar2);
        __sSL1loiySbx_xtFZTj(uVar4,uVar6,uVar15,*(undefined8 *)(*(long *)(lVar3 + 0x20) + 8));
        (*pcVar18)(uVar6,uVar15);
        puVar16 = (undefined *)(ulong)local_12c;
        if ((uVar8 & 1) != 0) goto LAB_10064fb74;
      }
    }
    else {
      uVar6 = uVar15;
      __sSz8bitWidthSivgTj(uVar15,lVar3);
      if (0x3f < (long)uVar6) {
        FUN_10064af28();
        uVar7 = local_a8;
        __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
                  (local_a8,&local_88,PTR___sSiN_100995968,uVar6,uVar15,lVar3);
        __sSL1loiySbx_xtFZTj(uVar4,uVar7,uVar15,*(undefined8 *)(*(long *)(lVar3 + 0x20) + 8));
        (*pcVar18)(uVar7,uVar15);
joined_r0x00010064f89c:
        if ((uVar8 & 1) != 0) {
LAB_10064fb74:
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x10064fb78);
          (*pcVar18)();
        }
        goto LAB_10064f95c;
      }
    }
    __sSz8_lowWordSuvgTj(uVar15,lVar3);
  }
LAB_10064f95c:
  uVar6 = uVar15;
  __sSz8bitWidthSivgTj(uVar15,lVar3);
  if (((long)uVar6 < 0x41) &&
     ((uVar6 = uVar15, __sSz8bitWidthSivgTj(uVar15,lVar3), uVar6 != 0x40 ||
      (uVar6 = uVar15, __sSz8isSignedSbvgZTj(uVar15,lVar3), (uVar6 & 1) != 0)))) goto LAB_10064fa5c;
  local_88 = 0x7fffffffffffffff;
  uVar6 = uVar15;
  __sSz8isSignedSbvgZTj(uVar15,lVar3);
  uVar8 = uVar15;
  __sSz8bitWidthSivgTj(uVar15,lVar3);
  if ((uVar6 & 1) == 0) {
    if ((long)uVar8 < 0x40) goto LAB_10064fa48;
  }
  else if ((long)uVar8 < 0x41) {
LAB_10064fa48:
    __sSz8_lowWordSuvgTj(uVar15,lVar3);
    goto LAB_10064fa5c;
  }
  FUN_10064af28();
  uVar6 = local_a8;
  __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
            (local_a8,&local_88,PTR___sSiN_100995968,uVar8,uVar15,lVar3);
  uVar8 = uVar6;
  __sSL1loiySbx_xtFZTj(uVar6,uVar4,uVar15,*(undefined8 *)(*(long *)(lVar3 + 0x20) + 8));
  (*pcVar18)(uVar6,uVar15);
  if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10064fa10);
    (*pcVar18)();
  }
LAB_10064fa5c:
  uVar6 = uVar15;
  __sSz8_lowWordSuvgTj(uVar15,lVar3);
  (*pcVar18)(uVar4,uVar15);
  uVar4 = local_90;
  puVar5 = (undefined *)(local_f0 - uVar6);
  if (SBORROW8(local_f0,uVar6)) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10064fb70);
    (*pcVar18)();
  }
  if ((long)puVar5 < 0) {
    lVar3 = -(long)puVar5;
    if (SBORROW8(0,(long)puVar5)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10064fb74);
      (*pcVar18)();
    }
    puVar5 = local_128;
    puVar10 = local_120;
    puVar13 = puVar12;
    FUN_10064fbe0(local_128,local_120,puVar16,puVar12,lVar3);
  }
  else {
    puVar10 = local_128;
    puVar11 = local_120;
    puVar13 = puVar16;
    FUN_10065933c(puVar5,local_128,local_120,puVar16,puVar12);
    puVar16 = puVar11;
  }
  _swift_bridgeObjectRelease(puVar12);
  local_88 = uStack_100;
  uStack_80 = local_108;
  local_78 = (undefined1)local_10c;
  local_70 = local_118;
  FUN_100642874(puVar5,puVar10,puVar16,puVar13,0);
  _swift_bridgeObjectRelease(puVar13);
  pcVar18 = *(code **)(local_e8 + 8);
  (*pcVar18)(local_f8,param_2);
  (**(code **)(local_c8 + 8))(local_a0,local_98);
  (*pcVar18)(uVar4,param_2);
  return local_88;
}

