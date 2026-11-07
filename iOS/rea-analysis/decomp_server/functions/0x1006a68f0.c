// rea decompile_all
// name: FUN_1006a68f0
// address: 0x1006a68f0
// body: available
// range: 0x1006a68f0-0x1006a6a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006a6a50) */

undefined8 * FUN_1006a68f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar2 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  local_60 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  (*(code *)*param_3)(&local_70,param_2 + -3);
  puVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    do {
      puVar3 = puVar3 + 3;
      if (param_2 <= puVar3) break;
      iVar1 = (int)&local_70;
      (*(code *)*param_3)(&local_70,puVar3);
    } while (iVar1 == 0);
  }
  else {
    do {
      puVar3 = puVar3 + 3;
      uVar2 = 0;
      (*(code *)*param_3)(&local_70,puVar3);
    } while ((uVar2 & 1) == 0);
  }
  if (puVar3 < param_2) {
    do {
      param_2 = param_2 + -3;
      uVar2 = 0;
      (*(code *)*param_3)(&local_70,param_2);
    } while ((uVar2 & 1) != 0);
  }
  while (puVar3 < param_2) {
    uStack_48 = puVar3[1];
    local_50 = *puVar3;
    local_40 = puVar3[2];
    uVar6 = param_2[1];
    uVar5 = *param_2;
    puVar3[2] = param_2[2];
    puVar3[1] = uVar6;
    *puVar3 = uVar5;
    param_2[2] = local_40;
    param_2[1] = uStack_48;
    *param_2 = local_50;
    do {
      puVar3 = puVar3 + 3;
      iVar1 = (int)&local_70;
      (*(code *)*param_3)(&local_70,puVar3);
    } while (iVar1 == 0);
    do {
      param_2 = param_2 + -3;
      uVar2 = 0;
      (*(code *)*param_3)(&local_70,param_2);
    } while ((uVar2 & 1) != 0);
  }
  puVar4 = puVar3 + -3;
  if (puVar4 != param_1) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      operator_delete((void *)*param_1);
    }
    uVar6 = puVar3[-2];
    uVar5 = *puVar4;
    param_1[2] = puVar3[-1];
    param_1[1] = uVar6;
    *param_1 = uVar5;
    *(undefined1 *)((long)puVar3 + -1) = 0;
    *(undefined1 *)(puVar3 + -3) = 0;
  }
  puVar3[-1] = local_60;
  puVar3[-2] = uStack_68;
  *puVar4 = local_70;
  return puVar3;
}

