// rea decompile_all
// name: FUN_1007af7a0
// address: 0x1007af7a0
// body: available
// range: 0x1007af7a0-0x1007af8bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_1007af7a0(ulong *param_1)

{
  int iVar1;
  ulong *puVar2;
  char *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined **ppuVar7;
  
  if (((ulong)param_1 & 1) == 0) {
    puVar2 = param_1;
    FUN_1007ae524(param_1,0x28);
    if ((int)puVar2 != 0) {
      uVar4 = *param_1;
      if ((uVar4 & 1) != 0) {
        uVar4 = uVar4 & 0xffffffff8;
      }
      FUN_1007ae524(uVar4,0x28);
      if ((int)uVar4 != 0) {
        uVar4 = *param_1;
        if ((*param_1 & 1) != 0) {
          uVar4 = 0;
        }
        FUN_1007aecec();
        if ((uVar4 & 1) != 0) {
          puVar5 = (undefined *)*param_1;
          if (((ulong)puVar5 & 1) != 0) {
            puVar5 = (undefined *)((ulong)puVar5 & 0xffffffff8);
          }
          uVar4 = *(ulong *)((*(ulong *)(puVar5 + 0x20) & 0x7ffffffffff8) + 8);
          if ((uVar4 & 1) != 0) {
            uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
          }
          ppuVar7 = &PTR_s___NSCFString_100abb6f0;
          if (PTR_s___NSCFString_100abb6f0 != (undefined *)0x0) {
            pcVar6 = *(char **)(uVar4 + 0x18);
            ppuVar7 = &PTR_s___NSCFString_100abb6f0;
            pcVar3 = PTR_s___NSCFString_100abb6f0;
            do {
              if (ppuVar7[5] == puVar5) break;
              if ((ppuVar7[5] == (undefined *)0x0) && (iVar1 = _strcmp(pcVar6,pcVar3), iVar1 == 0))
              {
                ppuVar7[5] = puVar5;
                break;
              }
              ppuVar7 = ppuVar7 + 6;
              pcVar3 = *ppuVar7;
            } while (pcVar3 != (char *)0x0);
          }
          goto LAB_1007af888;
        }
      }
    }
  }
  else {
    uVar4 = (ulong)param_1 >> 1 & 7;
    if ((0xb3UL >> uVar4 & 1) == 0) {
      ppuVar7 = &PTR_s_NSAtom_1009ea5e0 + uVar4 * 6;
LAB_1007af888:
                    /* WARNING: Could not recover jumptable at 0x0001007af89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)ppuVar7[3])(param_1);
      return param_1;
    }
  }
  return (ulong *)0x0;
}

