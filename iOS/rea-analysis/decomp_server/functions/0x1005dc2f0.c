// rea decompile_all
// name: FUN_1005dc2f0
// address: 0x1005dc2f0
// body: available
// range: 0x1005dc2f0-0x1005dc44b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005dc2f0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == *(long *)(param_2 + 0x10)) {
    if ((lVar15 != 0) && (param_1 != param_2)) {
      plVar16 = (long *)(param_1 + 0x30);
      plVar14 = (long *)(param_2 + 0x30);
      do {
        if (lVar15 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1005dc44c);
          (*pcVar7)();
        }
        if ((int)plVar16[-2] != (int)plVar14[-2]) goto LAB_1005dc41c;
        uVar8 = plVar16[-1];
        uVar9 = plVar16[1];
        lVar3 = plVar16[2];
        uVar10 = plVar16[3];
        lVar4 = plVar16[4];
        lVar12 = plVar16[5];
        uVar1 = plVar14[1];
        lVar5 = plVar14[2];
        uVar2 = plVar14[3];
        lVar6 = plVar14[4];
        lVar13 = plVar14[5];
        if ((((uVar8 != plVar14[-1]) || (*plVar16 != *plVar14)) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar8 & 1) == 0)) ||
           (((uVar9 != uVar1 || (lVar3 != lVar5)) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (uVar9,lVar3,uVar1,lVar5,0), (uVar9 & 1) == 0)))) goto LAB_1005dc41c;
        if ((uVar10 == uVar2) && (lVar4 == lVar6)) {
          if (lVar12 != lVar13) goto LAB_1005dc41c;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar10,lVar4,uVar2,lVar6,0);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          if (lVar12 != lVar13) {
            return 0;
          }
        }
        plVar16 = plVar16 + 8;
        plVar14 = plVar14 + 8;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    uVar11 = 1;
  }
  else {
LAB_1005dc41c:
    uVar11 = 0;
  }
  return uVar11;
}

