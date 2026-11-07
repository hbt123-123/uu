// rea decompile_all
// name: FUN_1006a6a80
// address: 0x1006a6a80
// body: available
// range: 0x1006a6a80-0x1006a6c0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006a6bd0) */

undefined1  [16] FUN_1006a6a80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar6 = 0;
  uStack_78 = param_1[1];
  local_80 = *param_1;
  local_70 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  do {
    lVar6 = lVar6 + 0x18;
    uVar2 = lVar6 + (long)param_1;
    (*(code *)*param_3)(uVar2,&local_80);
  } while ((uVar2 & 1) != 0);
  puVar1 = (undefined8 *)((long)param_1 + lVar6);
  if (lVar6 == 0x18) {
    do {
      if (param_2 <= puVar1) break;
      param_2 = param_2 + -3;
      puVar3 = param_2;
      (*(code *)*param_3)(param_2,&local_80);
    } while (((ulong)puVar3 & 1) == 0);
  }
  else {
    do {
      param_2 = param_2 + -3;
      puVar3 = param_2;
      (*(code *)*param_3)(param_2,&local_80);
    } while ((int)puVar3 == 0);
  }
  puVar3 = puVar1;
  puVar7 = param_2;
  if (puVar1 < param_2) {
    do {
      uStack_58 = puVar3[1];
      local_60 = *puVar3;
      local_50 = puVar3[2];
      uVar5 = puVar7[2];
      uVar8 = *puVar7;
      puVar3[1] = puVar7[1];
      *puVar3 = uVar8;
      puVar3[2] = uVar5;
      puVar7[2] = local_50;
      puVar7[1] = uStack_58;
      *puVar7 = local_60;
      do {
        puVar3 = puVar3 + 3;
        puVar4 = puVar3;
        (*(code *)*param_3)(puVar3,&local_80);
      } while (((ulong)puVar4 & 1) != 0);
      do {
        puVar7 = puVar7 + -3;
        puVar4 = puVar7;
        (*(code *)*param_3)(puVar7,&local_80);
      } while ((int)puVar4 == 0);
    } while (puVar3 < puVar7);
  }
  puVar7 = puVar3 + -3;
  if (puVar7 != param_1) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      operator_delete((void *)*param_1);
    }
    uVar8 = puVar3[-2];
    uVar5 = *puVar7;
    param_1[2] = puVar3[-1];
    param_1[1] = uVar8;
    *param_1 = uVar5;
    *(undefined1 *)((long)puVar3 - 1) = 0;
    *(undefined1 *)(puVar3 + -3) = 0;
  }
  puVar3[-1] = local_70;
  puVar3[-2] = uStack_78;
  *puVar7 = local_80;
  auVar9[8] = param_2 <= puVar1;
  auVar9._0_8_ = puVar7;
  auVar9._9_7_ = 0;
  return auVar9;
}

