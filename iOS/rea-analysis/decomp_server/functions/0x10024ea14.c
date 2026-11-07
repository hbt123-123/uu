// rea decompile_all
// name: FUN_10024ea14
// address: 0x10024ea14
// body: available
// range: 0x10024ea14-0x10024eaeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10024ea14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 8);
    pcVar3 = _malloc((long)(int)uVar2);
    _strncpy(pcVar3,*(char **)(param_2 + 0x10),(long)(int)uVar2);
    sVar4 = ~(long)(int)(uVar2 - 1) + (long)(int)uVar2;
    uVar6 = (ulong)uVar2;
    do {
      if ((int)uVar6 < 1) {
        uVar6 = 0;
        goto LAB_10024eac8;
      }
      uVar5 = uVar6 - 1;
      lVar1 = uVar6 - 1;
      sVar4 = sVar4 + 1;
      uVar6 = uVar5;
    } while (pcVar3[lVar1] != '.');
    uVar2 = _snprintf(pcVar3 + uVar5,sVar4,".z%02d");
    uVar6 = (ulong)uVar2;
    FUN_10024e98c(uVar6,pcVar3,param_4);
LAB_10024eac8:
    _free(pcVar3);
  }
  return uVar6;
}

