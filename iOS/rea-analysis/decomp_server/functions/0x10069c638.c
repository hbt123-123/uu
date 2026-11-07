// rea decompile_all
// name: FUN_10069c638
// address: 0x10069c638
// body: available
// range: 0x10069c638-0x10069c707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10069c638(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  cVar1 = *(char *)((long)param_1 + 0x17);
  lVar8 = (long)cVar1;
  if (lVar8 < 0) {
    lVar8 = param_1[1];
  }
  puVar3 = param_1;
  FUN_10069ccc0(param_1,lVar8);
  if (lVar8 == 0) {
    bVar2 = true;
  }
  else {
    puVar4 = param_1;
    if (cVar1 < '\0') {
      puVar4 = (undefined8 *)*param_1;
    }
    bVar2 = *(char *)((long)puVar4 + (long)puVar3) != '/';
  }
  puVar4 = param_1;
  FUN_10069caec(param_1,puVar3);
  do {
    puVar6 = (undefined8 *)((long)puVar3 + -1);
    if (puVar6 == (undefined8 *)0xffffffffffffffff) {
      puVar5 = (undefined8 *)0x0;
      break;
    }
    puVar5 = (undefined8 *)((long)puVar4 + 1);
    if (puVar4 == puVar6) break;
    puVar7 = param_1;
    if (cVar1 < '\0') {
      puVar7 = (undefined8 *)*param_1;
    }
    puVar5 = puVar3;
    puVar3 = puVar6;
  } while (*(char *)((long)puVar7 + (long)puVar6) == '/');
  if (!(bool)((puVar5 != (undefined8 *)0x1 || puVar4 != (undefined8 *)0x0) | bVar2)) {
    puVar5 = (undefined8 *)0xffffffffffffffff;
  }
  return puVar5;
}

