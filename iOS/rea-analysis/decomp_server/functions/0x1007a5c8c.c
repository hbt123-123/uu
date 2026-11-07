// rea decompile_all
// name: FUN_1007a5c8c
// address: 0x1007a5c8c
// body: available
// range: 0x1007a5c8c-0x1007a5e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a5e6c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1007a5c8c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long local_770;
  undefined8 **ppuStack_768;
  undefined1 *local_760;
  undefined8 uStack_758;
  undefined4 local_750;
  undefined1 local_74c;
  undefined1 local_74b;
  code *local_748;
  undefined8 *puStack_740;
  undefined8 *local_738;
  undefined8 *puStack_730;
  undefined4 local_728;
  undefined8 *local_720;
  undefined4 local_718;
  code **local_710;
  undefined1 *local_708;
  code *local_700;
  code *pcStack_6f8;
  code *pcStack_6f0;
  code *pcStack_6e8;
  code *local_6e0;
  code *pcStack_6d8;
  code *pcStack_6d0;
  code *pcStack_6c8;
  code *local_6c0;
  code *pcStack_6b8;
  undefined1 auStack_6a8 [1000];
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcStack_6d8 = FUN_1007a5fcc;
  local_6e0 = FUN_1007a5f6c;
  pcStack_6c8 = FUN_1007a6068;
  pcStack_6d0 = FUN_1007a602c;
  pcStack_6b8 = FUN_1007a60f8;
  local_6c0 = FUN_1007a60a4;
  pcStack_6f8 = FUN_1007a5eb0;
  local_700 = FUN_1007a5e70;
  pcStack_6e8 = FUN_1007a5f2c;
  pcStack_6f0 = FUN_1007a5eec;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_d0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_278 = 0;
  local_280 = 0;
  uStack_288 = 0;
  local_290 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  _bzero(auStack_6a8,1000);
  puStack_730 = &local_c0;
  local_728 = 100;
  local_720 = &local_2c0;
  local_718 = 500;
  local_710 = &local_700;
  uVar2 = param_3;
  local_738 = &local_2c0;
  _open(param_3,0);
  ppuStack_768 = &puStack_740;
  local_750 = (undefined4)uVar2;
  local_74c = 0;
  local_74b = (undefined1)param_4;
  local_748 = FUN_1007a6100;
  iVar1 = *(int *)(param_1 + 0x10);
  local_770 = param_1;
  local_760 = auStack_6a8;
  uStack_758 = param_3;
  puStack_740 = &local_2c0;
  local_708 = (undefined1 *)&local_770;
  FUN_1007a6100(&local_770);
  FUN_1007a5564(param_2,&puStack_740);
  _close(uVar2);
  if (param_4 != 0) {
    while (iVar1 < *(int *)(param_1 + 0x10)) {
      FUN_1007a5380(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

