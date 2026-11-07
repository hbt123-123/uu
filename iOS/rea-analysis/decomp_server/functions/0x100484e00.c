// rea decompile_all
// name: FUN_100484e00
// address: 0x100484e00
// body: available
// range: 0x100484e00-0x100484f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100484e00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *local_260;
  undefined *puStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 auStack_220 [136];
  undefined1 auStack_198 [24];
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
  undefined *local_120;
  undefined *puStack_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
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
  
  _swift_beginAccess(param_4 + 0x60,auStack_198,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0xb8);
  uStack_a0 = *(undefined8 *)(param_4 + 0xb0);
  puStack_118 = *(undefined **)(param_4 + 200);
  local_120 = *(undefined **)(param_4 + 0xc0);
  uStack_88 = *(undefined8 *)(param_4 + 200);
  local_90 = *(undefined8 *)(param_4 + 0xc0);
  uStack_108 = *(undefined8 *)(param_4 + 0xd8);
  local_110 = *(undefined **)(param_4 + 0xd0);
  uStack_d8 = *(undefined8 *)(param_4 + 0x78);
  uStack_e0 = *(undefined8 *)(param_4 + 0x70);
  uStack_158 = *(undefined8 *)(param_4 + 0x88);
  local_160 = *(undefined8 *)(param_4 + 0x80);
  uStack_c8 = *(undefined8 *)(param_4 + 0x88);
  local_d0 = *(undefined8 *)(param_4 + 0x80);
  uStack_148 = *(undefined8 *)(param_4 + 0x98);
  local_150 = *(undefined8 *)(param_4 + 0x90);
  uStack_b8 = *(undefined8 *)(param_4 + 0x98);
  uStack_c0 = *(undefined8 *)(param_4 + 0x90);
  uStack_138 = *(undefined8 *)(param_4 + 0xa8);
  local_140 = *(undefined8 *)(param_4 + 0xa0);
  uStack_a8 = *(undefined8 *)(param_4 + 0xa8);
  local_b0 = *(undefined8 *)(param_4 + 0xa0);
  uStack_128 = *(undefined8 *)(param_4 + 0xb8);
  local_130 = *(undefined8 *)(param_4 + 0xb0);
  uStack_178 = *(undefined8 *)(param_4 + 0x68);
  local_180 = *(undefined8 *)(param_4 + 0x60);
  uStack_168 = *(undefined8 *)(param_4 + 0x78);
  local_170 = *(undefined8 *)(param_4 + 0x70);
  uStack_e8 = *(undefined8 *)(param_4 + 0x68);
  local_f0 = *(undefined8 *)(param_4 + 0x60);
  uStack_78 = *(undefined8 *)(param_4 + 0xd8);
  uStack_80 = *(undefined8 *)(param_4 + 0xd0);
  local_100 = *(undefined8 *)(param_4 + 0xe0);
  local_70 = *(undefined8 *)(param_4 + 0xe0);
  iVar1 = (int)&local_f0;
  FUN_1000ab18c();
  if (iVar1 == 1) {
    local_230 = 0;
    local_228 = 0;
    local_240 = 0;
    local_238 = 0;
    local_248 = 0;
    puStack_258 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_260 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_250 = 0xe000000000000000;
    uVar2 = 0xe000000000000000;
    uVar3 = 0xc000000000000000;
    uVar4 = 0xe000000000000000;
    uVar5 = 0xe000000000000000;
    uVar6 = 0xe000000000000000;
    uVar7 = 0xe000000000000000;
    uVar8 = 0;
    puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
    uVar10 = 0;
  }
  else {
    local_230 = local_170;
    local_228 = local_180;
    local_240 = local_150;
    local_238 = local_160;
    local_250 = uStack_178;
    local_248 = local_140;
    puStack_258 = puStack_118;
    local_260 = local_120;
    uVar2 = uStack_168;
    uVar3 = local_100;
    uVar4 = uStack_158;
    uVar5 = uStack_148;
    uVar6 = uStack_138;
    uVar7 = uStack_128;
    uVar8 = local_130;
    puVar9 = local_110;
    uVar10 = uStack_108;
  }
  FUN_10007f314(&local_180,auStack_220,&DAT_100aa0bc0,&DAT_10082de08);
  *param_1 = local_228;
  param_1[1] = local_250;
  param_1[2] = local_230;
  param_1[3] = uVar2;
  param_1[4] = local_238;
  param_1[5] = uVar4;
  param_1[6] = local_240;
  param_1[7] = uVar5;
  param_1[8] = local_248;
  param_1[9] = uVar6;
  param_1[10] = uVar8;
  param_1[0xb] = uVar7;
  param_1[0xd] = puStack_258;
  param_1[0xc] = local_260;
  param_1[0xe] = puVar9;
  param_1[0xf] = uVar10;
  param_1[0x10] = uVar3;
  return;
}

