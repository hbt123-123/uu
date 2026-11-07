// rea decompile_all
// name: FUN_10069bf10
// address: 0x10069bf10
// body: available
// range: 0x10069bf10-0x10069c027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_10069bf10(char *param_1,char *param_2)

{
  ulong uVar1;
  char *pcVar2;
  char **ppcVar3;
  byte bVar4;
  char *pcVar5;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  bVar4 = param_2[0x17];
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  if (uVar1 != 0) {
    if (param_1 == param_2) {
      if ((char)bVar4 < '\0') {
        FUN_100384eb8(&local_40,*(undefined8 *)param_2);
      }
      else {
        uStack_38 = *(undefined8 *)(param_2 + 8);
        local_40 = *(char **)param_2;
        local_30 = *(long *)(param_2 + 0x10);
      }
      ppcVar3 = (char **)local_40;
      if (-1 < local_30) {
        ppcVar3 = &local_40;
      }
      if (*(char *)ppcVar3 != '/') {
        FUN_10069c028(param_1);
      }
      ppcVar3 = (char **)local_40;
      if (-1 < local_30._7_1_) {
        ppcVar3 = &local_40;
      }
      std::string::append(param_1,(ulong)ppcVar3);
      if (local_30 < 0) {
        operator_delete(local_40);
      }
    }
    else {
      pcVar5 = *(char **)param_2;
      pcVar2 = pcVar5;
      if (-1 < (char)bVar4) {
        pcVar2 = param_2;
      }
      if (*pcVar2 != '/') {
        FUN_10069c028(param_1);
        bVar4 = param_2[0x17];
        pcVar5 = *(char **)param_2;
      }
      if (-1 < (char)bVar4) {
        pcVar5 = param_2;
      }
      std::string::append(param_1,(ulong)pcVar5);
    }
  }
  return param_1;
}

