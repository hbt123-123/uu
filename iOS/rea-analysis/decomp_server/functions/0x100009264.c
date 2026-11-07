// rea decompile_all
// name: FUN_100009264
// address: 0x100009264
// body: available
// range: 0x100009264-0x1000093ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000093ec to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100009264(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  long unaff_x21;
  uint uVar5;
  byte local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar5 = (uint)(param_2 >> 0x20);
  uVar3 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar3 != 0) {
      lVar4 = (long)(int)param_1;
      param_1 = param_1 >> 0x20;
      if (param_1 < lVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000093ec);
        (*pcVar1)();
      }
      goto LAB_100009340;
    }
    local_48[0] = (undefined1)param_1;
    local_48[1] = (undefined1)((ulong)param_1 >> 8);
    local_48[2] = (undefined1)((ulong)param_1 >> 0x10);
    local_48[3] = (undefined1)((ulong)param_1 >> 0x18);
    local_48[4] = (undefined1)((ulong)param_1 >> 0x20);
    local_48[5] = (undefined1)((ulong)param_1 >> 0x28);
    local_48[6] = (undefined1)((ulong)param_1 >> 0x30);
    local_48[7] = (undefined1)((ulong)param_1 >> 0x38);
    local_48[8] = (undefined1)param_2;
    local_48[9] = (undefined1)(param_2 >> 8);
    local_48[10] = (undefined1)(param_2 >> 0x10);
    local_48[0xb] = (undefined1)(param_2 >> 0x18);
    local_48[0xc] = (undefined1)(param_2 >> 0x20);
    local_48[0xd] = (undefined1)(param_2 >> 0x28);
    puVar2 = local_48 + (param_2 >> 0x30 & 0xff);
LAB_10000938c:
    FUN_100009038(&local_49,local_48,puVar2,param_3,param_4);
    FUN_100006cdc(param_3,param_4);
    lVar4 = unaff_x21;
    if (unaff_x21 == 0) {
      uVar5 = (uint)local_49;
      goto LAB_1000093b8;
    }
  }
  else {
    if (uVar3 != 2) {
      local_48[8] = 0;
      local_48[9] = 0;
      local_48[10] = 0;
      local_48[0xb] = 0;
      local_48[0xc] = 0;
      local_48[0xd] = 0;
      local_48[0] = 0;
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      local_48[4] = 0;
      local_48[5] = 0;
      local_48[6] = 0;
      local_48[7] = 0;
      puVar2 = local_48;
      goto LAB_10000938c;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    param_1 = *(long *)(param_1 + 0x18);
LAB_100009340:
    FUN_1000093f0(lVar4,param_1,param_2 & 0x3fffffffffffffff,param_3,param_4);
    uVar5 = (uint)lVar4;
    FUN_100006cdc(param_3,param_4);
    if (unaff_x21 == 0) goto LAB_1000093b8;
  }
  uVar5 = (uint)lVar4;
LAB_1000093b8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5 & 1;
}

