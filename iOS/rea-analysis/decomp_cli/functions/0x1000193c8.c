// rea decompile_all
// name: FUN_1000193c8
// address: 0x1000193c8
// body: available
// range: 0x1000193c8-0x100019563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000193c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  
  uVar11 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar11;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar4;
  uVar5 = param_2[8];
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_1[7] = param_2[7];
  param_1[8] = uVar5;
  lVar6 = 0;
  FUN_10000fbb8();
  lVar14 = *(long *)(lVar6 + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  puVar7 = puVar1;
  (*pcVar15)(puVar1,1,lVar6);
  if ((int)puVar7 == 0) {
    uVar11 = *puVar1;
    puVar2[1] = puVar1[1];
    *puVar2 = uVar11;
    uVar11 = puVar1[2];
    puVar2[2] = uVar11;
    lVar12 = (long)*(int *)(lVar6 + 0x18);
    lVar8 = 0;
    __s10Foundation4DateVMa();
    lVar13 = *(long *)(lVar8 + -8);
    pcVar15 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(uVar11);
    lVar9 = (long)puVar1 + lVar12;
    (*pcVar15)(lVar9,1,lVar8);
    if ((int)lVar9 == 0) {
      (**(code **)(lVar13 + 0x10))((long)puVar2 + lVar12,(long)puVar1 + lVar12,lVar8);
      (**(code **)(lVar13 + 0x38))((long)puVar2 + lVar12,0,1,lVar8);
    }
    else {
      puVar10 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      _memcpy((void *)((long)puVar2 + lVar12),(void *)((long)puVar1 + lVar12),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    (**(code **)(lVar14 + 0x38))(puVar2,0,1,lVar6);
  }
  else {
    puVar10 = &DAT_100101b58;
    FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
    _memcpy(puVar2,puVar1,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  return param_1;
}

