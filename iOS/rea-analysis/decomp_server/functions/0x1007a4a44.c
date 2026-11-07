// rea decompile_all
// name: FUN_1007a4a44
// address: 0x1007a4a44
// body: available
// range: 0x1007a4a44-0x1007a4b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a4a44(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)((long)param_1 + 0xdc) == '\0') {
    iVar5 = 0x8bc82a;
    (*(code *)*param_1)(",",1,param_1[1]);
    if (iVar5 != 0) {
      return;
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0xdc) = 0;
  }
  iVar5 = *(int *)(param_1 + 2);
  if (*(char *)((long)param_1 + 0xdd) != '\0' && 0 < iVar5) {
    iVar5 = 0x8bc84f;
    (*(code *)*param_1)("\n",1,param_1[1]);
    if (iVar5 != 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 2);
    if (0 < iVar5) {
      iVar6 = 0;
      do {
        iVar5 = 0x8d758f;
        (*(code *)*param_1)("    ",4,param_1[1]);
        if (iVar5 != 0) {
          return;
        }
        iVar6 = iVar6 + 1;
        iVar5 = *(int *)(param_1 + 2);
      } while (iVar6 < iVar5);
    }
  }
  if ((*(char *)((long)param_1 + (long)iVar5 + 0x14) != '\0') && (param_2 != (char *)0x0)) {
    sVar1 = _strlen(param_2);
    puVar2 = param_1;
    FUN_1007a4b68(param_1,param_2,sVar1);
    if ((int)puVar2 == 0) {
      if (*(char *)((long)param_1 + 0xdd) == '\0') {
        pcVar3 = ":";
        uVar4 = 1;
      }
      else {
        pcVar3 = ": ";
        uVar4 = 2;
      }
      (*(code *)*param_1)(pcVar3,uVar4,param_1[1]);
    }
  }
  return;
}

