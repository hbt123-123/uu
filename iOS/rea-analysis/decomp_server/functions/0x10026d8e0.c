// rea decompile_all
// name: FUN_10026d8e0
// address: 0x10026d8e0
// body: available
// range: 0x10026d8e0-0x10026d9d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10026d8e0(ulong param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_1;
  FUN_10026d5bc();
  if ((uVar5 & 1) != 0) {
    lVar3 = 0;
    FUN_10026d8cc();
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar3 + 0x14));
    uVar5 = *puVar1;
    puVar2 = (ulong *)(param_2 + *(int *)(lVar3 + 0x14));
    if ((uVar5 == *puVar2 && puVar1[1] == puVar2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar5 & 1) != 0)) {
      puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar3 + 0x18));
      uVar5 = puVar1[1];
      puVar2 = (ulong *)(param_2 + *(int *)(lVar3 + 0x18));
      uVar6 = puVar2[1];
      if (uVar5 == 0) {
        if (uVar6 != 0) {
          return 0;
        }
      }
      else {
        if (uVar6 == 0) {
          return 0;
        }
        uVar4 = *puVar1;
        if ((uVar4 != *puVar2 || uVar5 != uVar6) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar4 & 1) == 0)) {
          return 0;
        }
      }
      puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar3 + 0x1c));
      uVar5 = puVar1[1];
      puVar2 = (ulong *)(param_2 + *(int *)(lVar3 + 0x1c));
      uVar6 = puVar2[1];
      if (uVar5 == 0) {
        if (uVar6 == 0) {
          return 1;
        }
      }
      else if ((uVar6 != 0) &&
              ((uVar4 = *puVar1, uVar4 == *puVar2 && uVar5 == uVar6 ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar4 & 1) != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}

