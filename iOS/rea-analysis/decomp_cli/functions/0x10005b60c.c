// rea decompile_all
// name: FUN_10005b60c
// address: 0x10005b60c
// body: available
// range: 0x10005b60c-0x10005b81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10005b60c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x21;
  long lVar9;
  undefined8 *puVar10;
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
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar9 = *(long *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (lVar9 != 0) {
    puVar10 = (undefined8 *)(param_1 + 0x20);
    do {
      uStack_148 = puVar10[0xf];
      uStack_150 = puVar10[0xe];
      uStack_88 = puVar10[0x11];
      local_90 = puVar10[0x10];
      uStack_138 = puVar10[0x11];
      local_140 = puVar10[0x10];
      uStack_78 = puVar10[0x13];
      uStack_80 = puVar10[0x12];
      uStack_188 = puVar10[7];
      uStack_190 = puVar10[6];
      uStack_c8 = puVar10[9];
      local_d0 = puVar10[8];
      uStack_178 = puVar10[9];
      local_180 = puVar10[8];
      uStack_b8 = puVar10[0xb];
      uStack_c0 = puVar10[10];
      uStack_168 = puVar10[0xb];
      uStack_170 = puVar10[10];
      uStack_a8 = puVar10[0xd];
      local_b0 = puVar10[0xc];
      uStack_158 = puVar10[0xd];
      local_160 = puVar10[0xc];
      uStack_98 = puVar10[0xf];
      uStack_a0 = puVar10[0xe];
      uStack_108 = puVar10[1];
      local_110 = *puVar10;
      uStack_f8 = puVar10[3];
      uStack_100 = puVar10[2];
      uStack_e8 = puVar10[5];
      local_f0 = puVar10[4];
      uStack_d8 = puVar10[7];
      uStack_e0 = puVar10[6];
      uStack_1b8 = puVar10[1];
      local_1c0 = *puVar10;
      uStack_1a8 = puVar10[3];
      uStack_1b0 = puVar10[2];
      uStack_198 = puVar10[5];
      local_1a0 = puVar10[4];
      uStack_128 = puVar10[0x13];
      uStack_130 = puVar10[0x12];
      local_70 = puVar10[0x14];
      local_120 = puVar10[0x14];
      FUN_100052a44(&local_110,&local_290);
      FUN_100059b08(&local_1e0,&local_1c0,param_2,param_3);
      if (unaff_x21 != 0) {
        uStack_208 = uStack_138;
        local_210 = local_140;
        uStack_1f8 = uStack_128;
        uStack_200 = uStack_130;
        local_1f0 = local_120;
        uStack_248 = uStack_178;
        local_250 = local_180;
        uStack_238 = uStack_168;
        uStack_240 = uStack_170;
        uStack_228 = uStack_158;
        local_230 = local_160;
        uStack_218 = uStack_148;
        uStack_220 = uStack_150;
        uStack_288 = uStack_1b8;
        local_290 = local_1c0;
        uStack_278 = uStack_1a8;
        uStack_280 = uStack_1b0;
        uStack_268 = uStack_198;
        local_270 = local_1a0;
        uStack_258 = uStack_188;
        uStack_260 = uStack_190;
        FUN_100052a80(&local_290);
        _swift_bridgeObjectRelease(puVar7);
        return puVar7;
      }
      uStack_208 = uStack_138;
      local_210 = local_140;
      uStack_1f8 = uStack_128;
      uStack_200 = uStack_130;
      local_1f0 = local_120;
      uStack_248 = uStack_178;
      local_250 = local_180;
      uStack_238 = uStack_168;
      uStack_240 = uStack_170;
      uStack_228 = uStack_158;
      local_230 = local_160;
      uStack_218 = uStack_148;
      uStack_220 = uStack_150;
      uStack_288 = uStack_1b8;
      local_290 = local_1c0;
      uStack_278 = uStack_1a8;
      uStack_280 = uStack_1b0;
      uStack_268 = uStack_198;
      local_270 = local_1a0;
      uStack_258 = uStack_188;
      uStack_260 = uStack_190;
      FUN_100052a80(&local_290);
      uVar5 = uStack_1c8;
      uVar4 = local_1d0;
      lVar3 = local_1d8;
      uVar2 = local_1e0;
      if (local_1d8 != 0) {
        puVar6 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar7;
        if (((ulong)puVar6 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_10006f130(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puVar7 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_10006f130(puVar7,uVar1 + 1,1,puVar8);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x20 + 0x20) = uVar2;
        *(long *)(puVar7 + uVar1 * 0x20 + 0x28) = lVar3;
        *(undefined8 *)(puVar7 + uVar1 * 0x20 + 0x38) = uVar5;
        *(undefined8 *)(puVar7 + uVar1 * 0x20 + 0x30) = uVar4;
      }
      puVar10 = puVar10 + 0x15;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return puVar7;
}

