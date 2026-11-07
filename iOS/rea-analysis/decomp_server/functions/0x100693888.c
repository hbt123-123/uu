// rea decompile_all
// name: FUN_100693888
// address: 0x100693888
// body: available
// range: 0x100693888-0x10069394f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100693888(undefined8 *param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  char cVar3;
  undefined8 *puVar4;
  char *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  uVar9 = param_1[1];
  puVar4 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar9 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar4 = param_1;
  }
  sVar2 = *(size_t *)(param_2 + 8);
  pcVar5 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    sVar2 = (ulong)(byte)param_2[0x17];
    pcVar5 = param_2;
  }
  if (sVar2 == 0) {
    bVar6 = true;
  }
  else {
    puVar1 = (undefined8 *)((long)puVar4 + uVar9);
    puVar10 = puVar1;
    if ((long)sVar2 <= (long)uVar9) {
      cVar3 = *pcVar5;
      puVar8 = puVar4;
      do {
        puVar10 = puVar1;
        if (((0xfffffffffffffffe < uVar9 - sVar2) ||
            (puVar8 = _memchr(puVar8,(int)cVar3,(uVar9 - sVar2) + 1), puVar8 == (undefined8 *)0x0))
           || (iVar7 = _memcmp(puVar8,pcVar5,sVar2), puVar10 = puVar8, iVar7 == 0)) break;
        puVar8 = (undefined8 *)((long)puVar8 + 1);
        uVar9 = (long)puVar1 - (long)puVar8;
        puVar10 = puVar1;
      } while ((long)sVar2 <= (long)uVar9);
    }
    bVar6 = puVar10 != puVar1 && puVar10 == puVar4;
  }
  return bVar6;
}

