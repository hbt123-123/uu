// rea decompile_all
// name: FUN_1001337d4
// address: 0x1001337d4
// body: available
// range: 0x1001337d4-0x1001343ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001343ec to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001337d4(ulong param_1,long param_2,undefined *param_3,undefined *param_4)

{
  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  ID self;
  ID IVar15;
  char *pcVar16;
  long lVar17;
  undefined *puVar18;
  double dVar19;
  undefined *puVar20;
  undefined1 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar21;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x12_01;
  code *pcVar22;
  long unaff_x20;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  double dVar32;
  undefined1 auStack_1e0 [16];
  double adStack_1d0 [2];
  long alStack_1c0 [2];
  undefined *local_1b0;
  uint local_1a4;
  long local_1a0;
  long local_198;
  ulong local_190;
  code *local_188;
  uint local_180;
  uint local_17c;
  undefined *local_178;
  code *local_170;
  double local_168;
  ulong local_160;
  code *pcStack_158;
  undefined *local_150;
  long local_148;
  code *local_140;
  undefined8 uStack_138;
  long local_130;
  undefined *local_128;
  char *local_120;
  char *local_118;
  long local_110;
  ulong local_108;
  long lStack_100;
  undefined1 auStack_f8 [24];
  ulong local_e0;
  long local_d8;
  undefined4 local_d0;
  long local_c8;
  code *pcStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8 [6];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar7 = &DAT_100a766c8;
  puVar9 = &DAT_10080b1d0;
  FUN_100004bb4();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar31 = (long)&local_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar31;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar31 = lVar31 - extraout_x12;
  puVar7 = (undefined *)0x0;
  __s10Foundation3URLVMa();
  local_110 = *(long *)(puVar7 + -8);
  local_128 = puVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_110 + 0x40));
  uVar27 = lVar31 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar29 = uVar27 - extraout_x12_00;
  uVar23 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar28 = (uint)param_1;
  local_a8[0] = uVar28;
  _swift_retain(uVar23);
  FUN_1003e37e8(&local_e0,local_a8);
  _swift_release(uVar23);
  uVar12 = local_e0;
  if (local_e0 != 0) {
    plVar24 = *(long **)(local_e0 + 0x10);
    pcVar22 = *(code **)(*plVar24 + 0xb8);
    plVar8 = plVar24;
    _swift_retain();
    (*pcVar22)();
    _swift_release(plVar24);
    if (((ulong)plVar8 & 1) == 0) {
      plVar24 = *(long **)(uVar12 + 0x10);
      pcVar22 = *(code **)(*plVar24 + 0xa8);
      plVar8 = plVar24;
      _swift_retain();
      (*pcVar22)();
      _swift_release(plVar24);
      if ((long)plVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343ac);
        (*pcVar22)();
      }
      puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_198 = param_2;
      local_190 = uVar27;
      local_148 = lVar29;
      if (plVar8 != (long *)0x0) {
        plVar24 = (long *)0x0;
        do {
          plVar25 = *(long **)(uVar12 + 0x10);
          pcVar22 = *(code **)(*plVar25 + 0x90);
          _swift_retain(plVar25);
          (*pcVar22)(&local_e0,plVar24);
          _swift_release(plVar25);
          uVar27 = local_e0;
          if (local_e0 != 0) {
            _swift_retain(local_e0);
            puVar10 = puVar7;
            _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
            if ((((int)puVar10 == 0) || ((long)puVar7 < 0)) ||
               (puVar10 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar7 >> 0x3e == 0) {
                puVar9 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar9 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
                if ((long)puVar7 < 0) {
                  puVar9 = puVar7;
                }
                __ss18_CocoaArrayWrapperV8endIndexSivg();
              }
              puVar9 = puVar9 + 1;
              puVar10 = (undefined *)0x0;
              param_3 = (undefined *)0x1;
              FUN_10003606c(0,puVar9,1);
              param_4 = puVar7;
            }
            uVar21 = (ulong)puVar10 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar21 + 0x10);
            puVar18 = (undefined *)(uVar1 + 1);
            puVar7 = puVar10;
            if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar1) {
              puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar21 + 0x18));
              param_3 = (undefined *)0x1;
              puVar9 = puVar18;
              FUN_10003606c(puVar7,puVar18,1);
              uVar21 = (ulong)puVar7 & 0xffffffffffffff8;
              param_4 = puVar10;
            }
            *(undefined **)(uVar21 + 0x10) = puVar18;
            *(ulong *)(uVar21 + uVar1 * 8 + 0x20) = uVar27;
            _swift_release(uVar27);
          }
          plVar24 = (long *)((long)plVar24 + 1);
        } while (plVar8 != plVar24);
      }
      uVar27 = (ulong)puVar7 >> 0x3e;
      if (uVar27 == 0) {
        puVar10 = *(undefined **)((undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar10 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if (((ulong)puVar7 & 0x8000000000000000) != 0) {
          puVar10 = puVar7;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      _swift_release(uVar12);
      if (((puVar10 != (undefined *)0x0) &&
          (uVar12 = param_1, FUN_100133770(), lVar26 = local_198, ((ulong)puVar9 & 1) == 0)) &&
         (local_198 < (long)uVar12)) {
        puVar10 = (undefined *)(local_198 * 0x5dc);
        if (SUB168(SEXT816(local_198) * SEXT816(0x5dc),8) != (long)puVar10 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343c4);
          (*pcVar22)();
        }
        puVar18 = puVar10 + 0x5dc;
        if (SCARRY8((long)puVar10,0x5dc)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343c8);
          (*pcVar22)();
        }
        if (uVar27 == 0) {
          puVar11 = *(undefined **)((undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          if ((long)puVar11 <= (long)puVar18) {
            puVar18 = puVar11;
          }
          if ((long)puVar18 < (long)puVar10) {
LAB_1001343c8:
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343cc);
            (*pcVar22)();
          }
        }
        else {
          puVar11 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if (((ulong)puVar7 & 0x8000000000000000) != 0) {
            puVar11 = puVar7;
          }
          puVar13 = puVar11;
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          if ((long)puVar13 <= (long)puVar18) {
            puVar18 = puVar13;
          }
          if ((long)puVar18 < (long)puVar10) goto LAB_1001343c8;
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if ((long)puVar11 < (long)puVar10) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343d0);
          (*pcVar22)();
        }
        if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343d4);
          (*pcVar22)();
        }
        if (uVar27 == 0) {
          puVar11 = *(undefined **)((undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar11 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if (((ulong)puVar7 & 0x8000000000000000) != 0) {
            puVar11 = puVar7;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if ((long)puVar11 < (long)puVar18) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343d8);
          (*pcVar22)();
        }
        if ((long)puVar18 < 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343dc);
          (*pcVar22)();
        }
        if ((((ulong)puVar7 & 0xc000000000000001) == 0) || ((long)puVar10 - (long)puVar18 == 0)) {
          _swift_bridgeObjectRetain(puVar7);
        }
        else {
          if (puVar18 <= puVar10) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343e8);
            (*pcVar22)();
          }
          puVar13 = (undefined *)0x0;
          FUN_10016db6c(0);
          _swift_bridgeObjectRetain(puVar7);
          puVar11 = puVar10;
          do {
            puVar20 = puVar11 + 1;
            puVar9 = puVar7;
            param_3 = puVar13;
            __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(puVar11,puVar7,puVar13);
            puVar11 = puVar20;
          } while (puVar18 != puVar20);
        }
        _swift_bridgeObjectRelease(puVar7);
        if (uVar27 == 0) {
          puVar7 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          bVar5 = SBORROW8((long)puVar18,(long)puVar10);
          puVar13 = puVar18 + lVar26 * -0x5dc;
          bVar6 = puVar13 == (undefined *)0x0;
          puVar20 = param_4;
          puVar11 = puVar10;
          puVar18 = puVar7 + 0x20;
          puVar10 = puVar7;
          puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
          if (!bVar6) {
LAB_100133c18:
            local_1a4 = uVar28;
            if (bVar6 || (long)puVar13 < 0 != bVar5) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343ec);
              (*pcVar22)();
            }
            local_118 = s_____10088fc40 + 0x20;
            local_120 = "ardFileUploadCopyModel.swift";
            local_1b0 = puVar10;
            _swift_unknownObjectRetain(puVar10);
            plVar8 = (long *)(puVar18 + (long)puVar11 * 8);
            puVar18 = local_128;
            lVar26 = local_110;
            puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
            local_1a0 = lVar31;
            do {
              lVar17 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url;
              lVar30 = *plVar8;
              puVar20 = (undefined *)0x0;
              _swift_beginAccess(lVar30 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url,
                                 local_a8,0,0);
              FUN_1000e3888(lVar30 + lVar17,lVar31);
              pcVar22 = *(code **)(lVar26 + 0x30);
              lVar14 = lVar31;
              (*pcVar22)(lVar31,1,puVar18);
              lVar17 = local_148;
              if ((int)lVar14 == 1) {
                puVar9 = &DAT_100a766c8;
                param_3 = &DAT_10080b1d0;
                FUN_100040bb4(lVar31,&DAT_100a766c8,&DAT_10080b1d0);
              }
              else {
                local_188 = *(code **)(lVar26 + 0x20);
                local_178 = puVar13;
                local_150 = puVar7;
                (*local_188)(local_148,lVar31,puVar18);
                FUN_100401b14(0);
                (*(code *)PTR____chkstk_darwin_100995498)();
                uVar27 = lVar29 - 0x20;
                local_170 = pcVar22;
                *(long *)(lVar29 + -0x10) = lVar17;
                _swift_retain(lVar30);
                dVar19 = -2.3158417847464124e+77;
                pcVar22 = FUN_100135a58;
                pcVar16 = local_118;
                FUN_1003fb45c();
                local_e0 = 0;
                local_d8 = 0xe000000000000000;
                local_d0 = 0;
                pcStack_c0 = (code *)0x0;
                local_b8 = 0;
                local_c8 = 0;
                uStack_b0 = 0xc000000000000000;
                __s10Foundation3URLV4pathSSvg();
                uVar12 = uVar27;
                FUN_100219ce4();
                _swift_bridgeObjectRelease(uVar27);
                local_140 = (code *)0x0;
                if ((uVar12 & 1) == 0) {
                  local_140 = pcVar22;
                }
                local_160 = CONCAT44(local_160._4_4_,(int)pcVar16);
                dVar32 = 0.0;
                if (((ulong)pcVar16 & 1) == 0) {
                  dVar32 = dVar19;
                }
                local_108 = local_108 & 0xffffffffffffff00;
                pcVar16 = "defaultManager";
                local_168 = dVar19;
                self = NSFileManager::defaultManager
                                 ((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
                IVar15 = self;
                __s10Foundation3URLV4pathSSvg();
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
                _swift_bridgeObjectRelease(pcVar16);
                IVar15 = NSFileManager::fileExistsAtPath_isDirectory_
                                   (self,"fileExistsAtPath:isDirectory:",IVar15,&local_108);
                local_17c = (uint)IVar15;
                local_180 = (uint)(byte)local_108;
                local_108 = 0;
                lStack_100 = -0x2000000000000000;
                FUN_1003fb45c(FUN_100135a60,lVar30,0xd0000000000000ac,
                              (ulong)local_118 | 0x8000000000000000,0xd00000000000002e,
                              (ulong)local_120 | 0x8000000000000000,0x81,7);
                lVar31 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::folderURl;
                _swift_beginAccess(lVar30 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::
                                            folderURl,auStack_f8,0,0);
                lVar26 = local_130;
                FUN_1000e3888(lVar30 + lVar31,local_130);
                lVar31 = lVar26;
                (*local_170)(lVar26,1,puVar18);
                uVar12 = local_190;
                if ((int)lVar31 == 1) {
                  FUN_100040bb4(lVar26,&DAT_100a766c8,&DAT_10080b1d0);
                }
                else {
                  (*local_188)(local_190,lVar26,puVar18);
                  uVar27 = uVar12;
                  FUN_10021a1b8();
                  (**(code **)(local_110 + 8))(uVar12,puVar18);
                  local_108 = uVar27;
                  lStack_100 = lVar17;
                }
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(ulong **)(lVar29 + -0x10) = &local_108;
                pcVar2 = local_118;
                pcVar16 = local_120;
                FUN_1003fb45c(FUN_100135a68,lVar29 + -0x20,0xd0000000000000ac,
                              (ulong)local_118 | 0x8000000000000000,0xd00000000000002e,
                              (ulong)local_120 | 0x8000000000000000,0x85,7);
                lVar31 = lStack_100;
                uVar12 = local_108;
                _swift_bridgeObjectRetain(lStack_100);
                _swift_bridgeObjectRelease(0xe000000000000000);
                local_e0 = uVar12;
                local_d8 = lVar31;
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(ulong **)(lVar29 + -0x10) = &local_e0;
                FUN_1003fb45c(FUN_100135a70,lVar29 + -0x20,0xd0000000000000ac,
                              (ulong)pcVar2 | 0x8000000000000000,0xd00000000000002e,
                              (ulong)pcVar16 | 0x8000000000000000,0x87,7);
                puVar7 = local_150;
                pcStack_c0 = local_140;
                if (((local_160 & 1) == 0) && (0x7fefffffffffffff < (ulong)ABS(local_168))) {
                    /* WARNING: Does not return */
                  pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343a0);
                  (*pcVar22)();
                }
                if (dVar32 <= -1.0) {
                    /* WARNING: Does not return */
                  pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343a4);
                  (*pcVar22)();
                }
                if (1.8446744073709552e+19 <= dVar32) {
                    /* WARNING: Does not return */
                  pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343a8);
                  (*pcVar22)();
                }
                local_c8 = (long)dVar32;
                local_d0 = 0x10;
                if ((local_17c & local_180) == 0) {
                  local_d0 = 0x80;
                }
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(undefined8 *)(lVar29 + -0x20) = extraout_x12_01;
                *(double *)(lVar29 + -0x18) = dVar32;
                *(undefined1 *)(lVar29 + -0x10) = extraout_w8;
                param_3 = (undefined *)0xd0000000000000ac;
                puVar20 = (undefined *)((ulong)local_118 | 0x8000000000000000);
                FUN_1003fb45c(FUN_100135a78,lVar29 + -0x30,0xd0000000000000ac,puVar20,
                              0xd00000000000002e,(ulong)local_120 | 0x8000000000000000,0x8b,7);
                uVar3 = local_d0;
                lVar26 = local_d8;
                uVar12 = local_e0;
                uStack_138 = uStack_b0;
                local_140 = (code *)local_b8;
                pcStack_158 = pcStack_c0;
                local_160 = local_c8;
                _swift_bridgeObjectRetain(local_d8);
                FUN_100008184(local_140,uStack_138);
                puVar9 = puVar7;
                _swift_isUniquelyReferenced_nonNull_native();
                puVar10 = puVar7;
                if (((ulong)puVar9 & 1) == 0) {
                  puVar10 = (undefined *)0x0;
                  param_3 = (undefined *)0x1;
                  FUN_1000361bc(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
                  puVar20 = puVar7;
                }
                puVar13 = local_178;
                uVar27 = *(ulong *)(puVar10 + 0x10);
                puVar7 = puVar10;
                if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar27) {
                  puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                  param_3 = (undefined *)0x1;
                  FUN_1000361bc(puVar7,uVar27 + 1,1,puVar10);
                  puVar20 = puVar10;
                }
                *(ulong *)(puVar7 + 0x10) = uVar27 + 1;
                *(ulong *)(puVar7 + uVar27 * 0x38 + 0x20) = uVar12;
                *(long *)(puVar7 + uVar27 * 0x38 + 0x28) = lVar26;
                *(undefined4 *)(puVar7 + uVar27 * 0x38 + 0x30) = uVar3;
                *(undefined8 *)(puVar7 + uVar27 * 0x38 + 0x50) = uStack_138;
                *(code **)(puVar7 + uVar27 * 0x38 + 0x48) = local_140;
                *(code **)(puVar7 + uVar27 * 0x38 + 0x40) = pcStack_158;
                *(ulong *)(puVar7 + uVar27 * 0x38 + 0x38) = local_160;
                _swift_bridgeObjectRelease(lVar31);
                _swift_release(lVar30);
                uVar4 = uStack_b0;
                uVar23 = local_b8;
                _swift_bridgeObjectRelease(local_d8);
                FUN_100006cdc(uVar23,uVar4);
                lVar26 = local_110;
                puVar18 = local_128;
                puVar9 = local_128;
                (**(code **)(local_110 + 8))(local_148,local_128);
                lVar31 = local_1a0;
              }
              puVar10 = local_1b0;
              plVar8 = plVar8 + 1;
              puVar13 = puVar13 + -1;
            } while (puVar13 != (undefined *)0x0);
            _swift_unknownObjectRelease(local_1b0);
            param_1 = (ulong)local_1a4;
          }
        }
        else {
          puVar11 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if (((ulong)puVar7 & 0x8000000000000000) != 0) {
            puVar11 = puVar7;
          }
          __ss18_CocoaArrayWrapperVys12_SliceBufferVyyXlGSnySiGcig();
          puVar9 = puVar18;
          param_3 = puVar11;
          puVar20 = param_4;
          _swift_bridgeObjectRelease(puVar7);
          bVar5 = SBORROW8((ulong)param_4 >> 1,(long)puVar11);
          puVar13 = (undefined *)(((ulong)param_4 >> 1) - (long)puVar11);
          bVar6 = false;
          puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
          if (puVar13 != (undefined *)0x0) goto LAB_100133c18;
        }
        FUN_1004176a4();
        _swift_unknownObjectRelease(puVar10);
        _swift_bridgeObjectRelease(puVar9);
        uVar12 = local_198 + 1;
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343e0);
          (*pcVar22)();
        }
        if (uVar12 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1001343e4);
          (*pcVar22)();
        }
        uVar12 = param_1 & 0xffffffff | uVar12 << 0x20;
        _swift_bridgeObjectRetain(puVar7);
        FUN_100008184(param_3,puVar20);
        _swift_bridgeObjectRelease(puVar7);
        FUN_100006cdc(param_3,puVar20);
        goto LAB_100133b08;
      }
      _swift_bridgeObjectRelease(puVar7);
    }
    else {
      _swift_release(uVar12);
    }
  }
  uVar12 = 0;
LAB_100133b08:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar12);
}

