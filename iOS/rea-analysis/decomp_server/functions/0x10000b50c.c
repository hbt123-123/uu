// rea decompile_all
// name: FUN_10000b50c
// address: 0x10000b50c
// body: available
// range: 0x10000b50c-0x10000b9ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10000b50c(byte param_1,long *param_2,ulong param_3,ulong param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long unaff_x20;
  long *plVar13;
  code *pcVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  long alStack_78 [3];
  
  lVar7 = _TtC14UURemoteServer22StreamerConnectSession::controllerAbility;
  plVar12 = alStack_78;
  local_80 = param_4;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::controllerAbility,
                     plVar12,0,0);
  plVar13 = *(long **)(unaff_x20 + lVar7);
  if (plVar13 == (long *)0x0) {
    uVar19 = 0;
    goto LAB_10000b988;
  }
  uVar19 = 0;
  if (((param_3 & 1) != 0) || (param_5 == (long *)0x0)) goto LAB_10000b988;
  pcVar14 = *(code **)(*plVar13 + 0x78);
  plVar20 = plVar13;
  _swift_retain();
  (*pcVar14)();
  plVar11 = (long *)PTR___swiftEmptyArrayStorage_100995ea0;
  plVar15 = (long *)PTR___swiftEmptyArrayStorage_100995ea0;
  if (plVar20 != (long *)0x0) {
    plVar15 = plVar20;
  }
  if ((ulong)plVar15 >> 0x3e == 0) {
    plVar20 = *(long **)(((ulong)plVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    plVar20 = (long *)((ulong)plVar15 & 0xffffffffffffff8);
    if ((long)plVar15 < 0) {
      plVar20 = plVar15;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (plVar20 != (long *)0x0) {
    plVar21 = (long *)0x0;
    do {
      if (((ulong)plVar15 & 0xc000000000000001) == 0) {
        if (*(long **)(((ulong)plVar15 & 0xffffffffffffff8) + 0x10) <= plVar21) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10000b920);
          (*pcVar14)();
        }
        plVar16 = (long *)plVar15[(long)((long)plVar21 + 4)];
        plVar8 = plVar16;
        _swift_retain();
      }
      else {
        plVar16 = plVar21;
        plVar12 = plVar15;
        FUN_100169e20();
        plVar8 = plVar16;
      }
      if (SCARRY8((long)plVar21,1)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10000b638);
        (*pcVar14)();
      }
      plVar18 = (long *)((long)plVar21 + 1);
      (**(code **)(*plVar16 + 0x60))();
      if (plVar8 == param_2) {
        _swift_bridgeObjectRelease();
        (**(code **)(*plVar16 + 0x78))();
        if (plVar15 != (long *)0x0) {
          plVar11 = plVar15;
        }
        if ((ulong)plVar11 >> 0x3e == 0) {
          plVar15 = *(long **)(((ulong)plVar11 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar15 = (long *)((ulong)plVar11 & 0xffffffffffffff8);
          if ((long)plVar11 < 0) {
            plVar15 = plVar11;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if (plVar15 == (long *)0x0) goto LAB_10000b96c;
        plVar20 = (long *)0x0;
        local_88 = (ulong)plVar11 & 0xc000000000000001;
        local_90 = 0x8000000100876060;
        local_a0 = 0x8000000100876020;
        local_98 = 0x8000000100876040;
        local_b0 = 0x8000000100875fe0;
        local_a8 = 0x8000000100876000;
        local_b8 = 0x8000000100875fc0;
        goto LAB_10000b760;
      }
      _swift_release(plVar16);
      plVar21 = (long *)((long)plVar21 + 1);
    } while (plVar18 != plVar20);
  }
  _swift_bridgeObjectRelease(plVar15);
  uVar19 = 0;
  plVar21 = plVar13;
  goto LAB_10000b980;
LAB_10000b760:
  do {
    if (local_88 == 0) {
      if (*(long **)(((ulong)plVar11 & 0xffffffffffffff8) + 0x10) <= plVar20) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10000b928);
        (*pcVar14)();
      }
      plVar21 = (long *)plVar11[(long)((long)plVar20 + 4)];
      plVar8 = plVar21;
      _swift_retain();
      plVar18 = plVar12;
    }
    else {
      plVar21 = plVar20;
      plVar18 = plVar11;
      FUN_100169df8();
      plVar8 = plVar21;
    }
    if (SCARRY8((long)plVar20,1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10000b924);
      (*pcVar14)();
    }
    plVar17 = (long *)((long)plVar20 + 1);
    (**(code **)(*plVar21 + 0x68))();
    puVar4 = &local_98;
    plVar12 = (long *)&DAT_d000000000000013;
    if (param_1 != 6) {
      puVar4 = &local_90;
      plVar12 = (long *)&DAT_d000000000000018;
    }
    puVar5 = &local_a0;
    plVar1 = (long *)&DAT_d000000000000013;
    if (param_1 == 4) {
      puVar5 = &local_a8;
      plVar1 = (long *)0xd000000000000014;
    }
    plVar9 = (long *)*puVar4;
    if (param_1 < 6) {
      plVar9 = (long *)*puVar5;
      plVar12 = plVar1;
    }
    puVar4 = &local_b8;
    if (param_1 != 2) {
      puVar4 = &local_b0;
    }
    plVar1 = (long *)0x6970646968;
    if (param_1 != 0) {
      plVar1 = (long *)0x63735f69746c756d;
    }
    plVar2 = (long *)0xe500000000000000;
    if (param_1 != 0) {
      plVar2 = (long *)0xec0000006e656572;
    }
    plVar3 = (long *)*puVar4;
    plVar6 = (long *)&DAT_d000000000000013;
    if (param_1 < 2) {
      plVar3 = plVar2;
      plVar6 = plVar1;
    }
    if (param_1 < 4) {
      plVar9 = plVar3;
      plVar12 = plVar6;
    }
    if (plVar8 == plVar12 && plVar18 == plVar9) {
      _swift_bridgeObjectRelease(plVar18);
      _swift_bridgeObjectRelease(plVar9);
LAB_10000b718:
      (**(code **)(*plVar21 + 0x80))();
      uVar10 = local_80;
      plVar12 = param_5;
      FUN_10000d104(local_80,param_5,plVar9,plVar18);
      _swift_bridgeObjectRelease(plVar18);
      if ((uVar10 & 1) != 0) {
        _swift_bridgeObjectRelease();
        (**(code **)(*plVar21 + 0x98))();
        if (plVar12 != (long *)0x0) {
          uVar10 = (ulong)plVar11 & 0xffffffffffff;
          if (((ulong)plVar12 & 0x2000000000000000) != 0) {
            uVar10 = (ulong)plVar12 >> 0x38 & 0xf;
          }
          if (uVar10 != 0) {
            FUN_10000d104();
            uVar19 = (uint)plVar11;
            _swift_bridgeObjectRelease(plVar12);
            _swift_release(plVar13);
            _swift_release(plVar16);
            goto LAB_10000b980;
          }
          _swift_bridgeObjectRelease(plVar12);
        }
        _swift_release(plVar13);
        _swift_release(plVar16);
        uVar19 = 1;
        goto LAB_10000b980;
      }
    }
    else {
      plVar12 = plVar18;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(plVar18);
      _swift_bridgeObjectRelease(plVar9);
      plVar18 = plVar12;
      if (((ulong)plVar8 & 1) != 0) goto LAB_10000b718;
    }
    _swift_release(plVar21);
    plVar20 = (long *)((long)plVar20 + 1);
  } while (plVar17 != plVar15);
LAB_10000b96c:
  _swift_bridgeObjectRelease(plVar11);
  _swift_release(plVar13);
  uVar19 = 0;
  plVar21 = plVar16;
LAB_10000b980:
  _swift_release(plVar21);
LAB_10000b988:
  return uVar19 & 1;
}

