// rea decompile_all
// name: FUN_10055cf2c
// address: 0x10055cf2c
// body: available
// range: 0x10055cf2c-0x10055d0f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10055d0f4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055cf2c(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 local_11a;
  undefined1 local_119;
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  undefined1 local_115;
  undefined1 local_114;
  undefined1 local_113;
  undefined1 local_112;
  undefined1 local_111;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined6 local_e8;
  undefined2 uStack_e2;
  undefined6 local_e0;
  undefined2 uStack_da;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar4 == 0) {
      local_11e = (undefined1)param_1;
      local_11d = (undefined1)((ulong)param_1 >> 8);
      local_11c = (undefined1)((ulong)param_1 >> 0x10);
      local_11b = (undefined1)((ulong)param_1 >> 0x18);
      local_11a = (undefined1)((ulong)param_1 >> 0x20);
      local_119 = (undefined1)((ulong)param_1 >> 0x28);
      local_118 = (undefined1)((ulong)param_1 >> 0x30);
      local_117 = (undefined1)((ulong)param_1 >> 0x38);
      local_116 = (undefined1)param_2;
      local_115 = (undefined1)(param_2 >> 8);
      local_114 = (undefined1)(param_2 >> 0x10);
      local_113 = (undefined1)(param_2 >> 0x18);
      local_112 = (undefined1)(param_2 >> 0x20);
      uVar3 = param_2 >> 0x30 & 0xff;
      local_111 = (undefined1)(param_2 >> 0x28);
      if (uVar3 != 0) {
        uStack_108 = 0;
        local_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        local_c8 = 1;
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        local_90 = 0;
        local_88 = 1;
        uStack_60 = 0xf000000000000000;
        local_68 = 0;
        uStack_50 = 0xf000000000000000;
        uStack_58 = 0;
        puStack_d8 = &local_11e;
        local_f0 = 0;
        local_e8 = SUB86(puStack_d8,0);
        uStack_e2 = (undefined2)((ulong)puStack_d8 >> 0x30);
        local_e0 = (undefined6)uVar3;
        uStack_da = 0;
        local_d0 = 0;
        FUN_100128b30(&local_110,&uStack_b8,&DAT_100aaa0e8,&DAT_1008358c0);
        local_80 = 100;
        local_78 = 1;
        local_70 = 100;
        FUN_100557fd4(&local_e8,10);
        FUN_100506304(&local_e8);
      }
      goto LAB_10055d0c0;
    }
    lVar5 = (long)(int)param_1;
    param_1 = param_1 >> 0x20;
    if (param_1 < lVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10055d0f4);
      (*pcVar2)();
    }
  }
  else {
    if (uVar4 != 2) {
      local_e0 = 0;
      local_e8 = 0;
      uStack_e2 = 0;
      FUN_100557f08(&local_e8,&local_e8,param_3);
      goto LAB_10055d0c0;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    param_1 = *(long *)(param_1 + 0x18);
  }
  FUN_10055d198(lVar5,param_1,param_2 & 0x3fffffffffffffff,param_3);
LAB_10055d0c0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

