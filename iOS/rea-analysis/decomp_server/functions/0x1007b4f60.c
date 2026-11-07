// rea decompile_all
// name: FUN_1007b4f60
// address: 0x1007b4f60
// body: available
// range: 0x1007b4f60-0x1007b5033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007b4f60(long param_1,long param_2,long param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_3 != param_2) {
    lVar7 = param_3 << 4;
    lVar9 = param_1;
    lVar8 = lVar7;
LAB_1007b4fd8:
    do {
      lVar6 = *param_4;
      puVar1 = (ulong *)(lVar6 + lVar7);
      uVar4 = *puVar1;
      if ((uVar4 != puVar1[-2] || puVar1[1] != puVar1[-1]) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar4 & 1) != 0)) {
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b5034);
          (*pcVar3)();
        }
        puVar2 = (ulong *)(lVar6 + lVar7);
        uVar4 = *puVar2;
        uVar5 = puVar1[1];
        puVar2[1] = puVar2[-1];
        *puVar2 = puVar2[-2];
        puVar1[-2] = uVar4;
        puVar1[-1] = uVar5;
        lVar7 = lVar7 + -0x10;
        lVar9 = lVar9 + 1;
        if (param_3 != lVar9) goto LAB_1007b4fd8;
      }
      param_3 = param_3 + 1;
      lVar7 = lVar8 + 0x10;
      lVar9 = param_1;
      lVar8 = lVar7;
    } while (param_3 != param_2);
  }
  return;
}

