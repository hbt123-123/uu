// rea decompile_all
// name: FUN_1006a6428
// address: 0x1006a6428
// body: available
// range: 0x1006a6428-0x1006a66db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a6428(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = param_2;
  (*(code *)*param_6)(param_2,param_1);
  puVar2 = param_3;
  (*(code *)*param_6)(param_3,param_2);
  if (((ulong)puVar1 & 1) == 0) {
    if ((int)puVar2 != 0) {
      uVar3 = param_2[2];
      uVar6 = param_2[1];
      uVar5 = *param_2;
      uVar4 = param_3[2];
      uVar7 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_2[2] = uVar4;
      param_3[1] = uVar6;
      *param_3 = uVar5;
      param_3[2] = uVar3;
      puVar1 = param_2;
      (*(code *)*param_6)(param_2,param_1);
      if ((int)puVar1 != 0) {
        uVar3 = param_1[2];
        uVar6 = param_1[1];
        uVar5 = *param_1;
        uVar4 = param_2[2];
        uVar7 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar7;
        param_1[2] = uVar4;
        param_2[1] = uVar6;
        *param_2 = uVar5;
        param_2[2] = uVar3;
      }
    }
  }
  else {
    if ((int)puVar2 == 0) {
      uVar3 = param_1[2];
      uVar6 = param_1[1];
      uVar5 = *param_1;
      uVar4 = param_2[2];
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      param_1[2] = uVar4;
      param_2[1] = uVar6;
      *param_2 = uVar5;
      param_2[2] = uVar3;
      puVar1 = param_3;
      (*(code *)*param_6)(param_3,param_2);
      if ((int)puVar1 == 0) goto LAB_1006a6554;
      uVar3 = param_2[2];
      uVar6 = param_2[1];
      uVar5 = *param_2;
      uVar4 = param_3[2];
      uVar7 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_2[2] = uVar4;
    }
    else {
      uVar3 = param_1[2];
      uVar6 = param_1[1];
      uVar5 = *param_1;
      uVar4 = param_3[2];
      uVar7 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar7;
      param_1[2] = uVar4;
    }
    param_3[1] = uVar6;
    *param_3 = uVar5;
    param_3[2] = uVar3;
  }
LAB_1006a6554:
  puVar1 = param_4;
  (*(code *)*param_6)(param_4,param_3);
  if ((int)puVar1 != 0) {
    uVar3 = param_3[2];
    uVar6 = param_3[1];
    uVar5 = *param_3;
    uVar4 = param_4[2];
    uVar7 = *param_4;
    param_3[1] = param_4[1];
    *param_3 = uVar7;
    param_3[2] = uVar4;
    param_4[1] = uVar6;
    *param_4 = uVar5;
    param_4[2] = uVar3;
    puVar1 = param_3;
    (*(code *)*param_6)(param_3,param_2);
    if ((int)puVar1 != 0) {
      uVar3 = param_2[2];
      uVar6 = param_2[1];
      uVar5 = *param_2;
      uVar4 = param_3[2];
      uVar7 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_2[2] = uVar4;
      param_3[1] = uVar6;
      *param_3 = uVar5;
      param_3[2] = uVar3;
      puVar1 = param_2;
      (*(code *)*param_6)(param_2,param_1);
      if ((int)puVar1 != 0) {
        uVar3 = param_1[2];
        uVar6 = param_1[1];
        uVar5 = *param_1;
        uVar4 = param_2[2];
        uVar7 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar7;
        param_1[2] = uVar4;
        param_2[1] = uVar6;
        *param_2 = uVar5;
        param_2[2] = uVar3;
      }
    }
  }
  puVar1 = param_5;
  (*(code *)*param_6)(param_5,param_4);
  if ((int)puVar1 != 0) {
    uVar3 = param_4[2];
    uVar6 = param_4[1];
    uVar5 = *param_4;
    uVar4 = param_5[2];
    uVar7 = *param_5;
    param_4[1] = param_5[1];
    *param_4 = uVar7;
    param_4[2] = uVar4;
    param_5[1] = uVar6;
    *param_5 = uVar5;
    param_5[2] = uVar3;
    puVar1 = param_4;
    (*(code *)*param_6)(param_4,param_3);
    if ((int)puVar1 != 0) {
      uVar3 = param_3[2];
      uVar6 = param_3[1];
      uVar5 = *param_3;
      uVar4 = param_4[2];
      uVar7 = *param_4;
      param_3[1] = param_4[1];
      *param_3 = uVar7;
      param_3[2] = uVar4;
      param_4[1] = uVar6;
      *param_4 = uVar5;
      param_4[2] = uVar3;
      puVar1 = param_3;
      (*(code *)*param_6)(param_3,param_2);
      if ((int)puVar1 != 0) {
        uVar3 = param_2[2];
        uVar6 = param_2[1];
        uVar5 = *param_2;
        uVar4 = param_3[2];
        uVar7 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar7;
        param_2[2] = uVar4;
        param_3[1] = uVar6;
        *param_3 = uVar5;
        param_3[2] = uVar3;
        puVar1 = param_2;
        (*(code *)*param_6)(param_2,param_1);
        if ((int)puVar1 != 0) {
          uVar3 = param_1[2];
          uVar6 = param_1[1];
          uVar5 = *param_1;
          uVar4 = param_2[2];
          uVar7 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar7;
          param_1[2] = uVar4;
          param_2[1] = uVar6;
          *param_2 = uVar5;
          param_2[2] = uVar3;
        }
      }
    }
  }
  return;
}

