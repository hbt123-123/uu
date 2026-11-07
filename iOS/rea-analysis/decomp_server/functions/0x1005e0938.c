// rea decompile_all
// name: FUN_1005e0938
// address: 0x1005e0938
// body: available
// range: 0x1005e0938-0x1005e0a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_1005e0938(byte *param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  
  uVar7 = (ulong)*param_1;
  FUN_1005dfb10(uVar7,*param_2);
  if (((uVar7 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    uVar8 = *(ulong *)(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x28);
    uVar9 = *(ulong *)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x38);
    uVar1 = *(ulong *)(param_2 + 0x20);
    lVar5 = *(long *)(param_2 + 0x28);
    uVar2 = *(ulong *)(param_2 + 0x30);
    lVar6 = *(long *)(param_2 + 0x38);
    if ((((uVar7 == *(ulong *)(param_2 + 0x10)) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18))) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar7 & 1) != 0)) &&
       ((((uVar8 == uVar1 && (lVar3 == lVar5)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar8,lVar3,uVar1,lVar5,0), (uVar8 & 1) != 0)) &&
        ((((uVar9 == uVar2 && (lVar4 == lVar6)) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar9,lVar4,uVar2,lVar6,0), (uVar9 & 1) != 0)) &&
         (*(double *)(param_1 + 0x40) == *(double *)(param_2 + 0x40))))))) {
      bVar10 = param_1[0x48] ^ param_2[0x48] ^ 1;
      goto LAB_1005e0a30;
    }
  }
  bVar10 = 0;
LAB_1005e0a30:
  return bVar10 & 1;
}

