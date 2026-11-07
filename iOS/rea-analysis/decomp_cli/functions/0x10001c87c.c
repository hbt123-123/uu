// rea decompile_all
// name: FUN_10001c87c
// address: 0x10001c87c
// body: available
// range: 0x10001c87c-0x10001cbd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10001c87c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  
  *param_1 = *param_2;
  uVar8 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  param_1[2] = param_2[2];
  uVar8 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  lVar9 = (long)*(int *)(param_3 + 0x18);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar1 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar3 = (long)param_1 + lVar9;
  (*pcVar12)(lVar3,1,lVar1);
  lVar13 = (long)param_2 + lVar9;
  (*pcVar12)(lVar13,1,lVar1);
  if ((int)lVar3 == 0) {
    if ((int)lVar13 != 0) {
      (**(code **)(lVar11 + 8))((long)param_1 + lVar9,lVar1);
      goto LAB_10001c96c;
    }
    (**(code **)(lVar11 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar1);
  }
  else if ((int)lVar13 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar1);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar9,0,1,lVar1);
  }
  else {
LAB_10001c96c:
    puVar2 = &DAT_100101b10;
    FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
  }
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar3 = 0;
  FUN_10000fbb8();
  lVar13 = *(long *)(lVar3 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  puVar4 = puVar6;
  (*pcVar14)(puVar6,1,lVar3);
  puVar5 = param_2;
  (*pcVar14)(param_2,1,lVar3);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 == 0) {
      *puVar6 = *param_2;
      puVar6[1] = param_2[1];
      uVar8 = puVar6[2];
      puVar6[2] = param_2[2];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar8);
      lVar9 = (long)*(int *)(lVar3 + 0x18);
      lVar3 = (long)puVar6 + lVar9;
      (*pcVar12)(lVar3,1,lVar1);
      lVar13 = (long)param_2 + lVar9;
      (*pcVar12)(lVar13,1,lVar1);
      if ((int)lVar3 == 0) {
        if ((int)lVar13 == 0) {
          (**(code **)(lVar11 + 0x18))((long)puVar6 + lVar9,(long)param_2 + lVar9,lVar1);
          return param_1;
        }
        (**(code **)(lVar11 + 8))((long)puVar6 + lVar9,lVar1);
      }
      else if ((int)lVar13 == 0) {
        (**(code **)(lVar11 + 0x10))((long)puVar6 + lVar9,(long)param_2 + lVar9,lVar1);
        pcVar12 = *(code **)(lVar11 + 0x38);
        puVar6 = (undefined8 *)((long)puVar6 + lVar9);
        goto LAB_10001cb5c;
      }
      puVar2 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      sVar7 = *(size_t *)(*(long *)(puVar2 + -8) + 0x40);
      puVar6 = (undefined8 *)((long)puVar6 + lVar9);
      param_2 = (undefined8 *)((long)param_2 + lVar9);
      goto LAB_10001ca78;
    }
    FUN_10000fc50(puVar6,FUN_10000fbb8);
  }
  else if ((int)puVar5 == 0) {
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
    puVar6[2] = param_2[2];
    lVar10 = (long)*(int *)(lVar3 + 0x18);
    _swift_bridgeObjectRetain();
    lVar9 = (long)param_2 + lVar10;
    (*pcVar12)(lVar9,1,lVar1);
    if ((int)lVar9 == 0) {
      (**(code **)(lVar11 + 0x10))((long)puVar6 + lVar10,(long)param_2 + lVar10,lVar1);
      (**(code **)(lVar11 + 0x38))((long)puVar6 + lVar10,0,1,lVar1);
    }
    else {
      puVar2 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      _memcpy((void *)((long)puVar6 + lVar10),(void *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
    }
    pcVar12 = *(code **)(lVar13 + 0x38);
    lVar1 = lVar3;
LAB_10001cb5c:
    (*pcVar12)(puVar6,0,1,lVar1);
    return param_1;
  }
  puVar2 = &DAT_100101b58;
  FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
  sVar7 = *(size_t *)(*(long *)(puVar2 + -8) + 0x40);
LAB_10001ca78:
  _memcpy(puVar6,param_2,sVar7);
  return param_1;
}

