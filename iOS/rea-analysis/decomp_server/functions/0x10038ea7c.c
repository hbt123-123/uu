// rea decompile_all
// name: FUN_10038ea7c
// address: 0x10038ea7c
// body: available
// range: 0x10038ea7c-0x10038ebdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038ebdc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10038ea7c(long param_1,ulong param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  char local_b2 [2];
  undefined1 auStack_b0 [8];
  undefined1 *local_a8;
  undefined8 *local_98;
  undefined1 auStack_90 [56];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (*param_4 == '\x02') {
    local_98 = *(undefined8 **)(param_1 + 0xd0);
    if ((local_98 != (undefined8 *)0x0) && (*(char *)((long)local_98 + 0xc) == '\x01')) {
      FUN_10037dd20(*local_98,*(undefined4 *)(local_98 + 1));
    }
    uVar2 = *(ushort *)(param_4 + 2);
    uVar3 = (uint)uVar2;
    FUN_10039280c(uVar2);
    lVar4 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
    thunk_FUN_10037e7cc(local_b2,uVar3 + uVar2);
    FUN_100392f0c(auStack_90,*(undefined8 *)(param_1 + 0xb0),param_4 + 0xc);
    puVar1 = auStack_b0;
    if (local_b2[0] != '\0') {
      puVar1 = local_a8;
    }
    FUN_100392ce0(auStack_90,lVar4 + 4 + (ulong)*(uint *)(param_4 + 8),puVar1,uVar3 + uVar2);
    FUN_100389b58(param_1,param_2,local_b2,param_5,uVar2);
    thunk_FUN_100392c48(auStack_90);
    thunk_FUN_10037edac(local_b2);
    FUN_100385fb0(&local_98);
  }
  else {
    FUN_100389600(param_1,param_2,param_3,param_5);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    auVar5._8_8_ = param_2 & 0xffffffffff;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

