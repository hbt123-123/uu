// rea decompile_all
// name: FUN_100017414
// address: 0x100017414
// body: available
// range: 0x100017414-0x10001774f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100017414(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  size_t sVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  
  uVar7 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar1);
  uVar7 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  _swift_bridgeObjectRelease(uVar1);
  uVar7 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  lVar10 = (long)*(int *)(param_3 + 0x24);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  lVar4 = (long)param_1 + lVar10;
  (*pcVar13)(lVar4,1,lVar2);
  lVar14 = (long)param_2 + lVar10;
  (*pcVar13)(lVar14,1,lVar2);
  if ((int)lVar4 == 0) {
    if ((int)lVar14 != 0) {
      (**(code **)(lVar12 + 8))((long)param_1 + lVar10,lVar2);
      goto LAB_100017504;
    }
    (**(code **)(lVar12 + 0x28))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar2);
  }
  else if ((int)lVar14 == 0) {
    (**(code **)(lVar12 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar2);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar10,0,1,lVar2);
  }
  else {
LAB_100017504:
    puVar3 = &DAT_100101b10;
    FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  lVar4 = 0;
  FUN_10000fbb8();
  lVar14 = *(long *)(lVar4 + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  puVar5 = puVar8;
  (*pcVar15)(puVar8,1,lVar4);
  puVar6 = param_2;
  (*pcVar15)(param_2,1,lVar4);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 == 0) {
      uVar7 = *param_2;
      puVar8[1] = param_2[1];
      *puVar8 = uVar7;
      uVar7 = puVar8[2];
      puVar8[2] = param_2[2];
      _swift_bridgeObjectRelease(uVar7);
      lVar10 = (long)*(int *)(lVar4 + 0x18);
      lVar4 = (long)puVar8 + lVar10;
      (*pcVar13)(lVar4,1,lVar2);
      lVar14 = (long)param_2 + lVar10;
      (*pcVar13)(lVar14,1,lVar2);
      if ((int)lVar4 == 0) {
        if ((int)lVar14 == 0) {
          (**(code **)(lVar12 + 0x28))((long)puVar8 + lVar10,(long)param_2 + lVar10,lVar2);
          return param_1;
        }
        (**(code **)(lVar12 + 8))((long)puVar8 + lVar10,lVar2);
      }
      else if ((int)lVar14 == 0) {
        (**(code **)(lVar12 + 0x20))((long)puVar8 + lVar10,(long)param_2 + lVar10,lVar2);
        pcVar13 = *(code **)(lVar12 + 0x38);
        puVar8 = (undefined8 *)((long)puVar8 + lVar10);
        goto LAB_1000176d8;
      }
      puVar3 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      sVar9 = *(size_t *)(*(long *)(puVar3 + -8) + 0x40);
      puVar8 = (undefined8 *)((long)puVar8 + lVar10);
      param_2 = (undefined8 *)((long)param_2 + lVar10);
      goto LAB_100017604;
    }
    FUN_10000fc50(puVar8,FUN_10000fbb8);
  }
  else if ((int)puVar6 == 0) {
    *puVar8 = *param_2;
    uVar7 = param_2[1];
    puVar8[2] = param_2[2];
    puVar8[1] = uVar7;
    lVar11 = (long)*(int *)(lVar4 + 0x18);
    lVar10 = (long)param_2 + lVar11;
    (*pcVar13)(lVar10,1,lVar2);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar12 + 0x20))((long)puVar8 + lVar11,(long)param_2 + lVar11,lVar2);
      (**(code **)(lVar12 + 0x38))((long)puVar8 + lVar11,0,1,lVar2);
    }
    else {
      puVar3 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      _memcpy((void *)((long)puVar8 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
    }
    pcVar13 = *(code **)(lVar14 + 0x38);
    lVar2 = lVar4;
LAB_1000176d8:
    (*pcVar13)(puVar8,0,1,lVar2);
    return param_1;
  }
  puVar3 = &DAT_100101b58;
  FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
  sVar9 = *(size_t *)(*(long *)(puVar3 + -8) + 0x40);
LAB_100017604:
  _memcpy(puVar8,param_2,sVar9);
  return param_1;
}

