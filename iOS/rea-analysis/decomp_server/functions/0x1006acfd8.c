// rea decompile_all
// name: FUN_1006acfd8
// address: 0x1006acfd8
// body: available
// range: 0x1006acfd8-0x1006ad04b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006acfd8(ulong *param_1,ulong *param_2,long *param_3,long *param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  
  if (0 < param_5) {
    uVar3 = 0;
    lVar2 = (long)param_5;
    puVar4 = param_1;
    lVar6 = lVar2;
    do {
      uVar1 = *param_3 + uVar3;
      if (uVar1 != 0) {
        uVar3 = (ulong)(*param_2 < uVar1);
      }
      *puVar4 = *param_2 - uVar1;
      lVar6 = lVar6 + -1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar6 != 0);
    if (uVar3 != 0) {
      uVar3 = 0;
      do {
        uVar5 = *param_1;
        uVar1 = uVar5 + uVar3 + *param_4;
        if (uVar1 != uVar5) {
          uVar3 = (ulong)(uVar1 < uVar5);
        }
        *param_1 = uVar1;
        lVar2 = lVar2 + -1;
        param_1 = param_1 + 1;
        param_4 = param_4 + 1;
      } while (lVar2 != 0);
    }
  }
  return;
}

