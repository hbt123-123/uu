// rea decompile_all
// name: FUN_10003990c
// address: 0x10003990c
// body: available
// range: 0x10003990c-0x100039b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100039b4c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003990c(undefined8 *param_1,ID param_2)

{
  ID self;
  undefined8 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_f0 [16];
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  self = param_2;
  FUN_10000290c();
  if (self == 0) {
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)(self);
    local_e0 = (int)param_2;
    FUN_1003fb4ec(FUN_10003e8f8,auStack_f0,0xd0000000000000a9,0x8000000100877660,0xd000000000000017,
                  0x8000000100877920,0x78,0);
    uVar6 = 0;
    uVar7 = 0;
    uVar2 = 2;
    uVar4 = 0;
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_ac = 0;
    local_98 = 0;
    uStack_a0 = 0;
    iStack_b8 = 0;
    iStack_b4 = 0;
    local_c0 = 0;
    iStack_bc = 0;
    _objc_msgSend(self,"getValue:",&local_c0);
    uVar4 = CONCAT44(iStack_bc,local_c0);
    uVar3 = (ulong)local_b0;
    uStack_68 = uStack_a0;
    local_70 = uStack_a8;
    local_60 = (undefined1)local_98;
    uVar1 = CONCAT44(iStack_b4,iStack_b8);
    uVar5 = NEON_umaxv(CONCAT26(-(ushort)((int)local_b0 < 1),
                                CONCAT24(-(ushort)(iStack_b4 < 1),
                                         CONCAT22(-(ushort)(iStack_b8 < 1),-(ushort)(iStack_bc < 1))
                                        )),2);
    local_88 = uVar4;
    uStack_80 = uVar1;
    local_78 = uVar3;
    if ((uVar5 & 1) == 0) {
      uStack_c8 = uStack_a0;
      local_d0 = uStack_a8;
      uVar6 = uStack_a8;
      uVar7 = uStack_a0;
      uVar2 = (undefined1)local_98;
    }
    else {
      uVar1 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar1);
      local_d8 = &local_88;
      local_e0 = (int)param_2;
      FUN_1003fb4ec(FUN_10003e900,auStack_f0,0xd0000000000000a9,0x8000000100877660,
                    0xd000000000000017,0x8000000100877920,0x7d,0);
      uVar4 = 0;
      uVar1 = 0;
      uVar3 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar2 = 2;
    }
  }
  *param_1 = uVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[4] = uVar7;
  param_1[3] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar2;
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

