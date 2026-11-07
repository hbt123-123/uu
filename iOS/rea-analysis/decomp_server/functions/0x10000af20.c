// rea decompile_all
// name: FUN_10000af20
// address: 0x10000af20
// body: available
// range: 0x10000af20-0x10000b337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10000af20(byte param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  ulong *puVar6;
  ulong *puVar7;
  long *plVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long unaff_x20;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  long *local_90;
  ulong local_88;
  long *local_80;
  long alStack_78 [3];
  
  lVar13 = _TtC14UURemoteServer22StreamerConnectSession::controllerAbility;
  plVar11 = alStack_78;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::controllerAbility,
                     plVar11,0,0);
  plVar12 = *(long **)(unaff_x20 + lVar13);
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12;
    _swift_retain();
    FUN_1000c7b64();
    lVar13 = plVar17[8];
    bVar4 = *(byte *)(plVar17 + 9);
    bVar5 = *(byte *)((long)plVar17 + 0x49);
    _swift_release();
    if ((bVar5 & 1) == 0) {
      if ((bVar4 & 1) == 0) {
        plVar19 = (long *)0x1;
      }
      else {
        plVar19 = *(long **)(&DAT_100809600 + lVar13 * 8);
      }
      (**(code **)(*plVar12 + 0x78))();
      plVar14 = (long *)PTR___swiftEmptyArrayStorage_100995ea0;
      if (plVar17 != (long *)0x0) {
        plVar14 = plVar17;
      }
      if ((ulong)plVar14 >> 0x3e == 0) {
        plVar17 = *(long **)(((ulong)plVar14 & 0xffffffffffffff8) + 0x10);
      }
      else {
        plVar17 = (long *)((ulong)plVar14 & 0xffffffffffffff8);
        if ((long)plVar14 < 0) {
          plVar17 = plVar14;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (plVar17 != (long *)0x0) {
        plVar18 = (long *)0x0;
        do {
          if (((ulong)plVar14 & 0xc000000000000001) == 0) {
            if (*(long **)(((ulong)plVar14 & 0xffffffffffffff8) + 0x10) <= plVar18) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10000b2cc);
              (*pcVar9)();
            }
            plVar15 = (long *)plVar14[(long)plVar18 + 4];
            plVar10 = plVar15;
            _swift_retain();
          }
          else {
            plVar15 = plVar18;
            plVar11 = plVar14;
            FUN_100169e20();
            plVar10 = plVar15;
          }
          if (SCARRY8((long)plVar18,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10000b068);
            (*pcVar9)();
          }
          plVar16 = (long *)((long)plVar18 + 1);
          (**(code **)(*plVar15 + 0x60))();
          if (plVar10 == plVar19) {
            _swift_bridgeObjectRelease();
            (**(code **)(*plVar15 + 0x78))();
            plVar17 = (long *)PTR___swiftEmptyArrayStorage_100995ea0;
            if (plVar14 != (long *)0x0) {
              plVar17 = plVar14;
            }
            if ((ulong)plVar17 >> 0x3e == 0) {
              local_90 = (long *)((ulong)plVar17 & 0xffffffffffffff8);
              local_80 = (long *)local_90[2];
            }
            else {
              local_90 = (long *)((ulong)plVar17 & 0xffffffffffffff8);
              plVar19 = local_90;
              if ((long)plVar17 < 0) {
                plVar19 = plVar17;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
              local_80 = plVar19;
            }
            plVar19 = (long *)0x0;
            local_88 = (ulong)plVar17 & 0xc000000000000001;
            local_a0 = 0x8000000100876040;
            uStack_98 = 0x8000000100876060;
            local_b0 = 0x8000000100876000;
            uStack_a8 = 0x8000000100876020;
            local_c0 = 0x8000000100875fc0;
            uStack_b8 = 0x8000000100875fe0;
            goto LAB_10000b130;
          }
          _swift_release(plVar15);
          plVar18 = (long *)((long)plVar18 + 1);
        } while (plVar16 != plVar17);
      }
      _swift_release(plVar12);
      _swift_bridgeObjectRelease(plVar14);
    }
    else {
LAB_10000af8c:
      _swift_release(plVar12);
    }
  }
  return 0;
LAB_10000b130:
  if (local_80 == plVar19) {
    _swift_bridgeObjectRelease(plVar17);
    _swift_release(plVar15);
    goto LAB_10000af8c;
  }
  if (local_88 == 0) {
    if ((long *)local_90[2] <= plVar19) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10000b2d0);
      (*pcVar9)();
    }
    plVar14 = (long *)plVar17[(long)((long)plVar19 + 4)];
    plVar18 = plVar14;
    _swift_retain();
    plVar10 = plVar11;
  }
  else {
    plVar14 = plVar19;
    plVar10 = plVar17;
    FUN_100169df8();
    plVar18 = plVar14;
  }
  if (SCARRY8((long)plVar19,1)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10000b268);
    (*pcVar9)();
  }
  (**(code **)(*plVar14 + 0x68))();
  puVar6 = &local_a0;
  plVar11 = (long *)&DAT_d000000000000013;
  if (param_1 != 6) {
    puVar6 = &uStack_98;
    plVar11 = (long *)&DAT_d000000000000018;
  }
  puVar7 = &uStack_a8;
  plVar16 = (long *)&DAT_d000000000000013;
  if (param_1 == 4) {
    puVar7 = &local_b0;
    plVar16 = (long *)0xd000000000000014;
  }
  plVar3 = (long *)*puVar6;
  if (param_1 < 6) {
    plVar3 = (long *)*puVar7;
    plVar11 = plVar16;
  }
  puVar6 = &local_c0;
  if (param_1 != 2) {
    puVar6 = &uStack_b8;
  }
  plVar16 = (long *)0x6970646968;
  if (param_1 != 0) {
    plVar16 = (long *)0x63735f69746c756d;
  }
  plVar1 = (long *)0xe500000000000000;
  if (param_1 != 0) {
    plVar1 = (long *)0xec0000006e656572;
  }
  plVar2 = (long *)*puVar6;
  plVar8 = (long *)&DAT_d000000000000013;
  if (param_1 < 2) {
    plVar2 = plVar1;
    plVar8 = plVar16;
  }
  if (param_1 < 4) {
    plVar3 = plVar2;
    plVar11 = plVar8;
  }
  if (plVar18 == plVar11 && plVar10 == plVar3) {
    _swift_release(plVar15);
    _swift_release(plVar12);
    _swift_release(plVar14);
    _swift_bridgeObjectRelease(plVar10);
    _swift_bridgeObjectRelease(plVar3);
    goto LAB_10000b2b8;
  }
  plVar11 = plVar10;
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
  _swift_release(plVar14);
  _swift_bridgeObjectRelease(plVar10);
  _swift_bridgeObjectRelease(plVar3);
  plVar19 = (long *)((long)plVar19 + 1);
  if (((ulong)plVar18 & 1) != 0) {
    _swift_release(plVar15);
    _swift_release(plVar12);
LAB_10000b2b8:
    _swift_bridgeObjectRelease(plVar17);
    return 1;
  }
  goto LAB_10000b130;
}

