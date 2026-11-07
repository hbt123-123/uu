// rea decompile_all
// name: FUN_10038f790
// address: 0x10038f790
// body: available
// range: 0x10038f790-0x10038f857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10038f790(undefined8 *param_1,char *param_2,ulong param_3)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *pvVar9;
  
  uVar8 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar7 = param_1;
  if ((long)uVar8 < 0) {
    puVar7 = (undefined8 *)*param_1;
    uVar8 = param_1[1];
  }
  sVar4 = _strlen(param_2);
  lVar6 = uVar8 - param_3;
  if (uVar8 < param_3) {
    param_3 = 0xffffffffffffffff;
  }
  else if (sVar4 != 0) {
    pvVar1 = (void *)((long)puVar7 + uVar8);
    pvVar9 = pvVar1;
    if ((long)sVar4 <= lVar6) {
      pvVar5 = (void *)((long)puVar7 + param_3);
      cVar2 = *param_2;
      do {
        pvVar9 = pvVar1;
        if (((0xfffffffffffffffe < lVar6 - sVar4) ||
            (pvVar5 = _memchr(pvVar5,(int)cVar2,(lVar6 - sVar4) + 1), pvVar5 == (void *)0x0)) ||
           (iVar3 = _memcmp(pvVar5,param_2,sVar4), pvVar9 = pvVar5, iVar3 == 0)) break;
        pvVar5 = (void *)((long)pvVar5 + 1);
        lVar6 = (long)pvVar1 - (long)pvVar5;
        pvVar9 = pvVar1;
      } while ((long)sVar4 <= lVar6);
    }
    param_3 = (long)pvVar9 - (long)puVar7;
    if (pvVar9 == pvVar1) {
      param_3 = 0xffffffffffffffff;
    }
  }
  return param_3;
}

