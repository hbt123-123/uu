// rea decompile_all
// name: FUN_100016cb0
// address: 0x100016cb0
// body: available
// range: 0x100016cb0-0x100016eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100016cb0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar13 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar13;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  lVar12 = (long)*(int *)(param_3 + 0x24);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar4 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = (long)param_2 + lVar12;
  (*pcVar11)(lVar6,1,lVar4);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar4);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar12,0,1,lVar4);
  }
  else {
    puVar5 = &DAT_100101b10;
    FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  lVar6 = 0;
  FUN_10000fbb8();
  lVar12 = *(long *)(lVar6 + -8);
  puVar7 = param_2;
  (**(code **)(lVar12 + 0x30))(param_2,1,lVar6);
  if ((int)puVar7 == 0) {
    uVar13 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar13;
    puVar1[2] = param_2[2];
    lVar9 = (long)*(int *)(lVar6 + 0x18);
    _swift_bridgeObjectRetain();
    lVar8 = (long)param_2 + lVar9;
    (*pcVar11)(lVar8,1,lVar4);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar10 + 0x10))((long)puVar1 + lVar9,(long)param_2 + lVar9,lVar4);
      (**(code **)(lVar10 + 0x38))((long)puVar1 + lVar9,0,1,lVar4);
    }
    else {
      puVar5 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      _memcpy((void *)((long)puVar1 + lVar9),(void *)((long)param_2 + lVar9),
              *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    (**(code **)(lVar12 + 0x38))(puVar1,0,1,lVar6);
  }
  else {
    puVar5 = &DAT_100101b58;
    FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
    _memcpy(puVar1,param_2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  return param_1;
}

