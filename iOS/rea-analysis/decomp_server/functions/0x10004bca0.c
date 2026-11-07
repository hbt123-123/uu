// rea decompile_all
// name: FUN_10004bca0
// address: 0x10004bca0
// body: available
// range: 0x10004bca0-0x10004c86b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004c83c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010004c840) */
/* WARNING: Removing unreachable block (ram,0x00010004c84c) */

double * FUN_10004bca0(double param_1,double param_2,double param_3,double param_4,double *param_5,
                      long param_6,ulong param_7)

{
  double dVar1;
  double dVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  double *pdVar9;
  double *pdVar10;
  undefined *puVar11;
  double **ppdVar12;
  undefined *puVar13;
  double *pdVar14;
  double dVar15;
  undefined8 unaff_x20;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  undefined *puVar19;
  double dVar20;
  long lVar21;
  double dVar22;
  double *pdVar23;
  ulong uVar24;
  double *pdVar25;
  ulong uVar26;
  double dVar27;
  double dVar28;
  double *local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  pdVar9 = param_5;
  FUN_10004c86c();
  pdVar25 = param_5;
  _swift_bridgeObjectRetain(param_5);
  FUN_10004b080();
  pdVar10 = pdVar9;
  _swift_bridgeObjectRetain();
  FUN_100074ee0();
  _swift_bridgeObjectRelease(pdVar9);
  pdVar18 = pdVar10;
  FUN_10004c9e8(pdVar10,pdVar25);
  _swift_bridgeObjectRelease(pdVar25);
  _swift_bridgeObjectRelease(pdVar10);
  if (((ulong)pdVar18 & 1) == 0) {
    _swift_bridgeObjectRelease(pdVar9);
    pdVar25 = (double *)0x0;
  }
  else {
    dVar22 = pdVar9[2];
    pdVar10 = (double *)PTR___swiftEmptyArrayStorage_100995ea0;
    if (dVar22 != 0.0) {
      local_80 = (double *)PTR___swiftEmptyArrayStorage_100995ea0;
      dVar20 = dVar22;
      FUN_10006fc84(0,dVar22,0);
      pdVar25 = pdVar9 + 4;
      dVar15 = param_2;
      do {
        pdVar10 = local_80;
        uVar5 = *(uint *)pdVar25;
        uVar24 = (ulong)uVar5;
        _CGDisplayBounds(uVar24);
        param_2 = dVar15;
        dVar27 = param_3;
        dVar28 = param_4;
        if ((*(long *)(param_6 + 0x10) != 0) && (thunk_FUN_1001a2c34(), ((ulong)dVar20 & 1) != 0)) {
          pdVar18 = (double *)(*(long *)(param_6 + 0x38) + uVar24 * 0x10);
          dVar15 = pdVar18[1];
          param_1 = *pdVar18;
        }
        dVar2 = pdVar10[2];
        dVar1 = (double)((long)dVar2 + 1);
        local_80 = pdVar10;
        if ((ulong)pdVar10[3] >> 1 <= (ulong)dVar2) {
          dVar20 = dVar1;
          FUN_10006fc84(1 < (ulong)pdVar10[3],dVar1,1);
        }
        local_80[2] = dVar1;
        *(uint *)(local_80 + (long)dVar2 * 5 + 4) = uVar5;
        local_80[(long)dVar2 * 5 + 6] = dVar15;
        local_80[(long)dVar2 * 5 + 5] = param_1;
        local_80[(long)dVar2 * 5 + 7] = param_3;
        local_80[(long)dVar2 * 5 + 8] = param_4;
        dVar22 = (double)((long)dVar22 - 1);
        pdVar10 = local_80;
        pdVar25 = (double *)((long)pdVar25 + 4);
        dVar15 = param_2;
        param_3 = dVar27;
        param_4 = dVar28;
      } while (dVar22 != 0.0);
    }
    FUN_1000756ac(param_5,pdVar10);
    if (param_5 == (double *)0x0) {
      _swift_bridgeObjectRelease(pdVar9);
      _swift_bridgeObjectRelease(pdVar10);
      pdVar25 = (double *)0x1;
    }
    else {
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(param_6);
      pdVar25 = param_5;
      _swift_isUniquelyReferenced_nonNull_native(param_5);
      local_80 = param_5;
      FUN_100073950(param_6,FUN_100074cb4,0,pdVar25,&local_80);
      pdVar18 = local_80;
      _swift_retain_n(unaff_x20,2);
      pdVar25 = pdVar18;
      FUN_100073b64(pdVar18,unaff_x20);
      _swift_release(unaff_x20);
      _swift_release(pdVar18);
      dVar22 = pdVar25[2];
      pdVar18 = (double *)PTR___swiftEmptyArrayStorage_100995ea0;
      if (dVar22 != 0.0) {
        local_80 = (double *)PTR___swiftEmptyArrayStorage_100995ea0;
        _swift_retain(pdVar25);
        FUN_10006fbe4(0,dVar22,0);
        pdVar18 = local_80;
        pdVar23 = pdVar25 + 8;
        pdVar17 = pdVar23;
        __ss10_HashTableV11startBucketAB0D0Vvg
                  (pdVar23,~(-1L << ((ulong)*(byte *)(pdVar25 + 4) & 0x3f)));
        dVar20 = 0.0;
        iVar4 = *(int *)((long)pdVar25 + 0x24);
        do {
          if (((long)pdVar17 < 0) || (1L << ((ulong)*(byte *)(pdVar25 + 4) & 0x3f) <= (long)pdVar17)
             ) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c760);
            (*pcVar7)();
          }
          uVar24 = (ulong)pdVar17 >> 6;
          uVar26 = 1L << ((ulong)pdVar17 & 0x3f);
          if (((ulong)pdVar23[uVar24] & uVar26) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c764);
            (*pcVar7)();
          }
          if (iVar4 != *(int *)((long)pdVar25 + 0x24)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c768);
            (*pcVar7)();
          }
          uVar6 = *(undefined4 *)((long)pdVar25[6] + (long)pdVar17 * 4);
          _CGDisplayBounds(uVar6);
          dVar15 = pdVar18[2];
          local_80 = pdVar18;
          if ((ulong)pdVar18[3] >> 1 <= (ulong)dVar15) {
            FUN_10006fbe4(1 < (ulong)pdVar18[3],(long)dVar15 + 1U,1);
          }
          pdVar18 = local_80;
          param_1 = (double)(long)param_1;
          param_2 = (double)(long)param_2;
          local_80[2] = (double)((long)dVar15 + 1U);
          *(undefined4 *)(local_80 + (long)dVar15 * 3 + 4) = uVar6;
          local_80[(long)dVar15 * 3 + 5] = param_1;
          local_80[(long)dVar15 * 3 + 6] = param_2;
          pdVar16 = (double *)(1L << ((ulong)*(byte *)(pdVar25 + 4) & 0x3f));
          if ((long)pdVar16 <= (long)pdVar17) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c76c);
            (*pcVar7)();
          }
          if (((ulong)pdVar23[uVar24] & uVar26) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c770);
            (*pcVar7)();
          }
          if (iVar4 != *(int *)((long)pdVar25 + 0x24)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c774);
            (*pcVar7)();
          }
          uVar26 = (ulong)pdVar23[uVar24] & -2L << ((ulong)pdVar17 & 0x3f);
          if (uVar26 == 0) {
            lVar21 = uVar24 << 6;
            pdVar14 = pdVar25 + uVar24 + 9;
            do {
              uVar24 = uVar24 + 1;
              if ((ulong)((long)pdVar16 + 0x3fU) >> 6 <= uVar24) {
                FUN_10003f79c(pdVar17,iVar4,0);
                goto LAB_10004bf60;
              }
              dVar15 = *pdVar14;
              lVar21 = lVar21 + 0x40;
              pdVar14 = pdVar14 + 1;
            } while (dVar15 == 0.0);
            FUN_10003f79c(pdVar17,iVar4,0);
            uVar24 = ((ulong)dVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     ((ulong)dVar15 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            pdVar16 = (double *)(LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) + lVar21);
          }
          else {
            uVar24 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            pdVar16 = (double *)
                      (LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) |
                      (ulong)pdVar17 & 0x7fffffffffffffc0);
          }
LAB_10004bf60:
          dVar20 = (double)((long)dVar20 + 1);
          pdVar17 = pdVar16;
        } while (dVar20 != dVar22);
        _swift_release(pdVar25);
      }
      pdVar17 = (double *)pdVar18[2];
      pdVar23 = (double *)PTR___swiftEmptyDictionarySingleton_100995ea8;
      if (pdVar17 != (double *)0x0) {
        puVar11 = &DAT_100a761a8;
        FUN_100004bb4(&DAT_100a761a8,&DAT_10080c1e0);
        __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(pdVar17,puVar11);
        pdVar23 = pdVar17;
      }
      local_80 = pdVar23;
      _swift_bridgeObjectRetain(pdVar18);
      FUN_100073284();
      _swift_bridgeObjectRelease(pdVar18);
      pdVar18 = local_80;
      dVar22 = pdVar9[2];
      pdVar23 = (double *)PTR___swiftEmptyArrayStorage_100995ea0;
      if (dVar22 != 0.0) {
        pdVar17 = pdVar9 + 4;
        do {
          iVar4 = *(int *)pdVar17;
          if ((((param_7 >> 0x20 & 1) == 0) &&
              (iVar8 = iVar4, _CGDisplayMirrorsDisplay(), iVar8 != 0)) &&
             (iVar4 == (int)param_7 || iVar8 == (int)param_7)) {
            pdVar16 = pdVar23;
            _swift_isUniquelyReferenced_nonNull_native();
            local_80 = pdVar23;
            if (((ulong)pdVar16 & 1) == 0) {
              FUN_10006fbb8(0,(long)pdVar23[2] + 1,1);
            }
            dVar20 = local_80[2];
            if ((ulong)local_80[3] >> 1 <= (ulong)dVar20) {
              FUN_10006fbb8(1 < (ulong)local_80[3],(long)dVar20 + 1U,1);
            }
            local_80[2] = (double)((long)dVar20 + 1U);
            *(int *)((long)local_80 + (long)dVar20 * 4 + 0x20) = iVar4;
            pdVar23 = local_80;
          }
          dVar22 = (double)((long)dVar22 + -1);
          pdVar17 = (double *)((long)pdVar17 + 4);
        } while (dVar22 != 0.0);
      }
      _swift_bridgeObjectRelease(pdVar9);
      pdVar9 = pdVar18;
      pdVar17 = pdVar25;
      FUN_10004cb68();
      _swift_release(pdVar18);
      if ((((ulong)pdVar9 & 1) == 0) || (pdVar23[2] != 0.0)) {
        local_80 = (double *)0x0;
        ppdVar12 = &local_80;
        _CGBeginDisplayConfiguration();
        pdVar9 = local_80;
        if (((int)ppdVar12 == 0) && (local_80 != (double *)0x0)) {
          dVar20 = pdVar23[2];
          dVar22 = 0.0;
          do {
            if (dVar20 == dVar22) {
              _swift_release(pdVar23);
              dVar22 = pdVar10[2];
              if (dVar22 == 0.0) goto LAB_10004c4dc;
              dVar20 = 0.0;
              pdVar18 = pdVar10;
              goto LAB_10004c414;
            }
            if ((ulong)pdVar23[2] <= (ulong)dVar22) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c80c);
              (*pcVar7)();
            }
            pdVar17 = (double *)(ulong)*(uint *)((long)pdVar23 + (long)dVar22 * 4 + 0x20);
            pdVar18 = pdVar9;
            _CGConfigureDisplayMirrorOfDisplay(pdVar9,pdVar17,0);
            dVar22 = (double)((long)dVar22 + 1);
          } while ((int)pdVar18 == 0);
          _swift_release(pdVar25);
          _swift_bridgeObjectRelease(param_5);
          _swift_bridgeObjectRelease(pdVar10);
          _swift_release(pdVar23);
          _CGCancelDisplayConfiguration(pdVar9);
          pdVar25 = (double *)((ulong)pdVar18 & 0xffffffff);
        }
        else {
          _swift_bridgeObjectRelease(param_5);
          _swift_bridgeObjectRelease(pdVar10);
          _swift_release(pdVar23);
          _swift_release(pdVar25);
          pdVar25 = (double *)((ulong)ppdVar12 & 0xffffffff);
        }
      }
      else {
        _swift_release(pdVar23);
        _swift_bridgeObjectRelease(param_5);
        _swift_bridgeObjectRelease(pdVar10);
        FUN_100401b14(0);
        FUN_1003fb45c(FUN_10004cb3c,0,0xd0000000000000a5,0x800000010087d850,0xd000000000000042,
                      0x800000010087da30,0xc2,0);
      }
    }
  }
  goto LAB_10004c3a0;
  while (dVar20 = (double)((long)dVar20 + 1), pdVar17 = pdVar23, pdVar18 = pdVar18 + 5,
        dVar22 != dVar20) {
LAB_10004c414:
    if ((ulong)pdVar10[2] <= (ulong)dVar20) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c810);
      (*pcVar7)();
    }
    pdVar23 = (double *)(ulong)*(uint *)(pdVar18 + 4);
    dVar27 = pdVar18[6];
    dVar15 = pdVar18[5];
    if ((param_5[2] != 0.0) && (pdVar16 = pdVar23, thunk_FUN_1001a2c34(), ((ulong)pdVar17 & 1) != 0)
       ) {
      pdVar17 = (double *)((long)param_5[7] + (long)pdVar16 * 0x10);
      dVar27 = pdVar17[1];
      dVar15 = *pdVar17;
    }
    param_1 = (double)(long)dVar15;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c814);
      (*pcVar7)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c818);
      (*pcVar7)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c81c);
      (*pcVar7)();
    }
    param_2 = (double)(long)dVar27;
    if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c820);
      (*pcVar7)();
    }
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c824);
      (*pcVar7)();
    }
    if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c828);
      (*pcVar7)();
    }
    pdVar17 = pdVar9;
    _CGConfigureDisplayOrigin(pdVar9,pdVar23,(int)param_1,(int)param_2);
    if ((int)pdVar17 != 0) {
      _swift_release(pdVar25);
      _swift_bridgeObjectRelease(param_5);
      _swift_bridgeObjectRelease(pdVar10);
      _CGCancelDisplayConfiguration(pdVar9);
      pdVar25 = (double *)((ulong)pdVar17 & 0xffffffff);
      goto LAB_10004c3a0;
    }
  }
LAB_10004c4dc:
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(pdVar10);
  _CGCompleteDisplayConfiguration(pdVar9,1);
  if ((int)pdVar9 == 0) {
    if (((param_7 >> 0x20 & 1) == 0) && (_CGDisplayIsInMirrorSet(), (int)param_7 != 0)) {
      _swift_release(pdVar25);
      pdVar25 = (double *)0x2;
    }
    else {
      puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
      dVar22 = pdVar25[2];
      if (dVar22 != 0.0) {
        _swift_retain(pdVar25);
        FUN_10006fbe4(0,dVar22,0);
        pdVar9 = pdVar25 + 8;
        pdVar10 = pdVar9;
        __ss10_HashTableV11startBucketAB0D0Vvg
                  (pdVar9,~(-1L << ((ulong)*(byte *)(pdVar25 + 4) & 0x3f)));
        dVar20 = 0.0;
        do {
          if (((long)pdVar10 < 0) || (1L << ((ulong)*(byte *)(pdVar25 + 4) & 0x3f) <= (long)pdVar10)
             ) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c82c);
            (*pcVar7)();
          }
          uVar24 = (ulong)pdVar10 >> 6;
          uVar26 = 1L << ((ulong)pdVar10 & 0x3f);
          if (((ulong)pdVar9[uVar24] & uVar26) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c830);
            (*pcVar7)();
          }
          iVar4 = *(int *)((long)pdVar25 + 0x24);
          uVar6 = *(undefined4 *)((long)pdVar25[6] + (long)pdVar10 * 4);
          _CGDisplayBounds(uVar6);
          uVar3 = *(ulong *)(puVar11 + 0x10);
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar3) {
            FUN_10006fbe4(1 < *(ulong *)(puVar11 + 0x18),uVar3 + 1,1);
          }
          *(ulong *)(puVar11 + 0x10) = uVar3 + 1;
          *(undefined4 *)(puVar11 + uVar3 * 0x18 + 0x20) = uVar6;
          *(double *)(puVar11 + uVar3 * 0x18 + 0x28) = param_1;
          *(double *)(puVar11 + uVar3 * 0x18 + 0x30) = param_2;
          pdVar18 = (double *)(1L << ((ulong)*(byte *)(pdVar25 + 4) & 0x3f));
          if ((long)pdVar18 <= (long)pdVar10) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c834);
            (*pcVar7)();
          }
          if (((ulong)pdVar9[uVar24] & uVar26) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c838);
            (*pcVar7)();
          }
          if (iVar4 != *(int *)((long)pdVar25 + 0x24)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10004c83c);
            (*pcVar7)();
          }
          uVar26 = (ulong)pdVar9[uVar24] & -2L << ((ulong)pdVar10 & 0x3f);
          if (uVar26 == 0) {
            lVar21 = uVar24 << 6;
            pdVar23 = pdVar25 + uVar24 + 9;
            do {
              uVar24 = uVar24 + 1;
              if ((ulong)((long)pdVar18 + 0x3fU) >> 6 <= uVar24) {
                FUN_10003f79c(pdVar10,iVar4,0);
                goto LAB_10004c5f4;
              }
              dVar15 = *pdVar23;
              lVar21 = lVar21 + 0x40;
              pdVar23 = pdVar23 + 1;
            } while (dVar15 == 0.0);
            FUN_10003f79c(pdVar10,iVar4,0);
            uVar24 = ((ulong)dVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     ((ulong)dVar15 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            pdVar18 = (double *)(LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) + lVar21);
          }
          else {
            uVar24 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            pdVar18 = (double *)
                      (LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) |
                      (ulong)pdVar10 & 0x7fffffffffffffc0);
          }
LAB_10004c5f4:
          dVar20 = (double)((long)dVar20 + 1);
          pdVar10 = pdVar18;
        } while (dVar20 != dVar22);
        _swift_release(pdVar25);
      }
      puVar19 = *(undefined **)(puVar11 + 0x10);
      puVar13 = PTR___swiftEmptyDictionarySingleton_100995ea8;
      if (puVar19 != (undefined *)0x0) {
        puVar13 = &DAT_100a761a8;
        FUN_100004bb4(&DAT_100a761a8,&DAT_10080c1e0);
        __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar19,puVar13);
        puVar13 = puVar19;
      }
      _swift_bridgeObjectRetain(puVar11);
      FUN_100073284();
      _swift_bridgeObjectRelease(puVar11);
      puVar11 = puVar13;
      FUN_10004cb68(puVar13,pdVar25);
      if (((ulong)puVar11 & 1) != 0) {
        _swift_release(puVar13);
      }
    }
  }
  else {
    _swift_release(pdVar25);
    pdVar25 = (double *)((ulong)pdVar9 & 0xffffffff);
  }
LAB_10004c3a0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return pdVar25;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

