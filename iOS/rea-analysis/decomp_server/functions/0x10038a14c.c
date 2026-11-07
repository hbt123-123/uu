// rea decompile_all
// name: FUN_10038a14c
// address: 0x10038a14c
// body: available
// range: 0x10038a14c-0x10038a31f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038a31c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038a14c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *local_58;
  long local_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_100386734(1,"MMKV_IO.cpp","clearAll",0x5b6,"cleaning all key-values from [%s]");
  local_50 = *(long *)(param_1 + 0xb8);
  if (local_50 != 0) {
    FUN_100392994();
  }
  local_58 = *(undefined8 **)(param_1 + 0xd0);
  if ((local_58 != (undefined8 *)0x0) && (*(char *)((long)local_58 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_58,*(undefined4 *)(local_58 + 1));
  }
  FUN_10038774c(param_1);
  uVar1 = param_1;
  FUN_1003805d0();
  if ((uVar1 & 1) == 0) {
    pcVar4 = "[%s] file not valid";
    uVar3 = 0x5bc;
LAB_10038a2a0:
    uVar2 = 2;
  }
  else {
    if ((*(byte *)(param_1 + 0x30) >> 5 & 1) != 0) {
      pcVar4 = "[%s] file readonly";
      uVar3 = 0x5c0;
      goto LAB_10038a2a0;
    }
    if ((*(long *)(*(long *)(param_1 + 0x80) + 0x28) != *(long *)(param_1 + 0x78)) ||
       (*(long *)(param_1 + 0x88) != 0)) {
      if ((param_2 & 1) == 0) {
        FUN_10038fe2c();
      }
      FUN_100392d10(auStack_48);
      if (*(long *)(param_1 + 0xb0) != 0) {
        FUN_100392bb0(*(long *)(param_1 + 0xb0),auStack_48,0x10);
      }
      FUN_100387178(param_1,0,0,auStack_48,1);
      FUN_100390384(*(undefined8 *)(param_1 + 0xa0),1);
      FUN_10037f730(param_1,param_2);
      FUN_100386814(param_1);
      goto LAB_10038a2c4;
    }
    pcVar4 = "nothing to clear for [%s]";
    uVar3 = 0x5c5;
    uVar2 = 1;
  }
  FUN_100386734(uVar2,"MMKV_IO.cpp","clearAll",uVar3,pcVar4);
LAB_10038a2c4:
  FUN_100385fb0(&local_58);
  FUN_100385098(&local_50);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

