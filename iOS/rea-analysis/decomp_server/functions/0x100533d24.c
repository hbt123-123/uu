// rea decompile_all
// name: FUN_100533d24
// address: 0x100533d24
// body: available
// range: 0x100533d24-0x10053419f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010053413c) */

void FUN_100533d24(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined8 *******pppppppuVar11;
  long *plVar12;
  undefined8 ******local_d0;
  long local_c8;
  undefined8 ******local_c0;
  ulong uStack_b8;
  
  pppppppuVar3 = (undefined8 *******)0x0;
  __sSS10FoundationE8EncodingVMa();
  ppppppuVar9 = pppppppuVar3[-1];
  pppppppuVar11 =
       (undefined8 *******)((long)&local_d0 - ((long)ppppppuVar9[8] + 0xfU & 0xfffffffffffffff0));
  pppppppuVar4 = pppppppuVar3;
  FUN_100535660();
  plVar12 = unaff_x20 + 2;
  lVar10 = *plVar12;
  pppppppuVar5 = (undefined8 *******)*unaff_x20;
  uVar6 = unaff_x20[1];
  if (pppppppuVar5 == (undefined8 *******)0x0) {
    if (lVar10 != 0) goto LAB_100533da0;
  }
  else if (lVar10 != uVar6 - (long)pppppppuVar5) {
LAB_100533da0:
    if (*(char *)((long)pppppppuVar5 + lVar10) == '\"') {
      local_c8 = uVar6 - (long)pppppppuVar5;
      lVar1 = 0;
      if (pppppppuVar5 != (undefined8 *******)0x0) {
        lVar1 = local_c8;
      }
      local_d0 = pppppppuVar3;
      if ((lVar10 < 0) || (lVar1 <= lVar10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100534150);
        (*pcVar2)();
      }
      unaff_x20[2] = lVar10 + 1;
      FUN_10052a52c();
      pppppppuVar4 = pppppppuVar5;
      FUN_100535954(pppppppuVar5,uVar6,plVar12,lVar1);
      if (unaff_x21 != 0) goto LAB_100533ec0;
      pppppppuVar3 = &local_c0;
      uVar7 = uVar6;
      FUN_1004f9924();
      if ((uVar6 & 1) == 0) {
        lVar10 = *plVar12;
        if (pppppppuVar5 == (undefined8 *******)0x0) {
          if (lVar10 != 0) goto LAB_100533f78;
        }
        else if (lVar10 != local_c8) {
LAB_100533f78:
          if (*(char *)((long)pppppppuVar5 + lVar10) == '\"') {
            if ((-1 < lVar10) && (lVar10 < lVar1)) {
              *plVar12 = lVar10 + 1;
              return;
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10053419c);
            (*pcVar2)();
          }
          goto LAB_10053416c;
        }
        goto LAB_100533f18;
      }
      unaff_x20[2] = lVar10;
      FUN_10053317c();
      if ((pppppppuVar3 == (undefined8 *******)0x4e614e) && (uVar7 == 0xe300000000000000)) {
LAB_100533e74:
        _swift_bridgeObjectRelease(uVar7);
        return;
      }
      uVar6 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x4e614e,0xe300000000000000,pppppppuVar3,uVar7,0);
      if ((uVar6 & 1) != 0) goto LAB_100533e74;
      if ((pppppppuVar3 == (undefined8 *******)0x666e49) && (uVar7 == 0xe300000000000000)) {
LAB_100533fe0:
        _swift_bridgeObjectRelease(uVar7);
        return;
      }
      uVar6 = 0x666e49;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x666e49,0xe300000000000000,pppppppuVar3,uVar7,0);
      if ((uVar6 & 1) != 0) goto LAB_100533fe0;
      if ((pppppppuVar3 == (undefined8 *******)0x666e492d) && (uVar7 == 0xe400000000000000)) {
LAB_100534030:
        _swift_bridgeObjectRelease(uVar7);
        return;
      }
      uVar6 = 0x666e492d;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x666e492d,0xe400000000000000,pppppppuVar3,uVar7,0);
      if ((uVar6 & 1) != 0) goto LAB_100534030;
      uVar6 = 0x7974696e69666e49;
      if (((pppppppuVar3 == (undefined8 *******)0x7974696e69666e49) && (uVar7 == 0xe800000000000000)
          ) || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x7974696e69666e49,0xe800000000000000,pppppppuVar3,uVar7,0),
               (uVar6 & 1) != 0)) goto LAB_100533fe0;
      uVar6 = 0x74696e69666e492d;
      if (((pppppppuVar3 == (undefined8 *******)0x74696e69666e492d) && (uVar7 == 0xe900000000000079)
          ) || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x74696e69666e492d,0xe900000000000079,pppppppuVar3,uVar7,0),
               (uVar6 & 1) != 0)) goto LAB_100534030;
      local_c0 = pppppppuVar3;
      uStack_b8 = uVar7;
      __sSS10FoundationE8EncodingV4utf8ACvgZ(pppppppuVar11);
      FUN_1004f9a5c();
      uVar8 = 0;
      pppppppuVar4 = pppppppuVar11;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (pppppppuVar11,0,PTR___sSSN_1009957f8,uVar6);
      (*(code *)ppppppuVar9[1])(pppppppuVar11,local_d0);
      if (0xe < uVar8 >> 0x3c) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005341a0);
        (*pcVar2)();
      }
      _swift_bridgeObjectRelease(uVar7);
      pppppppuVar5 = pppppppuVar4;
      FUN_1005332f0(pppppppuVar4,uVar8);
      FUN_100006cc8(pppppppuVar4,uVar8);
      if (((ulong)pppppppuVar5 >> 0x20 & 1) == 0) {
        return;
      }
    }
    else {
      FUN_10052a52c();
      lVar10 = 0;
      if (pppppppuVar5 != (undefined8 *******)0x0) {
        lVar10 = uVar6 - (long)pppppppuVar5;
      }
      FUN_100535954(pppppppuVar5,uVar6,plVar12,lVar10);
      if (unaff_x21 != 0) {
LAB_100533ec0:
        FUN_1004f9924(&local_c0);
        return;
      }
      pppppppuVar4 = &local_c0;
      FUN_1004f9924();
      if (((uVar6 & 1) == 0) && ((uint)ABS((float)(double)pppppppuVar5) < 0x7f800000)) {
        return;
      }
    }
LAB_10053416c:
    FUN_1004f98e4();
    _swift_allocError(&DAT_1009d03a0,pppppppuVar4,0,0);
    ppppppuVar9 = (undefined8 ******)0x1;
    goto LAB_100533f40;
  }
LAB_100533f18:
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,pppppppuVar4,0,0);
  ppppppuVar9 = (undefined8 ******)0xd;
LAB_100533f40:
  pppppppuVar4[1] = ppppppuVar9;
  *pppppppuVar4 = (undefined8 ******)0x0;
  _swift_willThrow();
  return;
}

