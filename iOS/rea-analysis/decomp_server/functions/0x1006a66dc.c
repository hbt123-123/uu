// rea decompile_all
// name: FUN_1006a66dc
// address: 0x1006a66dc
// body: available
// range: 0x1006a66dc-0x1006a67f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a66dc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if (param_1 != param_2) {
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      puVar2 = param_1 + 3;
      puVar5 = param_1;
      do {
        puVar4 = puVar2;
        puVar2 = puVar4;
        (*(code *)*param_3)(puVar4,puVar5);
        if ((int)puVar2 != 0) {
          uStack_68 = puVar4[1];
          local_70 = *puVar4;
          local_60 = puVar4[2];
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          lVar1 = lVar6;
          do {
            lVar7 = lVar1;
            puVar2 = (undefined8 *)((long)param_1 + lVar7);
            if (*(char *)((long)puVar2 + 0x2f) < '\0') {
              operator_delete((void *)puVar2[3]);
            }
            puVar2[4] = puVar2[1];
            puVar2[3] = *puVar2;
            puVar2[5] = puVar2[2];
            *(undefined1 *)((long)puVar2 + 0x17) = 0;
            *(undefined1 *)puVar2 = 0;
            puVar2 = param_1;
            if (lVar7 == 0) goto LAB_1006a67bc;
            uVar3 = 0;
            (*(code *)*param_3)(&local_70,lVar7 + -0x18 + (long)param_1);
            lVar1 = lVar7 + -0x18;
          } while ((uVar3 & 1) != 0);
          puVar2 = (undefined8 *)((long)param_1 + lVar7);
          if (*(char *)((long)param_1 + lVar7 + 0x17) < '\0') {
            operator_delete((void *)*puVar2);
          }
LAB_1006a67bc:
          puVar2[1] = uStack_68;
          *puVar2 = local_70;
          puVar2[2] = local_60;
        }
        lVar6 = lVar6 + 0x18;
        puVar2 = puVar4 + 3;
        puVar5 = puVar4;
      } while (puVar4 + 3 != param_2);
    }
  }
  return;
}

