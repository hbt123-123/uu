// rea decompile_all
// name: FUN_1006932dc
// address: 0x1006932dc
// body: available
// range: 0x1006932dc-0x1006933db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_1006932dc(uint *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar1 = PTR___DefaultRuneLocale_100995488;
  lVar3 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(param_1 + 2);
    if (lVar3 == 0) {
      return param_1;
    }
    puVar4 = *(uint **)param_1;
  }
  else {
    puVar4 = param_1;
    if (*(char *)((long)param_1 + 0x17) == '\0') {
      return param_1;
    }
  }
  puVar4 = puVar4 + lVar3;
  puVar5 = puVar4;
  while( true ) {
    puVar5 = puVar5 + -1;
    uVar2 = *puVar5;
    if (uVar2 < 0x80) {
      uVar2 = *(uint *)(puVar1 + (ulong)uVar2 * 4 + 0x3c) & 0x4000;
    }
    else {
      uVar2 = ___maskrune(uVar2,0x4000);
    }
    if (uVar2 == 0) break;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      if (puVar5 == *(uint **)param_1) {
        **(uint **)param_1 = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        return param_1;
      }
    }
    else if (puVar5 == param_1) {
      *param_1 = 0;
      *(undefined1 *)((long)param_1 + 0x17) = 0;
      return param_1;
    }
    puVar4 = puVar4 + -1;
  }
  puVar5 = *(uint **)param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar5 = param_1;
  }
  std::wstring::erase((ulong)param_1,(long)puVar4 - (long)puVar5 >> 2);
  return param_1;
}

