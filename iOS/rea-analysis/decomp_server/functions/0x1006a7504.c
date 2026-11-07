// rea decompile_all
// name: FUN_1006a7504
// address: 0x1006a7504
// body: available
// range: 0x1006a7504-0x1006a75d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1006a7504(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = 0;
  do {
    puVar1 = param_1 + uVar6 * 3 + 3;
    uVar3 = uVar6 << 1 | 1;
    uVar2 = uVar6 * 2 + 2;
    puVar5 = puVar1;
    uVar7 = uVar3;
    if ((long)uVar2 < param_3) {
      puVar4 = puVar1;
      (*(code *)*param_2)(puVar1,param_1 + uVar6 * 3 + 6);
      puVar5 = param_1 + uVar6 * 3 + 6;
      uVar7 = uVar2;
      if ((int)puVar4 == 0) {
        puVar5 = puVar1;
        uVar7 = uVar3;
      }
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      operator_delete((void *)*param_1);
    }
    uVar9 = puVar5[1];
    uVar8 = *puVar5;
    param_1[2] = puVar5[2];
    param_1[1] = uVar9;
    *param_1 = uVar8;
    *(undefined1 *)((long)puVar5 + 0x17) = 0;
    *(undefined1 *)puVar5 = 0;
    param_1 = puVar5;
    uVar6 = uVar7;
  } while ((long)uVar7 <= (param_3 + -2) / 2);
  return puVar5;
}

