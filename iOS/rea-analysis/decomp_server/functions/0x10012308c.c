// rea decompile_all
// name: FUN_10012308c
// address: 0x10012308c
// body: available
// range: 0x10012308c-0x1001231bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001231b8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012308c(code *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 local_38 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = (uint)(param_4 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 != 0) {
      lVar3 = (long)(int)param_3;
      param_3 = param_3 >> 0x20;
      if (param_3 < lVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001231b8);
        (*pcVar2)();
      }
LAB_100123160:
      FUN_1001231bc(lVar3,param_3,param_1,param_2);
      goto LAB_10012318c;
    }
    local_38[0] = (undefined1)param_3;
    local_38[1] = (undefined1)((ulong)param_3 >> 8);
    local_38[2] = (undefined1)((ulong)param_3 >> 0x10);
    local_38[3] = (undefined1)((ulong)param_3 >> 0x18);
    local_38[4] = (undefined1)((ulong)param_3 >> 0x20);
    local_38[5] = (undefined1)((ulong)param_3 >> 0x28);
    local_38[6] = (undefined1)((ulong)param_3 >> 0x30);
    local_38[7] = (undefined1)((ulong)param_3 >> 0x38);
    local_38[8] = (undefined1)param_4;
    local_38[9] = (undefined1)(param_4 >> 8);
    local_38[10] = (undefined1)(param_4 >> 0x10);
    local_38[0xb] = (undefined1)(param_4 >> 0x18);
    local_38[0xc] = (undefined1)(param_4 >> 0x20);
    local_38[0xd] = (undefined1)(param_4 >> 0x28);
    puVar4 = local_38 + (param_4 >> 0x30 & 0xff);
  }
  else {
    if (uVar5 == 2) {
      lVar3 = *(long *)(param_3 + 0x10);
      param_3 = *(long *)(param_3 + 0x18);
      goto LAB_100123160;
    }
    local_38[8] = 0;
    local_38[9] = 0;
    local_38[10] = 0;
    local_38[0xb] = 0;
    local_38[0xc] = 0;
    local_38[0xd] = 0;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[5] = 0;
    local_38[6] = 0;
    local_38[7] = 0;
    puVar4 = local_38;
  }
  (*param_1)(local_38,puVar4);
LAB_10012318c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

