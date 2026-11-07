// rea decompile_all
// name: FUN_100240714
// address: 0x100240714
// body: available
// range: 0x100240714-0x100240b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100240714(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  long lStack_68;
  
  puVar3 = &DAT_100a7f918;
  FUN_100004bb4(&DAT_100a7f918,&DAT_100813fe8);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar7 = auStack_b0 + lVar2;
  lVar10 = (long)param_2 - (long)param_1;
  lVar12 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar12 = lVar10;
  }
  lVar12 = lVar12 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar14 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar14 = lVar11;
  }
  lVar14 = lVar14 >> 3;
  if (lVar12 < lVar14) {
    if ((param_4 != param_1) || (param_1 + lVar12 <= param_4)) {
      _memmove(param_4,param_1,lVar12 << 3);
    }
    plVar13 = param_4 + lVar12;
    plVar18 = param_1;
    if (7 < lVar10) {
      do {
        plVar18 = param_1;
        if (param_3 <= param_2) break;
        lVar12 = *param_2;
        lVar10 = *(long *)(lVar12 + 0x28);
        if (lVar10 == 0) {
LAB_1002407f4:
          plVar16 = param_4 + 1;
          plVar9 = param_2;
          plVar18 = param_4;
        }
        else {
          lVar11 = *param_4;
          local_70 = *(undefined8 *)(lVar12 + 0x20);
          lVar14 = *(long *)(lVar11 + 0x28);
          if (lVar14 == 0) {
            local_80 = 0;
            lVar15 = -0x2000000000000000;
          }
          else {
            local_80 = *(undefined8 *)(lVar11 + 0x20);
            lVar15 = lVar14;
          }
          lVar4 = 0;
          lStack_78 = lVar15;
          lStack_68 = lVar10;
          __s10Foundation6LocaleVMa();
          puVar5 = puVar7;
          (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar7,1,1,lVar4);
          FUN_10021e96c();
          _swift_retain(lVar12);
          _swift_retain(lVar11);
          _swift_bridgeObjectRetain(lVar10);
          _swift_bridgeObjectRetain(lVar14);
          *(undefined1 **)((long)auStack_c0 + lVar2) = puVar5;
          *(undefined1 **)((long)auStack_c0 + lVar2 + 8) = puVar5;
          puVar6 = &local_80;
          __sSy10FoundationE7compare_7options5range6localeSo18NSComparisonResultVqd___So22NSStringCompareOptionsVSnySS5IndexVGSgAA6LocaleVSgtSyRd__lF
                    (puVar6,0,0,0,1,puVar7,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
          FUN_100040bb4(puVar7,&DAT_100a7f918,&DAT_100813fe8);
          _swift_release(lVar12);
          _swift_release(lVar11);
          _swift_bridgeObjectRelease(lVar10);
          _swift_bridgeObjectRelease(lVar15);
          if (puVar6 != (undefined8 *)0x1) goto LAB_1002407f4;
          plVar16 = param_4;
          plVar9 = param_2 + 1;
          plVar18 = param_2;
        }
        param_2 = plVar9;
        param_4 = plVar16;
        if (param_1 != plVar18) {
          *param_1 = *plVar18;
        }
        param_1 = param_1 + 1;
        plVar18 = param_1;
      } while (param_4 < plVar13);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar14 <= param_4)) {
      _memmove(param_4,param_2,lVar14 << 3);
    }
    plVar13 = param_4 + lVar14;
    plVar18 = param_2;
    if ((7 < lVar11) && (param_1 < param_2)) {
LAB_100240988:
      plVar9 = param_2 + -1;
      plVar16 = param_3;
      do {
        param_3 = plVar16 + -1;
        plVar17 = plVar13 + -1;
        lVar12 = *plVar17;
        lVar10 = *(long *)(lVar12 + 0x28);
        if (lVar10 != 0) {
          lVar11 = *plVar9;
          local_70 = *(undefined8 *)(lVar12 + 0x20);
          lVar14 = *(long *)(lVar11 + 0x28);
          if (lVar14 == 0) {
            local_80 = 0;
            lVar15 = -0x2000000000000000;
          }
          else {
            local_80 = *(undefined8 *)(lVar11 + 0x20);
            lVar15 = lVar14;
          }
          lVar4 = 0;
          lStack_78 = lVar15;
          lStack_68 = lVar10;
          __s10Foundation6LocaleVMa();
          puVar5 = puVar7;
          (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar7,1,1,lVar4);
          FUN_10021e96c();
          _swift_retain(lVar12);
          _swift_retain(lVar11);
          _swift_bridgeObjectRetain(lVar10);
          _swift_bridgeObjectRetain(lVar14);
          *(undefined1 **)((long)auStack_c0 + lVar2) = puVar5;
          *(undefined1 **)((long)auStack_c0 + lVar2 + 8) = puVar5;
          puVar6 = &local_80;
          __sSy10FoundationE7compare_7options5range6localeSo18NSComparisonResultVqd___So22NSStringCompareOptionsVSnySS5IndexVGSgAA6LocaleVSgtSyRd__lF
                    (puVar6,0,0,0,1,puVar7,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
          FUN_100040bb4(puVar7,&DAT_100a7f918,&DAT_100813fe8);
          _swift_release(lVar12);
          _swift_release(lVar11);
          _swift_bridgeObjectRelease(lVar10);
          _swift_bridgeObjectRelease(lVar15);
          if (puVar6 == (undefined8 *)0x1) goto LAB_100240ad4;
        }
        if (plVar16 != plVar13) {
          *param_3 = *plVar17;
        }
        plVar13 = plVar17;
        plVar18 = param_2;
        plVar16 = param_3;
        if (plVar17 <= param_4) break;
      } while( true );
    }
  }
LAB_100240b14:
  uVar8 = (long)plVar13 - (long)param_4;
  uVar1 = uVar8 + 7;
  if (-1 < (long)uVar8) {
    uVar1 = uVar8;
  }
  if ((plVar18 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar18)) {
    _memmove(plVar18,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
LAB_100240ad4:
  if (plVar16 != param_2) {
    *param_3 = *plVar9;
  }
  plVar18 = plVar9;
  if ((plVar13 <= param_4) || (param_2 = plVar9, plVar9 <= param_1)) goto LAB_100240b14;
  goto LAB_100240988;
}

