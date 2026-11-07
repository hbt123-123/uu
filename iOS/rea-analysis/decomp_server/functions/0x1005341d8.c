// rea decompile_all
// name: FUN_1005341d8
// address: 0x1005341d8
// body: available
// range: 0x1005341d8-0x1005344c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010053436c) */

undefined8 ******* FUN_1005341d8(code *param_1)

{
  undefined8 ******ppppppuVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *******unaff_x20;
  long unaff_x21;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *****apppppuStack_e0 [2];
  undefined8 ******local_c0;
  undefined8 *****pppppuStack_b8;
  
  pppppppuVar4 = (undefined8 *******)0x0;
  __sSS10FoundationE8EncodingVMa();
  ppppppuVar10 = pppppppuVar4[-1];
  pppppppuVar12 =
       (undefined8 *******)
       ((long)apppppuStack_e0 - ((long)ppppppuVar10[8] + 0xfU & 0xfffffffffffffff0));
  pppppppuVar5 = pppppppuVar4;
  FUN_100535660();
  pppppppuVar13 = unaff_x20 + 2;
  ppppppuVar11 = *pppppppuVar13;
  pppppppuVar7 = (undefined8 *******)*unaff_x20;
  ppppppuVar9 = unaff_x20[1];
  if (pppppppuVar7 == (undefined8 *******)0x0) {
    if (ppppppuVar11 != (undefined8 ******)0x0) goto LAB_100534254;
  }
  else if (ppppppuVar11 != (undefined8 ******)((long)ppppppuVar9 - (long)pppppppuVar7)) {
LAB_100534254:
    if (*(char *)((long)pppppppuVar7 + (long)ppppppuVar11) != '\"') {
      FUN_10052a52c();
      lVar2 = 0;
      if (pppppppuVar7 != (undefined8 *******)0x0) {
        lVar2 = (long)ppppppuVar9 - (long)pppppppuVar7;
      }
      (*param_1)(pppppppuVar7,ppppppuVar9,pppppppuVar13,lVar2);
      if (unaff_x21 != 0) {
LAB_1005343b8:
        FUN_1004f9924(&local_c0);
        return &local_c0;
      }
      pppppppuVar5 = &local_c0;
      FUN_1004f9924();
      pppppppuVar6 = pppppppuVar7;
joined_r0x00010053448c:
      if (((ulong)ppppppuVar9 & 1) == 0) {
        return pppppppuVar6;
      }
LAB_100534490:
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,pppppppuVar5,0,0);
      ppppppuVar9 = (undefined8 ******)0x1;
      goto LAB_100534418;
    }
    apppppuStack_e0[1] = (undefined8 *****)((long)ppppppuVar9 - (long)pppppppuVar7);
    ppppppuVar1 = (undefined8 ******)0x0;
    if (pppppppuVar7 != (undefined8 *******)0x0) {
      ppppppuVar1 = (undefined8 ******)apppppuStack_e0[1];
    }
    if (((long)ppppppuVar11 < 0) || ((long)ppppppuVar1 <= (long)ppppppuVar11)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005344c0);
      (*pcVar3)();
    }
    unaff_x20[2] = (undefined8 ******)((long)ppppppuVar11 + 1);
    FUN_10052a52c();
    pppppppuVar6 = pppppppuVar7;
    (*param_1)(pppppppuVar7,ppppppuVar9,pppppppuVar13,ppppppuVar1);
    if (unaff_x21 != 0) goto LAB_1005343b8;
    pppppppuVar5 = &local_c0;
    ppppppuVar8 = ppppppuVar9;
    FUN_1004f9924();
    if (((ulong)ppppppuVar9 & 1) != 0) {
      unaff_x20[2] = ppppppuVar11;
      FUN_10053317c();
      local_c0 = pppppppuVar5;
      pppppuStack_b8 = ppppppuVar8;
      __sSS10FoundationE8EncodingV4utf8ACvgZ(pppppppuVar12);
      FUN_1004f9a5c();
      ppppppuVar11 = (undefined8 ******)0x0;
      pppppppuVar7 = pppppppuVar12;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (pppppppuVar12,0,PTR___sSSN_1009957f8,pppppppuVar5);
      (*(code *)ppppppuVar10[1])(pppppppuVar12,pppppppuVar4);
      if (0xe < (ulong)ppppppuVar11 >> 0x3c) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005344c8);
        (*pcVar3)();
      }
      _swift_bridgeObjectRelease(ppppppuVar8);
      pppppppuVar6 = pppppppuVar7;
      ppppppuVar9 = ppppppuVar11;
      FUN_10053345c(pppppppuVar7);
      FUN_100006cc8(pppppppuVar7,ppppppuVar11);
      pppppppuVar5 = pppppppuVar7;
      goto joined_r0x00010053448c;
    }
    ppppppuVar9 = *pppppppuVar13;
    unaff_x20 = pppppppuVar6;
    if (pppppppuVar7 == (undefined8 *******)0x0) {
      if (ppppppuVar9 != (undefined8 ******)0x0) goto LAB_100534450;
    }
    else if (ppppppuVar9 != (undefined8 ******)apppppuStack_e0[1]) {
LAB_100534450:
      if (*(char *)((long)pppppppuVar7 + (long)ppppppuVar9) == '\"') {
        if ((-1 < (long)ppppppuVar9) && ((long)ppppppuVar9 < (long)ppppppuVar1)) {
          *pppppppuVar13 = (undefined8 ******)((long)ppppppuVar9 + 1);
          return pppppppuVar6;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005344c4);
        (*pcVar3)();
      }
      goto LAB_100534490;
    }
  }
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,pppppppuVar5,0,0);
  ppppppuVar9 = (undefined8 ******)0xd;
  pppppppuVar6 = unaff_x20;
LAB_100534418:
  pppppppuVar5[1] = ppppppuVar9;
  *pppppppuVar5 = (undefined8 ******)0x0;
  _swift_willThrow();
  return pppppppuVar6;
}

