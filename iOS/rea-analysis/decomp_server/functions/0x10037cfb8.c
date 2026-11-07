// rea decompile_all
// name: FUN_10037cfb8
// address: 0x10037cfb8
// body: available
// range: 0x10037cfb8-0x10037d17b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037d090 to 0x10037cbd0 FUN_10037cbd0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10037d174 to 0x1007de08c ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10037d178 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037cfb8(long *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 auStack_55 [29];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  plVar3 = param_1;
  FUN_10037ceb0(param_1,0);
  uVar1 = (uint)plVar3;
  if ((int)uVar1 < 0) {
    uVar4 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10037b83c();
    puVar5 = PTR_typeinfo_1009965b0;
    puVar6 = PTR__length_error_1009950e8;
  }
  else {
    if (((ulong)plVar3 & 0xffffffff) <= (ulong)(param_1[1] - param_1[2])) {
      uVar7 = (ulong)plVar3 & 0xffffffff;
      if (uVar1 < 0x101) {
        FUN_10037ca4c(param_1,uVar7,0);
        *param_2 = 0;
        plVar3 = param_1 + 7;
        thunk_FUN_10037e124(auStack_55,param_1[5] + *plVar3,uVar7);
        FUN_10037e484(param_2,auStack_55);
        FUN_10037e53c(auStack_55);
        *plVar3 = *plVar3 + uVar7;
        param_1[2] = param_1[2] + uVar7;
        if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
          return;
        }
      }
      else {
        *param_2 = 2;
        *(uint *)(param_2 + 4) = uVar1;
        FUN_10039280c();
        uVar2 = (uint)*(ushort *)(param_2 + 2);
        FUN_10039280c();
        param_2[1] = (char)(uVar2 + uVar1);
        FUN_100392d54(param_1[4],*param_1 + param_1[3],param_1[5] + param_1[8],
                      (param_1[8] - param_1[7]) +
                      (ulong)((uint)*(ushort *)(param_2 + 2) + (uVar2 + uVar1 & 0xff)),param_2 + 0xc
                     );
        if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
          FUN_10037cbd0(param_1,uVar7);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    uVar4 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10037c1b8();
    puVar5 = PTR_typeinfo_1009965b8;
    puVar6 = PTR__out_of_range_1009950f0;
  }
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar4,puVar5,puVar6);
}

