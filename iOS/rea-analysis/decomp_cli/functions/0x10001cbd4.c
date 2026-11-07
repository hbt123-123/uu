// rea decompile_all
// name: FUN_10001cbd4
// address: 0x10001cbd4
// body: available
// range: 0x10001cbd4-0x10001cd9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10001cbd4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  lVar7 = (long)*(int *)(param_3 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar2 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar9)(lVar4,1,lVar2);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar2);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar2);
  }
  else {
    puVar3 = &DAT_100101b10;
    FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar4 = 0;
  FUN_10000fbb8();
  lVar7 = *(long *)(lVar4 + -8);
  puVar5 = param_2;
  (**(code **)(lVar7 + 0x30))(param_2,1,lVar4);
  if ((int)puVar5 == 0) {
    *puVar1 = *param_2;
    uVar11 = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[1] = uVar11;
    lVar10 = (long)*(int *)(lVar4 + 0x18);
    lVar6 = (long)param_2 + lVar10;
    (*pcVar9)(lVar6,1,lVar2);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x20))((long)puVar1 + lVar10,(long)param_2 + lVar10,lVar2);
      (**(code **)(lVar8 + 0x38))((long)puVar1 + lVar10,0,1,lVar2);
    }
    else {
      puVar3 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      _memcpy((void *)((long)puVar1 + lVar10),(void *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
    }
    (**(code **)(lVar7 + 0x38))(puVar1,0,1,lVar4);
  }
  else {
    puVar3 = &DAT_100101b58;
    FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
    _memcpy(puVar1,param_2,*(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  return param_1;
}

