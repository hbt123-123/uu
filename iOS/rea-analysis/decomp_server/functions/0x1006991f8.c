// rea decompile_all
// name: FUN_1006991f8
// address: 0x1006991f8
// body: available
// range: 0x1006991f8-0x100699457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100699238) */
/* WARNING: Removing unreachable block (ram,0x000100699280) */
/* WARNING: Removing unreachable block (ram,0x000100699244) */
/* WARNING: Removing unreachable block (ram,0x00010069924c) */
/* WARNING: Removing unreachable block (ram,0x00010069925c) */
/* WARNING: Removing unreachable block (ram,0x000100699390) */
/* WARNING: Removing unreachable block (ram,0x000100699268) */
/* WARNING: Removing unreachable block (ram,0x000100699274) */
/* WARNING: Removing unreachable block (ram,0x000100699230) */
/* WARNING: Removing unreachable block (ram,0x000100699288) */
/* WARNING: Removing unreachable block (ram,0x000100699290) */
/* WARNING: Removing unreachable block (ram,0x0001006992b4) */

undefined8 FUN_1006991f8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_e0 [2];
  char local_c9;
  undefined **local_c8 [8];
  long *local_88;
  int local_80 [2];
  void *local_78;
  ulong local_70;
  byte local_61;
  int local_60 [2];
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  
  uVar2 = param_1;
  FUN_10069cde4(local_48);
  local_58 = 0;
  FUN_10069f164();
  uVar3 = param_1;
  uStack_50 = uVar2;
  FUN_10069a9a4(local_60,param_1,&local_58);
  if (local_60[0] == 3) {
    if (param_2 == (undefined8 *)0x0) {
      param_1 = 0;
    }
    else {
      *(undefined4 *)param_2 = 0;
      FUN_10069f164();
      param_1 = 0;
      param_2[1] = uVar3;
    }
  }
  else {
    FUN_10069cd8c(&local_78,param_1);
    if (-1 < (char)local_61) {
      local_70 = (ulong)local_61;
    }
    if (((local_70 == 0) || (FUN_10069a9a4(local_80,&local_78,&local_58), local_80[0] != 1)) ||
       (FUN_1006991f8(&local_78,&local_58), local_58 == 0)) {
      FUN_100699458(param_1,param_2);
    }
    else {
      if (param_2 == (undefined8 *)0x0) {
        FUN_1006928dc(local_e0,"mars_boost::filesystem::create_directories");
        FUN_10069b5dc(local_c8,local_e0,&local_78,CONCAT44(uStack_54,local_58),uStack_50);
        FUN_1006924cc(local_c8);
        local_c8[0] = &PTR_FUN_1009e6910;
        if (local_88 != (long *)0x0) {
          LOAcquire();
          iVar1 = (int)local_88[1];
          *(int *)(local_88 + 1) = iVar1 + -1;
          LORelease();
          if (iVar1 == 1) {
            (**(code **)(*local_88 + 0x10))(local_88);
            LOAcquire();
            iVar1 = *(int *)((long)local_88 + 0xc);
            *(int *)((long)local_88 + 0xc) = iVar1 + -1;
            LORelease();
            if (iVar1 == 1) {
              (**(code **)(*local_88 + 0x18))(local_88);
            }
          }
        }
        FUN_10069b978(local_c8);
        if (local_c9 < '\0') {
          operator_delete(local_e0[0]);
        }
      }
      else {
        param_2[1] = uStack_50;
        *param_2 = CONCAT44(uStack_54,local_58);
      }
      param_1 = 0;
    }
    if ((char)local_61 < '\0') {
      operator_delete(local_78);
    }
  }
  return param_1;
}

