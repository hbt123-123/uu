// rea decompile_all
// name: FUN_1006a75d8
// address: 0x1006a75d8
// body: available
// range: 0x1006a75d8-0x1006a76d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a75d8(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if (1 < param_4) {
    uVar5 = param_4 - 2U >> 1;
    puVar4 = (undefined8 *)(param_1 + uVar5 * 0x18);
    puVar3 = (undefined8 *)(param_2 + -0x18);
    puVar1 = puVar4;
    (*(code *)*param_3)(puVar4,puVar3);
    if ((int)puVar1 != 0) {
      uStack_68 = *(undefined8 *)(param_2 + -0x10);
      local_70 = *puVar3;
      local_60 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -0x10) = 0;
      *(undefined8 *)(param_2 + -8) = 0;
      *puVar3 = 0;
      do {
        puVar1 = puVar4;
        if (*(char *)((long)puVar3 + 0x17) < '\0') {
          operator_delete((void *)*puVar3);
        }
        uVar7 = puVar1[1];
        uVar6 = *puVar1;
        puVar3[2] = puVar1[2];
        puVar3[1] = uVar7;
        *puVar3 = uVar6;
        *(undefined1 *)((long)puVar1 + 0x17) = 0;
        *(undefined1 *)puVar1 = 0;
        if (uVar5 == 0) goto LAB_1006a76a8;
        uVar5 = uVar5 - 1 >> 1;
        puVar4 = (undefined8 *)(param_1 + uVar5 * 0x18);
        puVar2 = puVar4;
        (*(code *)*param_3)(puVar4,&local_70);
        puVar3 = puVar1;
      } while (((ulong)puVar2 & 1) != 0);
      if (*(char *)((long)puVar1 + 0x17) < '\0') {
        operator_delete((void *)*puVar1);
      }
LAB_1006a76a8:
      puVar1[1] = uStack_68;
      *puVar1 = local_70;
      puVar1[2] = local_60;
    }
  }
  return;
}

