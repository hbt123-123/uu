// rea decompile_all
// name: FUN_1001f7dd8
// address: 0x1001f7dd8
// body: available
// range: 0x1001f7dd8-0x1001f7f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f7f08 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f7dd8(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  undefined1 local_38 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)param_1;
      param_1 = param_1 >> 0x20;
      if (param_1 < lVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f7f08);
        (*pcVar2)();
      }
LAB_1001f7ea8:
      FUN_1001f81c0(lVar5,param_1,param_2 & 0x3fffffffffffffff,param_3);
      goto LAB_1001f7edc;
    }
    local_38[0] = (undefined1)param_1;
    local_38[1] = (undefined1)((ulong)param_1 >> 8);
    local_38[2] = (undefined1)((ulong)param_1 >> 0x10);
    local_38[3] = (undefined1)((ulong)param_1 >> 0x18);
    local_38[4] = (undefined1)((ulong)param_1 >> 0x20);
    local_38[5] = (undefined1)((ulong)param_1 >> 0x28);
    local_38[6] = (undefined1)((ulong)param_1 >> 0x30);
    local_38[7] = (undefined1)((ulong)param_1 >> 0x38);
    local_38[8] = (undefined1)param_2;
    local_38[9] = (undefined1)(param_2 >> 8);
    local_38[10] = (undefined1)(param_2 >> 0x10);
    local_38[0xb] = (undefined1)(param_2 >> 0x18);
    local_38[0xc] = (undefined1)(param_2 >> 0x20);
    local_38[0xd] = (undefined1)(param_2 >> 0x28);
    puVar3 = local_38 + (param_2 >> 0x30 & 0xff);
  }
  else {
    if (uVar4 == 2) {
      lVar5 = *(long *)(param_1 + 0x10);
      param_1 = *(long *)(param_1 + 0x18);
      goto LAB_1001f7ea8;
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
    puVar3 = local_38;
  }
  __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(local_38,puVar3);
LAB_1001f7edc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

