// rea decompile_all
// name: FUN_1006933dc
// address: 0x1006933dc
// body: available
// range: 0x1006933dc-0x100693567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_1006933dc(char *param_1)

{
  ulong uVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  puVar3 = PTR___DefaultRuneLocale_100995488;
  uVar5 = (ulong)(byte)param_1[0x17];
  uVar1 = *(ulong *)(param_1 + 8);
  pcVar7 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    uVar1 = uVar5;
    pcVar7 = param_1;
  }
  if (uVar1 != 0) {
    do {
      cVar2 = *pcVar7;
      if (cVar2 < 0) {
        uVar4 = ___maskrune((int)cVar2,0x4000);
        uVar5 = (ulong)(byte)param_1[0x17];
      }
      else {
        uVar4 = *(uint *)(puVar3 + ((long)cVar2 & 0xffffffffU) * 4 + 0x3c) & 0x4000;
      }
      if (uVar4 == 0) break;
      pcVar7 = pcVar7 + 1;
      uVar1 = *(ulong *)(param_1 + 8);
      pcVar6 = *(char **)param_1;
      if (-1 < (char)uVar5) {
        uVar1 = uVar5;
        pcVar6 = param_1;
      }
    } while (pcVar7 != pcVar6 + uVar1);
  }
  if ((uint)uVar5 >> 7 == 0) {
    if (pcVar7 != param_1 + uVar5) {
LAB_100693494:
      std::string::erase((ulong)param_1,0);
      uVar1 = *(ulong *)(param_1 + 8);
      pcVar7 = *(char **)param_1;
      if (-1 < param_1[0x17]) {
        uVar1 = (ulong)(byte)param_1[0x17];
        pcVar7 = param_1;
      }
      pcVar7 = pcVar7 + uVar1;
      pcVar8 = pcVar7;
      do {
        pcVar8 = pcVar8 + -1;
        cVar2 = *pcVar8;
        if (cVar2 < 0) {
          uVar4 = ___maskrune((int)cVar2,0x4000);
        }
        else {
          uVar4 = *(uint *)(puVar3 + ((long)cVar2 & 0xffffffffU) * 4 + 0x3c) & 0x4000;
        }
        if (uVar4 == 0) {
          pcVar6 = *(char **)param_1;
          if (-1 < param_1[0x17]) {
            pcVar6 = param_1;
          }
          std::string::erase((ulong)param_1,(long)pcVar7 - (long)pcVar6);
          return param_1;
        }
        if (param_1[0x17] < '\0') {
          pcVar6 = *(char **)param_1;
          if (pcVar8 == pcVar6) goto LAB_10069354c;
        }
        else if (pcVar8 == param_1) break;
        pcVar7 = pcVar7 + -1;
      } while( true );
    }
    *param_1 = '\0';
    param_1[0x17] = '\0';
  }
  else {
    pcVar6 = *(char **)param_1;
    if (pcVar7 != pcVar6 + *(long *)(param_1 + 8)) goto LAB_100693494;
LAB_10069354c:
    *pcVar6 = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  return param_1;
}

