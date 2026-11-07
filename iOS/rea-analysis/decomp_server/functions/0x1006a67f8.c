// rea decompile_all
// name: FUN_1006a67f8
// address: 0x1006a67f8
// body: available
// range: 0x1006a67f8-0x1006a68ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a67f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (param_1 != param_2) {
    if (param_1 + 3 != param_2) {
      puVar5 = param_1 + -3;
      puVar1 = param_1 + 3;
      do {
        puVar3 = puVar1;
        puVar1 = puVar3;
        (*(code *)*param_3)(puVar3,param_1);
        if ((int)puVar1 != 0) {
          uStack_58 = puVar3[1];
          local_60 = *puVar3;
          local_50 = puVar3[2];
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = 0;
          puVar1 = puVar5;
          do {
            puVar4 = puVar1;
            if (*(char *)((long)puVar4 + 0x47) < '\0') {
              operator_delete((void *)puVar4[6]);
            }
            puVar4[7] = puVar4[4];
            puVar4[6] = puVar4[3];
            puVar4[8] = puVar4[5];
            *(undefined1 *)((long)puVar4 + 0x2f) = 0;
            *(undefined1 *)(puVar4 + 3) = 0;
            uVar2 = 0;
            (*(code *)*param_3)(&local_60,puVar4);
            puVar1 = puVar4 + -3;
          } while ((uVar2 & 1) != 0);
          if (*(char *)((long)puVar4 + 0x2f) < '\0') {
            operator_delete((void *)puVar4[3]);
          }
          puVar4[4] = uStack_58;
          puVar4[3] = local_60;
          puVar4[5] = local_50;
        }
        puVar5 = puVar5 + 3;
        puVar1 = puVar3 + 3;
        param_1 = puVar3;
      } while (puVar3 + 3 != param_2);
    }
  }
  return;
}

