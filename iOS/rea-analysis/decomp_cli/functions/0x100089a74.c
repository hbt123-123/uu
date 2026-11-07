// rea decompile_all
// name: FUN_100089a74
// address: 0x100089a74
// body: available
// range: 0x100089a74-0x100089c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100089a74(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
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
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_4 + 0x10) != 0) {
    lVar2 = *param_2;
    uVar3 = param_2[1];
    lVar4 = param_2[2];
    _swift_bridgeObjectRetain(param_4);
    FUN_100080fdc(lVar2,uVar3,lVar4);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(*(long *)(param_4 + 0x38) + lVar2 * 8);
      _swift_bridgeObjectRelease(param_4);
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100089c18);
        (*pcVar1)();
      }
      if (*(ulong *)(param_3 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100089c1c);
        (*pcVar1)();
      }
      param_3 = param_3 + uVar3 * 0xd0;
      uStack_158 = *(undefined8 *)(param_3 + 0xb8);
      uStack_160 = *(undefined8 *)(param_3 + 0xb0);
      uStack_218 = *(undefined8 *)(param_3 + 200);
      local_220 = *(undefined8 *)(param_3 + 0xc0);
      uStack_148 = *(undefined8 *)(param_3 + 200);
      local_150 = *(undefined8 *)(param_3 + 0xc0);
      uStack_208 = *(undefined8 *)(param_3 + 0xd8);
      uStack_210 = *(undefined8 *)(param_3 + 0xd0);
      uStack_138 = *(undefined8 *)(param_3 + 0xd8);
      uStack_140 = *(undefined8 *)(param_3 + 0xd0);
      uStack_1f8 = *(undefined8 *)(param_3 + 0xe8);
      local_200 = *(undefined8 *)(param_3 + 0xe0);
      uStack_198 = *(undefined8 *)(param_3 + 0x78);
      uStack_1a0 = *(undefined8 *)(param_3 + 0x70);
      uStack_258 = *(undefined8 *)(param_3 + 0x88);
      local_260 = *(undefined8 *)(param_3 + 0x80);
      uStack_188 = *(undefined8 *)(param_3 + 0x88);
      local_190 = *(undefined8 *)(param_3 + 0x80);
      uStack_248 = *(undefined8 *)(param_3 + 0x98);
      uStack_250 = *(undefined8 *)(param_3 + 0x90);
      uStack_178 = *(undefined8 *)(param_3 + 0x98);
      uStack_180 = *(undefined8 *)(param_3 + 0x90);
      uStack_238 = *(undefined8 *)(param_3 + 0xa8);
      local_240 = *(undefined8 *)(param_3 + 0xa0);
      uStack_168 = *(undefined8 *)(param_3 + 0xa8);
      local_170 = *(undefined8 *)(param_3 + 0xa0);
      uStack_228 = *(undefined8 *)(param_3 + 0xb8);
      uStack_230 = *(undefined8 *)(param_3 + 0xb0);
      uStack_1d8 = *(undefined8 *)(param_3 + 0x38);
      uStack_1e0 = *(undefined8 *)(param_3 + 0x30);
      uStack_298 = *(undefined8 *)(param_3 + 0x48);
      local_2a0 = *(undefined8 *)(param_3 + 0x40);
      uStack_1c8 = *(undefined8 *)(param_3 + 0x48);
      local_1d0 = *(undefined8 *)(param_3 + 0x40);
      uStack_288 = *(undefined8 *)(param_3 + 0x58);
      uStack_290 = *(undefined8 *)(param_3 + 0x50);
      uStack_1b8 = *(undefined8 *)(param_3 + 0x58);
      uStack_1c0 = *(undefined8 *)(param_3 + 0x50);
      uStack_278 = *(undefined8 *)(param_3 + 0x68);
      local_280 = *(undefined8 *)(param_3 + 0x60);
      uStack_1a8 = *(undefined8 *)(param_3 + 0x68);
      local_1b0 = *(undefined8 *)(param_3 + 0x60);
      uStack_268 = *(undefined8 *)(param_3 + 0x78);
      uStack_270 = *(undefined8 *)(param_3 + 0x70);
      uStack_2b8 = *(undefined8 *)(param_3 + 0x28);
      local_2c0 = *(undefined8 *)(param_3 + 0x20);
      uStack_2a8 = *(undefined8 *)(param_3 + 0x38);
      uStack_2b0 = *(undefined8 *)(param_3 + 0x30);
      uStack_1e8 = *(undefined8 *)(param_3 + 0x28);
      local_1f0 = *(undefined8 *)(param_3 + 0x20);
      uStack_128 = *(undefined8 *)(param_3 + 0xe8);
      local_130 = *(undefined8 *)(param_3 + 0xe0);
      FUN_1000045b0(&local_1f0);
      FUN_10006ff98(&local_2c0,&local_120);
      uStack_78 = uStack_148;
      local_80 = local_150;
      uStack_68 = uStack_138;
      uStack_70 = uStack_140;
      uStack_58 = uStack_128;
      local_60 = local_130;
      uStack_b8 = uStack_188;
      local_c0 = local_190;
      uStack_a8 = uStack_178;
      uStack_b0 = uStack_180;
      uStack_98 = uStack_168;
      local_a0 = local_170;
      uStack_88 = uStack_158;
      uStack_90 = uStack_160;
      uStack_f8 = uStack_1c8;
      local_100 = local_1d0;
      uStack_e8 = uStack_1b8;
      uStack_f0 = uStack_1c0;
      uStack_d8 = uStack_1a8;
      local_e0 = local_1b0;
      uStack_c8 = uStack_198;
      uStack_d0 = uStack_1a0;
      uStack_118 = uStack_1e8;
      local_120 = local_1f0;
      uStack_108 = uStack_1d8;
      uStack_110 = uStack_1e0;
      goto LAB_100089bc0;
    }
    _swift_bridgeObjectRelease(param_4);
  }
  FUN_10006ffec(&local_120);
LAB_100089bc0:
  param_1[0x15] = uStack_78;
  param_1[0x14] = local_80;
  param_1[0x17] = uStack_68;
  param_1[0x16] = uStack_70;
  param_1[0x19] = uStack_58;
  param_1[0x18] = local_60;
  param_1[0xd] = uStack_b8;
  param_1[0xc] = local_c0;
  param_1[0xf] = uStack_a8;
  param_1[0xe] = uStack_b0;
  param_1[0x11] = uStack_98;
  param_1[0x10] = local_a0;
  param_1[0x13] = uStack_88;
  param_1[0x12] = uStack_90;
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[9] = uStack_d8;
  param_1[8] = local_e0;
  param_1[0xb] = uStack_c8;
  param_1[10] = uStack_d0;
  param_1[1] = uStack_118;
  *param_1 = local_120;
  param_1[3] = uStack_108;
  param_1[2] = uStack_110;
  return;
}

