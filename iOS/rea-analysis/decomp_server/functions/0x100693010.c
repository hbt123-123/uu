// rea decompile_all
// name: FUN_100693010
// address: 0x100693010
// body: available
// range: 0x100693010-0x1006930f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_100693010(char *param_1)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  
  puVar4 = PTR___DefaultRuneLocale_100995488;
  uVar6 = (ulong)(byte)param_1[0x17];
  uVar1 = *(ulong *)(param_1 + 8);
  pcVar7 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    uVar1 = uVar6;
    pcVar7 = param_1;
  }
  if (uVar1 != 0) {
    do {
      cVar2 = *pcVar7;
      if (cVar2 < 0) {
        uVar5 = ___maskrune((int)cVar2,0x4000);
        uVar6 = (ulong)(byte)param_1[0x17];
      }
      else {
        uVar5 = *(uint *)(puVar4 + ((long)cVar2 & 0xffffffffU) * 4 + 0x3c) & 0x4000;
      }
      if (uVar5 == 0) break;
      pcVar7 = pcVar7 + 1;
      uVar1 = *(ulong *)(param_1 + 8);
      pcVar3 = *(char **)param_1;
      if (-1 < (char)uVar6) {
        uVar1 = uVar6;
        pcVar3 = param_1;
      }
    } while (pcVar7 != pcVar3 + uVar1);
  }
  if ((uint)uVar6 >> 7 == 0) {
    if (pcVar7 == param_1 + uVar6) {
      *param_1 = '\0';
      param_1[0x17] = '\0';
      return param_1;
    }
  }
  else if (pcVar7 == *(undefined1 **)param_1 + *(long *)(param_1 + 8)) {
    **(undefined1 **)param_1 = 0;
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
  std::string::erase((ulong)param_1,0);
  return param_1;
}

