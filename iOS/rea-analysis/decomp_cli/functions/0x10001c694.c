// rea decompile_all
// name: FUN_10001c694
// address: 0x10001c694
// body: available
// range: 0x10001c694-0x10001c87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10001c694(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar12 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar12;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  lVar10 = (long)*(int *)(param_3 + 0x18);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar2);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar9)(lVar5,1,lVar3);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar3);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,lVar3);
  }
  else {
    puVar4 = &DAT_100101b10;
    FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar5 = 0;
  FUN_10000fbb8();
  lVar10 = *(long *)(lVar5 + -8);
  puVar6 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar5);
  if ((int)puVar6 == 0) {
    uVar12 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar12;
    puVar1[2] = param_2[2];
    lVar11 = (long)*(int *)(lVar5 + 0x18);
    _swift_bridgeObjectRetain();
    lVar7 = (long)param_2 + lVar11;
    (*pcVar9)(lVar7,1,lVar3);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar8 + 0x10))((long)puVar1 + lVar11,(long)param_2 + lVar11,lVar3);
      (**(code **)(lVar8 + 0x38))((long)puVar1 + lVar11,0,1,lVar3);
    }
    else {
      puVar4 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      _memcpy((void *)((long)puVar1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
    (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar5);
  }
  else {
    puVar4 = &DAT_100101b58;
    FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
    _memcpy(puVar1,param_2,*(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  return param_1;
}

