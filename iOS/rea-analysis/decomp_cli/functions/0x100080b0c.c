// rea decompile_all
// name: FUN_100080b0c
// address: 0x100080b0c
// body: available
// range: 0x100080b0c-0x100080b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100080b0c(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == *(long *)(param_2 + 0x10)) {
    if ((lVar4 != 0) && (param_1 != param_2)) {
      plVar5 = (long *)(param_1 + 0x28);
      plVar6 = (long *)(param_2 + 0x28);
      do {
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100080b98);
          (*pcVar1)();
        }
        uVar2 = plVar5[-1];
        if ((uVar2 != plVar6[-1] || *plVar5 != *plVar6) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) == 0)) goto LAB_100080b78;
        plVar5 = plVar5 + 2;
        plVar6 = plVar6 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    uVar3 = 1;
  }
  else {
LAB_100080b78:
    uVar3 = 0;
  }
  return uVar3;
}

