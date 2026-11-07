// rea decompile_all
// name: FUN_1006adc18
// address: 0x1006adc18
// body: available
// range: 0x1006adc18-0x1006adcbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006adc18(ulong *param_1,ulong *param_2,long *param_3,long *param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = (ulong)param_5 & 0xff;
  uVar4 = uVar2;
  if (0 < (int)param_5) {
    uVar3 = 0;
    puVar5 = param_1;
    uVar6 = uVar2;
    do {
      uVar7 = *param_2;
      uVar1 = uVar7 + uVar3 + *param_3;
      if (uVar1 != uVar7) {
        uVar3 = (ulong)(uVar1 < uVar7);
      }
      *puVar5 = uVar1;
      uVar6 = uVar6 - 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
    if (uVar3 != 0) goto LAB_1006adc84;
  }
  do {
    uVar4 = uVar4 - 1;
    if (((uint)uVar4 >> 7 & 1) != 0) break;
    if (param_1[uVar4 & 0x7f] < (ulong)param_4[uVar4 & 0x7f]) {
      return;
    }
  } while (param_1[uVar4 & 0x7f] <= (ulong)param_4[uVar4 & 0x7f]);
LAB_1006adc84:
  if (0 < (int)param_5) {
    uVar4 = 0;
    do {
      uVar3 = *param_4 + uVar4;
      if (uVar3 != 0) {
        uVar4 = (ulong)(*param_1 < uVar3);
      }
      *param_1 = *param_1 - uVar3;
      uVar2 = uVar2 - 1;
      param_1 = param_1 + 1;
      param_4 = param_4 + 1;
    } while (uVar2 != 0);
  }
  return;
}

