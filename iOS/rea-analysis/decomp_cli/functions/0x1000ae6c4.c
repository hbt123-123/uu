// rea decompile_all
// name: FUN_1000ae6c4
// address: 0x1000ae6c4
// body: available
// range: 0x1000ae6c4-0x1000ae94b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000ae6c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  ulong local_328;
  ulong uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
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
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  ulong local_c0;
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
  
  FUN_1000aebd4(&local_248);
  uStack_158 = uStack_1e0;
  local_160 = local_1e8;
  uStack_148 = uStack_1d0;
  uStack_150 = local_1d8;
  local_140 = local_1c8;
  uStack_198 = uStack_220;
  local_1a0 = local_228;
  uStack_188 = uStack_210;
  local_190 = local_218;
  uStack_178 = uStack_200;
  local_180 = local_208;
  uStack_168 = uStack_1f0;
  uStack_170 = local_1f8;
  uStack_1b8 = uStack_240;
  local_1c0 = local_248;
  uStack_1a8 = uStack_230;
  uStack_1b0 = local_238;
  iVar8 = (int)&local_1c0;
  FUN_1000b0b24();
  uVar6 = uStack_188;
  uVar5 = local_190;
  if (iVar8 != 1) {
    _swift_bridgeObjectRetain(uStack_188);
    FUN_10001fc18(&local_248,&DAT_100104d60,&USHORT_1000d6ad8);
    FUN_1000ae94c(param_1,param_2,param_3);
    if (*(long *)(param_1 + 0x10) != 0) {
      uStack_98 = *(undefined8 *)(param_1 + 0xb8);
      local_a0 = *(undefined8 *)(param_1 + 0xb0);
      uStack_88 = *(undefined8 *)(param_1 + 200);
      uStack_90 = *(undefined8 *)(param_1 + 0xc0);
      uStack_78 = *(undefined8 *)(param_1 + 0xd8);
      local_80 = *(undefined8 *)(param_1 + 0xd0);
      uStack_68 = *(undefined8 *)(param_1 + 0xe8);
      uStack_70 = *(undefined8 *)(param_1 + 0xe0);
      uStack_d8 = *(undefined8 *)(param_1 + 0x78);
      local_e0 = *(undefined8 *)(param_1 + 0x70);
      local_c8 = *(ulong *)(param_1 + 0x88);
      uStack_d0 = *(undefined8 *)(param_1 + 0x80);
      uStack_b8 = *(undefined8 *)(param_1 + 0x98);
      local_c0 = *(ulong *)(param_1 + 0x90);
      uStack_a8 = *(undefined8 *)(param_1 + 0xa8);
      uStack_b0 = *(undefined8 *)(param_1 + 0xa0);
      uStack_118 = *(undefined8 *)(param_1 + 0x38);
      uStack_120 = *(undefined8 *)(param_1 + 0x30);
      uStack_108 = *(undefined8 *)(param_1 + 0x48);
      local_110 = *(undefined8 *)(param_1 + 0x40);
      uStack_f8 = *(undefined8 *)(param_1 + 0x58);
      uStack_100 = *(undefined8 *)(param_1 + 0x50);
      uStack_e8 = *(undefined8 *)(param_1 + 0x68);
      local_f0 = *(undefined8 *)(param_1 + 0x60);
      uStack_128 = *(undefined8 *)(param_1 + 0x28);
      puVar13 = *(undefined **)(param_1 + 0x20);
      local_130 = puVar13;
      FUN_10006ff98(&local_130,&local_318);
      _swift_bridgeObjectRelease(param_1);
      puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
      if ((undefined *)0x1 < puVar13) {
        _swift_bridgeObjectRetain(puVar13);
        puVar11 = puVar13;
      }
      uVar12 = local_c0;
      uVar7 = local_c8;
      if (*(long *)(puVar11 + 0x10) == 0) {
        _swift_bridgeObjectRelease(puVar11);
        local_318 = 0x3c;
        uStack_310 = 0xe100000000000000;
      }
      else {
        uVar2 = *(undefined8 *)(puVar11 + 0x20);
        uVar3 = *(undefined8 *)(puVar11 + 0x28);
        uVar4 = puVar11[0x30];
        FUN_100065610(uVar2,uVar3,uVar4);
        _swift_bridgeObjectRelease(puVar11);
        uVar9 = uVar2;
        uVar10 = uVar3;
        FUN_1000979e4(uVar2,uVar3,uVar4);
        FUN_100065628(uVar2,uVar3,uVar4);
        local_318 = uVar9;
        uStack_310 = uVar10;
        __sSS6appendyySSF(0x3c20,0xe200000000000000);
      }
      uVar1 = uVar7 & 0xffffffffffff;
      if ((uVar12 & 0x2000000000000000) != 0) {
        uVar1 = uVar12 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        FUN_100084a5c(&local_328,&local_130);
        uVar12 = uStack_320;
      }
      else {
        _swift_bridgeObjectRetain(uVar12);
        local_328 = uVar7;
      }
      __sSS6appendyySSF(local_328,uVar12);
      _swift_bridgeObjectRelease(uVar12);
      __sSS6appendyySSF(0x20203e,0xe300000000000000);
      __sSS6appendyySSF(uVar5,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      FUN_10008efb4(&local_130);
      goto LAB_1000ae92c;
    }
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(param_1);
  }
  local_318 = 0;
  uStack_310 = 0xe000000000000000;
LAB_1000ae92c:
  auVar14._8_8_ = uStack_310;
  auVar14._0_8_ = local_318;
  return auVar14;
}

