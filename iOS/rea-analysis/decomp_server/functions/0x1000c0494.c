// rea decompile_all
// name: FUN_1000c0494
// address: 0x1000c0494
// body: available
// range: 0x1000c0494-0x1000c055f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c0494(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    puVar6 = (ulong *)(lVar5 + param_3 * 0x10);
    param_1 = param_1 - param_3;
    do {
      puVar8 = (ulong *)(lVar5 + param_3 * 0x10);
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      lVar7 = param_1;
      puVar8 = puVar6;
      do {
        if ((uVar3 == puVar8[-2] && uVar4 == puVar8[-1]) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar3 & 1) == 0)) break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000c0560);
          (*pcVar1)();
        }
        uVar3 = *puVar8;
        uVar4 = puVar8[1];
        puVar8[1] = puVar8[-1];
        *puVar8 = puVar8[-2];
        puVar8[-1] = uVar4;
        puVar8 = puVar8 + -2;
        *puVar8 = uVar3;
        bVar2 = lVar7 != -1;
        lVar7 = lVar7 + 1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}

