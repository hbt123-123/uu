// rea decompile_all
// name: FUN_10074b130
// address: 0x10074b130
// body: available
// range: 0x10074b130-0x10074b22b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10074b130(long *param_1,int param_2,void *param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *param_4;
  if (iVar8 < 1) {
    iVar7 = 0;
    bVar3 = false;
  }
  else {
    iVar7 = 0;
    iVar5 = *(int *)((long)param_1 + 0xc);
    iVar6 = (int)param_1[2];
    do {
      iVar2 = iVar6 - iVar5;
      if (iVar8 <= iVar6 - iVar5) {
        iVar2 = iVar8;
      }
      pcVar1 = (char *)(*param_1 + (long)iVar5);
      pcVar4 = _strchr(pcVar1,param_2);
      iVar6 = (int)pcVar4 - (int)pcVar1;
      iVar5 = iVar2;
      if (iVar6 + 1 < iVar2) {
        iVar5 = iVar6 + 1;
      }
      if (pcVar4 != (char *)0x0) {
        iVar2 = iVar5;
      }
      _memcpy(param_3,pcVar1,(long)iVar2);
      *(int *)((long)param_1 + 0xc) = iVar2 + *(int *)((long)param_1 + 0xc);
      iVar7 = iVar2 + iVar7;
      iVar8 = iVar8 - iVar2;
      if (pcVar4 != (char *)0x0 || iVar8 < 1) break;
      param_3 = (void *)((long)param_3 + (long)iVar2);
      FUN_10074b05c(param_1);
      iVar5 = *(int *)((long)param_1 + 0xc);
      iVar6 = (int)param_1[2];
    } while (iVar6 != iVar5);
    bVar3 = pcVar4 != (char *)0x0;
  }
  *param_4 = iVar7;
  return bVar3;
}

