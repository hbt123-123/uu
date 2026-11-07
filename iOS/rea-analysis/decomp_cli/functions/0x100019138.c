// rea decompile_all
// name: FUN_100019138
// address: 0x100019138
// body: available
// range: 0x100019138-0x1000192ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100019138(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar6;
    lVar7 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar7;
    *(char *)(param_1 + 4) = (char)param_2[4];
    lVar11 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = lVar11;
    lVar12 = param_2[8];
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    param_1[7] = param_2[7];
    param_1[8] = lVar12;
    lVar4 = 0;
    FUN_10000fbb8();
    lVar13 = *(long *)(lVar4 + -8);
    pcVar14 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRetain(lVar12);
    puVar5 = puVar1;
    (*pcVar14)(puVar1,1,lVar4);
    if ((int)puVar5 == 0) {
      uVar10 = *puVar1;
      puVar2[1] = puVar1[1];
      *puVar2 = uVar10;
      uVar10 = puVar1[2];
      puVar2[2] = uVar10;
      lVar11 = (long)*(int *)(lVar4 + 0x18);
      lVar7 = 0;
      __s10Foundation4DateVMa();
      lVar12 = *(long *)(lVar7 + -8);
      pcVar14 = *(code **)(lVar12 + 0x30);
      _swift_bridgeObjectRetain(uVar10);
      lVar6 = (long)puVar1 + lVar11;
      (*pcVar14)(lVar6,1,lVar7);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar12 + 0x10))((long)puVar2 + lVar11,(long)puVar1 + lVar11,lVar7);
        (**(code **)(lVar12 + 0x38))((long)puVar2 + lVar11,0,1,lVar7);
      }
      else {
        puVar8 = &DAT_100101b10;
        FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
        _memcpy((void *)((long)puVar2 + lVar11),(void *)((long)puVar1 + lVar11),
                *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      (**(code **)(lVar13 + 0x38))(puVar2,0,1,lVar4);
    }
    else {
      puVar8 = &DAT_100101b58;
      FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
      _memcpy(puVar2,puVar1,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar9 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar6 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

