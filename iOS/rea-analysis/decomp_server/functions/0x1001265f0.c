// rea decompile_all
// name: FUN_1001265f0
// address: 0x1001265f0
// body: available
// range: 0x1001265f0-0x1001267d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1001265f0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar8 = 0;
    __s10Foundation4UUIDVMa();
    lVar12 = *(long *)(lVar8 + -8);
    plVar9 = param_2;
    (**(code **)(lVar12 + 0x30))(param_2,1,lVar8);
    if ((int)plVar9 == 0) {
      (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar8);
      (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar8);
    }
    else {
      puVar10 = &DAT_100a79890;
      FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    iVar6 = *(int *)(param_3 + 0x18);
    uVar13 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) = uVar13;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    iVar6 = *(int *)(param_3 + 0x20);
    puVar3 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar4 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    *puVar3 = *puVar4;
    uVar14 = *(undefined8 *)((long)param_2 + (long)iVar6);
    *(undefined8 *)((long)param_1 + (long)iVar6) = uVar14;
    lVar15 = (long)*(int *)(param_3 + 0x24);
    lVar12 = 0;
    __s10Foundation4DateVMa();
    lVar16 = *(long *)(lVar12 + -8);
    pcVar17 = *(code **)(lVar16 + 0x30);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar14);
    lVar8 = (long)param_2 + lVar15;
    (*pcVar17)(lVar8,1,lVar12);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar16 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,lVar12);
      (**(code **)(lVar16 + 0x38))((long)param_1 + lVar15,0,1,lVar12);
    }
    else {
      puVar10 = &DAT_100a76718;
      FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
      _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    iVar6 = *(int *)(param_3 + 0x2c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
    _swift_bridgeObjectRetain();
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar11 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar8 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

