// rea decompile_all
// name: FUN_1004145e4
// address: 0x1004145e4
// body: available
// range: 0x1004145e4-0x1004146df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004146dc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004145e4(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  rusage_info_t local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  undefined8 uVar4;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  iVar1 = _proc_pidinfo(param_1,4,0,&local_a0,0x60);
  if (iVar1 < 1) {
    dVar3 = 0.0;
  }
  else {
    local_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    local_1d0 = (rusage_info_t)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    iVar2 = _proc_pid_rusage(param_1,4,&local_1d0);
    uVar4 = uStack_188;
    if (iVar2 != 0) {
      uVar4 = uStack_98;
    }
    dVar3 = (double)NEON_ucvtf(uVar4);
    dVar3 = dVar3 * 0.0009765625 * 0.0009765625;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(dVar3,iVar1 < 1);
  }
  return;
}

