// rea decompile_all
// name: FUN_1000199c0
// address: 0x1000199c0
// body: available
// range: 0x1000199c0-0x100019c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000199c0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  size_t sVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  
  uVar6 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar1);
  uVar6 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar6 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar6;
  _swift_bridgeObjectRelease(uVar1);
  uVar6 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar6;
  _swift_bridgeObjectRelease(uVar1);
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  lVar2 = 0;
  FUN_10000fbb8();
  lVar11 = *(long *)(lVar2 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  puVar3 = puVar8;
  (*pcVar12)(puVar8,1,lVar2);
  puVar4 = param_2;
  (*pcVar12)(param_2,1,lVar2);
  if ((int)puVar3 == 0) {
    if ((int)puVar4 == 0) {
      uVar6 = *param_2;
      puVar8[1] = param_2[1];
      *puVar8 = uVar6;
      uVar6 = puVar8[2];
      puVar8[2] = param_2[2];
      _swift_bridgeObjectRelease(uVar6);
      lVar5 = (long)*(int *)(lVar2 + 0x18);
      lVar2 = 0;
      __s10Foundation4DateVMa();
      lVar13 = *(long *)(lVar2 + -8);
      pcVar12 = *(code **)(lVar13 + 0x30);
      lVar11 = (long)puVar8 + lVar5;
      (*pcVar12)(lVar11,1,lVar2);
      lVar7 = (long)param_2 + lVar5;
      (*pcVar12)(lVar7,1,lVar2);
      if ((int)lVar11 == 0) {
        if ((int)lVar7 == 0) {
          (**(code **)(lVar13 + 0x28))((long)puVar8 + lVar5,(long)param_2 + lVar5,lVar2);
          return param_1;
        }
        (**(code **)(lVar13 + 8))((long)puVar8 + lVar5,lVar2);
      }
      else if ((int)lVar7 == 0) {
        (**(code **)(lVar13 + 0x20))((long)puVar8 + lVar5,(long)param_2 + lVar5,lVar2);
        pcVar12 = *(code **)(lVar13 + 0x38);
        puVar8 = (undefined8 *)((long)puVar8 + lVar5);
        goto LAB_100019bd0;
      }
      puVar9 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      sVar10 = *(size_t *)(*(long *)(puVar9 + -8) + 0x40);
      puVar8 = (undefined8 *)((long)puVar8 + lVar5);
      param_2 = (undefined8 *)((long)param_2 + lVar5);
      goto LAB_100019b18;
    }
    FUN_10000fc50(puVar8,FUN_10000fbb8);
  }
  else if ((int)puVar4 == 0) {
    *puVar8 = *param_2;
    uVar6 = param_2[1];
    puVar8[2] = param_2[2];
    puVar8[1] = uVar6;
    lVar13 = (long)*(int *)(lVar2 + 0x18);
    lVar5 = 0;
    __s10Foundation4DateVMa();
    lVar14 = *(long *)(lVar5 + -8);
    lVar7 = (long)param_2 + lVar13;
    (**(code **)(lVar14 + 0x30))(lVar7,1,lVar5);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar14 + 0x20))((long)puVar8 + lVar13,(long)param_2 + lVar13,lVar5);
      (**(code **)(lVar14 + 0x38))((long)puVar8 + lVar13,0,1,lVar5);
    }
    else {
      puVar9 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      _memcpy((void *)((long)puVar8 + lVar13),(void *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    pcVar12 = *(code **)(lVar11 + 0x38);
LAB_100019bd0:
    (*pcVar12)(puVar8,0,1,lVar2);
    return param_1;
  }
  puVar9 = &DAT_100101b58;
  FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
  sVar10 = *(size_t *)(*(long *)(puVar9 + -8) + 0x40);
LAB_100019b18:
  _memcpy(puVar8,param_2,sVar10);
  return param_1;
}

