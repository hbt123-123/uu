// rea decompile_all
// name: FUN_10062f140
// address: 0x10062f140
// body: available
// range: 0x10062f140-0x10062f1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062f140(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_3 + 0xffff;
  uVar4 = 4;
  if (uVar2 < 0xffff0000) {
    uVar4 = 2;
  }
  if (uVar2 < 0xff0000) {
    uVar4 = 1;
  }
  uVar3 = 0;
  if (0xffff < uVar2) {
    uVar3 = uVar4;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = uVar3;
  }
  if (param_2 == 0) {
    if (1 < uVar2) {
      if (uVar2 == 2) {
        param_1[1] = 0;
        return;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    if (uVar2 != 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  else {
    iVar1 = (param_2 - 1U >> 0x10) + 1;
    *param_1 = (short)(param_2 - 1U);
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(char *)(param_1 + 1) = (char)iVar1;
        return;
      }
    }
    else {
      if (uVar2 == 2) {
        param_1[1] = (short)iVar1;
        return;
      }
      *(int *)(param_1 + 1) = iVar1;
    }
  }
  return;
}

