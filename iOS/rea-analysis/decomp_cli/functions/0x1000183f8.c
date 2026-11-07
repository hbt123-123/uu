// rea decompile_all
// name: FUN_1000183f8
// address: 0x1000183f8
// body: available
// range: 0x1000183f8-0x100018553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000183f8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  uVar10 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar2 = 0;
  FUN_10000fbb8();
  lVar7 = *(long *)(lVar2 + -8);
  puVar3 = param_2;
  (**(code **)(lVar7 + 0x30))(param_2,1,lVar2);
  if ((int)puVar3 == 0) {
    *puVar1 = *param_2;
    uVar10 = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[1] = uVar10;
    lVar8 = (long)*(int *)(lVar2 + 0x18);
    lVar4 = 0;
    __s10Foundation4DateVMa();
    lVar9 = *(long *)(lVar4 + -8);
    lVar5 = (long)param_2 + lVar8;
    (**(code **)(lVar9 + 0x30))(lVar5,1,lVar4);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar9 + 0x20))((long)puVar1 + lVar8,(long)param_2 + lVar8,lVar4);
      (**(code **)(lVar9 + 0x38))((long)puVar1 + lVar8,0,1,lVar4);
    }
    else {
      puVar6 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      _memcpy((void *)((long)puVar1 + lVar8),(void *)((long)param_2 + lVar8),
              *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    (**(code **)(lVar7 + 0x38))(puVar1,0,1,lVar2);
  }
  else {
    puVar6 = &DAT_100101b58;
    FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
    _memcpy(puVar1,param_2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  return param_1;
}

