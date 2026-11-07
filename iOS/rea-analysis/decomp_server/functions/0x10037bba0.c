// rea decompile_all
// name: FUN_10037bba0
// address: 0x10037bba0
// body: available
// range: 0x10037bba0-0x10037bc4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037bba0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar4 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar2));
  puVar5 = puVar4;
  puVar8 = puVar1;
  if (puVar2 != puVar4) {
    do {
      uVar3 = puVar5[1];
      *puVar8 = *puVar5;
      puVar6 = puVar5 + 2;
      *puVar5 = 0;
      puVar8[1] = uVar3;
      puVar5 = puVar6;
      puVar8 = puVar8 + 2;
    } while (puVar6 != puVar2);
    do {
      FUN_10037b708();
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar2);
    puVar4 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar4;
  param_2[1] = puVar4;
  lVar7 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar7;
  lVar7 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar7;
  *param_2 = param_2[1];
  return;
}

