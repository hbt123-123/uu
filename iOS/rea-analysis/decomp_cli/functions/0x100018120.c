// rea decompile_all
// name: FUN_100018120
// address: 0x100018120
// body: available
// range: 0x100018120-0x1000183f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100018120(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  size_t sVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  *param_1 = *param_2;
  uVar9 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  param_1[2] = param_2[2];
  uVar9 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  param_1[4] = param_2[4];
  uVar9 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar1 = 0;
  FUN_10000fbb8();
  lVar11 = *(long *)(lVar1 + -8);
  pcVar10 = *(code **)(lVar11 + 0x30);
  puVar2 = puVar6;
  (*pcVar10)(puVar6,1,lVar1);
  puVar3 = param_2;
  (*pcVar10)(param_2,1,lVar1);
  if ((int)puVar2 == 0) {
    if ((int)puVar3 == 0) {
      *puVar6 = *param_2;
      puVar6[1] = param_2[1];
      uVar9 = puVar6[2];
      puVar6[2] = param_2[2];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar9);
      lVar4 = (long)*(int *)(lVar1 + 0x18);
      lVar1 = 0;
      __s10Foundation4DateVMa();
      lVar12 = *(long *)(lVar1 + -8);
      pcVar10 = *(code **)(lVar12 + 0x30);
      lVar11 = (long)puVar6 + lVar4;
      (*pcVar10)(lVar11,1,lVar1);
      lVar5 = (long)param_2 + lVar4;
      (*pcVar10)(lVar5,1,lVar1);
      if ((int)lVar11 == 0) {
        if ((int)lVar5 == 0) {
          (**(code **)(lVar12 + 0x18))((long)puVar6 + lVar4,(long)param_2 + lVar4,lVar1);
          return param_1;
        }
        (**(code **)(lVar12 + 8))((long)puVar6 + lVar4,lVar1);
      }
      else if ((int)lVar5 == 0) {
        (**(code **)(lVar12 + 0x10))((long)puVar6 + lVar4,(long)param_2 + lVar4,lVar1);
        pcVar10 = *(code **)(lVar12 + 0x38);
        puVar6 = (undefined8 *)((long)puVar6 + lVar4);
        goto LAB_100018374;
      }
      puVar7 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      sVar8 = *(size_t *)(*(long *)(puVar7 + -8) + 0x40);
      puVar6 = (undefined8 *)((long)puVar6 + lVar4);
      param_2 = (undefined8 *)((long)param_2 + lVar4);
      goto LAB_1000182ac;
    }
    FUN_10000fc50(puVar6,FUN_10000fbb8);
  }
  else if ((int)puVar3 == 0) {
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
    uVar9 = param_2[2];
    puVar6[2] = uVar9;
    lVar12 = (long)*(int *)(lVar1 + 0x18);
    lVar4 = 0;
    __s10Foundation4DateVMa();
    lVar13 = *(long *)(lVar4 + -8);
    pcVar10 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(uVar9);
    lVar5 = (long)param_2 + lVar12;
    (*pcVar10)(lVar5,1,lVar4);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar13 + 0x10))((long)puVar6 + lVar12,(long)param_2 + lVar12,lVar4);
      (**(code **)(lVar13 + 0x38))((long)puVar6 + lVar12,0,1,lVar4);
    }
    else {
      puVar7 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      _memcpy((void *)((long)puVar6 + lVar12),(void *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    pcVar10 = *(code **)(lVar11 + 0x38);
LAB_100018374:
    (*pcVar10)(puVar6,0,1,lVar1);
    return param_1;
  }
  puVar7 = &DAT_100101b58;
  FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
  sVar8 = *(size_t *)(*(long *)(puVar7 + -8) + 0x40);
LAB_1000182ac:
  _memcpy(puVar6,param_2,sVar8);
  return param_1;
}

