// rea decompile_all
// name: FUN_10037e5ac
// address: 0x10037e5ac
// body: available
// range: 0x10037e5ac-0x10037e78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037e64c to 0x10037e960 thunk_FUN_10037e874 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10037e788 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037e5ac(char *param_1,char *param_2,long param_3,undefined8 param_4)

{
  ulong *puVar1;
  char *pcVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  char local_aa;
  byte local_a9;
  ulong local_a8;
  ulong *local_a0;
  undefined1 auStack_90 [56];
  undefined1 auStack_58 [16];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (*param_2 == '\x01') {
    pcVar2 = *(char **)(param_2 + 5);
    uVar3 = *(uint *)(param_2 + 1);
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
LAB_10037e630:
      thunk_FUN_10037e874(param_1,pcVar2,uVar3,1);
      return;
    }
  }
  else if (*param_2 == '\0') {
    uVar3 = (uint)(byte)param_2[1];
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
      pcVar2 = param_2 + 2;
      goto LAB_10037e630;
    }
  }
  else {
    uVar3 = (uint)*(ushort *)(param_2 + 2) + (uint)(byte)param_2[1];
    uVar5 = (ulong)uVar3;
    thunk_FUN_10037e874(&local_aa,param_3 + (ulong)*(uint *)(param_2 + 8),
                        uVar3 + *(int *)(param_2 + 4),1);
    FUN_100392f0c(auStack_90,param_4,param_2 + 0xc);
    puVar1 = &local_a8;
    if (local_aa != '\0') {
      puVar1 = local_a0;
    }
    puVar4 = puVar1;
    if (0x10 < uVar3) {
      uVar6 = 0x10;
      do {
        FUN_100392ce0(auStack_90,puVar4,auStack_58,0x10);
        puVar4 = puVar4 + 2;
        uVar6 = uVar6 + 0x10;
      } while (uVar6 < uVar5);
    }
    puVar1 = (ulong *)((long)puVar1 + uVar5);
    if (puVar4 < puVar1) {
      FUN_100392ce0(auStack_90,puVar4,auStack_58,(long)puVar1 - (long)puVar4);
      puVar4 = puVar1;
    }
    uVar6 = (ulong)local_a9;
    if (local_aa != '\0') {
      uVar6 = local_a8;
    }
    thunk_FUN_10037e7cc(param_1,uVar6 - uVar5);
    pcVar2 = param_1 + 2;
    if (*param_1 != '\0') {
      pcVar2 = *(char **)(param_1 + 10);
    }
    FUN_100392ce0(auStack_90,puVar4,pcVar2,uVar6 - uVar5);
    thunk_FUN_100392c48(auStack_90);
    thunk_FUN_10037edac(&local_aa);
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

