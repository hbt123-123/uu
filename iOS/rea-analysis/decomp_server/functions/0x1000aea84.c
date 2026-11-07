// rea decompile_all
// name: FUN_1000aea84
// address: 0x1000aea84
// body: available
// range: 0x1000aea84-0x1000af1d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000bc1f4) */
/* WARNING: Type propagation algorithm not settling */

double *******
FUN_1000aea84(double *******param_1,double ******param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6,TargetResilientWitnessHeader *param_7,
             double ******param_8,double ******param_9,code *param_10,ulong param_11,
             undefined8 param_12,undefined8 param_13)

{
  long *plVar1;
  code *pcVar2;
  double *******pppppppdVar3;
  bool in_ZR;
  bool bVar4;
  int iVar5;
  double *****pppppdVar6;
  ID IVar7;
  void *aBlock;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  double *****pppppdVar12;
  double ******ppppppdVar13;
  undefined *puVar14;
  double *******pppppppdVar15;
  long lVar16;
  long lVar17;
  undefined ***pppuVar18;
  TargetResilientWitnessHeader *pTVar19;
  byte bVar20;
  byte bVar21;
  code cVar22;
  undefined **ppuVar23;
  long extraout_x8;
  long extraout_x8_00;
  double ******ppppppdVar24;
  double *****pppppdVar25;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ushort *puVar26;
  ulong uVar27;
  long lVar28;
  char *pcVar29;
  ulong uVar30;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined **in_x16;
  double ******ppppppdVar31;
  undefined8 uVar32;
  uint uVar33;
  double *******pppppppdVar34;
  double *******pppppppdVar35;
  double *******pppppppdVar36;
  uint uVar37;
  double *******unaff_x22;
  double ******ppppppdVar38;
  double *******pppppppdVar39;
  undefined **unaff_x23;
  undefined8 *puVar40;
  double *******unaff_x24;
  ulong uVar41;
  double *******unaff_x25;
  undefined8 *puVar42;
  double *******unaff_x26;
  undefined8 *puVar43;
  double *******unaff_x27;
  long lVar44;
  double ******unaff_x28;
  long lVar45;
  double ******ppppppdVar46;
  double ******ppppppdVar47;
  double ******ppppppdVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  double ******appppppdStack_300 [2];
  code *pcStack_2f0;
  undefined *puStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  double *******pppppppdStack_290;
  double *******pppppppdStack_288;
  double ******ppppppdStack_280;
  double ******ppppppdStack_270;
  double *****in_stack_fffffffffffffd98;
  double ******ppppppdStack_260;
  double ******ppppppdStack_258;
  double *****in_stack_fffffffffffffdb0;
  double *****in_stack_fffffffffffffdb8;
  double ****in_stack_fffffffffffffdc0;
  double ****ppppdStack_238;
  double *******in_stack_fffffffffffffdd8;
  double ******ppppppdStack_220;
  long lStack_208;
  double *******pppppppdStack_200;
  double *******pppppppdStack_1f8;
  double ******ppppppdStack_1f0;
  double ******ppppppdStack_1e8;
  undefined1 uStack_1a0;
  double *******apppppppdStack_d8 [2];
  double *******pppppppdStack_c8;
  double *******pppppppdStack_c0;
  undefined **ppuStack_b8;
  double *******pppppppdStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  TargetResilientWitnessHeader aTStack_80 [2];
  double ******local_78;
  double *******pppppppdStack_70;
  double ******in_stack_ffffffffffffff98;
  double ******ppppppdStack_60;
  undefined8 local_58;
  long lStack_48;
  
  pppppppdVar3 = &ppppppdStack_270;
  pppppppdVar34 = &local_78;
  ppuVar23 = (undefined **)((ulong)param_7 & 0xff);
  puVar26 = &switchD_1000aeac0::switchdataD_10080b8f0;
  uVar30 = (ulong)(&switchD_1000aeac0::switchdataD_10080b8f0)[(long)ppuVar23];
  pcVar29 = (char *)(uVar30 * 4 + 0x1000aeac4);
  uVar37 = (uint)unaff_x22;
  uVar33 = (uint)pppppppdVar34;
  pppppppdVar36 = (double *******)param_6;
  pppppppdVar15 = (double *******)param_6;
  pcVar2 = param_6;
  pppppppdVar35 = pppppppdVar34;
  pppppppdVar39 = unaff_x22;
  switch(ppuVar23) {
  default:
    param_6 = (code *)&DAT_100a76d38;
    FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
    _swift_initStackObject();
    *(double *******)((long)param_6 + 0x18) = (double ******)0x2;
    *(double *******)((long)param_6 + 0x10) = (double ******)0x1;
    ppuVar23 = (undefined **)PTR___sSSN_1009957f8;
    pppppppdVar34 = (double *******)param_6;
  case (undefined **)0x39:
    puVar26 = (ushort *)&PTR_FUN_1009e6000;
    goto switchD_1000aeac0_caseD_3a;
  case (undefined **)0x1:
    puVar14 = &DAT_100a76d38;
    FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
    _swift_initStackObject();
    *(undefined8 *)(puVar14 + 0x18) = 2;
    *(undefined8 *)(puVar14 + 0x10) = 1;
    *(undefined **)(puVar14 + 0x38) = PTR___sSSN_1009957f8;
    *(undefined ***)(puVar14 + 0x40) = &PTR_PTR_1009e61c8;
    ppppppdVar31 = (double ******)(puVar14 + 0x20);
    *ppppppdVar31 = (double *****)0x6e6f74747562;
    *(undefined8 *)(puVar14 + 0x28) = 0xe600000000000000;
    thunk_FUN_10068573c(&local_78);
    _swift_setDeallocating(puVar14);
    uVar32 = *(undefined8 *)(puVar14 + 0x10);
    puVar14 = &DAT_100a76d40;
    FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
    _swift_arrayDestroy(ppppppdVar31,uVar32,puVar14);
    FUN_100689480();
    pppppppdVar36 = &local_78;
    FUN_1000abcec(pppppppdVar36);
    ppppppdVar24 = (double ******)&DAT_10099ae08;
    goto LAB_1000af1b0;
  case (undefined **)0x2:
    puVar14 = &DAT_100a76d38;
    FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
    _swift_initStackObject();
    *(undefined8 *)(puVar14 + 0x18) = 2;
    *(undefined8 *)(puVar14 + 0x10) = 1;
    *(undefined **)(puVar14 + 0x38) = PTR___sSSN_1009957f8;
    *(undefined ***)(puVar14 + 0x40) = &PTR_PTR_1009e61c8;
    unaff_x22 = (double *******)(puVar14 + 0x20);
    *unaff_x22 = (double ******)0x6e6f74747562;
    *(undefined8 *)(puVar14 + 0x28) = 0xe600000000000000;
    thunk_FUN_10068573c(&local_78);
    _swift_setDeallocating(puVar14);
    uVar32 = *(undefined8 *)(puVar14 + 0x10);
    puVar14 = &DAT_100a76d40;
    FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
    _swift_arrayDestroy(unaff_x22,uVar32,puVar14);
    FUN_100689480();
    pppppppdVar36 = &local_78;
    FUN_1000abcec(pppppppdVar36);
    ppppppdVar24 = (double ******)&DAT_10099ad88;
    goto LAB_1000aeda0;
  case (undefined **)0x3:
    bVar20 = 0;
    FUN_1000b049c(param_6);
    bVar21 = (byte)param_9;
    FUN_1000afb94();
    param_1[3] = (double ******)&DAT_10099ad60;
    pppppppdVar36 = (double *******)&DAT_10099a918;
    _swift_allocObject(&DAT_10099a918,0x30,7);
    *param_1 = (double ******)pppppppdVar36;
    pppppppdVar36[2] = (double ******)param_6;
    *(byte *)(pppppppdVar36 + 3) = bVar20 & 1;
    pppppppdVar36[4] = param_8;
    *(byte *)(pppppppdVar36 + 5) = bVar21 & 1;
    return pppppppdVar36;
  case (undefined **)0x4:
    FUN_1000b049c(param_6,&local_78);
    FUN_1000afd30(&local_78,param_6,0x785f61746c6564,0xe700000000000000,FUN_1006893b4,
                  0x795f61746c6564);
    ppppppdVar24 = (double ******)&DAT_10099acd8;
    break;
  case (undefined **)0x5:
    FUN_1000b049c(param_6,&local_78);
    FUN_1000afd30(&local_78,param_6,0x785f736261,0xe500000000000000,FUN_100688a80,0x795f736261);
    ppppppdVar24 = (double ******)&DAT_10099ac50;
    break;
  case (undefined **)0x6:
    FUN_1000b049c(param_6,&local_78);
    FUN_1000afd30(&local_78,param_6,0x785f6c6572,0xe500000000000000,FUN_100688a80,0x795f6c6572);
    ppppppdVar24 = (double ******)&DAT_10099abc8;
    break;
  case (undefined **)0x7:
    puVar14 = &DAT_100a76d38;
    FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
    _swift_initStackObject();
    *(undefined8 *)(puVar14 + 0x18) = 2;
    *(undefined8 *)(puVar14 + 0x10) = 1;
    *(undefined **)(puVar14 + 0x38) = PTR___sSSN_1009957f8;
    *(undefined ***)(puVar14 + 0x40) = &PTR_PTR_1009e61c8;
    pppppppdVar36 = (double *******)(puVar14 + 0x20);
    *pppppppdVar36 = (double ******)0x79656b;
    *(undefined8 *)(puVar14 + 0x28) = 0xe300000000000000;
    thunk_FUN_10068573c(&local_78);
    _swift_setDeallocating(puVar14);
    uVar32 = *(undefined8 *)(puVar14 + 0x10);
    puVar14 = &DAT_100a76d40;
    FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
    _swift_arrayDestroy(pppppppdVar36,uVar32,puVar14);
    FUN_100689480();
    pppppppdVar34 = &local_78;
    FUN_1000abcec(pppppppdVar34);
    ppppppdVar24 = (double ******)&DAT_10099ab48;
    goto LAB_1000aeebc;
  case (undefined **)0x8:
    puVar14 = &DAT_100a76d38;
    FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
    _swift_initStackObject();
    *(undefined8 *)(puVar14 + 0x18) = 2;
    *(undefined8 *)(puVar14 + 0x10) = 1;
    *(undefined **)(puVar14 + 0x38) = PTR___sSSN_1009957f8;
    *(undefined ***)(puVar14 + 0x40) = &PTR_PTR_1009e61c8;
    ppppppdVar31 = (double ******)(puVar14 + 0x20);
    *ppppppdVar31 = (double *****)0x79656b;
    *(undefined8 *)(puVar14 + 0x28) = 0xe300000000000000;
    thunk_FUN_10068573c(&local_78);
    _swift_setDeallocating(puVar14);
    uVar32 = *(undefined8 *)(puVar14 + 0x10);
    puVar14 = &DAT_100a76d40;
    FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
    _swift_arrayDestroy(ppppppdVar31,uVar32,puVar14);
    FUN_100689480();
    pppppppdVar36 = &local_78;
    FUN_1000abcec(pppppppdVar36);
    ppppppdVar24 = (double ******)&DAT_10099ab48;
LAB_1000af1b0:
    param_1[3] = ppppppdVar24;
    *param_1 = ppppppdVar31;
    *(code *)(param_1 + 1) = (code)0x0;
    return pppppppdVar36;
  case (undefined **)0x9:
    param_6 = (code *)&DAT_100a76d38;
    FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
  case (undefined **)0x22:
    _swift_initStackObject();
    *(double *******)((long)param_6 + 0x18) = (double ******)0x2;
    *(double *******)((long)param_6 + 0x10) = (double ******)0x1;
    ppuVar23 = (undefined **)PTR___sSSN_1009957f8;
    puVar26 = (ushort *)&PTR_PTR_1009e61c8;
    pppppppdVar34 = (double *******)param_6;
    goto switchD_1000aeac0_caseD_52;
  case (undefined **)0xa:
    puVar14 = &DAT_100a76d38;
    FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
    _swift_initStackObject();
    *(undefined8 *)(puVar14 + 0x18) = 2;
    *(undefined8 *)(puVar14 + 0x10) = 1;
    *(undefined **)(puVar14 + 0x38) = PTR___sSSN_1009957f8;
    *(undefined ***)(puVar14 + 0x40) = &PTR_PTR_1009e61c8;
    ppppppdVar24 = (double ******)(puVar14 + 0x20);
    *ppppppdVar24 = (double *****)0x746e65746e6f63;
    *(undefined8 *)(puVar14 + 0x28) = 0xe700000000000000;
    thunk_FUN_10068573c(&local_78);
    _swift_setDeallocating(puVar14);
    ppppppdVar31 = *(double *******)(puVar14 + 0x10);
    puVar14 = &DAT_100a76d40;
    FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
    _swift_arrayDestroy(ppppppdVar24,ppppppdVar31,puVar14);
    FUN_100687bd8();
    pppppppdVar36 = &local_78;
    FUN_1000abcec(pppppppdVar36);
    param_1[3] = (double ******)&DAT_10099aaa0;
    *param_1 = ppppppdVar24;
    param_1[1] = ppppppdVar31;
    return pppppppdVar36;
  case (undefined **)0xb:
    FUN_1000b049c(param_6,&local_78);
    bVar20 = (byte)param_8;
    ppppppdVar24 = (double ******)0x1;
    goto LAB_1000aebf4;
  case (undefined **)0xc:
    FUN_1000b049c(param_6,&local_78);
    bVar20 = (byte)param_8;
    ppppppdVar24 = (double ******)0x0;
LAB_1000aebf4:
    FUN_1000aff98();
    param_1[3] = (double ******)&DAT_10099aa18;
    pppppppdVar36 = (double *******)&DAT_10099a8c8;
    _swift_allocObject(&DAT_10099a8c8,0x30,7);
    *param_1 = (double ******)pppppppdVar36;
    pppppppdVar36[2] = (double ******)param_6;
    pppppppdVar36[3] = ppppppdVar24;
    *(byte *)(pppppppdVar36 + 4) = bVar20 & 1;
    pppppppdVar36[5] = param_9;
    return pppppppdVar36;
  case (undefined **)0xd:
  case (undefined **)0xec:
    do {
      *(int *)((long)param_6 + (long)pcVar29 * 4 + 0x20) = (int)unaff_x25;
      pppppppdStack_c0 = (double *******)param_6;
      do {
        while (pppppppdVar34 == (double *******)0x0) {
          bVar4 = SCARRY8((long)unaff_x23,1);
          unaff_x23 = (undefined **)((long)unaff_x23 + 1);
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c4418);
            (*pcVar2)();
          }
          if ((long)unaff_x28 <= (long)unaff_x23) {
            _swift_release();
            ppppppdVar24 = pppppppdStack_c0[2];
            if (ppppppdVar24 != (double ******)0x0) {
              FUN_100401b14(0);
              pppppppdVar36 = pppppppdStack_c0 + 4;
              do {
                uVar33 = *(uint *)pppppppdVar36;
                uVar30 = (ulong)uVar33;
                pppppppdVar34 = (double *******)&pppppppdStack_b0;
                _swift_beginAccess((code *)((long)param_1 + (long)unaff_x27),pppppppdVar34,0x21,0);
                thunk_FUN_1001a2c34();
                if (((ulong)pppppppdVar34 & 1) == 0) {
                  _swift_endAccess(&pppppppdStack_b0);
                }
                else {
                  iVar5 = (int)*(undefined8 *)((long)param_1 + (long)unaff_x27);
                  _swift_isUniquelyReferenced_nonNull_native();
                  ppuStack_b8 = *(undefined ***)((long)param_1 + (long)unaff_x27);
                  *(undefined8 *)((long)param_1 + (long)unaff_x27) = 0x8000000000000000;
                  if (iVar5 == 0) {
                    FUN_1000640d4();
                  }
                  ppuVar23 = ppuStack_b8;
                  lVar28 = *(long *)(*(long *)((long)ppuStack_b8 + 0x38) + uVar30 * 8);
                  thunk_FUN_10006cc48(uVar30,ppuStack_b8);
                  *(undefined ***)((long)param_1 + (long)unaff_x27) = ppuVar23;
                  _swift_endAccess(&pppppppdStack_b0);
                  _objc_msgSend(*(ID *)(lVar28 + 0x10),"orderOut:",0);
                  _objc_msgSend(*(ID *)(lVar28 + 0x10),"close");
                  _swift_release(lVar28);
                }
                (*(code *)PTR____chkstk_darwin_100995498)();
                ppppppdStack_280 = (double ******)CONCAT44(ppppppdStack_280._4_4_,uVar33);
                FUN_1003fb48c(FUN_1000c4608,&pppppppdStack_290,0xd00000000000009b,0x80000001008841c0
                              ,0xd00000000000001f,0x8000000100882e00,0xda,0);
                ppppppdVar24 = (double ******)((long)ppppppdVar24 + -1);
                pppppppdVar36 = (double *******)((long)pppppppdVar36 + 4);
              } while (ppppppdVar24 != (double ******)0x0);
            }
            _swift_release(pppppppdStack_c0);
            pppppppdVar36 = *(double ********)((long)param_1 + (long)unaff_x27);
            pppppppdVar34 = pppppppdVar36 + 8;
            uVar27 = 1L << ((ulong)*(byte *)(pppppppdVar36 + 4) & 0x3f);
            uVar30 = 0xffffffffffffffff;
            if ((long)uVar27 < 0x40) {
              uVar30 = ~(-1L << (uVar27 & 0x3f));
            }
            ppppppdVar24 = (double ******)(uVar30 & (ulong)*pppppppdVar34);
            _swift_bridgeObjectRetain(pppppppdVar36);
            lVar28 = 0;
            do {
              do {
                while (ppppppdVar24 == (double ******)0x0) {
                  bVar4 = SCARRY8(lVar28,1);
                  lVar28 = lVar28 + 1;
                  if (bVar4) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c441c);
                    (*pcVar2)();
                  }
                  if ((long)(uVar27 + 0x3f >> 6) <= lVar28) {
                    _swift_release(pppppppdVar36);
                    return pppppppdVar36;
                  }
                  ppppppdVar24 = pppppppdVar34[lVar28];
                }
                uVar30 = ((ulong)ppppppdVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                         ((ulong)ppppppdVar24 & 0x5555555555555555) << 1;
                uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
                ppppppdVar24 = (double ******)((long)ppppppdVar24 - 1U & (ulong)ppppppdVar24);
                uVar41 = (ulong)*(uint *)((long)pppppppdVar36[6] +
                                         (lVar28 << 8 |
                                         LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) << 2));
                uVar10 = 0;
                FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
                uVar30 = uVar41;
                FUN_1003d56bc();
              } while ((uVar30 == 0) ||
                      (lVar17 = *(long *)((long)param_1 + (long)unaff_x27),
                      *(long *)(lVar17 + 0x10) == 0));
              thunk_FUN_1001a2c34();
              if ((uVar10 & 1) != 0) {
                pppppppdStack_c0 = *(double ********)(*(long *)(lVar17 + 0x38) + uVar41 * 8);
                ppppppdVar31 = pppppppdStack_c0[2];
                _swift_retain();
                _objc_msgSend((ID)ppppppdVar31,"frame");
                ppppppdVar31 = param_2;
                uVar32 = param_3;
                uVar49 = param_4;
                uVar50 = param_5;
                uVar10 = _objc_msgSend(uVar30,"frame");
                _CGRectEqualToRect(param_2,param_3,param_4,param_5,ppppppdVar31,uVar32,uVar49,uVar50
                                  );
                pppppppdVar15 = pppppppdStack_c0;
                if ((uVar10 & 1) == 0) {
                  ppppppdVar31 = pppppppdStack_c0[2];
                  _objc_msgSend(uVar30,"frame");
                  _objc_msgSend((ID)ppppppdVar31,"setFrame:display:",1);
                  ppppppdVar31 = pppppppdVar15[3];
                  _objc_msgSend(uVar30,"frame");
                  param_2 = (double ******)0x0;
                  param_3 = 0;
                  _objc_msgSend((ID)ppppppdVar31,"setFrame:");
                  _swift_beginAccess(pppppppdVar15 + 4,&pppppppdStack_b0,0,0);
                  ppppppdVar31 = pppppppdVar15[4];
                  pppppppdStack_c8 = pppppppdVar36;
                  _swift_bridgeObjectRetain(ppppppdVar31);
                  FUN_1000c4904();
                  _swift_release(pppppppdVar15);
                  pppppppdVar36 = pppppppdStack_c8;
                  _swift_bridgeObjectRelease(ppppppdVar31);
                }
                else {
                  _swift_release(pppppppdStack_c0);
                }
              }
            } while( true );
          }
          pppppppdVar34 = (double *******)unaff_x26[(long)unaff_x23];
        }
        uVar30 = ((ulong)pppppppdVar34 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)pppppppdVar34 & 0x5555555555555555) << 1;
        uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
        uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
        uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
        pppppppdVar34 = (double *******)((ulong)((long)pppppppdVar34 + -1) & (ulong)pppppppdVar34);
        unaff_x25 = (double *******)
                    (ulong)*(uint *)((long)unaff_x22[6] +
                                    ((long)unaff_x23 << 8 |
                                    LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) << 2));
        FUN_10004003c(0,&DAT_100a75978);
        pppppppdVar15 = unaff_x25;
        FUN_1003d56bc();
        pppppppdVar36 = pppppppdStack_c0;
      } while (pppppppdVar15 != (double *******)0x0);
      pppppppdVar15 = pppppppdStack_c0;
      _swift_isUniquelyReferenced_nonNull_native();
      pppppppdStack_b0 = pppppppdVar36;
      if (((ulong)pppppppdVar15 & 1) == 0) {
        FUN_10006fafc(0,(long)pppppppdVar36[2] + 1,1);
      }
      pcVar29 = (char *)pppppppdStack_b0[2];
      pppppppdStack_c0 = (double *******)((long)pcVar29 + 1);
      if ((double *******)((ulong)pppppppdStack_b0[3] >> 1) <= pcVar29) {
        pppppppdStack_c8 = (double *******)pcVar29;
        FUN_10006fafc((double ******)0x1 < pppppppdStack_b0[3],pppppppdStack_c0,1);
        pcVar29 = (char *)pppppppdStack_c8;
      }
      pppppppdStack_b0[2] = (double ******)pppppppdStack_c0;
      param_6 = (code *)pppppppdStack_b0;
    } while( true );
  case (undefined **)0xe:
  case (undefined **)0x88:
  case (undefined **)0xed:
    goto switchD_1000aeac0_caseD_e;
  case (undefined **)0xf:
  case (undefined **)0xee:
    goto switchD_1000aeac0_caseD_f;
  case (undefined **)0x10:
  case (undefined **)0xef:
    goto switchD_1000aeac0_caseD_10;
  case (undefined **)0x11:
  case (undefined **)0xf0:
    goto switchD_1000aeac0_caseD_11;
  case (undefined **)0x12:
  case (undefined **)0xf1:
    while( true ) {
      FUN_10007f314(pppppppdVar34,param_7,unaff_x22,unaff_x23);
      puVar11 = &stack0xfffffffffffffd98;
      FUN_1001a2e24();
      if (((ulong)param_7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cc544);
        (*pcVar2)();
      }
      uVar30 = (ulong)puVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)((long)unaff_x25 + uVar30) =
           *(ulong *)((long)unaff_x25 + uVar30) | (long)unaff_x26 << ((ulong)puVar11 & 0x3f);
      ppppppdVar24 = (double ******)
                     ((long)*(double *******)((long)param_6 + 0x30) +
                     (long)puVar11 * (long)unaff_x27);
      ppppppdVar24[4] = in_stack_fffffffffffffdb8;
      ppppppdVar24[1] = (double *****)ppppppdStack_260;
      *ppppppdVar24 = in_stack_fffffffffffffd98;
      ppppppdVar24[3] = in_stack_fffffffffffffdb0;
      ppppppdVar24[2] = (double *****)ppppppdStack_258;
      FUN_10007f3d4(unaff_x24 + 5,*(double *******)((long)param_6 + 0x38) + (long)puVar11 * 4);
      if (SCARRY8((long)*(double *******)((long)param_6 + 0x10),1)) break;
      *(double *******)((long)param_6 + 0x10) =
           (double ******)((long)*(double *******)((long)param_6 + 0x10) + 1);
      pppppppdVar34 = pppppppdVar34 + 9;
      param_1 = (double *******)((long)param_1 + -1);
      if (param_1 == (double *******)0x0) {
        _swift_release(param_6);
        return (double *******)param_6;
      }
LAB_1000cc488:
      param_7 = (TargetResilientWitnessHeader *)&stack0xfffffffffffffd98;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cc548);
    (*pcVar2)();
  case (undefined **)0x13:
  case (undefined **)0x1d:
  case (undefined **)0x2d:
  case (undefined **)0xf2:
    goto switchD_1000aeac0_caseD_13;
  case (undefined **)0x18:
  case (undefined **)0x28:
  case (undefined **)0x40:
  case (undefined **)0x55:
switchD_1000aeac0_caseD_18:
    pppppppdVar34 = unaff_x24;
    if (in_ZR) goto LAB_1000ca22c;
    goto LAB_1000ca184;
  case (undefined **)0x19:
  case (undefined **)0x29:
  case (undefined **)0x41:
  case (undefined **)0x56:
    while( true ) {
      uVar30 = (ulong)pppppppdVar36 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)((long)unaff_x23 + uVar30) =
           *(ulong *)((long)unaff_x23 + uVar30) | 1L << ((ulong)pppppppdVar36 & 0x3f);
      *(int *)((long)*(double *******)((long)param_6 + 0x30) + (long)pppppppdVar36 * 4) =
           (int)unaff_x27;
      ppppppdVar24 = *(double *******)((long)param_6 + 0x38);
      lVar28 = 0;
      FUN_1000e49dc();
      FUN_1000823d8((code *)((long)param_1 + (long)unaff_x28),
                    (double ******)
                    ((long)ppppppdVar24 + *(long *)(*(long *)(lVar28 + -8) + 0x48) * (long)unaff_x26
                    ));
      if (SCARRY8((long)*(double *******)((long)param_6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cc120);
        (*pcVar2)();
      }
      *(double *******)((long)param_6 + 0x10) =
           (double ******)((long)*(double *******)((long)param_6 + 0x10) + 1);
      unaff_x22 = (double *******)((long)unaff_x22 + (long)unaff_x24);
      pppppppdVar34 = (double *******)((long)pppppppdVar34 + -1);
      if (pppppppdVar34 == (double *******)0x0) break;
      pppppppdVar15 = param_1;
      FUN_10007f314(unaff_x22,param_1,&DAT_100a77618,&DAT_10080c278);
      unaff_x27 = (double *******)(ulong)*(uint *)param_1;
      pppppppdVar36 = unaff_x27;
      thunk_FUN_1001a2c34();
      if (((ulong)pppppppdVar15 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cc11c);
        (*pcVar2)();
      }
switchD_1000aeac0_caseD_2f:
      unaff_x26 = pppppppdVar36;
    }
    return (double *******)param_6;
  case (undefined **)0x1a:
  case (undefined **)0x2a:
    return (double *******)param_6;
  case (undefined **)0x1b:
  case (undefined **)0x2b:
    ppppppdStack_258 = (double ******)0xe000000000000000;
    pppppppdVar34 = (double *******)ppuVar23;
  case (undefined **)0x4a:
    __ss11_StringGutsV4growyySiF(0x2b);
    _swift_bridgeObjectRelease(ppppppdStack_258);
    ppuVar23 = (undefined **)"StreamerConnectSession- newControlBegin: ";
switchD_1000aeac0_caseD_33:
    pppppppdVar36 = (double *******)PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(pppppppdVar36);
    pppppppdVar34[3] = (double ******)PTR___sSSN_1009957f8;
    *pppppppdVar34 = (double ******)0xd000000000000029;
    pppppppdVar34[1] = (double ******)((ulong)(ppuVar23 + -4) | 0x8000000000000000);
    return pppppppdVar36;
  case (undefined **)0x1c:
  case (undefined **)0x2c:
    pppppppdVar36 = (double *******)param_6;
    _swift_allocObject(param_6,0x20,7);
    FUN_1000d4e44();
    ppuStack_90 = &PTR_PTR_10099bb00;
    puStack_98 = &DAT_10099bae8;
    pppppppdStack_b0 = (double *******)FUN_1000d4784;
    uStack_a8 = 0;
    ppuStack_b8 = &PTR_PTR_10099bc00;
    pppppppdVar15 = (double *******)0x0;
    apppppppdStack_d8[0] = pppppppdVar36;
    pppppppdStack_c0 = (double *******)param_6;
    pppppppdStack_70 = param_1;
    FUN_1000d5a88();
    _swift_allocObject();
    FUN_1000ce034(&stack0xffffffffffffff78,param_1);
    (*(code *)PTR____chkstk_darwin_100995498)(param_1[-1][8]);
    puVar40 = (undefined8 *)((long)&ppppppdStack_270 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0))
    ;
    (**(code **)(extraout_x12 + 0x10))(puVar40);
    puVar14 = puStack_98;
    FUN_1000ce034(&pppppppdStack_b0,puStack_98);
    (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
    puVar42 = (undefined8 *)((long)puVar40 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_00 + 0x10))(puVar42);
    pppppppdVar36 = pppppppdStack_c0;
    FUN_1000ce034(apppppppdStack_d8,pppppppdStack_c0);
    (*(code *)PTR____chkstk_darwin_100995498)(pppppppdVar36[-1][8]);
    puVar43 = (undefined8 *)((long)puVar42 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_01 + 0x10))(puVar43);
    ppppppdVar24 = (double ******)*puVar40;
    ppppppdVar31 = (double ******)*puVar43;
    pppppppdVar15[5] = (double ******)param_1;
    pppppppdVar15[6] = (double ******)&PTR_PTR_10099b808;
    pppppppdVar15[2] = ppppppdVar24;
    pppppppdVar15[10] = (double ******)&DAT_10099bae8;
    pppppppdVar15[0xb] = (double ******)&PTR_PTR_10099bb00;
    ppppppdVar24 = (double ******)*puVar42;
    pppppppdVar15[8] = (double ******)puVar42[1];
    pppppppdVar15[7] = ppppppdVar24;
    pppppppdVar15[0x10] = (double ******)param_6;
    pppppppdVar15[0x11] = (double ******)&PTR_PTR_10099bc00;
    pppppppdVar15[0xc] = (double ******)pppppppdVar34;
    pppppppdVar15[0xd] = ppppppdVar31;
    pppppppdVar15[0x12] = (double ******)0x3ff0000000000000;
    FUN_10003f094(apppppppdStack_d8);
    FUN_10003f094(&pppppppdStack_b0);
    FUN_10003f094(&stack0xffffffffffffff78);
    return pppppppdVar15;
  case (undefined **)0x1e:
    FUN_100068e68();
    param_6 = (code *)unaff_x22;
    thunk_FUN_1001a2e54();
    ppuVar23 = (undefined **)(ulong)((uint)param_7 & 1);
  case (undefined **)0xfd:
    if (((uint)unaff_x25 & 1) != (uint)ppuVar23) {
LAB_1000c7004:
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSiN_100995968);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c7014);
      (*pcVar2)();
    }
    if (((ulong)unaff_x25 & 1) == 0) {
      ppppppdVar24 = *unaff_x24;
      ppppppdVar24[((ulong)param_6 >> 6) + 8] =
           (double *****)
           ((ulong)ppppppdVar24[((ulong)param_6 >> 6) + 8] | 1L << ((ulong)param_6 & 0x3f));
      ppppppdVar24[6][(long)param_6] = (double ****)unaff_x22;
      pppppdVar25 = ppppppdVar24[7] + (long)param_6 * 4;
      pppppdVar25[1] = ppppdStack_238;
      *pppppdVar25 = in_stack_fffffffffffffdc0;
      pppppdVar25[3] = (double ****)in_stack_fffffffffffffdb8;
      pppppdVar25[2] = (double ****)in_stack_fffffffffffffdb0;
      if (SCARRY8((long)ppppppdVar24[2],1)) {
LAB_1000c7218:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c721c);
        (*pcVar2)();
      }
      ppppppdVar24[2] = (double *****)((long)ppppppdVar24[2] + 1);
      if (unaff_x27 != (double *******)0x1) {
        pppppppdVar36 = param_1 + 10;
        pppppppdVar34 = (double *******)0x1;
        do {
          if (param_1[2] <= pppppppdVar34) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c7220);
            (*pcVar2)();
          }
          ppppppdVar38 = pppppppdVar36[-1];
          ppppppdVar46 = pppppppdVar36[1];
          ppppppdVar13 = *pppppppdVar36;
          ppppppdVar48 = pppppppdVar36[3];
          ppppppdVar47 = pppppppdVar36[2];
          ppppppdVar31 = *unaff_x24;
          ppppppdVar24 = ppppppdVar38;
          thunk_FUN_1001a2e54();
          pppppdVar25 = ppppppdVar31[2];
          uVar30 = (ulong)~(uint)param_7 & 1;
          lVar28 = (long)pppppdVar25 + uVar30;
          if (SCARRY8((long)pppppdVar25,uVar30)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c7218);
            (*pcVar2)();
          }
          pTVar19 = param_7;
          if ((long)ppppppdVar31[3] < lVar28) {
            pTVar19 = (TargetResilientWitnessHeader *)0x1;
            FUN_100068e68(lVar28);
            ppppppdVar24 = ppppppdVar38;
            thunk_FUN_1001a2e54();
            if (((uint)param_7 & 1) != ((uint)pTVar19 & 1)) goto LAB_1000c7004;
          }
          if (((ulong)param_7 & 1) != 0) goto LAB_1000c7030;
          ppppppdVar31 = *unaff_x24;
          ppppppdVar31[((ulong)ppppppdVar24 >> 6) + 8] =
               (double *****)
               ((ulong)ppppppdVar31[((ulong)ppppppdVar24 >> 6) + 8] |
               1L << ((ulong)ppppppdVar24 & 0x3f));
          ppppppdVar31[6][(long)ppppppdVar24] = (double ****)ppppppdVar38;
          pppppdVar25 = ppppppdVar31[7] + (long)ppppppdVar24 * 4;
          pppppdVar25[1] = (double ****)ppppppdVar46;
          *pppppdVar25 = (double ****)ppppppdVar13;
          pppppdVar25[3] = (double ****)ppppppdVar48;
          pppppdVar25[2] = (double ****)ppppppdVar47;
          if (SCARRY8((long)ppppppdVar31[2],1)) goto LAB_1000c7218;
          pppppppdVar34 = (double *******)((long)pppppppdVar34 + 1);
          ppppppdVar31[2] = (double *****)((long)ppppppdVar31[2] + 1);
          pppppppdVar36 = pppppppdVar36 + 5;
          param_7 = pTVar19;
        } while (unaff_x27 != pppppppdVar34);
      }
      _swift_bridgeObjectRelease(param_1);
      return param_1;
    }
LAB_1000c7030:
    pppppppdVar36 = (double *******)PTR___ss11_MergeErrorON_100995ae0;
    _swift_allocError(PTR___ss11_MergeErrorON_100995ae0,PTR___ss11_MergeErrorOs0B0sWP_100995ae8,0,0)
    ;
    _swift_willThrow();
    local_58 = pppppppdVar36;
    _swift_errorRetain(pppppppdVar36);
    param_6 = (code *)&DAT_100a75b40;
    param_7 = &TargetResilientWitnessHeader_100809000;
    goto switchD_1000aeac0_caseD_20;
  case (undefined **)0x1f:
    param_7 = (TargetResilientWitnessHeader *)
              &_TtC14UURemoteServer19SecondScreenManager::topologyPositioner;
  case (undefined **)0x43:
    FUN_100004bb4(param_6,param_7 + 0x74);
    ppuVar23 = *(undefined ***)((long)param_6 + -8);
switchD_1000aeac0_caseD_63:
    (*(code *)PTR____chkstk_darwin_100995498)((long)ppuVar23[8] + 0xfU & 0xfffffffffffffff0);
    lVar28 = _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___fileTransferHandler;
    pppppppdVar34 =
         *(double ********)
          ((long)param_1 +
          _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___fileTransferHandler);
    pppppppdVar36 = pppppppdVar34;
    if (pppppppdVar34 == (double *******)0x0) {
      FUN_1000c8710();
      lVar17 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar17 + -8) + 0x38))
                ((long)&ppppppdStack_270 - extraout_x8_01,1,1,lVar17);
      ppppppdVar24 = (double ******)
                     NSFileManager::defaultManager
                               ((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
      uVar32 = 0;
      FUN_1000d8b20();
      _swift_allocObject();
      FUN_1000d81d8(ppppppdVar24,(long)&ppppppdStack_270 - extraout_x8_01,0,uVar32);
      pppppdVar25 = (double *****)
                    NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager")
      ;
      ppppppdVar31 = (double ******)0x0;
      FUN_10017fcc4();
      _swift_allocObject();
      ppppppdVar31[4] = (double *****)0x8000000100885050;
      ppppppdVar31[5] = (double *****)0x2f3a;
      ppppppdVar31[6] = (double *****)0xe200000000000000;
      ppppppdVar31[2] = pppppdVar25;
      ppppppdVar31[3] = (double *****)0x1000000000000012;
      ppppppdVar38 = (double ******)0x0;
      FUN_100185e80();
      _swift_allocObject();
      FUN_100185c24();
      pppppppdVar36 = (double *******)0x0;
      FUN_10020cde8();
      _swift_allocObject();
      _swift_unknownObjectWeakInit(pppppppdVar36 + 2,0);
      _swift_beginAccess(pppppppdVar36 + 2,&local_78,1,0);
      _swift_unknownObjectWeakAssign(pppppppdVar36 + 2,param_1);
      pppppppdVar36[3] = (double ******)pppppppdVar34;
      pppppppdVar36[4] = ppppppdVar24;
      pppppppdVar36[5] = ppppppdVar31;
      pppppppdVar36[6] = ppppppdVar38;
      ppppppdVar24 = (double ******)0x0;
      FUN_10020d4c0();
      _swift_allocObject();
      pppppppdVar36[7] = ppppppdVar24;
      ppppppdVar31 = (double ******)0x0;
      FUN_10020da34();
      _swift_allocObject();
      _swift_unknownObjectWeakInit(ppppppdVar31 + 2,0);
      _swift_unknownObjectWeakAssign(ppppppdVar31 + 2,param_1);
      pppppppdVar36[8] = ppppppdVar31;
      _swift_retain(ppppppdVar38);
      _swift_retain(ppppppdVar24);
      _swift_retain(ppppppdVar31);
      pppppdVar12 = (double *****)
                    NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager")
      ;
      uVar32 = 0;
      FUN_1000e4544(0);
      _swift_allocObject();
      FUN_1000e42a8(pppppdVar12,uVar32);
      ppppppdVar13 = (double ******)0x0;
      FUN_10020fd84();
      _swift_allocObject();
      _swift_unknownObjectWeakInit(ppppppdVar13 + 2,0);
      puVar14 = &_OBJC_CLASS___NSLock;
      _objc_allocWithZone();
      pppppdVar25 = (double *****)_objc_msgSend((ID)puVar14,"init");
      ppppppdVar13[7] = pppppdVar25;
      pppppdVar25 = (double *****)PTR___swiftEmptyArrayStorage_100995ea0;
      pppppdVar6 = (double *****)PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1000cc120();
      ppppppdVar13[8] = pppppdVar6;
      FUN_1000cc2cc();
      ppppppdVar13[9] = pppppdVar25;
      _swift_unknownObjectWeakAssign(ppppppdVar13 + 2,param_1);
      ppppppdVar13[3] = pppppdVar12;
      ppppppdVar13[4] = (double *****)ppppppdVar38;
      ppppppdVar13[5] = (double *****)ppppppdVar24;
      ppppppdVar13[6] = (double *****)ppppppdVar31;
      pppppppdVar36[9] = ppppppdVar13;
      uVar32 = *(undefined8 *)((long)param_1 + lVar28);
      *(double ********)((long)param_1 + lVar28) = pppppppdVar36;
      _swift_retain(pppppppdVar36);
      _swift_release(uVar32);
      pppppppdVar34 = (double *******)0x0;
    }
    _swift_retain(pppppppdVar34);
    return pppppppdVar36;
  case (undefined **)0x20:
  case (undefined **)0x89:
    goto switchD_1000aeac0_caseD_20;
  case (undefined **)0x21:
    goto switchD_1000aeac0_caseD_21;
  case (undefined **)0x24:
  case (undefined **)0xe8:
    goto switchD_1000aeac0_caseD_24;
  case (undefined **)0x2e:
    lVar28 = 0;
    pppppppdStack_290 = (double *******)param_6;
    pppppppdStack_288 = param_1;
    ppppppdStack_280 = (double ******)&stack0xfffffffffffffff0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    lVar44 = *(long *)(lVar28 + -8);
    (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar44 + 0x40));
    lVar16 = (long)appppppdStack_300 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar17 = 0;
    __s8Dispatch0A3QoSVMa();
    lVar45 = *(long *)(lVar17 + -8);
    (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar45 + 0x40));
    pppppppdVar36 = (double *******)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar14 = &DAT_10099b598;
    _swift_allocObject(&DAT_10099b598,0x18,7);
    _swift_unknownObjectWeakInit(puVar14 + 0x10,param_6);
    pcStack_2e0 = FUN_1000c4760;
    appppppdStack_300[0] = (double ******)PTR___NSConcreteStackBlock_100995490;
    appppppdStack_300[1] = (double ******)0x42000000;
    pcStack_2f0 = FUN_1000acdb4;
    puStack_2e8 = &DAT_10099b5b0;
    puStack_2d8 = puVar14;
    aBlock = __Block_copy(appppppdStack_300);
    puVar8 = puStack_2d8;
    _swift_release(puStack_2d8);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(pppppppdVar36);
    appppppdStack_300[0] = (double ******)PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    puVar14 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar9 = puVar14;
    FUN_10004eec4();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar16,appppppdStack_300,puVar14,puVar9,lVar28,puVar8);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,pppppppdVar36,lVar16,aBlock);
    __Block_release(aBlock);
    (**(code **)(lVar44 + 8))(lVar16,lVar28);
    (**(code **)(lVar45 + 8))(pppppppdVar36,lVar17);
    return pppppppdVar36;
  case (undefined **)0x2f:
    goto switchD_1000aeac0_caseD_2f;
  case (undefined **)0x30:
    return (double *******)param_6;
  case (undefined **)0x31:
  case (undefined **)0x8c:
  case (undefined **)0xc5:
    FUN_1000c73f4();
    return (double *******)param_6;
  case (undefined **)0x32:
  case (undefined **)0x8a:
  case (undefined **)0x8d:
  case (undefined **)0xc6:
    goto switchD_1000aeac0_caseD_32;
  case (undefined **)0x33:
  case (undefined **)0x8e:
  case (undefined **)0xc7:
  case (undefined **)0xfc:
    goto switchD_1000aeac0_caseD_33;
  case (undefined **)0x38:
    uVar30 = (ulong)param_7 & 0xf8;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar30 != 0) {
      *(undefined2 *)(param_1 + 10) = 0;
      _swift_beginAccess(param_1 + 3,&stack0xfffffffffffffd98,1,0);
      puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
      ppppppdVar24 = param_1[3];
      param_1[3] = (double ******)PTR___swiftEmptyArrayStorage_100995ea0;
      _swift_bridgeObjectRelease(ppppppdVar24);
      ppppppdVar24 = param_1[2];
      if ((ulong)ppppppdVar24 >> 0x3e == 0) {
        ppppppdVar31 = *(double *******)(((ulong)ppppppdVar24 & 0xffffffffffffff8) + 0x10);
      }
      else {
        ppppppdVar31 = (double ******)((ulong)ppppppdVar24 & 0xffffffffffffff8);
        if ((long)ppppppdVar24 < 0) {
          ppppppdVar31 = ppppppdVar24;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      _swift_bridgeObjectRetain(ppppppdVar24);
      if (ppppppdVar31 != (double ******)0x0) {
        pppppdVar25 = (double *****)0x0;
        do {
          if (((ulong)ppppppdVar24 & 0xc000000000000001) == 0) {
            if (*(double ******)(((ulong)ppppppdVar24 & 0xffffffffffffff8) + 0x10) <= pppppdVar25) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000bc1ec);
              (*pcVar2)();
            }
            pppppdVar6 = ppppppdVar24[(long)pppppdVar25 + 4];
          }
          else {
            pppppdVar6 = pppppdVar25;
            FUN_10016a00c(pppppdVar25,ppppppdVar24);
          }
          if (SCARRY8((long)pppppdVar25,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000bc130);
            (*pcVar2)();
          }
          ppppppdVar38 = (double ******)((long)pppppdVar25 + 1);
          _objc_msgSend((ID)pppppdVar6,"close");
          pppppdVar25 = (double *****)((long)pppppdVar25 + 1);
        } while (ppppppdVar38 != ppppppdVar31);
      }
      _swift_bridgeObjectRelease(ppppppdVar24);
      ppppppdVar24 = param_1[2];
      param_1[2] = (double ******)puVar14;
      _swift_bridgeObjectRelease(ppppppdVar24);
      ppppppdVar24 = param_1[0xc];
      param_1[0xb] = (double ******)0x0;
      param_1[0xc] = (double ******)0x0;
      _swift_bridgeObjectRelease();
      FUN_1000b6da8();
      *(undefined1 *)(ppppppdVar24 + 10) = 0;
      FUN_1000c51e8();
      _swift_release(ppppppdVar24);
      FUN_1000b7360();
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1000bc21c,0,0xd00000000000009f,0x8000000100882d60,0x292865646968,
                    0xe600000000000000,0x1dc,0);
    }
    _swift_release(param_1);
    return param_1;
  case (undefined **)0x3a:
    goto switchD_1000aeac0_caseD_3a;
  case (undefined **)0x42:
switchD_1000aeac0_caseD_42:
    *(uint *)(puVar26 + -8) = uVar37;
    pcVar2 = FUN_1000c13e8;
    FUN_1003fb4bc(FUN_1000c13e8,param_7,0xd00000000000009f,
                  (ulong)((long)pcVar29 + -0x20) | 0x8000000000000000,0xd000000000000024,
                  0x8000000100883670,0x38a,0);
    goto LAB_1000bf4e8;
  case (undefined **)0x44:
    goto switchD_1000aeac0_caseD_44;
  case (undefined **)0x48:
    param_10 = (code *)((long)unaff_x26 + -0xe);
    param_6 = FUN_10017a06c;
    param_8 = (double ******)((long)unaff_x26 + 0x7c);
    param_9 = (double ******)((ulong)ppuVar23 | 0x8000000000000000);
    param_11 = 0x800000010080bbc0;
    param_7 = (TargetResilientWitnessHeader *)0x0;
    param_12 = 0x1ab;
  case (undefined **)0x80:
  case (undefined **)0x90:
  case (undefined **)0xa0:
  case (undefined **)0xb0:
  case (undefined **)0xc0:
  case (undefined **)0xd0:
    FUN_1003fb48c(param_6,param_7,param_8,param_9,param_10,param_11,param_12,0);
    unaff_x23 = (undefined **)0x1;
    *(code *)(unaff_x22 + 4) = (code)0x1;
    _swift_release();
    FUN_1000c8148();
    pppppppdVar39 =
         (double *******)
         (ulong)*(uint *)((long)pppppppdVar34 + _TtC14UURemoteServer22StreamerConnectSession::handle
                         );
    FUN_1000f7b10(pppppppdVar39);
    _swift_release(unaff_x22);
    FUN_1000ca9f4();
    param_6 = FUN_1000cad4c;
    param_8 = (double ******)((long)unaff_x26 + 0x7d);
    param_9 = (double ******)((ulong)unaff_x24 | 0x8000000000000000);
    param_11 = (ulong)unaff_x25 | 0x8000000000000000;
    param_7 = (TargetResilientWitnessHeader *)0x0;
    param_10 = (code *)0xd00000000000001f;
    param_12 = 0x91;
    goto switchD_1000aeac0_caseD_4c;
  case (undefined **)0x49:
    if (((ulong)param_7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_6);
      ppppppdStack_220 = (double ******)0x0;
      _swift_bridgeObjectRelease(pppppppdVar34);
    }
    else {
      FUN_10003e8bc(*(double *******)((long)param_6 + 0x38) + (long)param_6 * 4,&ppppppdStack_220);
      _swift_bridgeObjectRelease(pppppppdVar34);
      _swift_bridgeObjectRelease(param_6);
      if (lStack_208 != 0) {
        param_6 = (code *)0x100a75000;
        goto switchD_1000aeac0_caseD_61;
      }
    }
LAB_1000c76b4:
    pppppppdVar34 = &ppppppdStack_220;
    FUN_1000c776c(pppppppdVar34);
    goto LAB_1000c76bc;
  case (undefined **)0x4b:
  case (undefined **)0xa6:
  case (undefined **)0x50:
  case (undefined **)0x58:
  case (undefined **)0x67:
  case (undefined **)0x76:
  case (undefined **)0x99:
  case (undefined **)0xa9:
  case (undefined **)0xb6:
  case (undefined **)0xd6:
    param_1 = *(double ********)((long)param_6 + 0x10);
    pppppppdVar36 = (double *******)PTR___swiftEmptyDictionarySingleton_100995ea8;
    if (param_1 != (double *******)0x0) {
      ppppppdStack_220 = (double ******)&stack0xfffffffffffffff0;
      FUN_100004bb4(&DAT_100a76380,&DAT_10080c1b0);
      pppppppdVar36 = param_1;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      unaff_x24 = pppppppdVar36 + 8;
      _swift_retain();
      unaff_x25 = (double *******)((long)param_6 + 0x38);
switchD_1000aeac0_caseD_97:
      unaff_x26 = (double *******)0x1;
      do {
        unaff_x22 = (double *******)unaff_x25[-3];
        unaff_x23 = (undefined **)unaff_x25[-2];
        unaff_x27 = (double *******)unaff_x25[-1];
        pppppppdVar34 = (double *******)*unaff_x25;
switchD_1000aeac0_caseD_54:
        _swift_bridgeObjectRetain(unaff_x23);
        _swift_bridgeObjectRetain(pppppppdVar34);
        pppppppdVar15 = unaff_x22;
        pppppppdVar35 = (double *******)unaff_x23;
        FUN_1001a2c70();
        if (((ulong)pppppppdVar35 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cbd4c);
          (*pcVar2)();
        }
        uVar30 = (ulong)pppppppdVar15 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)unaff_x24 + uVar30) =
             *(ulong *)((long)unaff_x24 + uVar30) | (long)unaff_x26 << ((ulong)pppppppdVar15 & 0x3f)
        ;
        ppppppdVar24 = pppppppdVar36[6];
        ppppppdVar24[(long)pppppppdVar15 * 2] = (double *****)unaff_x22;
        (ppppppdVar24 + (long)pppppppdVar15 * 2)[1] = (double *****)unaff_x23;
        ppppppdVar24 = pppppppdVar36[7];
        ppppppdVar24[(long)pppppppdVar15 * 2] = (double *****)unaff_x27;
        (ppppppdVar24 + (long)pppppppdVar15 * 2)[1] = (double *****)pppppppdVar34;
        if (SCARRY8((long)pppppppdVar36[2],1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cbd50);
          (*pcVar2)();
        }
        pppppppdVar36[2] = (double ******)((long)pppppppdVar36[2] + 1);
        unaff_x25 = unaff_x25 + 4;
        param_1 = (double *******)((long)param_1 + -1);
      } while (param_1 != (double *******)0x0);
      _swift_release(pppppppdVar36);
    }
    return pppppppdVar36;
  case (undefined **)0x4c:
  case (undefined **)0x51:
  case (undefined **)0x59:
  case (undefined **)0x68:
  case (undefined **)0x77:
  case (undefined **)0x9a:
  case (undefined **)0xaa:
  case (undefined **)0xb7:
  case (undefined **)0xd7:
    goto switchD_1000aeac0_caseD_4c;
  case (undefined **)0x4d:
    FUN_10006fd6c(0,3,0);
    ppppppdVar31 = unaff_x22[2];
    ppppppdVar38 = unaff_x22[3];
    ppppppdVar24 = (double ******)((long)ppppppdVar31 + 1);
    _swift_bridgeObjectRetain(param_1);
    if ((double ******)((ulong)ppppppdVar38 >> 1) <= ppppppdVar31) {
      FUN_10006fd6c((double ******)0x1 < ppppppdVar38,ppppppdVar24,1);
    }
    unaff_x22[2] = ppppppdVar24;
    *(code *)(unaff_x22 + (long)ppppppdVar31 * 5 + 4) = (code)0x0;
    unaff_x22[(long)ppppppdVar31 * 5 + 5] = (double ******)unaff_x23;
    unaff_x22[(long)ppppppdVar31 * 5 + 6] = (double ******)param_1;
    unaff_x22[(long)ppppppdVar31 * 5 + 7] = (double ******)0x0;
    unaff_x22[(long)ppppppdVar31 * 5 + 8] = (double ******)0x0;
    ppppppdVar13 = unaff_x22[3];
    ppppppdVar38 = (double ******)((long)ppppppdVar31 + 2);
    _swift_bridgeObjectRetain(param_1);
    if ((long)((ulong)ppppppdVar13 >> 1) < (long)ppppppdVar38) {
      FUN_10006fd6c((double ******)0x1 < ppppppdVar13,ppppppdVar38,1);
    }
    unaff_x22[2] = ppppppdVar38;
    *(code *)(unaff_x22 + (long)ppppppdVar24 * 5 + 4) = (code)0x1;
    unaff_x22[(long)ppppppdVar24 * 5 + 5] = (double ******)unaff_x23;
    unaff_x22[(long)ppppppdVar24 * 5 + 6] = (double ******)param_1;
    unaff_x22[(long)ppppppdVar24 * 5 + 7] = (double ******)0x0;
    unaff_x22[(long)ppppppdVar24 * 5 + 8] = (double ******)0x0;
    ppppppdVar24 = unaff_x22[3];
    ppppppdVar31 = (double ******)((long)ppppppdVar31 + 3);
    _swift_bridgeObjectRetain(param_1);
    if ((long)((ulong)ppppppdVar24 >> 1) < (long)ppppppdVar31) {
      FUN_10006fd6c((double ******)0x1 < ppppppdVar24,ppppppdVar31,1);
    }
    unaff_x22[2] = ppppppdVar31;
    *(code *)(unaff_x22 + (long)ppppppdVar38 * 5 + 4) = (code)0x2;
    unaff_x22[(long)ppppppdVar38 * 5 + 5] = (double ******)unaff_x23;
    unaff_x22[(long)ppppppdVar38 * 5 + 6] = (double ******)param_1;
    unaff_x22[(long)ppppppdVar38 * 5 + 7] = (double ******)0x0;
    unaff_x22[(long)ppppppdVar38 * 5 + 8] = (double ******)0x0;
    return unaff_x22;
  case (undefined **)0x4e:
    unaff_x26 = (double *******)&pppppppdStack_200;
    FUN_10007f314(&pppppppdStack_200,&stack0xfffffffffffffd98,&DAT_100a775e0,&DAT_10080c220);
    pppppppdVar36 = (double *******)unaff_x23;
    pppppppdVar34 = unaff_x24;
    FUN_1001a2c70();
    if (((ulong)pppppppdVar34 & 1) != 0) goto LAB_1000cd158;
    unaff_x27 = (double *******)((long)param_6 + 0x40);
    ppuVar23 = (undefined **)&stack0x00000010;
    unaff_x28 = (double ******)0x58;
  case (undefined **)0x87:
    do {
      uVar30 = (ulong)pppppppdVar36 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)((long)unaff_x27 + uVar30) =
           *(ulong *)((long)unaff_x27 + uVar30) | 1L << ((ulong)pppppppdVar36 & 0x3f);
      ppppppdVar24 = *(double *******)((long)param_6 + 0x30);
      ppppppdVar24[(long)pppppppdVar36 * 2] = (double *****)unaff_x23;
      (ppppppdVar24 + (long)pppppppdVar36 * 2)[1] = (double *****)unaff_x24;
      ppppppdVar24 = (double ******)
                     ((long)*(double *******)((long)param_6 + 0x38) +
                     (long)pppppppdVar36 * (long)unaff_x28);
      ppppppdVar31 = unaff_x26[2];
      ppppppdVar13 = unaff_x26[5];
      ppppppdVar38 = unaff_x26[4];
      ppppppdVar24[1] = (double *****)unaff_x26[3];
      *ppppppdVar24 = (double *****)ppppppdVar31;
      ppppppdVar24[3] = (double *****)ppppppdVar13;
      ppppppdVar24[2] = (double *****)ppppppdVar38;
      ppppppdVar38 = unaff_x26[7];
      ppppppdVar31 = unaff_x26[6];
      ppppppdVar46 = unaff_x26[9];
      ppppppdVar13 = unaff_x26[8];
      ppppppdVar48 = unaff_x26[0xb];
      ppppppdVar47 = unaff_x26[10];
      *(code *)(ppppppdVar24 + 10) = *(code *)(unaff_x26 + 0xc);
      ppppppdVar24[7] = (double *****)ppppppdVar46;
      ppppppdVar24[6] = (double *****)ppppppdVar13;
      ppppppdVar24[9] = (double *****)ppppppdVar48;
      ppppppdVar24[8] = (double *****)ppppppdVar47;
      ppppppdVar24[5] = (double *****)ppppppdVar38;
      ppppppdVar24[4] = (double *****)ppppppdVar31;
      if (SCARRY8((long)*(double *******)((long)param_6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cd198);
        (*pcVar2)();
      }
      *(double *******)((long)param_6 + 0x10) =
           (double ******)((long)*(double *******)((long)param_6 + 0x10) + 1);
      param_1 = (double *******)((long)param_1 + -1);
      if (param_1 == (double *******)0x0) {
        _swift_release(param_6);
        return (double *******)param_6;
      }
      ppppppdVar24 = (double ******)ppuVar23[8];
      ppppppdVar38 = (double ******)ppuVar23[0xb];
      ppppppdVar31 = (double ******)ppuVar23[10];
      unaff_x25[9] = (double ******)ppuVar23[9];
      unaff_x25[8] = ppppppdVar24;
      unaff_x25[0xb] = ppppppdVar38;
      unaff_x25[10] = ppppppdVar31;
      uStack_1a0 = *(code *)(ppuVar23 + 0xc);
      pppppppdVar34 = (double *******)ppuVar23[1];
      pppppppdVar36 = (double *******)*ppuVar23;
      pppppppdStack_1f8 = pppppppdVar34;
      unaff_x24 = pppppppdStack_1f8;
      pppppppdStack_200 = pppppppdVar36;
      unaff_x23 = (undefined **)pppppppdStack_200;
      ppppppdStack_1e8 = (double ******)ppuVar23[3];
      ppppppdStack_1f0 = (double ******)ppuVar23[2];
      ppppppdVar38 = (double ******)ppuVar23[4];
      ppppppdVar31 = (double ******)ppuVar23[7];
      ppppppdVar24 = (double ******)ppuVar23[6];
      unaff_x25[5] = (double ******)ppuVar23[5];
      unaff_x25[4] = ppppppdVar38;
      unaff_x25[7] = ppppppdVar31;
      unaff_x25[6] = ppppppdVar24;
      FUN_10007f314(&pppppppdStack_200,&stack0xfffffffffffffd98,&DAT_100a775e0,&DAT_10080c220);
      FUN_1001a2c70();
      ppuVar23 = ppuVar23 + 0xd;
    } while (((ulong)pppppppdVar34 & 1) == 0);
LAB_1000cd158:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cd15c);
    (*pcVar2)();
  case (undefined **)0x4f:
    goto switchD_1000aeac0_caseD_4f;
  case (undefined **)0x52:
  case (undefined **)0x5a:
  case (undefined **)0x69:
  case (undefined **)0x78:
  case (undefined **)0x9b:
  case (undefined **)0xab:
  case (undefined **)0xb8:
  case (undefined **)0xd8:
    goto switchD_1000aeac0_caseD_52;
  case (undefined **)0x53:
    goto switchD_1000aeac0_caseD_53;
  case (undefined **)0x54:
    goto switchD_1000aeac0_caseD_54;
  case (undefined **)0x57:
    goto switchD_1000aeac0_caseD_57;
  case (undefined **)0x60:
  case (undefined **)0x70:
  case (undefined **)0x74:
    pppppppdVar36 = (double *******)0x0;
    FUN_1002013d0();
    _swift_allocObject();
  case (undefined **)0xf8:
    pppppppdVar15 = (double *******)0x0;
    pppppppdVar34 = pppppppdVar36;
    goto switchD_1000aeac0_caseD_e;
  case (undefined **)0x61:
  case (undefined **)0x71:
switchD_1000aeac0_caseD_61:
    pppppppdVar36 = (double *******)((long)param_6 + 0x9d8);
    FUN_100004bb4(pppppppdVar36,&DAT_10080c0a0);
    puVar14 = PTR___sypN_100995e88;
    pppppppdVar34 = (double *******)&stack0xfffffffffffffdd8;
    _swift_dynamicCast(pppppppdVar34,&ppppppdStack_220,PTR___sypN_100995e88 + 8,pppppppdVar36,6);
    if (((ulong)pppppppdVar34 & 1) != 0) {
      if (in_stack_fffffffffffffdd8[2] != (double ******)0x0) {
        _swift_bridgeObjectRetain(in_stack_fffffffffffffdd8);
        lVar28 = 0x58;
        uVar30 = 0;
        FUN_1001a2c70(0x58);
        if ((uVar30 & 1) == 0) {
LAB_1000c76e8:
          _swift_bridgeObjectRelease(in_stack_fffffffffffffdd8);
        }
        else {
          FUN_10003e8bc(in_stack_fffffffffffffdd8[7] + lVar28 * 4,&ppppppdStack_220);
          _swift_bridgeObjectRelease(in_stack_fffffffffffffdd8);
          uVar32 = 0;
          FUN_10004003c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
          puVar11 = &stack0xfffffffffffffdd8;
          _swift_dynamicCast(puVar11,&ppppppdStack_220,puVar14 + 8,uVar32,6);
          if ((((ulong)puVar11 & 1) != 0) &&
             (_objc_msgSend((ID)in_stack_fffffffffffffdd8,"doubleValue"),
             in_stack_fffffffffffffdd8[2] != (double ******)0x0)) {
            ppppppdVar24 = param_2;
            _swift_bridgeObjectRetain(in_stack_fffffffffffffdd8);
            lVar28 = 0x59;
            uVar30 = 0;
            FUN_1001a2c70(0x59);
            if ((uVar30 & 1) == 0) goto LAB_1000c76e8;
            FUN_10003e8bc(in_stack_fffffffffffffdd8[7] + lVar28 * 4,&ppppppdStack_220);
            _swift_bridgeObjectRelease(in_stack_fffffffffffffdd8);
            puVar11 = &stack0xfffffffffffffdd8;
            _swift_dynamicCast(puVar11,&ppppppdStack_220,puVar14 + 8,uVar32,6);
            if ((((ulong)puVar11 & 1) == 0) ||
               (_objc_msgSend((ID)in_stack_fffffffffffffdd8,"doubleValue"),
               in_stack_fffffffffffffdd8[2] == (double ******)0x0)) goto LAB_1000c76f0;
            ppppppdVar31 = ppppppdVar24;
            _swift_bridgeObjectRetain(in_stack_fffffffffffffdd8);
            lVar28 = 0x6874646957;
            uVar30 = 0;
            FUN_1001a2c70(0x6874646957);
            if ((uVar30 & 1) == 0) goto LAB_1000c76e8;
            FUN_10003e8bc(in_stack_fffffffffffffdd8[7] + lVar28 * 4,&ppppppdStack_220);
            _swift_bridgeObjectRelease(in_stack_fffffffffffffdd8);
            puVar11 = &stack0xfffffffffffffdd8;
            _swift_dynamicCast(puVar11,&ppppppdStack_220,puVar14 + 8,uVar32,6);
            if (((ulong)puVar11 & 1) == 0) goto LAB_1000c76f0;
            _objc_msgSend((ID)in_stack_fffffffffffffdd8,"doubleValue");
            if (in_stack_fffffffffffffdd8[2] == (double ******)0x0) {
LAB_1000c7704:
              ppppppdVar38 = (double ******)0x0;
              ppppppdStack_220 = (double ******)0x0;
              lStack_208 = 0;
            }
            else {
              ppppppdVar38 = ppppppdVar31;
              _swift_bridgeObjectRetain(in_stack_fffffffffffffdd8);
              lVar28 = 0x746867696548;
              uVar30 = 0;
              FUN_1001a2c70(0x746867696548);
              if ((uVar30 & 1) == 0) {
                _swift_bridgeObjectRelease(in_stack_fffffffffffffdd8);
                goto LAB_1000c7704;
              }
              FUN_10003e8bc(in_stack_fffffffffffffdd8[7] + lVar28 * 4,&ppppppdStack_220);
              _swift_bridgeObjectRelease(in_stack_fffffffffffffdd8);
            }
            _swift_bridgeObjectRelease(in_stack_fffffffffffffdd8);
            if (lStack_208 == 0) goto LAB_1000c76b4;
            pppppppdVar34 = (double *******)&stack0xfffffffffffffdd8;
            _swift_dynamicCast(pppppppdVar34,&ppppppdStack_220,puVar14 + 8,uVar32,6);
            if (((ulong)pppppppdVar34 & 1) != 0) {
              _objc_msgSend((ID)in_stack_fffffffffffffdd8,"doubleValue");
              pppppppdVar34 = (double *******)0x0;
              cVar22 = (code)0x0;
              goto LAB_1000c76c8;
            }
            goto LAB_1000c76bc;
          }
        }
      }
LAB_1000c76f0:
      _swift_bridgeObjectRelease(in_stack_fffffffffffffdd8);
      pppppppdVar34 = in_stack_fffffffffffffdd8;
    }
LAB_1000c76bc:
    param_2 = (double ******)0x0;
    ppppppdVar24 = (double ******)0x0;
    cVar22 = (code)0x1;
    ppppppdVar31 = (double ******)0x0;
    ppppppdVar38 = (double ******)0x0;
LAB_1000c76c8:
    param_1[1] = ppppppdVar24;
    *param_1 = param_2;
    param_1[3] = ppppppdVar38;
    param_1[2] = ppppppdVar31;
    *(code *)(param_1 + 4) = cVar22;
    return pppppppdVar34;
  case (undefined **)0x62:
  case (undefined **)0x72:
    goto switchD_1000aeac0_caseD_62;
  case (undefined **)0x63:
  case (undefined **)0x73:
    goto switchD_1000aeac0_caseD_63;
  case (undefined **)0x64:
    unaff_x22 = (double *******)param_6;
    __s10Foundation4UUIDVMa();
    unaff_x28 = unaff_x22[-1];
    (*(code *)PTR____chkstk_darwin_100995498)(unaff_x28[8]);
    unaff_x23 = (undefined **)
                ((long)&ppppppdStack_270 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
    FUN_100401b14(0);
    pcVar2 = FUN_1000ce014;
    param_7 = aTStack_80;
    param_8 = (double ******)((long)unaff_x26 + 0x8a);
    param_9 = (double ******)0x8000000100885110;
    param_10 = (code *)((ulong)unaff_x26 | 5);
    param_11 = 0x8000000100885b70;
    pppppppdStack_70 = (double *******)param_6;
    goto switchD_1000aeac0_caseD_21;
  case (undefined **)0x65:
    return (double *******)param_6;
  case (undefined **)0x66:
    goto switchD_1000aeac0_caseD_66;
  case (undefined **)0x75:
    goto switchD_1000aeac0_caseD_75;
  case (undefined **)0x81:
  case (undefined **)0x91:
  case (undefined **)0xa1:
  case (undefined **)0xb1:
  case (undefined **)0xc1:
  case (undefined **)0xd1:
    goto switchD_1000aeac0_caseD_81;
  case (undefined **)0x82:
  case (undefined **)0x92:
  case (undefined **)0xa2:
    if (in_ZR) {
      return (double *******)param_6;
    }
    FUN_1000b83a0();
    return (double *******)param_6;
  case (undefined **)0x83:
  case (undefined **)0x93:
  case (undefined **)0xa3:
    goto switchD_1000aeac0_caseD_83;
  case (undefined **)0x84:
    __sSS6appendyySSF(0x1000000000000034,(ulong)(ppuVar23 + 0x4c) | 0x8000000000000000);
    pppppppdVar36 = (double *******)PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(pppppppdVar36);
    return pppppppdVar36;
  case (undefined **)0x85:
    FUN_1003e6e10();
  case (undefined **)0xb3:
    ppuVar23 = (undefined **)0x1;
switchD_1000aeac0_caseD_13:
    FUN_1003e6b94((long)ppuVar23 << 0x20,0x20705520656b6157,0xef79616c70736944);
    FUN_1000cb574();
    return param_1;
  case (undefined **)0x86:
    goto switchD_1000aeac0_caseD_86;
  case (undefined **)0x8b:
    goto switchD_1000aeac0_caseD_8b;
  case (undefined **)0x94:
  case (undefined **)0x98:
  case (undefined **)0xa8:
    FUN_100401b14(0);
    ppuVar23 = (undefined **)(s___100881ff0 + 0x10);
    goto switchD_1000aeac0_caseD_66;
  case (undefined **)0x95:
    pppppppdVar34 = (double *******)0x0;
    __s10Foundation4DateVMa();
    unaff_x22 = (double *******)pppppppdVar34[-1];
    ppuVar23 = (undefined **)unaff_x22[8];
    in_x16 = &PTR_TargetProtocolDescriptor_100995000;
  case (undefined **)0xfa:
    (*(code *)in_x16[0x93])(ppuVar23);
    pppppppdVar3 = (double *******)
                   ((long)&ppppppdStack_270 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
    if (*(code *)(param_1 + 3) == (code)0x1) {
      __s10Foundation4DateVACycfC(pppppppdVar3);
      param_6 = (code *)pppppppdVar3;
switchD_1000aeac0_caseD_81:
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      (*(code *)unaff_x22[1])(param_6,pppppppdVar34);
      if (1.0 <= (double)param_2 - (double)param_1[4]) {
        param_1[4] = param_2;
        FUN_1003e6e10(0);
        local_58._0_5_ = CONCAT14(1,(undefined4)local_58);
        uVar30 = 0x100000000;
        FUN_1003e6b94(0x100000000,0x20705520656b6157,0xef79616c70736944);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(int *)(pppppppdVar3 + -2) = (int)uVar30;
        if ((uVar30 >> 0x20 & 1) == 0) {
          FUN_1003fb48c(FUN_1000cdfe0,pppppppdVar3 + -4,0xd00000000000009c,0x8000000100885110,
                        0xd000000000000017,0x80000001008856e0,0x128,0);
          local_58 = (double *******)((ulong)local_58 & 0xffffffffffffff00);
          FUN_1003e6df8(uVar30 & 0xffffffff);
          return (double *******)0x1;
        }
        FUN_1003fb4ec(FUN_1000cdfd8,pppppppdVar3 + -4,0xd00000000000009c,0x8000000100885110,
                      0xd000000000000017,0x80000001008856e0,0x12d,0);
      }
    }
    return (double *******)0x0;
  case (undefined **)0x96:
  case (undefined **)0xb4:
    goto switchD_1000aeac0_caseD_96;
  case (undefined **)0x97:
  case (undefined **)0xd3:
    goto switchD_1000aeac0_caseD_97;
  case (undefined **)0xa4:
    FUN_1003fb4ec();
    return (double *******)param_6;
  case (undefined **)0xa5:
    goto switchD_1000aeac0_caseD_a5;
  case (undefined **)0xa7:
    pppppppdVar34 = (double *******)&local_58;
    _swift_retain();
    unaff_x22 = (double *******)&DAT_100a775c0;
    unaff_x26 = (double *******)0x1;
    unaff_x27 = (double *******)0x28;
    goto switchD_1000aeac0_caseD_83;
  case (undefined **)0xb2:
    while( true ) {
      while (unaff_x28 != (double ******)0x0) {
        uVar30 = ((ulong)unaff_x28 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)unaff_x28 & 0x5555555555555555) << 1;
        uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
        uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
        uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
        unaff_x28 = (double ******)((long)unaff_x28 - 1U & (ulong)unaff_x28);
        lVar28 = *(long *)((long)unaff_x24 +
                          ((long)unaff_x26 << 9 | LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) << 3));
        pppuVar18 = &ppuStack_90;
        _swift_beginAccess(lVar28 + 0x20,pppuVar18,0x21,0);
        pppppppdVar36 = param_1;
        thunk_FUN_1001a2c34();
        if (((ulong)pppuVar18 & 1) == 0) {
          _swift_endAccess(&ppuStack_90);
        }
        else {
          _swift_retain(lVar28);
          iVar5 = (int)*(undefined8 *)(lVar28 + 0x20);
          _swift_isUniquelyReferenced_nonNull_native();
          puStack_98 = *(undefined **)(lVar28 + 0x20);
          *(double ********)(lVar28 + 0x20) = unaff_x27;
          if (iVar5 == 0) {
            FUN_1000640e8();
          }
          puVar14 = puStack_98;
          uVar32 = *(undefined8 *)(*(long *)((long)puStack_98 + 0x38) + (long)pppppppdVar36 * 0x20);
          FUN_10006c5f8(pppppppdVar36,puStack_98);
          *(undefined **)(lVar28 + 0x20) = puVar14;
          _swift_endAccess(&ppuStack_90);
          _swift_bridgeObjectRelease(uVar32);
          uVar32 = *(undefined8 *)(lVar28 + 0x20);
          _swift_bridgeObjectRetain(uVar32);
          FUN_1000c4904();
          _swift_release(lVar28);
          _swift_bridgeObjectRelease(uVar32);
        }
      }
      bVar4 = SCARRY8((long)unaff_x26,1);
      unaff_x26 = (double *******)((long)unaff_x26 + 1);
      if (bVar4) break;
      if ((long)unaff_x25 <= (long)unaff_x26) {
        _swift_release(pppppppdVar34);
        return pppppppdVar34;
      }
      unaff_x28 = unaff_x24[(long)unaff_x26];
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c3a14);
    (*pcVar2)();
  case (undefined **)0xb5:
    goto switchD_1000aeac0_caseD_b5;
  case (undefined **)0xc2:
    IVar7 = _objc_msgSend((ID)param_6,(SEL)param_7);
    if (((((uint)IVar7 ^ (uint)param_6) & 0x1e0000) == 0) &&
       (IVar7 = _objc_msgSend((ID)pppppppdVar34,"keyCode"), (uint)IVar7 == uVar37)) {
      FUN_1000bf8cc(0x6f4d6c61626f6c67,0xed0000726f74696e);
    }
    _swift_release(param_1);
    return param_1;
  case (undefined **)0xc3:
    FUN_100005c50();
    __sSS10describingSSx_tclufC(&stack0xfffffffffffffd98,param_6);
    __sSS6appendyySSF();
    pppppppdVar34 = (double *******)param_6;
  case (undefined **)0xfb:
    param_6 = (code *)pppppppdVar34;
switchD_1000aeac0_caseD_32:
    _swift_bridgeObjectRelease(param_6);
    param_1[3] = (double ******)PTR___sSSN_1009957f8;
    *param_1 = ppppppdStack_260;
    param_1[1] = ppppppdStack_258;
    return (double *******)param_6;
  case (undefined **)0xc4:
    puVar14 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (param_6,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar14);
    __sSS6appendyySSF(0x3a6574617453202c,0xe900000000000020);
    uVar32 = 0;
    FUN_100005c50(0);
    __sSS10describingSSx_tclufC(&stack0xfffffffffffffd98,uVar32);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar32);
    __sSS6appendyySSF(0x43726f727265202c,0xed0000203a65646f);
    pppppppdVar36 = (double *******)PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(pppppppdVar36);
    param_1[3] = (double ******)PTR___sSSN_1009957f8;
    *param_1 = ppppppdStack_260;
    param_1[1] = ppppppdStack_258;
    return pppppppdVar36;
  case (undefined **)0xd2:
    if (uVar37 != (uint)param_6) {
      uVar32 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar32);
      param_7 = (TargetResilientWitnessHeader *)&pppppppdStack_290;
      pcVar29 = 
      "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/UURemoteServer/PrivacyScreen/PrivacyScreenManager.swift"
      ;
      puVar26 = (ushort *)&ppppppdStack_270;
      goto switchD_1000aeac0_caseD_42;
    }
LAB_1000bf4e8:
    __s6Darwin5noErrs5Int32Vvg();
    if (uVar37 != (uint)pcVar2) {
      pppppppdVar36 = (double *******)0xffffd974;
      goto LAB_1000bf584;
    }
    if ((long)pppppppdVar34 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000bf5c0);
      (*pcVar2)();
    }
    if ((uVar33 >> 0x12 & 1) == 0) {
      if ((uVar33 >> 0x13 & 1) != 0) {
        uVar37 = 0x800;
        if ((uVar33 >> 0x14 & 1) == 0) goto LAB_1000bf548;
LAB_1000bf544:
        uVar37 = uVar37 | 0x100;
        goto LAB_1000bf548;
      }
      if ((uVar33 >> 0x14 & 1) != 0) {
        uVar37 = 0;
        goto LAB_1000bf544;
      }
      if ((uVar33 >> 0x11 & 1) == 0) {
        pppppppdVar36 = (double *******)0xffffd972;
        goto LAB_1000bf584;
      }
      uVar37 = 0x200;
    }
    else {
      if ((uVar33 >> 0x13 & 1) == 0) {
        uVar37 = 0x1000;
      }
      else {
        uVar37 = 0x1800;
      }
      if ((uVar33 >> 0x14 & 1) != 0) goto LAB_1000bf544;
LAB_1000bf548:
      if ((uVar33 >> 0x11 & 1) != 0) {
        uVar37 = uVar37 | 0x200;
      }
    }
    local_78 = (double ******)0x0;
    _GetApplicationEventTarget();
    pppppppdVar36 = (double *******)(ulong)((uint)param_1 & 0xffff);
    _RegisterEventHotKey(pppppppdVar36,uVar37,0x15053484b,pcVar2,0,&local_78);
    *(double *******)((long)param_6 + 0x40) = local_78;
LAB_1000bf584:
    if (*(long *)PTR____stack_chk_guard_1009954a0 != lStack_48) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return pppppppdVar36;
  case (undefined **)0xd4:
    goto switchD_1000aeac0_caseD_d4;
  case (undefined **)0xd5:
    goto switchD_1000aeac0_caseD_d5;
  case (undefined **)0xe3:
    FUN_1003fb4ec();
    pppppppdVar36 = (double *******)0x4;
                    /* WARNING: Could not recover jumptable at 0x0001000b2adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])(4);
    return pppppppdVar36;
  case (undefined **)0xf9:
    FUN_1003a7e18(param_6,0);
    FUN_1003dbe30();
    (*(code *)(*(double *******)param_6)[0x21])(&ppuStack_90);
    _swift_release(param_6);
    lVar28 = _TtC14UURemoteServer22StreamerConnectSession::controllerAbility;
    _swift_beginAccess((code *)((long)pppppppdVar34 +
                               _TtC14UURemoteServer22StreamerConnectSession::controllerAbility),
                       &local_78,1,0);
    lVar17 = *(long *)((long)pppppppdVar34 + lVar28);
    *(undefined ***)((long)pppppppdVar34 + lVar28) = ppuStack_90;
    _swift_release();
    FUN_1000c7b64();
    pppppppdStack_c8 = *(double ********)(lVar17 + 0x78);
    bVar20 = *(byte *)(lVar17 + 0x81);
    _swift_release();
    param_1 = _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___appDataHandler;
    uVar32 = *(undefined8 *)
              ((long)pppppppdVar34 +
              (long)_TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___appDataHandler);
    _swift_retain(uVar32);
    FUN_10010c284();
    _swift_release(uVar32);
    lVar28 = _TtC14UURemoteServer22StreamerConnectSession::_peerState;
    _swift_beginAccess((code *)((long)pppppppdVar34 +
                               _TtC14UURemoteServer22StreamerConnectSession::_peerState),
                       &ppuStack_90,0,0);
    unaff_x23 = &PTR_FUN_100a73000;
    pppppppdVar35 = (double *******)&DAT_100b36000;
    if (*(long *)((long)&pppppppdStack_70 + lVar28) != 5) goto LAB_1000ca22c;
    lVar28 = *(long *)((long)pppppppdVar34 + (long)param_1);
    if ((bVar20 & 1) == 0) {
      if ((*(byte *)(lVar28 + 0x81) & 1) == 0) {
        pppppppdVar36 = *(double ********)(lVar28 + 0x78);
        if ((*(byte *)(lVar28 + 0x80) & 1) == 0) {
          if (pppppppdStack_c8 == pppppppdVar36) goto LAB_1000ca22c;
        }
        else if ((long)pppppppdVar36 < 5) {
          if ((long)pppppppdVar36 < 2) {
            if (pppppppdVar36 == (double *******)0x0) {
              if (pppppppdStack_c8 == (double *******)0x0) goto LAB_1000ca22c;
            }
            else if (pppppppdStack_c8 == (double *******)0x1) goto LAB_1000ca22c;
          }
          else if (pppppppdVar36 == (double *******)0x2) {
            if (pppppppdStack_c8 == (double *******)0x2) goto LAB_1000ca22c;
          }
          else if (pppppppdVar36 == (double *******)0x3) {
            if (pppppppdStack_c8 == (double *******)0x3) goto LAB_1000ca22c;
          }
          else if (pppppppdStack_c8 == (double *******)0x4) goto LAB_1000ca22c;
        }
        else if ((long)pppppppdVar36 < 7) {
          if (pppppppdVar36 == (double *******)0x5) {
            if (pppppppdStack_c8 == (double *******)0x5) goto LAB_1000ca22c;
          }
          else if (pppppppdStack_c8 == (double *******)0x6) goto LAB_1000ca22c;
        }
        else if (pppppppdVar36 == (double *******)0x7) {
          if (pppppppdStack_c8 == (double *******)0x7) goto LAB_1000ca22c;
        }
        else {
          if (pppppppdVar36 != (double *******)0x8) {
            in_ZR = pppppppdStack_c8 == (double *******)0x9;
            unaff_x24 = pppppppdVar34;
            goto switchD_1000aeac0_caseD_18;
          }
          if (pppppppdStack_c8 == (double *******)0x8) goto LAB_1000ca22c;
        }
      }
    }
    else if ((*(byte *)(lVar28 + 0x81) & 1) != 0) goto LAB_1000ca22c;
LAB_1000ca184:
    if ((double ******)unaff_x23[0x16c] != (double ******)0xffffffffffffffff) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar28 = *(long *)((long)pppppppdVar35[0x15][5] +
                      _TtC14UURemoteServer15StreamerManager::dispatcher);
    if ((lVar28 != 0) &&
       (pppppppdVar36 =
             *(double ********)
              (lVar28 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
       pppppppdVar36 != (double *******)0x0 && pppppppdVar36 == pppppppdVar34)) {
      pppppdVar25 = pppppppdVar35[0x15][0x13];
      _swift_retain(pppppdVar25);
      FUN_1000babdc();
      _swift_release(pppppdVar25);
    }
LAB_1000ca22c:
    if ((double ******)unaff_x23[0x16c] != (double ******)0xffffffffffffffff) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    pppppppdVar36 = (double *******)pppppppdVar35[0x15][0x10];
    lVar28 = *(long *)((long)pppppppdVar34 + (long)param_1);
    bVar20 = *(byte *)(lVar28 + 0x49);
    if ((bVar20 & 1) == 0) {
      if ((*(byte *)(lVar28 + 0x48) & 1) == 0) {
        uVar32 = 1;
      }
      else {
        uVar32 = *(undefined8 *)(&DAT_10080c2a0 + *(long *)(lVar28 + 0x40) * 8);
      }
    }
    else {
      uVar32 = 0;
    }
    uVar49 = *(undefined8 *)(lVar28 + 0x50);
    uVar50 = *(undefined8 *)(lVar28 + 0x58);
    _swift_retain(pppppppdVar36);
    _swift_bridgeObjectRetain(uVar50);
    bVar21 = 1;
    FUN_10000b50c(1,uVar32,bVar20,uVar49,uVar50);
    _swift_bridgeObjectRelease(uVar50);
    *(byte *)((long)pppppppdVar36 + 0x99) = bVar21 & 1;
    FUN_100019690(PTR___swiftEmptySetSingleton_100995eb0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    ppppppdStack_280 = (double ******)(CONCAT71(ppppppdStack_280._1_7_,bVar21) & 0xffffffffffffff01)
    ;
    FUN_1003fb48c(thunk_FUN_1000cdfe8,&pppppppdStack_290,0xd0000000000000a9,0x8000000100877660,
                  0xd000000000000027,0x8000000100885840,0x2a0,0);
    _swift_release(pppppppdVar36);
    return pppppppdVar36;
  case (undefined **)0xfe:
    goto switchD_1000aeac0_caseD_fe;
  case (undefined **)0xff:
    goto switchD_1000aeac0_caseD_ff;
  }
  param_1[3] = ppppppdVar24;
  pppppppdVar36 = (double *******)&DAT_10099a8f0;
  _swift_allocObject(&DAT_10099a8f0,0x38,7);
  *param_1 = (double ******)pppppppdVar36;
  pppppppdVar36[3] = (double ******)pppppppdStack_70;
  pppppppdVar36[2] = local_78;
  pppppppdVar36[5] = ppppppdStack_60;
  pppppppdVar36[4] = in_stack_ffffffffffffff98;
  *(undefined1 *)(pppppppdVar36 + 6) = (undefined1)local_58;
  return pppppppdVar36;
switchD_1000aeac0_caseD_83:
  unaff_x23 = (undefined **)&DAT_10080c1f0;
  goto LAB_1000cc488;
switchD_1000aeac0_caseD_66:
  ppuVar23 = ppuVar23 + 0x1b0;
switchD_1000aeac0_caseD_b5:
  ppuVar23 = ppuVar23 + -4;
  puVar26 = (ushort *)0x100883000;
switchD_1000aeac0_caseD_d5:
  puVar26 = puVar26 + 0x520;
  pcVar29 = (char *)0x8b;
  uVar30 = 0xd000000000000014;
switchD_1000aeac0_caseD_4f:
  param_6 = (code *)0x1000c2000;
  goto switchD_1000aeac0_caseD_57;
switchD_1000aeac0_caseD_4c:
  FUN_1003fb45c(param_6,param_7,param_8,param_9,param_10,param_11,param_12,0);
  ppuVar23 = &PTR_FUN_100a73000;
  goto switchD_1000aeac0_caseD_f;
switchD_1000aeac0_caseD_21:
  param_12 = 0xb5;
  param_13 = 0;
  goto switchD_1000aeac0_caseD_a5;
switchD_1000aeac0_caseD_20:
  FUN_100004bb4(param_6,param_7 + 0x2f4);
  goto switchD_1000aeac0_caseD_fe;
switchD_1000aeac0_caseD_e:
  FUN_1002013f0();
switchD_1000aeac0_caseD_11:
switchD_1000aeac0_caseD_53:
  _swift_allocObject();
  unaff_x23 = (undefined **)&DAT_10099b6d8;
  unaff_x24 = (double *******)unaff_x23;
  _swift_allocObject(&DAT_10099b6d8,0x18,7);
  _swift_unknownObjectWeakInit(unaff_x24 + 2,param_6);
  _swift_allocObject(&DAT_10099b6d8,0x18,7);
  pppppppdVar36 = (double *******)(unaff_x23 + 2);
  unaff_x22 = pppppppdVar15;
switchD_1000aeac0_caseD_ff:
  _swift_unknownObjectWeakInit(pppppppdVar36,param_6);
switchD_1000aeac0_caseD_86:
  param_1[4] = (double ******)pppppppdVar34;
  param_1[5] = (double ******)&PTR_PTR_1009a4f68;
  param_1[6] = (double ******)unaff_x22;
  param_1[7] = (double ******)&PTR_PTR_1009a4f58;
  param_1[8] = (double ******)FUN_1000cc400;
  param_1[9] = (double ******)unaff_x24;
  ppuVar23 = (undefined **)FUN_1000cc408;
  goto switchD_1000aeac0_caseD_10;
switchD_1000aeac0_caseD_52:
  *(undefined ***)((long)param_6 + 0x38) = ppuVar23;
  *(ushort **)((long)param_6 + 0x40) = puVar26;
  unaff_x22 = (double *******)((long)param_6 + 0x20);
  *unaff_x22 = (double ******)0x79656b;
  *(double *******)((long)param_6 + 0x28) = (double ******)0xe300000000000000;
  thunk_FUN_10068573c(&local_78);
  _swift_setDeallocating(pppppppdVar34);
  goto switchD_1000aeac0_caseD_44;
switchD_1000aeac0_caseD_3a:
  *(undefined ***)((long)param_6 + 0x38) = ppuVar23;
  *(double *******)((long)param_6 + 0x40) = (double ******)((long)puVar26 + 0x1c8);
switchD_1000aeac0_caseD_24:
  pppppppdVar36 = (double *******)((long)param_6 + 0x20);
  *pppppppdVar36 = (double ******)0x6e6f74747562;
  *(double *******)((long)param_6 + 0x28) = (double ******)0xe600000000000000;
  thunk_FUN_10068573c(&local_78);
  _swift_setDeallocating(pppppppdVar34);
  ppppppdVar24 = pppppppdVar34[2];
  puVar14 = &DAT_100a76d40;
  FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
  _swift_arrayDestroy(pppppppdVar36,ppppppdVar24,puVar14);
  FUN_100689480();
  pppppppdVar34 = &local_78;
  FUN_1000abcec(pppppppdVar34);
  ppppppdVar24 = (double ******)&DAT_10099ae08;
LAB_1000aeebc:
  param_1[3] = ppppppdVar24;
  *param_1 = (double ******)pppppppdVar36;
  *(code *)(param_1 + 1) = (code)0x1;
  return pppppppdVar34;
switchD_1000aeac0_caseD_44:
  ppppppdVar24 = pppppppdVar34[2];
  puVar14 = &DAT_100a76d40;
  FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
  _swift_arrayDestroy(unaff_x22,ppppppdVar24,puVar14);
  FUN_100689480();
  pppppppdVar36 = &local_78;
  FUN_1000abcec(pppppppdVar36);
  ppppppdVar24 = (double ******)&DAT_10099aac8;
LAB_1000aeda0:
  param_1[3] = ppppppdVar24;
  *param_1 = (double ******)unaff_x22;
  return pppppppdVar36;
switchD_1000aeac0_caseD_10:
  param_1[10] = (double ******)ppuVar23;
  param_1[0xb] = (double ******)unaff_x23;
  pppppppdVar34 = *(double ********)((long)param_6 + (long)unaff_x25);
switchD_1000aeac0_caseD_8b:
  *(double ********)((long)param_6 + (long)unaff_x25) = param_1;
  _swift_retain(param_1);
  _swift_release(pppppppdVar34);
  _swift_retain(0);
  return param_1;
switchD_1000aeac0_caseD_f:
  if ((double ******)ppuVar23[0x16c] != (double ******)0xffffffffffffffff) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  param_6 = (code *)DAT_100b360a8[0x10];
  param_1 = DAT_100b360a8;
switchD_1000aeac0_caseD_d4:
  _swift_retain(param_6);
  FUN_1000162bc(pppppppdVar39,0);
  _swift_release(param_6);
  FUN_100006d1c(param_1[0xc]);
  pppppdVar25 = param_1[9][2];
  puVar40 = (undefined8 *)
            ((long)pppppdVar25 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint);
  *puVar40 = 0;
  puVar40[1] = 0;
  puVar40 = (undefined8 *)
            ((long)pppppdVar25 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime)
  ;
  *puVar40 = 0;
  *(char *)(puVar40 + 1) = (char)unaff_x23;
  return (double *******)0x0;
switchD_1000aeac0_caseD_fe:
switchD_1000aeac0_caseD_62:
  _swift_dynamicCast();
  if (((ulong)param_6 & 1) == 0) {
    _swift_bridgeObjectRelease(param_1);
    _swift_errorRelease(local_58);
    return local_58;
  }
  ppppppdStack_220 = (double ******)0x0;
  __ss11_StringGutsV4growyySiF(0x1e);
  __sSS6appendyySSF(0xd00000000000001b,0x800000010087dad0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&stack0xfffffffffffffdd8,&ppppppdStack_220,PTR___sSiN_100995968,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x27,0xe100000000000000);
  ppppppdStack_270 = (double ******)0x42b3;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,ppppppdStack_220,0xe000000000000000,
             "Swift/arm64e-apple-macos.swiftinterface",0x27,2);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c72cc);
  (*pcVar2)();
switchD_1000aeac0_caseD_a5:
  FUN_1003fb48c(pcVar2,param_7,param_8,param_9,param_10,param_11,param_12,param_13);
  FUN_1000c815c();
  FUN_100198fa0();
  _swift_release(pcVar2);
  in_ZR = DAT_100a73b60 == -1;
switchD_1000aeac0_caseD_96:
  if (!in_ZR) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  pppppppdVar36 = DAT_100b360a8;
  ppppppdVar24 = DAT_100b360a8[0x10];
  _swift_retain(ppppppdVar24);
  FUN_10001236c();
  _swift_release(ppppppdVar24);
  FUN_1001041a8(pppppppdVar36[0xb]);
  lVar28 = 0;
  FUN_1000c82e4();
  pcVar29 = (char *)0x0;
  FUN_1003fb48c(FUN_1001a2c08,0,(code *)((long)unaff_x26 + 0x8c),0x8000000100885b90,
                0xd000000000000012,0x8000000100885c30,0x7b,0);
  if (*(ID *)(lVar28 + 0x18) == 0) {
    _swift_release();
  }
  else {
    pcVar29 = "invalidate";
    _objc_msgSend(*(ID *)(lVar28 + 0x18),"invalidate");
    *(undefined8 *)(lVar28 + 0x18) = 0;
    _swift_release(lVar28);
    lVar28 = 0;
  }
  FUN_1000c8388();
  lVar17 = lVar28;
  __s10Foundation4UUIDVACycfC(unaff_x23);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (*(code *)unaff_x28[1])(unaff_x23);
  plVar1 = (long *)(lVar28 + _TtC14UURemoteServer16ClipboardHandler::dragDropSessionID);
  lVar16 = plVar1[1];
  *plVar1 = lVar17;
  plVar1[1] = (long)pcVar29;
  _swift_bridgeObjectRelease(lVar16);
  puVar40 = (undefined8 *)(lVar28 + _TtC14UURemoteServer16ClipboardHandler::remoteDownloadPath);
  uVar32 = puVar40[1];
  *puVar40 = 0;
  puVar40[1] = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar32);
  FUN_1001bc1d8();
  _swift_getObjectType();
  (*(code *)unaff_x22[3])();
  _swift_unknownObjectRelease(uVar32);
  FUN_1000c8a24();
  FUN_1001cbfd8();
  _swift_release(uVar32);
  FUN_1001d4250(pppppppdVar36[0x12]);
  ppppppdVar24 = pppppppdVar36[0x13];
  _swift_retain(ppppppdVar24);
  FUN_1003fb48c(FUN_1000bb1bc,0,(code *)((long)unaff_x26 + 0x8d),0x8000000100882d60,
                (code *)((long)unaff_x26 + 9),0x8000000100885c50,0x13b,0);
  FUN_1000bb1e8();
  FUN_1000baeb4();
  _swift_release(ppppppdVar24);
  switchD_1000aeac0::caseD_2e(pppppppdVar36[0x14]);
  pppppppdVar36 = (double *******)0x0;
  FUN_1000c7c50();
  FUN_100407cdc(FUN_1000ce01c,pppppppdVar36[9],PTR___sytN_100995e90 + 8);
  FUN_1003fb48c(FUN_1002104f8,0,unaff_x26 + 0x14,0x8000000100885c70,(code *)((long)unaff_x26 + 2),
                0x8000000100885d30,0x6a,0);
  _swift_release(pppppppdVar36);
  return pppppppdVar36;
switchD_1000aeac0_caseD_57:
  param_6 = (code *)((long)param_6 + 0x9c);
  param_8 = (double ******)(uVar30 | (ulong)pcVar29);
  param_9 = (double ******)((ulong)ppuVar23 | 0x8000000000000000);
  param_11 = (ulong)puVar26 | 0x8000000000000000;
  param_7 = (TargetResilientWitnessHeader *)&ppppppdStack_270;
switchD_1000aeac0_caseD_75:
  FUN_1003fb4ec(param_6,param_7,param_8,param_9,0xd000000000000014,param_11,0x30d,0);
  return (double *******)param_6;
}

