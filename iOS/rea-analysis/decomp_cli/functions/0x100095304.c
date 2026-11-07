// rea decompile_all
// name: FUN_100095304
// address: 0x100095304
// body: available
// range: 0x100095304-0x100095717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100095304(long param_1,long param_2,long param_3,ulong param_4,long *param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_118 [80];
  ulong local_c8;
  ulong uStack_c0;
  ulong local_80;
  ulong uStack_78;
  
  if (((param_4 & 1) == 0) || (*(long *)(param_3 + 0x10) == 1)) {
    plVar4 = param_5;
    FUN_100095014(param_5,param_6);
    puVar5 = (undefined1 *)0x0;
    FUN_1000a0248(0,plVar4);
    _swift_bridgeObjectRelease(plVar4);
    puVar6 = puVar5;
    FUN_100095190(puVar5,param_1,param_2);
    _swift_bridgeObjectRelease();
    if (((ulong)puVar6 & 1) == 0) {
      plVar4 = param_5;
      FUN_100095014(param_5,param_6);
      puVar5 = (undefined1 *)0x1;
      FUN_1000a0248(1,plVar4);
      _swift_bridgeObjectRelease(plVar4);
      puVar6 = puVar5;
      FUN_100095190(puVar5,param_1,param_2);
      _swift_bridgeObjectRelease();
      if (((ulong)puVar6 & 1) == 0) {
        lVar11 = *(long *)(param_1 + 0x10);
        if (lVar11 < param_2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100095714);
          (*pcVar3)();
        }
        if (param_2 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100095718);
          (*pcVar3)();
        }
        if (lVar11 != param_2) {
          puVar9 = (ulong *)(param_1 + param_2 * 0x40 + 0x30);
          lVar10 = param_2;
          do {
            if (lVar11 <= lVar10) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100095708);
              (*pcVar3)();
            }
            if ((*puVar9 & 0x60000000000000c0) == 0) {
              uVar12 = puVar9[-2];
              if ((uVar12 == 0xd000000000000016 && puVar9[-1] == 0x80000001000ca860) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar12,puVar9[-1],0xd000000000000016,0x80000001000ca860,0),
                 (uVar12 & 1) != 0)) {
                FUN_100095014(param_5,param_6);
                plVar4 = param_5;
                FUN_10007b098();
                _swift_allocError(&DAT_1000f9e40,plVar4,0,0);
                *plVar4 = (long)param_5;
                plVar4[1] = 1;
                plVar4[3] = 0;
                plVar4[2] = 0;
                plVar4[5] = 0;
                plVar4[4] = 0;
                plVar4[7] = 0;
                plVar4[6] = 0;
                plVar4[9] = 0;
                plVar4[8] = 0;
                plVar4[10] = 0;
                goto LAB_1000955c0;
              }
            }
            lVar10 = lVar10 + 1;
            puVar9 = puVar9 + 8;
          } while (lVar11 != lVar10);
        }
        _swift_bridgeObjectRetain_n(param_1,2);
        plVar4 = param_5;
        FUN_100095014(param_5,param_6);
        uVar12 = plVar4[2];
        if (uVar12 != 0) {
          uVar8 = 0;
          plVar7 = plVar4 + 5;
          do {
            if ((ulong)plVar4[2] <= uVar8) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10009570c);
              (*pcVar3)();
            }
            (**(code **)(*plVar7 + 0x10))(auStack_118,plVar7[-1]);
            uVar2 = uStack_c0;
            uVar1 = local_c8;
            uStack_78 = uStack_c0;
            local_80 = local_c8;
            _swift_bridgeObjectRetain(uStack_c0);
            FUN_10006e954(auStack_118);
            FUN_100077ccc(&local_80);
            uVar1 = uVar1 & 0xffffffffffff;
            if ((uVar2 & 0x2000000000000000) != 0) {
              uVar1 = uVar2 >> 0x38 & 0xf;
            }
            if (uVar1 != 0) {
              _swift_bridgeObjectRelease(param_1);
              _swift_bridgeObjectRelease(plVar4);
              if (lVar11 == param_2) goto LAB_10009562c;
              puVar9 = (ulong *)(param_1 + param_2 * 0x40 + 0x30);
              goto LAB_100095674;
            }
            uVar8 = uVar8 + 1;
            plVar7 = plVar7 + 2;
          } while (uVar12 != uVar8);
        }
        _swift_bridgeObjectRelease_n(param_1,2);
        _swift_bridgeObjectRelease(plVar4);
        return;
      }
      FUN_1000957e0();
      _swift_allocError(&DAT_1000fa060,puVar5,0,0);
      *puVar5 = 1;
    }
    else {
      FUN_1000957e0();
      _swift_allocError(&DAT_1000fa060,puVar5,0,0);
      *puVar5 = 0;
    }
LAB_1000955c8:
    _swift_willThrow();
  }
  return;
LAB_100095674:
  if (lVar11 <= param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100095710);
    (*pcVar3)();
  }
  if ((*puVar9 & 0x60000000000000c0) != 0) goto LAB_100095664;
  uVar12 = puVar9[-2];
  if ((uVar12 != 0x6e6f6973726576 || puVar9[-1] != 0xe700000000000000) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar12,puVar9[-1],0x6e6f6973726576,0xe700000000000000,0), (uVar12 & 1) == 0))
  goto LAB_100095664;
  _swift_bridgeObjectRelease(param_1);
  FUN_100095014(param_5,param_6);
  plVar4 = param_5;
  FUN_10007b098();
  _swift_allocError(&DAT_1000f9e40,plVar4,0,0);
  *plVar4 = (long)param_5;
  plVar4[2] = 0;
  plVar4[1] = 0;
  plVar4[4] = 0;
  plVar4[3] = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
LAB_1000955c0:
  *(undefined1 *)(plVar4 + 0xb) = 0x11;
  goto LAB_1000955c8;
LAB_100095664:
  param_2 = param_2 + 1;
  puVar9 = puVar9 + 8;
  if (lVar11 == param_2) {
LAB_10009562c:
    _swift_bridgeObjectRelease(param_1);
    return;
  }
  goto LAB_100095674;
}

