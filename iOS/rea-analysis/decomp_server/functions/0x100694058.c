// rea decompile_all
// name: FUN_100694058
// address: 0x100694058
// body: available
// range: 0x100694058-0x1006941c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006941c4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100694058(long *param_1,undefined8 param_2,char param_3,undefined1 param_4)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_1b8 [144];
  undefined8 local_128;
  undefined1 local_120;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_1006928dc(param_1,param_2);
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  if (((long)uVar5 < 0) && (uVar5 = param_1[1], 0x3fff < uVar5)) {
    iVar2 = 5;
    ___xlogger_IsEnabledFor_impl();
    if (iVar2 != 0) {
      FUN_100695740(auStack_1b8,5,"mars::comm",
                    "/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/strutil.cc",
                    "ReplaceChar",0x118,0,0);
      FUN_100695934(auStack_1b8,"len < 16 * 1024");
      local_120 = 0;
      local_d8 = &local_128;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      local_70 = 0;
      local_60 = 0;
      local_128 = param_2;
      FUN_100695b54();
      thunk_FUN_1006957ac(auStack_1b8);
    }
  }
  else if (uVar5 == 0) goto LAB_1006940f0;
  uVar3 = 0;
  lVar4 = *param_1;
  do {
    plVar1 = (long *)lVar4;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar1 = param_1;
    }
    if (*(char *)((long)plVar1 + uVar3) == param_3) {
      *(undefined1 *)((long)plVar1 + uVar3) = param_4;
      lVar4 = *param_1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar5 != uVar3);
LAB_1006940f0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

