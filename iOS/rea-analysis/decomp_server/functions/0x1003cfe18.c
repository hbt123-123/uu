// rea decompile_all
// name: FUN_1003cfe18
// address: 0x1003cfe18
// body: available
// range: 0x1003cfe18-0x1003d03a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003cfe18(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong auStack_c0 [2];
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar4 = 0;
  FUN_1003c5f68();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = (ulong *)((long)auStack_c0 + lVar13);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar16 = (ulong *)((long)puVar8 - extraout_x13);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar17 = (ulong *)((long)puVar16 - extraout_x13_00);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar10 = (ulong *)((long)puVar17 - extraout_x13_01);
  lVar9 = *(long *)(extraout_x12 + 0x48);
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003d039c);
    (*pcVar3)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar9 == -1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003d03a0);
    (*pcVar3)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar9 == -1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003d03a4);
    (*pcVar3)();
  }
  lVar11 = 0;
  if (lVar9 != 0) {
    lVar11 = (long)(param_2 - param_1) / lVar9;
  }
  lVar2 = 0;
  if (lVar9 != 0) {
    lVar2 = (long)(param_3 - param_2) / lVar9;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar11 < lVar2) {
    lVar13 = lVar11 * lVar9;
    if ((param_4 < param_1) || (param_1 + lVar13 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar11,lVar4);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar11,lVar4);
    }
    uVar7 = param_4 + lVar13;
    local_70 = uVar7;
    uVar5 = local_58;
    if (0 < lVar13 && param_2 < param_3) {
      do {
        FUN_100082394(param_2,puVar10,FUN_1003c5f68);
        FUN_100082394(param_4,puVar17,FUN_1003c5f68);
        lVar13 = (long)*(int *)(lVar4 + 0x14);
        uVar5 = (long)puVar10 + lVar13;
        __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar5,(long)puVar17 + lVar13);
        if ((uVar5 & 1) == 0) {
          uVar5 = (long)puVar10 + lVar13;
          __s10Foundation4DateV1goiySbAC_ACtFZ(uVar5,(long)puVar17 + lVar13);
LAB_1003d0030:
          FUN_1000d27dc(puVar17,FUN_1003c5f68);
          FUN_1000d27dc(puVar10,FUN_1003c5f68);
          if ((uVar5 & 1) == 0) goto LAB_1003d00a0;
          uVar6 = param_2 + lVar9;
          uVar15 = param_4;
          if ((param_1 < param_2) || (uVar6 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar4);
            uVar5 = local_68;
          }
          else {
            uVar5 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar4);
              uVar5 = local_68;
            }
          }
        }
        else {
          uVar5 = *puVar10;
          if (uVar5 != *puVar17 || puVar10[1] != puVar17[1]) {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            goto LAB_1003d0030;
          }
          FUN_1000d27dc(puVar17,FUN_1003c5f68);
          FUN_1000d27dc(puVar10,FUN_1003c5f68);
LAB_1003d00a0:
          uVar15 = param_4 + lVar9;
          uVar6 = param_2;
          uVar5 = uVar15;
          if ((param_1 < param_4) || (uVar15 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar4);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar4);
          }
        }
        local_68 = uVar5;
        param_1 = param_1 + lVar9;
        uVar5 = param_1;
      } while ((uVar15 < uVar7) &&
              (param_2 = uVar6, param_4 = uVar15, uVar5 = param_1, local_58 = param_1,
              uVar6 < param_3));
    }
  }
  else {
    lVar11 = lVar2 * lVar9;
    if ((param_4 < param_2) || (param_2 + lVar11 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar2,lVar4);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar2,lVar4);
    }
    uVar7 = param_4 + lVar11;
    local_70 = uVar7;
    uVar5 = param_2;
    if (0 < lVar11) {
      lVar9 = -lVar9;
      uVar6 = uVar7;
      do {
        uVar15 = param_2 + lVar9;
        uVar12 = param_3;
        auStack_c0[1] = uVar7;
        while( true ) {
          local_70 = auStack_c0[1];
          uVar5 = param_2;
          if (param_2 <= param_1) goto LAB_1003d0360;
          uVar1 = uVar6 + lVar9;
          FUN_100082394(uVar1,puVar16,FUN_1003c5f68);
          FUN_100082394(uVar15,puVar8,FUN_1003c5f68);
          lVar11 = (long)*(int *)(lVar4 + 0x14);
          uVar14 = (long)puVar16 + lVar11;
          __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar14,(long)puVar8 + lVar11);
          if ((uVar14 & 1) == 0) {
            uVar14 = (long)puVar16 + lVar11;
            __s10Foundation4DateV1goiySbAC_ACtFZ(uVar14,(long)puVar8 + lVar11);
          }
          else {
            uVar14 = *puVar16;
            if ((uVar14 == *puVar8) && (puVar16[1] == *(ulong *)((long)auStack_c0 + lVar13 + 8))) {
              uVar14 = 0;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
            }
          }
          param_3 = uVar12 + lVar9;
          FUN_1000d27dc(puVar8,FUN_1003c5f68);
          FUN_1000d27dc(puVar16,FUN_1003c5f68);
          if ((uVar14 & 1) != 0) break;
          if ((uVar12 < uVar6) || (uVar6 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,lVar4);
          }
          else if (uVar12 != uVar6) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,lVar4);
          }
          uVar7 = uVar1;
          uVar12 = param_3;
          uVar6 = uVar1;
          local_70 = uVar1;
          if (uVar1 <= param_4) goto LAB_1003d0360;
        }
        if ((uVar12 < param_2) || (param_2 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar15,1,lVar4);
        }
        else if (uVar12 != param_2) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar15,1,lVar4);
        }
        param_2 = uVar15;
        local_70 = uVar7;
        uVar5 = uVar15;
      } while (param_4 < uVar6);
    }
  }
LAB_1003d0360:
  local_58 = uVar5;
  FUN_100400190(&local_58,&local_68,&local_70);
  return 1;
}

