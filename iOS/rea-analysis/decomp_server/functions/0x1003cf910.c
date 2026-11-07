// rea decompile_all
// name: FUN_1003cf910
// address: 0x1003cf910
// body: available
// range: 0x1003cf910-0x1003cfb87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003cf910(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar3 = 0;
  FUN_1003c63e0();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = (long)puVar7 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar16 - extraout_x13_00;
  if (param_3 != param_2) {
    lVar8 = *param_4;
    lVar9 = *(long *)(extraout_x12 + 0x48);
    lVar13 = lVar8 + lVar9 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar10 = lVar8 + lVar9 * param_3;
    lVar15 = param_1;
    lVar14 = lVar13;
    lVar11 = lVar10;
LAB_1003cfa70:
    do {
      FUN_100082394(lVar10,lVar17,FUN_1003c63e0);
      FUN_100082394(lVar13,lVar16,FUN_1003c63e0);
      lVar12 = (long)*(int *)(lVar3 + 0x14);
      uVar4 = lVar17 + lVar12;
      lVar6 = lVar16 + lVar12;
      __s10Foundation4DateV2eeoiySbAC_ACtFZ();
      if ((uVar4 & 1) == 0) {
        uVar5 = lVar17 + lVar12;
        __s10Foundation4DateV1goiySbAC_ACtFZ(uVar5,lVar16 + lVar12);
LAB_1003cfb10:
        FUN_1000d27dc(lVar16,FUN_1003c63e0);
        FUN_1000d27dc(lVar17,FUN_1003c63e0);
        if ((uVar5 & 1) != 0) {
          if (lVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cfb88);
            (*pcVar1)();
          }
          FUN_1000823d8(lVar10,puVar7,FUN_1003c63e0);
          _swift_arrayInitWithTakeFrontToBack(lVar10,lVar13,1,lVar3);
          FUN_1000823d8(puVar7,lVar13,FUN_1003c63e0);
          lVar13 = lVar13 + -lVar9;
          lVar10 = lVar10 + -lVar9;
          bVar2 = param_1 != -1;
          param_1 = param_1 + 1;
          if (bVar2) goto LAB_1003cfa70;
        }
      }
      else {
        __s10Foundation3URLV4pathSSvg();
        uVar5 = uVar4;
        lVar12 = lVar6;
        __s10Foundation3URLV4pathSSvg();
        if ((uVar5 != uVar4) || (lVar12 != lVar6)) {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          _swift_bridgeObjectRelease(lVar6);
          _swift_bridgeObjectRelease(lVar12);
          goto LAB_1003cfb10;
        }
        _swift_bridgeObjectRelease(lVar6);
        _swift_bridgeObjectRelease(lVar12);
        FUN_1000d27dc(lVar16,FUN_1003c63e0);
        FUN_1000d27dc(lVar17,FUN_1003c63e0);
      }
      param_3 = param_3 + 1;
      lVar13 = lVar14 + lVar9;
      param_1 = lVar15 + -1;
      lVar10 = lVar11 + lVar9;
      lVar15 = param_1;
      lVar14 = lVar13;
      lVar11 = lVar10;
    } while (param_3 != param_2);
  }
  return;
}

