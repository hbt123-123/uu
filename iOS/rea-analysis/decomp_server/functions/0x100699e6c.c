// rea decompile_all
// name: FUN_100699e6c
// address: 0x100699e6c
// body: available
// range: 0x100699e6c-0x10069a02b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100699e6c(uint *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  ulong uVar4;
  void *local_a8 [2];
  char local_91;
  undefined **local_90 [8];
  long *local_50;
  undefined1 auStack_48 [4];
  uint local_44;
  int local_40;
  undefined4 uStack_3c;
  uint *puStack_38;
  
  if (((param_2 ^ 0xffffffff) & 0x3000) == 0) {
    return;
  }
  local_40 = 0;
  puVar3 = param_1;
  FUN_10069f164();
  puStack_38 = puVar3;
  if ((param_2 >> 0xe & 1) == 0) {
    FUN_10069a9a4();
  }
  else {
    FUN_100698904(auStack_48,param_1,&local_40);
  }
  if (local_40 == 0) {
    if ((param_2 >> 0xc & 1) == 0) {
      if ((param_2 >> 0xd & 1) != 0) {
        param_2 = local_44 & (param_2 ^ 0xffffffff);
      }
    }
    else {
      param_2 = local_44 | param_2;
    }
    puVar3 = *(uint **)param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar3 = param_1;
    }
    iVar1 = -2;
    _fchmodat(0xfffffffe,puVar3,DAT_100b2c4a0 & param_2 & 0xffff,param_2 >> 9 & 0x20);
    if (iVar1 == 0) {
      return;
    }
    if (param_3 != (int *)0x0) {
      piVar2 = ___error();
      iVar1 = *piVar2;
      FUN_10069f198();
      *param_3 = iVar1;
      *(int **)(param_3 + 2) = piVar2;
      return;
    }
    FUN_1006928dc(local_a8,"mars_boost::filesystem::permissions");
    puVar3 = (uint *)___error();
    uVar4 = (ulong)*puVar3;
    FUN_10069f198();
  }
  else {
    if (param_3 != (int *)0x0) {
      *(uint **)(param_3 + 2) = puStack_38;
      *(ulong *)param_3 = CONCAT44(uStack_3c,local_40);
      return;
    }
    FUN_1006928dc(local_a8,"mars_boost::filesystem::permissions");
    uVar4 = CONCAT44(uStack_3c,local_40);
    puVar3 = puStack_38;
  }
  FUN_10069b5dc(local_90,local_a8,param_1,uVar4,puVar3);
  FUN_1006924cc(local_90);
  local_90[0] = &PTR_FUN_1009e6910;
  if (local_50 != (long *)0x0) {
    LOAcquire();
    iVar1 = (int)local_50[1];
    *(int *)(local_50 + 1) = iVar1 + -1;
    LORelease();
    if (iVar1 == 1) {
      (**(code **)(*local_50 + 0x10))(local_50);
      LOAcquire();
      iVar1 = *(int *)((long)local_50 + 0xc);
      *(int *)((long)local_50 + 0xc) = iVar1 + -1;
      LORelease();
      if (iVar1 == 1) {
        (**(code **)(*local_50 + 0x18))(local_50);
      }
    }
  }
  FUN_10069b978(local_90);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  return;
}

