// rea decompile_all
// name: FUN_100017f94
// address: 0x100017f94
// body: available
// range: 0x100017f94-0x10001811f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100017f94(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  
  uVar10 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  lVar5 = 0;
  FUN_10000fbb8();
  lVar12 = *(long *)(lVar5 + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  puVar6 = puVar1;
  (*pcVar13)(puVar1,1,lVar5);
  if ((int)puVar6 == 0) {
    uVar10 = *puVar1;
    puVar2[1] = puVar1[1];
    *puVar2 = uVar10;
    uVar10 = puVar1[2];
    puVar2[2] = uVar10;
    lVar11 = (long)*(int *)(lVar5 + 0x18);
    lVar7 = 0;
    __s10Foundation4DateVMa();
    lVar14 = *(long *)(lVar7 + -8);
    pcVar13 = *(code **)(lVar14 + 0x30);
    _swift_bridgeObjectRetain(uVar10);
    lVar8 = (long)puVar1 + lVar11;
    (*pcVar13)(lVar8,1,lVar7);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar14 + 0x10))((long)puVar2 + lVar11,(long)puVar1 + lVar11,lVar7);
      (**(code **)(lVar14 + 0x38))((long)puVar2 + lVar11,0,1,lVar7);
    }
    else {
      puVar9 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      _memcpy((void *)((long)puVar2 + lVar11),(void *)((long)puVar1 + lVar11),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    (**(code **)(lVar12 + 0x38))(puVar2,0,1,lVar5);
  }
  else {
    puVar9 = &DAT_100101b58;
    FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
    _memcpy(puVar2,puVar1,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  return param_1;
}

