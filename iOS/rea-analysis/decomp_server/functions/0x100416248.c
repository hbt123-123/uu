// rea decompile_all
// name: FUN_100416248
// address: 0x100416248
// body: available
// range: 0x100416248-0x100416517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100416514 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100416248(double *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  thread_act_array_t address;
  code *pcVar12;
  kern_return_t kVar13;
  vm_size_t size;
  ulong uVar14;
  double dVar15;
  double dVar16;
  mach_port_name_t *pmVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  mach_msg_type_number_t local_328 [2];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long local_250;
  undefined8 uStack_248;
  long local_240;
  undefined8 uStack_238;
  ulong local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  double local_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double local_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  thread_act_array_t local_118;
  double local_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  long local_88;
  
  puVar2 = PTR__mach_task_self__1009954c8;
  local_88 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_1b0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_288 = 0;
  local_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2f8 = 0;
  local_300 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_318 = 0;
  local_320 = 0;
  uStack_308 = 0;
  local_310 = 0;
  local_328[1] = 0x5d;
  kVar13 = _task_info(*(task_name_t *)PTR__mach_task_self__1009954c8,0x16,(task_info_t)&local_320,
                      local_328 + 1);
  uVar11 = local_1d0;
  uVar10 = local_290;
  uVar9 = uStack_2a8;
  uVar8 = uStack_2b8;
  uVar7 = local_2e0;
  uVar6 = local_2f0;
  uVar5 = local_300;
  uVar4 = local_310;
  uVar3 = local_320;
  if (kVar13 == 0) {
    dVar19 = ((double)local_230 / 1024.0) * 0.0009765625;
    if ((long)local_230 < 1) {
      dVar19 = 0.0;
    }
    uVar1 = local_250 + local_240;
    if (SCARRY8(local_250,local_240)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100416514);
      (*pcVar12)();
    }
    uVar18 = local_210 & ((long)local_210 >> 0x3f ^ 0xffffffffffffffffU);
    dVar16 = (double)(long)(int)uStack_318;
    dVar15 = (double)(long)(int)uStack_1c8;
    local_118 = (mach_port_name_t *)0x0;
    local_328[0] = 0;
    kVar13 = _task_threads(*(task_t *)puVar2,&local_118,local_328);
    address = local_118;
    if ((kVar13 == 0) && (local_118 != (mach_port_name_t *)0x0)) {
      uVar14 = (ulong)local_328[0];
      pmVar17 = local_118;
      if (local_328[0] == 0) {
        size = 0;
      }
      else {
        do {
          _mach_port_deallocate(*(ipc_space_t *)puVar2,*pmVar17);
          uVar14 = uVar14 - 1;
          pmVar17 = pmVar17 + 1;
        } while (uVar14 != 0);
        size = (ulong)local_328[0] << 2;
      }
      _vm_deallocate(*(vm_map_t *)puVar2,(vm_address_t)address,size);
      uVar14 = (ulong)local_328[0];
    }
    else {
      uVar14 = 0;
    }
    auVar21._8_8_ = uVar4;
    auVar21._0_8_ = uVar3;
    auVar21 = NEON_ucvtf(auVar21,8);
    auVar22._8_8_ = uVar6;
    auVar22._0_8_ = uVar10;
    auVar22 = NEON_ucvtf(auVar22,8);
    auVar23._8_8_ = uVar5;
    auVar23._0_8_ = uVar7;
    auVar23 = NEON_ucvtf(auVar23,8);
    auVar24._8_8_ = uVar8;
    auVar24._0_8_ = uVar9;
    auVar24 = NEON_ucvtf(auVar24,8);
    local_160 = ((double)uVar18 / 1024.0) * 0.0009765625;
    local_150 = ((double)(uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU)) / 1024.0) *
                0.0009765625;
    local_1a0 = auVar21._0_8_ * 0.0009765625 * 0.0009765625;
    dStack_198 = auVar21._8_8_ * 0.0009765625 * 0.0009765625;
    dStack_190 = auVar22._0_8_ * 0.0009765625 * 0.0009765625;
    dStack_188 = auVar22._8_8_ * 0.0009765625 * 0.0009765625;
    local_180 = auVar23._0_8_ * 0.0009765625 * 0.0009765625;
    dStack_178 = auVar23._8_8_ * 0.0009765625 * 0.0009765625;
    dStack_170 = auVar24._0_8_ * 0.0009765625 * 0.0009765625;
    dStack_168 = auVar24._8_8_ * 0.0009765625 * 0.0009765625;
    dVar20 = ((double)uVar11 / 1024.0) * 0.0009765625;
    uStack_138 = SUB81(dVar20,0);
    uStack_137 = (undefined7)((ulong)dVar20 >> 8);
    local_130 = (undefined1)uVar14;
    uStack_12f = (undefined7)(uVar14 >> 8);
    dStack_158 = dVar19;
    local_148 = dVar16;
    local_140 = dVar15;
    FUN_100416be8(&local_1a0);
    dStack_c8 = dStack_158;
    local_d0 = local_160;
    dStack_b8 = local_148;
    dStack_c0 = local_150;
    uStack_a8 = uStack_138;
    local_b0 = local_140;
    uStack_9f = CONCAT17(uStack_128,uStack_12f);
    uStack_a7 = uStack_137;
    uStack_a0 = local_130;
    dStack_108 = dStack_198;
    local_110 = local_1a0;
    dStack_f8 = dStack_188;
    dStack_100 = dStack_190;
    dStack_e8 = dStack_178;
    local_f0 = local_180;
    dStack_d8 = dStack_168;
    dStack_e0 = dStack_170;
  }
  else {
    FUN_100416bc4(&local_110);
  }
  param_1[9] = dStack_c8;
  param_1[8] = local_d0;
  param_1[0xb] = dStack_b8;
  param_1[10] = dStack_c0;
  param_1[0xd] = (double)CONCAT71(uStack_a7,uStack_a8);
  param_1[0xc] = local_b0;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_9f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_a0,uStack_a7);
  param_1[1] = dStack_108;
  *param_1 = local_110;
  param_1[3] = dStack_f8;
  param_1[2] = dStack_100;
  param_1[5] = dStack_e8;
  param_1[4] = local_f0;
  param_1[7] = dStack_d8;
  param_1[6] = dStack_e0;
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_88) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

