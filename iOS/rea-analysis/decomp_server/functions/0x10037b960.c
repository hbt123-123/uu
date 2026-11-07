// rea decompile_all
// name: FUN_10037b960
// address: 0x10037b960
// body: available
// range: 0x10037b960-0x10037b9df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10037b960(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  do {
    puVar3 = param_1 + uVar5 * 2 + 2;
    uVar2 = uVar5 << 1 | 1;
    uVar1 = uVar5 * 2 + 2;
    uVar4 = uVar2;
    if ((long)uVar1 < param_3) {
      uVar4 = uVar1;
      if ((ulong)param_1[uVar5 * 2 + 3] <= (ulong)param_1[uVar5 * 2 + 5]) {
        uVar4 = uVar2;
      }
      puVar3 = puVar3 + (ulong)((ulong)param_1[uVar5 * 2 + 5] < (ulong)param_1[uVar5 * 2 + 3]) * 2;
    }
    uVar6 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar6;
    uVar6 = param_1[1];
    param_1[1] = puVar3[1];
    puVar3[1] = uVar6;
    param_1 = puVar3;
    uVar5 = uVar4;
  } while ((long)uVar4 <= (param_3 + -2) / 2);
  return puVar3;
}

