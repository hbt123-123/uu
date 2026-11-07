// rea decompile_all
// name: FUN_10069ccc0
// address: 0x10069ccc0
// body: available
// range: 0x10069ccc0-0x10069cd8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10069ccc0(long *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  bVar2 = *(byte *)((long)param_1 + 0x17);
  if (param_2 == 2) {
    if ((char)bVar2 < '\0') {
      plVar5 = (long *)*param_1;
      cVar3 = (char)*plVar5;
    }
    else {
      cVar3 = (char)*param_1;
      plVar5 = param_1;
    }
    if ((cVar3 == '/') && (*(char *)((long)plVar5 + 1) == '/')) {
      return 0;
    }
  }
  else if (param_2 == 0) {
    plVar6 = (long *)*param_1;
    uVar4 = 0xffffffffffffffff;
    goto LAB_10069cd28;
  }
  uVar4 = param_2 - 1;
  plVar6 = (long *)*param_1;
  plVar5 = plVar6;
  if (-1 < (char)bVar2) {
    plVar5 = param_1;
  }
  if (*(char *)((long)plVar5 + uVar4) == '/') {
    return uVar4;
  }
LAB_10069cd28:
  if (-1 < (char)bVar2) {
    plVar6 = param_1;
  }
  uVar1 = param_1[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 <= uVar4) {
    param_2 = uVar1;
  }
  do {
    uVar4 = param_2;
    if (uVar4 == 0) {
      return 0;
    }
    param_2 = uVar4 - 1;
  } while (*(char *)((long)plVar6 + (uVar4 - 1)) != '/');
  if (param_2 != 0xffffffffffffffff) {
    if (param_2 != 1) {
      return uVar4;
    }
    if ((char)*plVar6 != '/') {
      return uVar4;
    }
  }
  return 0;
}

