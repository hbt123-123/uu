// rea decompile_all
// name: FUN_1006ab0c8
// address: 0x1006ab0c8
// body: available
// range: 0x1006ab0c8-0x1006ab40b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ab408 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ab0c8(void *param_1,void *param_2,ulong *param_3,void *param_4,short param_5,
                  char *param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  size_t sVar9;
  void *local_168;
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined8 local_b0 [8];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  cVar3 = *param_6;
  lVar8 = (long)cVar3;
  if (lVar8 < 1) {
    local_168 = (void *)((long)param_2 + lVar8 * 8);
    if (param_4 == (void *)0x0) {
      local_b0[0] = 1;
    }
  }
  else {
    sVar9 = lVar8 << 3;
    _memcpy(auStack_d0,param_2,sVar9);
    local_168 = (void *)((long)param_2 + lVar8 * 8);
    _memcpy(auStack_110,local_168,sVar9);
    if (param_4 == (void *)0x0) {
      _bzero(local_b0,sVar9);
      local_b0[0] = 1;
    }
    else {
      _memcpy(local_b0,param_4,sVar9);
    }
    _memmove(auStack_f0,auStack_d0,sVar9);
    _memmove(auStack_130,auStack_110,sVar9);
  }
  FUN_1006ad25c(auStack_d0,auStack_110,local_b0,param_6);
  (**(code **)(param_6 + 0xa8))(auStack_d0,auStack_110,local_b0,param_6);
  FUN_1006ad25c(auStack_f0,auStack_130,local_b0,param_6);
  uVar4 = (uint)(short)(param_5 + -2);
  if (0 < (int)uVar4) {
    do {
      bVar5 = (param_3[uVar4 >> 6] & 1L << ((ulong)uVar4 & 0x3f)) == 0;
      uVar6 = (ulong)!bVar5;
      uVar7 = (ulong)bVar5;
      FUN_1006aeea8(auStack_f0 + uVar6 * 0x20,auStack_130 + uVar6 * 0x20,auStack_f0 + uVar7 * 0x20,
                    auStack_130 + uVar7 * 0x20,param_6);
      FUN_1006ad04c(auStack_f0 + uVar7 * 0x20,auStack_130 + uVar7 * 0x20,auStack_f0 + uVar6 * 0x20,
                    auStack_130 + uVar6 * 0x20,param_6);
      bVar5 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar5 && uVar4 != 0);
  }
  uVar6 = *param_3 & 1;
  puVar1 = auStack_f0 + uVar6 * 0x20;
  puVar2 = auStack_130 + uVar6 * 0x20;
  FUN_1006aeea8(puVar1,puVar2,auStack_f0 + (uVar6 ^ 1) * 0x20,auStack_130 + (uVar6 ^ 1) * 0x20,
                param_6);
  FUN_1006acfd8(auStack_150,auStack_d0,auStack_f0,param_6 + 8,lVar8);
  FUN_1006af210(local_b0,auStack_150,puVar2,(long)*param_6);
  (**(code **)(param_6 + 0xc0))(auStack_150,local_b0);
  FUN_1006af210(local_b0,auStack_150,param_2,(long)*param_6);
  (**(code **)(param_6 + 0xc0))(auStack_150,local_b0);
  FUN_1006ac870(auStack_150,auStack_150,param_6 + 8,lVar8);
  FUN_1006af210(local_b0,auStack_150,local_168,(long)*param_6);
  (**(code **)(param_6 + 0xc0))(auStack_150,local_b0);
  FUN_1006af210(local_b0,auStack_150,puVar1,(long)*param_6);
  (**(code **)(param_6 + 0xc0))(auStack_150,local_b0);
  FUN_1006ad04c(auStack_f0 + (uVar6 ^ 1) * 0x20,auStack_130 + (uVar6 ^ 1) * 0x20,puVar1,puVar2,
                param_6);
  FUN_1006ad25c(auStack_f0,auStack_130,auStack_150,param_6);
  if ('\0' < cVar3) {
    _memcpy(param_1,auStack_f0,lVar8 << 3);
    _memcpy((void *)((long)param_1 + lVar8 * 8),auStack_130,lVar8 << 3);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

