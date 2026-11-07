// rea decompile_all
// name: FUN_1002bc3b4
// address: 0x1002bc3b4
// body: available
// range: 0x1002bc3b4-0x1002bc47f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002bc3b4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == *(long *)(param_2 + 0x10)) {
    if ((lVar8 != 0) && (param_1 != param_2)) {
      plVar9 = (long *)(param_1 + 0x38);
      plVar10 = (long *)(param_2 + 0x38);
      do {
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002bc480);
          (*pcVar4)();
        }
        uVar5 = plVar9[-3];
        uVar6 = plVar9[-1];
        lVar2 = *plVar9;
        uVar1 = plVar10[-1];
        lVar3 = *plVar10;
        if (((uVar5 != plVar10[-3] || plVar9[-2] != plVar10[-2]) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar5 & 1) == 0)) ||
           ((uVar6 != uVar1 || lVar2 != lVar3 &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (uVar6,lVar2,uVar1,lVar3,0), (uVar6 & 1) == 0)))) goto LAB_1002bc458;
        plVar9 = plVar9 + 4;
        plVar10 = plVar10 + 4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar7 = 1;
  }
  else {
LAB_1002bc458:
    uVar7 = 0;
  }
  return uVar7;
}

