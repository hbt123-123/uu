// rea decompile_all
// name: FUN_100016990
// address: 0x100016990
// body: available
// range: 0x100016990-0x100016bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100016990(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar6;
    lVar10 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar10;
    lVar8 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar8;
    *(short *)(param_1 + 6) = (short)param_2[6];
    lVar13 = (long)*(int *)(param_3 + 0x24);
    lVar4 = 0;
    __s10Foundation4DateVMa();
    lVar11 = *(long *)(lVar4 + -8);
    pcVar12 = *(code **)(lVar11 + 0x30);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar10);
    _swift_bridgeObjectRetain(lVar8);
    lVar6 = (long)param_2 + lVar13;
    (*pcVar12)(lVar6,1,lVar4);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar11 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar4);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar13,0,1,lVar4);
    }
    else {
      puVar5 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    lVar6 = 0;
    FUN_10000fbb8();
    lVar10 = *(long *)(lVar6 + -8);
    puVar7 = puVar2;
    (**(code **)(lVar10 + 0x30))(puVar2,1,lVar6);
    if ((int)puVar7 == 0) {
      uVar14 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar14;
      puVar1[2] = puVar2[2];
      lVar13 = (long)*(int *)(lVar6 + 0x18);
      _swift_bridgeObjectRetain();
      lVar8 = (long)puVar2 + lVar13;
      (*pcVar12)(lVar8,1,lVar4);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar11 + 0x10))((long)puVar1 + lVar13,(long)puVar2 + lVar13,lVar4);
        (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar13,0,1,lVar4);
      }
      else {
        puVar5 = &DAT_100101b10;
        FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
        _memcpy((void *)((long)puVar1 + lVar13),(void *)((long)puVar2 + lVar13),
                *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
      }
      (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar6);
    }
    else {
      puVar5 = &DAT_100101b58;
      FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
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

