// rea decompile_all
// name: FUN_10006bf04
// address: 0x10006bf04
// body: available
// range: 0x10006bf04-0x10006c027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006bf04(uint *param_1,uint param_2,int param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  sVar1 = (uVar4 + 10 & 0xfffffffffffffff8) + 0x10;
  if (param_3 < 0) {
    uVar2 = param_3 + 0x80000002;
    uVar5 = 2;
    if ((int)sVar1 != 0) {
      uVar2 = 2;
    }
    if (0xffff < uVar2) {
      uVar5 = 4;
    }
    if (uVar2 < 0x100) {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  if ((int)param_2 < 0) {
    iVar3 = 1;
    if ((int)sVar1 == 0) {
      iVar3 = (param_2 & 0x7fffffff) + 1;
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2 & 0x7fffffff;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar3;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar3;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar3;
    }
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(ulong *)(((long)param_1 + uVar4 + 10 & 0xfffffffffffffff8) + 8) = (ulong)(param_2 - 1);
    }
  }
  return;
}

