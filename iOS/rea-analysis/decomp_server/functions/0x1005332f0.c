// rea decompile_all
// name: FUN_1005332f0
// address: 0x1005332f0
// body: available
// range: 0x1005332f0-0x10053345b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100533458 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005332f0(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  long unaff_x21;
  byte local_30 [16];
  undefined1 local_20 [4];
  byte local_1c;
  long local_18;
  
  pbVar5 = local_30;
  local_18 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      local_30[0] = (byte)param_1;
      local_30[1] = (byte)((ulong)param_1 >> 8);
      local_30[2] = (byte)((ulong)param_1 >> 0x10);
      local_30[3] = (byte)((ulong)param_1 >> 0x18);
      local_30[4] = (byte)((ulong)param_1 >> 0x20);
      local_30[5] = (byte)((ulong)param_1 >> 0x28);
      local_30[6] = (byte)((ulong)param_1 >> 0x30);
      local_30[7] = (byte)((ulong)param_1 >> 0x38);
      local_30[8] = (byte)param_2;
      local_30[9] = (byte)(param_2 >> 8);
      local_30[10] = (byte)(param_2 >> 0x10);
      local_30[0xb] = (byte)(param_2 >> 0x18);
      local_30[0xc] = (byte)(param_2 >> 0x20);
      local_30[0xd] = (byte)(param_2 >> 0x28);
      pbVar5 = local_30 + (param_2 >> 0x30 & 0xff);
LAB_100533408:
      FUN_100535fa0(local_20,local_30,pbVar5,param_3);
      bVar2 = local_1c;
      if (unaff_x21 != 0) goto LAB_100533430;
    }
    else {
      lVar7 = (long)(int)param_1;
      if (param_1 >> 0x20 < lVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100533458);
        (*pcVar3)();
      }
      FUN_100536e8c(lVar7,param_1 >> 0x20,param_2 & 0x3fffffffffffffff);
      if (unaff_x21 != 0) goto LAB_100533430;
      bVar2 = (byte)((ulong)lVar7 >> 0x20) & 1;
    }
  }
  else {
    if (uVar6 != 2) {
      local_30[8] = 0;
      local_30[9] = 0;
      local_30[10] = 0;
      local_30[0xb] = 0;
      local_30[0xc] = 0;
      local_30[0xd] = 0;
      local_30[0] = 0;
      local_30[1] = 0;
      local_30[2] = 0;
      local_30[3] = 0;
      local_30[4] = 0;
      local_30[5] = 0;
      local_30[6] = 0;
      local_30[7] = 0;
      goto LAB_100533408;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    FUN_100536e8c(uVar4,*(undefined8 *)(param_1 + 0x18),param_2 & 0x3fffffffffffffff);
    if (unaff_x21 != 0) goto LAB_100533430;
    bVar2 = (byte)((ulong)uVar4 >> 0x20) & 1;
  }
  local_30[0] = bVar2;
LAB_100533430:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

