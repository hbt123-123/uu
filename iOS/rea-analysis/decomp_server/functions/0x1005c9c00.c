// rea decompile_all
// name: FUN_1005c9c00
// address: 0x1005c9c00
// body: available
// range: 0x1005c9c00-0x1005c9d77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1005c9c00(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  code *pcVar13;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    iVar5 = *(int *)(param_3 + 0x14);
    lVar6 = 0;
    __s10Foundation3URLVMa();
    lVar10 = *(long *)(lVar6 + -8);
    pcVar11 = *(code **)(lVar10 + 0x10);
    (*pcVar11)((undefined1 *)((long)param_1 + (long)iVar5),
               (undefined1 *)((long)param_2 + (long)iVar5),lVar6);
    iVar5 = *(int *)(param_3 + 0x1c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    iVar5 = *(int *)(param_3 + 0x24);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
    lVar12 = (long)*(int *)(param_3 + 0x28);
    pcVar13 = *(code **)(lVar10 + 0x30);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    puVar7 = (undefined1 *)((long)param_2 + lVar12);
    (*pcVar13)(puVar7,1,lVar6);
    if ((int)puVar7 == 0) {
      (*pcVar11)((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),lVar6
                );
      (**(code **)(lVar10 + 0x38))((undefined1 *)((long)param_1 + lVar12),0,1,lVar6);
    }
    else {
      puVar8 = &DAT_100aad5f8;
      FUN_100004bb4(&DAT_100aad5f8,&DAT_10083eb90);
      _memcpy((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar5 = *(int *)(param_3 + 0x30);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar9 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar6 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

