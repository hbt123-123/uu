// rea decompile_all
// name: FUN_10023fd44
// address: 0x10023fd44
// body: available
// range: 0x10023fd44-0x1002404a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10023fd44(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x21;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long alStack_e0 [2];
  long local_d0;
  long *local_c8;
  long *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long *local_a0;
  long lStack_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined *local_58;
  
  puVar10 = &DAT_100a7f918;
  local_c8 = param_1;
  FUN_100004bb4(&DAT_100a7f918,&DAT_100813fe8);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = -extraout_x8;
  local_88 = (long)&local_d0 + lVar20;
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar12 = param_3[1];
  local_c0 = param_3;
  if (0 < lVar12) {
    lVar21 = 0;
    local_d0 = param_4;
    do {
      lVar19 = lVar21 + 1;
      lVar22 = lVar21;
      local_b0 = unaff_x21;
      if (lVar19 < lVar12) {
        lVar24 = *param_3;
        lVar19 = *(long *)(lVar24 + lVar19 * 8);
        lVar22 = *(long *)(lVar19 + 0x28);
        local_b8 = lVar21;
        local_90 = lVar12;
        if (lVar22 == 0) {
          bVar3 = false;
        }
        else {
          lVar21 = *(long *)(lVar24 + lVar21 * 8);
          local_70 = *(undefined8 *)(lVar19 + 0x20);
          lVar12 = *(long *)(lVar21 + 0x28);
          if (lVar12 == 0) {
            local_80 = 0;
            lVar17 = -0x2000000000000000;
          }
          else {
            local_80 = *(undefined8 *)(lVar21 + 0x20);
            lVar17 = lVar12;
          }
          lVar4 = 0;
          lStack_78 = lVar17;
          lStack_68 = lVar22;
          __s10Foundation6LocaleVMa();
          lVar16 = local_88;
          lVar5 = local_88;
          (**(code **)(*(long *)(lVar4 + -8) + 0x38))(local_88,1,1,lVar4);
          FUN_10021e96c();
          _swift_retain(lVar19);
          _swift_retain(lVar21);
          _swift_bridgeObjectRetain(lVar22);
          _swift_bridgeObjectRetain(lVar12);
          *(long *)((long)alStack_e0 + lVar20) = lVar5;
          *(long *)((long)alStack_e0 + lVar20 + 8) = lVar5;
          puVar6 = &local_80;
          __sSy10FoundationE7compare_7options5range6localeSo18NSComparisonResultVqd___So22NSStringCompareOptionsVSnySS5IndexVGSgAA6LocaleVSgtSyRd__lF
                    (puVar6,0,0,0,1,lVar16,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
          FUN_100040bb4(lVar16,&DAT_100a7f918,&DAT_100813fe8);
          _swift_release(lVar19);
          _swift_release(lVar21);
          _swift_bridgeObjectRelease(lVar22);
          _swift_bridgeObjectRelease(lVar17);
          bVar3 = puVar6 == (undefined8 *)0x1;
        }
        lVar19 = local_b8 + 2;
        lVar12 = lVar19;
        if (lVar19 < local_90) {
          plVar11 = (long *)(lVar24 + local_b8 * 8 + 0x10);
          lVar21 = local_90;
          do {
            lVar12 = *plVar11;
            lVar22 = *(long *)(lVar12 + 0x28);
            if (lVar22 == 0) {
              if (bVar3 != false) {
                if (lVar19 < local_b8) goto LAB_100240478;
                goto LAB_100240064;
              }
            }
            else {
              lVar24 = plVar11[-1];
              local_70 = *(undefined8 *)(lVar12 + 0x20);
              lVar21 = *(long *)(lVar24 + 0x28);
              if (lVar21 == 0) {
                local_80 = 0;
                lVar17 = -0x2000000000000000;
              }
              else {
                local_80 = *(undefined8 *)(lVar24 + 0x20);
                lVar17 = lVar21;
              }
              lVar4 = 0;
              lStack_78 = lVar17;
              lStack_68 = lVar22;
              __s10Foundation6LocaleVMa();
              lVar16 = local_88;
              lVar5 = local_88;
              (**(code **)(*(long *)(lVar4 + -8) + 0x38))(local_88,1,1,lVar4);
              FUN_10021e96c();
              _swift_retain(lVar12);
              _swift_retain(lVar24);
              _swift_bridgeObjectRetain(lVar22);
              _swift_bridgeObjectRetain(lVar21);
              *(long *)((long)alStack_e0 + lVar20) = lVar5;
              *(long *)((long)alStack_e0 + lVar20 + 8) = lVar5;
              puVar6 = &local_80;
              __sSy10FoundationE7compare_7options5range6localeSo18NSComparisonResultVqd___So22NSStringCompareOptionsVSnySS5IndexVGSgAA6LocaleVSgtSyRd__lF
                        (puVar6,0,0,0,1,lVar16,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
              FUN_100040bb4(lVar16,&DAT_100a7f918,&DAT_100813fe8);
              _swift_release(lVar12);
              _swift_release(lVar24);
              _swift_bridgeObjectRelease(lVar22);
              _swift_bridgeObjectRelease(lVar17);
              lVar21 = local_90;
              lVar12 = lVar19;
              if (bVar3 == (puVar6 != (undefined8 *)0x1)) break;
            }
            lVar19 = lVar19 + 1;
            plVar11 = plVar11 + 1;
            lVar12 = lVar21;
          } while (lVar21 != lVar19);
        }
        lVar19 = lVar12;
        param_4 = local_d0;
        lVar22 = local_b8;
        param_3 = local_c0;
        if (bVar3 != false) {
          if (lVar19 < local_b8) {
LAB_100240478:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10024047c);
            (*pcVar2)();
          }
LAB_100240064:
          param_4 = local_d0;
          lVar22 = local_b8;
          param_3 = local_c0;
          if (local_b8 < lVar19) {
            lVar24 = *local_c0;
            puVar13 = (undefined8 *)(lVar24 + lVar19 * 8);
            puVar6 = (undefined8 *)(lVar24 + local_b8 * 8);
            lVar21 = lVar19;
            lVar12 = local_b8;
            do {
              puVar13 = puVar13 + -1;
              lVar21 = lVar21 + -1;
              if (lVar12 != lVar21) {
                if (lVar24 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10024049c);
                  (*pcVar2)();
                }
                uVar15 = *puVar6;
                *puVar6 = *puVar13;
                *puVar13 = uVar15;
              }
              lVar12 = lVar12 + 1;
              puVar6 = puVar6 + 1;
            } while (lVar12 < lVar21);
          }
        }
      }
      lVar21 = lVar19;
      lVar12 = param_3[1];
      if (lVar21 < lVar12) {
        if (SBORROW8(lVar21,lVar22)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100240478);
          (*pcVar2)();
        }
        if (param_4 <= lVar21 - lVar22) goto LAB_100240280;
        if (SCARRY8(lVar22,param_4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100240480);
          (*pcVar2)();
        }
        lVar19 = lVar22 + param_4;
        if (lVar12 <= lVar22 + param_4) {
          lVar19 = lVar12;
        }
        if (lVar19 < lVar22) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100240484);
          (*pcVar2)();
        }
        if (lVar21 == lVar19) goto LAB_100240280;
        lVar24 = *param_3;
        plVar11 = (long *)(lVar24 + lVar21 * 8 + -8);
        lVar12 = lVar22 - lVar21;
        local_b8 = lVar22;
        local_90 = lVar19;
        do {
          lVar22 = *(long *)(lVar24 + lVar21 * 8);
          local_a8 = lVar12;
          local_a0 = plVar11;
          lStack_98 = lVar21;
          do {
            lVar21 = *(long *)(lVar22 + 0x28);
            if (lVar21 == 0) break;
            lVar17 = *plVar11;
            local_70 = *(undefined8 *)(lVar22 + 0x20);
            lVar19 = *(long *)(lVar17 + 0x28);
            if (lVar19 == 0) {
              local_80 = 0;
              lVar16 = -0x2000000000000000;
            }
            else {
              local_80 = *(undefined8 *)(lVar17 + 0x20);
              lVar16 = lVar19;
            }
            lVar7 = 0;
            lStack_78 = lVar16;
            lStack_68 = lVar21;
            __s10Foundation6LocaleVMa();
            lVar5 = local_88;
            lVar4 = local_88;
            (**(code **)(*(long *)(lVar7 + -8) + 0x38))(local_88,1,1,lVar7);
            FUN_10021e96c();
            _swift_retain(lVar22);
            _swift_retain(lVar17);
            _swift_bridgeObjectRetain(lVar21);
            _swift_bridgeObjectRetain(lVar19);
            *(long *)((long)alStack_e0 + lVar20) = lVar4;
            *(long *)((long)alStack_e0 + lVar20 + 8) = lVar4;
            puVar6 = &local_80;
            __sSy10FoundationE7compare_7options5range6localeSo18NSComparisonResultVqd___So22NSStringCompareOptionsVSnySS5IndexVGSgAA6LocaleVSgtSyRd__lF
                      (puVar6,0,0,0,1,lVar5,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
            FUN_100040bb4(lVar5,&DAT_100a7f918,&DAT_100813fe8);
            _swift_release(lVar22);
            _swift_release(lVar17);
            _swift_bridgeObjectRelease(lVar21);
            _swift_bridgeObjectRelease(lVar16);
            lVar19 = local_90;
            if (puVar6 != (undefined8 *)0x1) break;
            if (lVar24 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100240488);
              (*pcVar2)();
            }
            lVar21 = *plVar11;
            lVar22 = plVar11[1];
            *plVar11 = lVar22;
            plVar11[1] = lVar21;
            bVar3 = lVar12 != -1;
            lVar12 = lVar12 + 1;
            plVar11 = plVar11 + -1;
          } while (bVar3);
          lVar21 = lStack_98 + 1;
          plVar11 = local_a0 + 1;
          lVar12 = local_a8 + -1;
        } while (lVar21 != lVar19);
        param_4 = local_d0;
        lVar22 = local_b8;
        lVar21 = lVar19;
        param_3 = local_c0;
        if (lVar19 < local_b8) goto LAB_100240464;
      }
      else {
LAB_100240280:
        if (lVar21 < lVar22) {
LAB_100240464:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100240468);
          (*pcVar2)();
        }
      }
      puVar10 = local_58;
      puVar8 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_100240c14(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar23 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar23) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        FUN_100240c14(puVar10,uVar23 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar23 + 1;
      *(long *)(puVar10 + uVar23 * 0x10 + 0x20) = lVar22;
      *(long *)(puVar10 + uVar23 * 0x10 + 0x28) = lVar21;
      local_58 = puVar10;
      if (*local_c8 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002404a0);
        (*pcVar2)();
      }
      FUN_1002404a8(&local_58,*local_c8,param_3);
      puVar10 = local_58;
      puVar8 = local_58;
      if (local_b0 != 0) goto LAB_100240438;
      lVar12 = param_3[1];
      unaff_x21 = local_b0;
    } while (lVar21 < lVar12);
    unaff_x21 = 0;
  }
  puVar10 = local_58;
  lVar20 = *local_c8;
  if (lVar20 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002404a8);
    (*pcVar2)();
  }
  puVar8 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar8 & 1) == 0) {
    FUN_100240c00();
  }
  puVar18 = (ulong *)(puVar10 + 0x10);
  uVar23 = *puVar18;
  while (puVar8 = local_58, 1 < uVar23) {
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002404a4);
      (*pcVar2)();
    }
    plVar11 = (long *)(puVar10 + uVar23 * 0x10);
    lVar21 = *plVar11;
    puVar1 = puVar18 + uVar23 * 2;
    uVar14 = puVar1[1];
    FUN_100240714(lVar12 + lVar21 * 8,lVar12 + *puVar1 * 8,lVar12 + uVar14 * 8,lVar20);
    puVar8 = puVar10;
    if (unaff_x21 != 0) break;
    if ((long)uVar14 < lVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10024046c);
      (*pcVar2)();
    }
    if (*puVar18 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100240470);
      (*pcVar2)();
    }
    *plVar11 = lVar21;
    plVar11[1] = uVar14;
    uVar14 = *puVar18;
    lVar12 = uVar14 - uVar23;
    if (uVar14 < uVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100240474);
      (*pcVar2)();
    }
    uVar23 = uVar14 - 1;
    _memmove(puVar1,puVar1 + 2,lVar12 * 0x10);
    *puVar18 = uVar23;
    param_3 = local_c0;
  }
LAB_100240438:
  local_58 = puVar8;
  _swift_bridgeObjectRelease(puVar10);
  return;
}

