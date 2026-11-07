// rea decompile_all
// name: FUN_1000e91bc
// address: 0x1000e91bc
// body: available
// range: 0x1000e91bc-0x1000e9693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000e91bc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x13;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong auStack_e0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar4 = 0;
  FUN_1000e984c();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)((long)auStack_e0 + lVar2);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar16 = (undefined8 *)((long)puVar15 - extraout_x13);
  lVar12 = *(long *)(extraout_x12 + 0x48);
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e968c);
    (*pcVar3)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar12 == -1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e9690);
    (*pcVar3)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar12 == -1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e9694);
    (*pcVar3)();
  }
  lVar9 = 0;
  if (lVar12 != 0) {
    lVar9 = (long)(param_2 - param_1) / lVar12;
  }
  lVar8 = 0;
  if (lVar12 != 0) {
    lVar8 = (long)(param_3 - param_2) / lVar12;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar9 < lVar8) {
    lVar8 = lVar9 * lVar12;
    if ((param_4 < param_1) || (param_1 + lVar8 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar9,lVar4);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar9,lVar4);
    }
    uVar13 = param_4 + lVar8;
    local_70 = uVar13;
    uVar5 = local_58;
    if (0 < lVar8 && param_2 < param_3) {
      do {
        FUN_100082394(param_2,puVar16,FUN_1000e984c);
        uVar5 = param_4;
        FUN_100082394(param_4,puVar15,FUN_1000e984c);
        local_80 = *puVar16;
        uStack_78 = puVar16[1];
        local_90 = *puVar15;
        uStack_88 = *(undefined8 *)((long)auStack_e0 + lVar2 + 8);
        FUN_10009ff0c();
        puVar7 = &local_90;
        __sSy10FoundationE24localizedStandardCompareySo18NSComparisonResultVqd__SyRd__lF
                  (puVar7,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,uVar5,uVar5);
        FUN_1000d27dc(puVar15,FUN_1000e984c);
        FUN_1000d27dc(puVar16,FUN_1000e984c);
        if (puVar7 == (undefined8 *)0xffffffffffffffff) {
          uVar11 = param_2 + lVar12;
          uVar14 = param_4;
          if ((param_1 < param_2) || (uVar11 <= param_1)) {
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
          uVar14 = param_4 + lVar12;
          uVar11 = param_2;
          uVar5 = uVar14;
          if ((param_1 < param_4) || (uVar14 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar4);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar4);
          }
        }
        local_68 = uVar5;
        param_1 = param_1 + lVar12;
        uVar5 = param_1;
      } while ((uVar14 < uVar13) &&
              (param_2 = uVar11, param_4 = uVar14, uVar5 = param_1, local_58 = param_1,
              uVar11 < param_3));
    }
  }
  else {
    lVar9 = lVar8 * lVar12;
    if ((param_4 < param_2) || (param_2 + lVar9 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar8,lVar4);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar8,lVar4);
    }
    uVar13 = param_4 + lVar9;
    local_70 = uVar13;
    uVar5 = param_2;
    if (0 < lVar9) {
      lVar12 = -lVar12;
      uVar14 = uVar13;
      do {
        uVar11 = param_2 + lVar12;
        uVar10 = param_3;
        auStack_e0[1] = uVar14;
        while( true ) {
          uVar5 = param_2;
          if (param_2 <= param_1) {
            local_70 = auStack_e0[1];
            goto LAB_1000e9650;
          }
          param_3 = uVar10 + lVar12;
          uVar1 = uVar13 + lVar12;
          FUN_100082394(uVar1,puVar16,FUN_1000e984c);
          uVar6 = uVar11;
          FUN_100082394(uVar11,puVar15,FUN_1000e984c);
          local_80 = *puVar16;
          uStack_78 = puVar16[1];
          local_90 = *puVar15;
          uStack_88 = *(undefined8 *)((long)auStack_e0 + lVar2 + 8);
          FUN_10009ff0c();
          puVar7 = &local_90;
          __sSy10FoundationE24localizedStandardCompareySo18NSComparisonResultVqd__SyRd__lF
                    (puVar7,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,uVar6,uVar6);
          FUN_1000d27dc(puVar15,FUN_1000e984c);
          FUN_1000d27dc(puVar16,FUN_1000e984c);
          if (puVar7 == (undefined8 *)0xffffffffffffffff) break;
          if ((uVar10 < uVar13) || (uVar13 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,lVar4);
          }
          else if (uVar10 != uVar13) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,lVar4);
          }
          uVar10 = param_3;
          uVar13 = uVar1;
          uVar14 = uVar1;
          local_70 = uVar1;
          if (uVar1 <= param_4) goto LAB_1000e9650;
        }
        if ((uVar10 < param_2) || (param_2 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar11,1,lVar4);
        }
        else if (uVar10 != param_2) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar11,1,lVar4);
        }
        param_2 = uVar11;
        local_70 = uVar14;
        uVar5 = uVar11;
      } while (param_4 < uVar13);
    }
  }
LAB_1000e9650:
  local_58 = uVar5;
  FUN_100099abc(&local_58,&local_68,&local_70);
  return 1;
}

