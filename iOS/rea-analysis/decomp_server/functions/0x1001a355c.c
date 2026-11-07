// rea decompile_all
// name: FUN_1001a355c
// address: 0x1001a355c
// body: available
// range: 0x1001a355c-0x1001a3663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1001a355c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_5 = param_5 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_5 >> 3 & 0xffffffffffffff8)) >> (param_5 & 0x3f) & 1) !=
      0) {
    lVar7 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar1 = (ulong *)(lVar7 + param_5 * 0x20);
      uVar3 = *puVar1;
      uVar4 = puVar1[2];
      uVar2 = puVar1[3];
      if ((uVar3 == param_1 && puVar1[1] == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,puVar1[1],param_1,param_2,0), (uVar3 & 1) != 0)) {
        if (uVar2 == 0) {
          if (param_4 == 0) goto LAB_1001a3638;
        }
        else if ((param_4 != 0) &&
                ((uVar4 == param_3 && uVar2 == param_4 ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar4,uVar2,param_3,param_4,0), (uVar4 & 1) != 0)))) {
LAB_1001a3638:
          uVar5 = 1;
          goto LAB_1001a3644;
        }
      }
      param_5 = param_5 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_5 >> 3 & 0xffffffffffffff8)) >> (param_5 & 0x3f)
             & 1) != 0);
  }
  uVar5 = 0;
LAB_1001a3644:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = param_5;
  return auVar8;
}

