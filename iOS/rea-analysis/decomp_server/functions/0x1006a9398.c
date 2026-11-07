// rea decompile_all
// name: FUN_1006a9398
// address: 0x1006a9398
// body: available
// range: 0x1006a9398-0x1006a9543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a9540 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006a9398(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *local_88;
  char local_80;
  undefined1 uStack_71;
  long local_70;
  long alStack_68 [3];
  long *local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
    uVar2 = (ulong)*(byte *)(param_1 + 0x1f);
  }
  if (uVar2 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    if (-1 < (char)*(byte *)(param_1 + 0x37)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x37);
    }
    if (uVar2 != 0) {
      lVar1 = param_1 + 0x20;
      FUN_1006a9544();
      puVar3 = &DAT_100b2c660;
      local_88 = &DAT_100b2c678;
      local_80 = '\0';
      FUN_100696f64(&local_88);
      FUN_1006a956c();
      FUN_1006a99e8(&DAT_100b2c660,lVar1);
      FUN_1006a956c();
      if (puVar3 == &DAT_100b2c668) {
        FUN_10069f4c4(param_1,0);
        lVar4 = 0x20;
        local_50 = operator_new(0x20);
        *local_50 = (long)&PTR_FUN_1009e6ea8;
        local_50[1] = (long)FUN_1006a05cc;
        local_50[2] = 0;
        local_50[3] = param_1;
        FUN_100696324(param_1,alStack_68);
        if (local_50 == alStack_68) {
LAB_1006a94a4:
          (**(code **)(*local_50 + lVar4))();
        }
        else if (local_50 != (long *)0x0) {
          lVar4 = 0x28;
          goto LAB_1006a94a4;
        }
        FUN_100696698(param_1,param_2);
        FUN_1006a956c();
        puVar3 = &DAT_100b2c660;
        local_70 = lVar1;
        FUN_1006a9bb8(&DAT_100b2c660,lVar1,&DAT_10084e6fd,&local_70,&uStack_71);
        puVar3[7] = param_1;
      }
      else {
        param_1 = puVar3[7];
      }
      if (local_80 == '\x01') {
        FUN_1006972a0(&local_88);
      }
      goto LAB_1006a950c;
    }
  }
  param_1 = 0;
LAB_1006a950c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

