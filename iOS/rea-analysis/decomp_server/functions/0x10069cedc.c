// rea decompile_all
// name: FUN_10069cedc
// address: 0x10069cedc
// body: available
// range: 0x10069cedc-0x10069cfaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10069cedc(char *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  
  bVar1 = param_1[0x17];
  uVar5 = (ulong)bVar1;
  pcVar3 = *(char **)param_1;
  pcVar6 = pcVar3;
  if (-1 < (char)bVar1) {
    pcVar6 = param_1;
  }
  do {
    uVar2 = param_2;
    if (uVar2 == 0) {
      return true;
    }
    param_2 = uVar2 - 1;
  } while (pcVar6[uVar2 - 1] == '/');
  if (2 < uVar2) {
    if ((char)bVar1 < '\0') {
      if ((*pcVar3 == '/') && (pcVar3[1] == '/')) {
        uVar5 = *(ulong *)(param_1 + 8);
        param_1 = pcVar3;
        goto LAB_10069cf54;
      }
    }
    else if (((ulong)pcVar3 & 0xffff) == 0x2f2f) {
LAB_10069cf54:
      if (uVar5 < 3) {
        lVar4 = -1;
      }
      else {
        pcVar6 = param_1 + 2;
        lVar4 = uVar5 - 2;
        do {
          pcVar3 = pcVar6;
          if (*pcVar6 == '/') break;
          pcVar6 = pcVar6 + 1;
          lVar4 = lVar4 + -1;
          pcVar3 = param_1 + uVar5;
        } while (lVar4 != 0);
        lVar4 = (long)pcVar3 - (long)param_1;
        if (pcVar3 == param_1 + uVar5) {
          lVar4 = -1;
        }
      }
      return lVar4 - 1U == uVar2 - 1;
    }
  }
  return false;
}

