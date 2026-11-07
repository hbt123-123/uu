// rea decompile_all
// name: FUN_10037b9e0
// address: 0x10037b9e0
// body: available
// range: 0x10037b9e0-0x10037ba87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037b9e0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_20;
  undefined8 local_18;
  
  if (1 < param_4) {
    uVar3 = param_4 - 2U >> 1;
    puVar1 = (undefined8 *)(param_1 + uVar3 * 0x10);
    uVar4 = *(ulong *)(param_2 + -8);
    if (uVar4 < (ulong)puVar1[1]) {
      puVar2 = (undefined8 *)(param_2 + -0x10);
      uVar7 = *puVar2;
      *puVar2 = 0;
      do {
        puVar5 = puVar1;
        uVar6 = *puVar2;
        *puVar2 = *puVar5;
        *puVar5 = uVar6;
        local_18 = puVar2[1];
        puVar2[1] = puVar5[1];
        puVar5[1] = local_18;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1 >> 1;
        puVar1 = (undefined8 *)(param_1 + uVar3 * 0x10);
        puVar2 = puVar5;
      } while (uVar4 < (ulong)puVar1[1]);
      local_20 = *puVar5;
      *puVar5 = uVar7;
      puVar5[1] = uVar4;
      FUN_10037b708(&local_20);
    }
  }
  return;
}

