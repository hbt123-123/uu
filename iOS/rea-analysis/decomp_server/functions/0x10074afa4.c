// rea decompile_all
// name: FUN_10074afa4
// address: 0x10074afa4
// body: available
// range: 0x10074afa4-0x10074b05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10074afa4(long *param_1,void *param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((int)param_3 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar2 = *(int *)((long)param_1 + 0xc);
    do {
      uVar3 = (int)param_1[2] - iVar2;
      if ((int)uVar3 < 1) {
        plVar1 = param_1;
        FUN_10074b05c();
        if ((int)plVar1 == 0) {
          return iVar4;
        }
        iVar2 = *(int *)((long)param_1 + 0xc);
        uVar3 = (int)param_1[2] - iVar2;
        if ((int)uVar3 < 1) {
          return iVar4;
        }
      }
      if ((int)param_3 <= (int)uVar3) {
        uVar3 = param_3;
      }
      _memcpy(param_2,(void *)(*param_1 + (long)iVar2),(ulong)uVar3);
      param_2 = (void *)((long)param_2 + (ulong)uVar3);
      iVar2 = *(int *)((long)param_1 + 0xc) + uVar3;
      *(int *)((long)param_1 + 0xc) = iVar2;
      iVar4 = uVar3 + iVar4;
      param_3 = param_3 - uVar3;
    } while (0 < (int)param_3);
  }
  return iVar4;
}

