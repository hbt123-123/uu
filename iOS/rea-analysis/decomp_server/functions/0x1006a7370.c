// rea decompile_all
// name: FUN_1006a7370
// address: 0x1006a7370
// body: available
// range: 0x1006a7370-0x1006a7503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a7370(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (1 < param_3) {
    lVar4 = (long)param_4 - param_1 >> 3;
    uVar8 = param_3 - 2U >> 1;
    if (lVar4 * -0x5555555555555555 <= (long)uVar8) {
      uVar2 = lVar4 * 0x5555555555555556 | 1;
      puVar5 = (undefined8 *)(param_1 + uVar2 * 0x18);
      uVar1 = lVar4 * 0x5555555555555556 + 2;
      puVar7 = puVar5;
      uVar9 = uVar2;
      if ((long)uVar1 < param_3) {
        puVar6 = puVar5;
        (*(code *)*param_2)(puVar5,puVar5 + 3);
        puVar7 = puVar5 + 3;
        uVar9 = uVar1;
        if ((int)puVar6 == 0) {
          puVar7 = puVar5;
          uVar9 = uVar2;
        }
      }
      puVar5 = puVar7;
      (*(code *)*param_2)(puVar7,param_4);
      if (((ulong)puVar5 & 1) == 0) {
        uStack_78 = param_4[1];
        local_80 = *param_4;
        local_70 = param_4[2];
        param_4[1] = 0;
        param_4[2] = 0;
        *param_4 = 0;
        do {
          puVar5 = puVar7;
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            operator_delete((void *)*param_4);
          }
          uVar11 = puVar5[1];
          uVar10 = *puVar5;
          param_4[2] = puVar5[2];
          param_4[1] = uVar11;
          *param_4 = uVar10;
          *(undefined1 *)((long)puVar5 + 0x17) = 0;
          *(undefined1 *)puVar5 = 0;
          if ((long)uVar8 < (long)uVar9) goto LAB_1006a74d4;
          uVar2 = uVar9 << 1 | 1;
          puVar6 = (undefined8 *)(param_1 + uVar2 * 0x18);
          uVar1 = uVar9 * 2 + 2;
          puVar7 = puVar6;
          uVar9 = uVar2;
          if ((long)uVar1 < param_3) {
            puVar3 = puVar6;
            (*(code *)*param_2)(puVar6,puVar6 + 3);
            puVar7 = puVar6 + 3;
            uVar9 = uVar1;
            if ((int)puVar3 == 0) {
              puVar7 = puVar6;
              uVar9 = uVar2;
            }
          }
          puVar6 = puVar7;
          (*(code *)*param_2)(puVar7,&local_80);
          param_4 = puVar5;
        } while ((int)puVar6 == 0);
        if (*(char *)((long)puVar5 + 0x17) < '\0') {
          operator_delete((void *)*puVar5);
        }
LAB_1006a74d4:
        puVar5[2] = local_70;
        puVar5[1] = uStack_78;
        *puVar5 = local_80;
      }
    }
  }
  return;
}

