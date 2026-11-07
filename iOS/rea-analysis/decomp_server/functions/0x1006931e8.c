// rea decompile_all
// name: FUN_1006931e8
// address: 0x1006931e8
// body: available
// range: 0x1006931e8-0x1006932db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_1006931e8(char *param_1)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  
  puVar2 = PTR___DefaultRuneLocale_100995488;
  lVar4 = (long)param_1[0x17];
  if (lVar4 < 0) {
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 == 0) {
      return param_1;
    }
    pcVar5 = *(char **)param_1;
  }
  else {
    pcVar5 = param_1;
    if (param_1[0x17] == '\0') {
      return param_1;
    }
  }
  pcVar5 = pcVar5 + lVar4;
  pcVar6 = pcVar5;
  while( true ) {
    pcVar6 = pcVar6 + -1;
    cVar1 = *pcVar6;
    if (cVar1 < 0) {
      uVar3 = ___maskrune((int)cVar1,0x4000);
    }
    else {
      uVar3 = *(uint *)(puVar2 + ((long)cVar1 & 0xffffffffU) * 4 + 0x3c) & 0x4000;
    }
    if (uVar3 == 0) break;
    if (param_1[0x17] < '\0') {
      if (pcVar6 == *(char **)param_1) {
        **(char **)param_1 = '\0';
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        return param_1;
      }
    }
    else if (pcVar6 == param_1) {
      *param_1 = '\0';
      param_1[0x17] = '\0';
      return param_1;
    }
    pcVar5 = pcVar5 + -1;
  }
  pcVar6 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar6 = param_1;
  }
  std::string::erase((ulong)param_1,(long)pcVar5 - (long)pcVar6);
  return param_1;
}

