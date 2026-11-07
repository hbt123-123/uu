// rea decompile_all
// name: FUN_1004fc680
// address: 0x1004fc680
// body: available
// range: 0x1004fc680-0x1004fc80b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1004fc680(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
  lVar9 = *(long *)(lVar2 + -8);
  sVar5 = *(size_t *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    sVar5 = sVar5 + 1;
  }
  if ((*(uint *)(lVar9 + 0x50) & 0x1000f8) == 0 && (sVar5 + 0x37 & 0xfffffffffffffff8) + 9 < 0x19) {
    plVar3 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,1,lVar2);
    if ((int)plVar3 == 0) {
      (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar2);
      (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar2);
    }
    else {
      _memcpy(param_1,param_2,sVar5);
    }
    puVar7 = (undefined8 *)((long)param_1 + sVar5 + 7 & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((long)param_2 + sVar5 + 7 & 0xfffffffffffffff8);
    uVar4 = puVar8[3];
    if (uVar4 < 0xffffffff) {
      uVar10 = puVar8[1];
      uVar6 = *puVar8;
      uVar12 = puVar8[3];
      uVar11 = puVar8[2];
      puVar7[4] = puVar8[4];
      puVar7[1] = uVar10;
      *puVar7 = uVar6;
      puVar7[3] = uVar12;
      puVar7[2] = uVar11;
    }
    else {
      puVar7[3] = uVar4;
      puVar7[4] = puVar8[4];
      (*(code *)**(undefined8 **)(uVar4 - 8))(puVar7,puVar8);
    }
    *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(puVar8 + 5);
    puVar7 = (undefined8 *)((long)param_1 + sVar5 + 0x37 & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((long)param_2 + sVar5 + 0x37 & 0xfffffffffffffff8);
    uVar6 = *puVar8;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
    *puVar7 = uVar6;
  }
  else {
    uVar1 = *(uint *)(lVar9 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}

