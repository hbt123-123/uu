// rea decompile_all
// name: thunk_FUN_10001c094
// address: 0x10001c090
// body: available
// range: 0x10001c090-0x10001c093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10001c094(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_3 + 0xff01 < 0xffff0000) {
    uVar3 = 2;
  }
  if (param_3 + 0xff01 < 0xff0000) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[2] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10001c114;
      }
    }
    else if (uVar2 == 2) {
      param_1[2] = '\0';
      param_1[3] = '\0';
    }
    else {
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
    }
    if (param_2 != 0) {
LAB_10001c114:
      *param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 0x10) + 1;
    *(short *)param_1 = (short)(param_2 - 0xff);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 2) = iVar1;
        return;
      }
      *(short *)(param_1 + 2) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[2] = (char)iVar1;
      return;
    }
  }
  return;
}

