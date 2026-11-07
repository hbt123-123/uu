// rea decompile_all
// name: FUN_10008ea1c
// address: 0x10008ea1c
// body: available
// range: 0x10008ea1c-0x10008ecb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008ea1c(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long local_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long local_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long local_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long local_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long local_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined *local_68;
  
  uVar7 = *(ulong *)(param_3 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar7 != 0) {
    uVar5 = 0;
    do {
      plVar4 = (long *)(param_3 + 0x20 + uVar5 * 0xd0);
      while( true ) {
        if (uVar7 <= uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10008ecac);
          (*pcVar2)();
        }
        lStack_98 = plVar4[0x15];
        local_a0 = plVar4[0x14];
        lStack_88 = plVar4[0x17];
        local_90 = plVar4[0x16];
        lStack_78 = plVar4[0x19];
        local_80 = plVar4[0x18];
        lStack_d8 = plVar4[0xd];
        local_e0 = plVar4[0xc];
        lStack_c8 = plVar4[0xf];
        local_d0 = plVar4[0xe];
        lStack_b8 = plVar4[0x11];
        local_c0 = plVar4[0x10];
        lStack_a8 = plVar4[0x13];
        local_b0 = plVar4[0x12];
        lStack_118 = plVar4[5];
        local_120 = plVar4[4];
        lStack_108 = plVar4[7];
        local_110 = plVar4[6];
        lStack_f8 = plVar4[9];
        local_100 = plVar4[8];
        lStack_e8 = plVar4[0xb];
        local_f0 = plVar4[10];
        lStack_138 = plVar4[1];
        local_140 = *plVar4;
        lStack_128 = plVar4[3];
        local_130 = plVar4[2];
        uVar1 = uVar5 + 1;
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10008ecb0);
          (*pcVar2)();
        }
        if (local_140 == 0) break;
        uVar5 = uVar5 + 1;
        plVar4 = plVar4 + 0x1a;
        if (uVar1 == uVar7) goto LAB_10008eb88;
      }
      FUN_10006ff98(&local_140,&local_210);
      puVar3 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      local_68 = puVar6;
      if (((ulong)puVar3 & 1) == 0) {
        FUN_100079958(0,*(long *)(puVar6 + 0x10) + 1,1);
      }
      uVar5 = *(ulong *)(local_68 + 0x10);
      if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar5) {
        FUN_100079958(1 < *(ulong *)(local_68 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar5 + 1;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x28) = lStack_138;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x20) = local_140;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x58) = lStack_108;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x50) = local_110;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x68) = lStack_f8;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x60) = local_100;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x38) = lStack_128;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x30) = local_130;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x48) = lStack_118;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x40) = local_120;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x98) = lStack_c8;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x90) = local_d0;
      *(long *)(local_68 + uVar5 * 0xd0 + 0xa8) = lStack_b8;
      *(long *)(local_68 + uVar5 * 0xd0 + 0xa0) = local_c0;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x78) = lStack_e8;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x70) = local_f0;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x88) = lStack_d8;
      *(long *)(local_68 + uVar5 * 0xd0 + 0x80) = local_e0;
      *(long *)(local_68 + uVar5 * 0xd0 + 0xd8) = lStack_88;
      *(long *)(local_68 + uVar5 * 0xd0 + 0xd0) = local_90;
      *(long *)(local_68 + uVar5 * 0xd0 + 0xe8) = lStack_78;
      *(long *)(local_68 + uVar5 * 0xd0 + 0xe0) = local_80;
      *(long *)(local_68 + uVar5 * 0xd0 + 0xb8) = lStack_a8;
      *(long *)(local_68 + uVar5 * 0xd0 + 0xb0) = local_b0;
      *(long *)(local_68 + uVar5 * 0xd0 + 200) = lStack_98;
      *(long *)(local_68 + uVar5 * 0xd0 + 0xc0) = local_a0;
      puVar6 = local_68;
      uVar5 = uVar1;
    } while (uVar1 != uVar7);
  }
LAB_10008eb88:
  if (param_2 < *(long *)(puVar6 + 0x10)) {
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10008ecb4);
      (*pcVar2)();
    }
    uStack_2d8 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x28);
    local_2e0 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x20);
    uStack_2c8 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x38);
    local_2d0 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x30);
    uStack_2b8 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x48);
    uStack_2c0 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x40);
    uStack_2a8 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x58);
    local_2b0 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x50);
    uStack_298 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x68);
    uStack_2a0 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x60);
    uStack_288 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x78);
    local_290 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x70);
    uStack_278 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x88);
    uStack_280 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x80);
    uStack_268 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x98);
    local_270 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0x90);
    uStack_258 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0xa8);
    uStack_260 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0xa0);
    uStack_248 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0xb8);
    local_250 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0xb0);
    uStack_238 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 200);
    uStack_240 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0xc0);
    uStack_228 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0xd8);
    local_230 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0xd0);
    uStack_218 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0xe8);
    uStack_220 = *(undefined8 *)(puVar6 + param_2 * 0xd0 + 0xe0);
    _memmove(&local_210,puVar6 + param_2 * 0xd0 + 0x20,0xd0);
    FUN_1000045b0(&local_210);
    FUN_10006ff98(&local_2e0,&local_140);
    _swift_release(puVar6);
    lStack_98 = lStack_168;
    local_a0 = local_170;
    lStack_88 = lStack_158;
    local_90 = lStack_160;
    lStack_78 = lStack_148;
    local_80 = local_150;
    lStack_d8 = lStack_1a8;
    local_e0 = local_1b0;
    lStack_c8 = lStack_198;
    local_d0 = lStack_1a0;
    lStack_b8 = lStack_188;
    local_c0 = local_190;
    lStack_a8 = lStack_178;
    local_b0 = lStack_180;
    lStack_118 = lStack_1e8;
    local_120 = local_1f0;
    lStack_108 = lStack_1d8;
    local_110 = lStack_1e0;
    lStack_f8 = lStack_1c8;
    local_100 = local_1d0;
    lStack_e8 = lStack_1b8;
    local_f0 = lStack_1c0;
    lStack_138 = lStack_208;
    local_140 = local_210;
    lStack_128 = lStack_1f8;
    local_130 = lStack_200;
  }
  else {
    _swift_release(puVar6);
    FUN_10006ffec(&local_140);
  }
  param_1[0x15] = lStack_98;
  param_1[0x14] = local_a0;
  param_1[0x17] = lStack_88;
  param_1[0x16] = local_90;
  param_1[0x19] = lStack_78;
  param_1[0x18] = local_80;
  param_1[0xd] = lStack_d8;
  param_1[0xc] = local_e0;
  param_1[0xf] = lStack_c8;
  param_1[0xe] = local_d0;
  param_1[0x11] = lStack_b8;
  param_1[0x10] = local_c0;
  param_1[0x13] = lStack_a8;
  param_1[0x12] = local_b0;
  param_1[5] = lStack_118;
  param_1[4] = local_120;
  param_1[7] = lStack_108;
  param_1[6] = local_110;
  param_1[9] = lStack_f8;
  param_1[8] = local_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = local_f0;
  param_1[1] = lStack_138;
  *param_1 = local_140;
  param_1[3] = lStack_128;
  param_1[2] = local_130;
  return;
}

