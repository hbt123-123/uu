// rea decompile_all
// name: FUN_10069caec
// address: 0x10069caec
// body: available
// range: 0x10069caec-0x10069cc17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10069caec(char *param_1,ulong param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (param_2 == 2) {
    cVar2 = param_1[0x17];
    if (cVar2 < '\0') {
      pcVar6 = *(char **)param_1;
      cVar1 = *pcVar6;
    }
    else {
      cVar1 = *param_1;
      pcVar6 = param_1;
    }
    if ((cVar1 == '/') && (pcVar6[1] == '/')) {
      return 0xffffffffffffffff;
    }
  }
  else if (param_2 < 4) {
    if (param_2 == 0) {
      return 0xffffffffffffffff;
    }
    cVar2 = param_1[0x17];
  }
  else {
    cVar2 = param_1[0x17];
    uVar3 = (ulong)cVar2;
    if ((long)uVar3 < 0) {
      pcVar6 = *(char **)param_1;
      if (((*pcVar6 == '/') && (pcVar6[1] == '/')) && (pcVar6[2] != '/')) {
        uVar3 = *(ulong *)(param_1 + 8);
        param_1 = pcVar6;
        goto LAB_10069cb40;
      }
    }
    else if (((*param_1 == '/') && (param_1[1] == '/')) && (param_1[2] != '/')) {
LAB_10069cb40:
      if (uVar3 < 3) {
        uVar4 = 0xffffffffffffffff;
      }
      else {
        pcVar6 = param_1 + 2;
        lVar5 = uVar3 - 2;
        do {
          pcVar7 = pcVar6;
          if (*pcVar6 == '/') break;
          pcVar6 = pcVar6 + 1;
          lVar5 = lVar5 + -1;
          pcVar7 = param_1 + uVar3;
        } while (lVar5 != 0);
        uVar4 = (long)pcVar7 - (long)param_1;
        if (pcVar7 == param_1 + uVar3) {
          uVar4 = 0xffffffffffffffff;
        }
      }
      if (param_2 <= uVar4) {
        uVar4 = 0xffffffffffffffff;
      }
      return uVar4;
    }
  }
  pcVar6 = *(char **)param_1;
  if (-1 < cVar2) {
    pcVar6 = param_1;
  }
  if (*pcVar6 != '/') {
    return 0xffffffffffffffff;
  }
  return 0;
}

