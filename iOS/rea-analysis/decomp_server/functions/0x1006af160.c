// rea decompile_all
// name: FUN_1006af160
// address: 0x1006af160
// body: available
// range: 0x1006af160-0x1006af20f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006af160(ulong *param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((*param_1 & 1) == 0) {
    if (0 < (int)param_3) {
      uVar2 = 0;
      puVar1 = param_1 + (int)param_3;
      do {
        puVar1 = puVar1 + -1;
        uVar3 = *puVar1;
        *puVar1 = uVar2 | uVar3 >> 1;
        uVar2 = uVar3 << 0x3f;
      } while (param_1 < puVar1);
    }
  }
  else if (0 < (int)param_3) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      uVar5 = *(ulong *)((long)param_1 + uVar2);
      uVar6 = uVar5 + uVar3 + *(long *)(param_2 + uVar2);
      if (uVar6 != uVar5) {
        uVar3 = (ulong)(uVar6 < uVar5);
      }
      *(ulong *)((long)param_1 + uVar2) = uVar6;
      uVar2 = uVar2 + 8;
    } while ((-(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3) != uVar2);
    uVar2 = 0;
    puVar1 = param_1 + (int)param_3;
    puVar4 = puVar1;
    do {
      puVar4 = puVar4 + -1;
      uVar6 = *puVar4;
      *puVar4 = uVar2 | uVar6 >> 1;
      uVar2 = uVar6 << 0x3f;
    } while (param_1 < puVar4);
    if (uVar3 != 0) {
      puVar1[-1] = puVar1[-1] | 0x8000000000000000;
      return;
    }
  }
  return;
}

