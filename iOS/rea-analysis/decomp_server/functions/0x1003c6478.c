// rea decompile_all
// name: FUN_1003c6478
// address: 0x1003c6478
// body: available
// range: 0x1003c6478-0x1003c65b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1003c6478(long *param_1,long *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar9 = *param_2;
  *param_1 = lVar9;
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar10 = param_2[1];
    param_1[1] = lVar10;
    pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar5 = 0;
    FUN_1003c63e0();
    lVar11 = *(long *)(lVar5 + -8);
    pcVar12 = *(code **)(lVar11 + 0x30);
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(lVar10);
    pvVar6 = pvVar2;
    (*pcVar12)(pvVar2,1,lVar5);
    if ((int)pvVar6 == 0) {
      lVar9 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar9 + -8) + 0x10))(pvVar1,pvVar2,lVar9);
      iVar4 = *(int *)(lVar5 + 0x14);
      lVar9 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar9 + -8) + 0x10))
                ((long)pvVar1 + (long)iVar4,(long)pvVar2 + (long)iVar4,lVar9);
      (**(code **)(lVar11 + 0x38))(pvVar1,0,1,lVar5);
    }
    else {
      puVar7 = &DAT_100a8c688;
      FUN_100004bb4(&DAT_100a8c688,&DAT_100822420);
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
  }
  else {
    uVar8 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar9 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain(lVar9);
  }
  return param_1;
}

