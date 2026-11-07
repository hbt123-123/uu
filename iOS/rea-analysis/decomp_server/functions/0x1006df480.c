// rea decompile_all
// name: FUN_1006df480
// address: 0x1006df480
// body: available
// range: 0x1006df480-0x1006df527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006df480(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x14) = uVar1;
  uVar4 = *(uint *)(param_1 + 0xc);
  if (uVar4 == 0) {
    uVar4 = 0x40;
    *(undefined4 *)(param_1 + 0xc) = 0x40;
    uVar2 = param_2[6];
  }
  else {
    uVar2 = param_2[6];
  }
  if (uVar2 < 7) {
    uVar4 = *(uint *)(param_1 + 4);
  }
  else {
    uVar2 = param_2[5];
    if (param_2[5] <= uVar4) {
      uVar2 = uVar4;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    uVar4 = *(uint *)(param_1 + 4);
  }
  if (uVar4 == 0) {
    uVar4 = uVar1 - 7;
    if (uVar4 < 7) {
      uVar4 = 6;
    }
    *(uint *)(param_1 + 4) = uVar4;
    uVar2 = *(uint *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  if (iVar3 == 0) {
    iVar3 = 0;
    if (uVar4 <= uVar1) {
      iVar3 = uVar1 - uVar4;
    }
    *(int *)(param_1 + 0x10) = iVar3;
  }
  uVar1 = 3;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  if (uVar4 <= uVar1) {
    uVar1 = uVar4;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}

