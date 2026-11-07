// rea decompile_all
// name: FUN_10069c230
// address: 0x10069c230
// body: available
// range: 0x10069c230-0x10069c3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10069c230(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = param_1[3];
  lVar10 = param_1[4];
  lVar11 = lVar9;
  lVar12 = lVar10;
  if ((lVar9 != *(long *)(param_2 + 0x18) || lVar10 != *(long *)(param_2 + 0x20)) &&
     (lVar11 = *(long *)(param_2 + 0x18), lVar12 = *(long *)(param_2 + 0x20),
     param_3[3] != *(long *)(param_4 + 0x18) || param_3[4] != *(long *)(param_4 + 0x20))) {
    do {
      puVar1 = (void *)*param_1;
      uVar5 = param_1[1];
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
        uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      puVar2 = (void *)*param_3;
      uVar6 = param_3[1];
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        puVar2 = param_3;
        uVar6 = (ulong)*(byte *)((long)param_3 + 0x17);
      }
      sVar3 = uVar6;
      if (uVar5 <= uVar6) {
        sVar3 = uVar5;
      }
      iVar7 = _memcmp(puVar1,puVar2,sVar3);
      bVar4 = uVar5 < uVar6;
      if (iVar7 != 0) {
        bVar4 = iVar7 < 0;
      }
      if (bVar4) goto LAB_10069c388;
      iVar7 = _memcmp(puVar2,puVar1,sVar3);
      bVar4 = uVar6 < uVar5;
      if (iVar7 != 0) {
        bVar4 = iVar7 < 0;
      }
      if (bVar4) goto LAB_10069c36c;
      FUN_10069d89c(param_1);
      FUN_10069d89c(param_3);
      lVar9 = param_1[3];
      lVar10 = param_1[4];
    } while (((lVar9 != *(long *)(param_2 + 0x18)) ||
             (lVar11 = lVar9, lVar12 = lVar10, lVar10 != *(long *)(param_2 + 0x20))) &&
            ((param_3[3] != *(long *)(param_4 + 0x18) ||
             (lVar11 = *(long *)(param_2 + 0x18), lVar12 = *(long *)(param_2 + 0x20),
             param_3[4] != *(long *)(param_4 + 0x20)))));
  }
  if (lVar9 == lVar11 && lVar10 == lVar12) {
    if (param_3[3] == *(long *)(param_4 + 0x18) && param_3[4] == *(long *)(param_4 + 0x20)) {
      uVar8 = 0;
    }
    else {
LAB_10069c388:
      uVar8 = 0xffffffff;
    }
  }
  else {
LAB_10069c36c:
    uVar8 = 1;
  }
  return uVar8;
}

