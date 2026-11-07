// rea decompile_all
// name: FUN_10057aaf0
// address: 0x10057aaf0
// body: available
// range: 0x10057aaf0-0x10057ac57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10057aaf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  undefined1 auStack_178 [24];
  undefined *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined1 local_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  _swift_beginAccess(param_4 + 0x28,auStack_178,0,0);
  uStack_118 = *(undefined8 *)(param_4 + 0x70);
  local_120 = *(undefined8 *)(param_4 + 0x68);
  uStack_108 = *(undefined8 *)(param_4 + 0x80);
  local_110 = *(undefined8 *)(param_4 + 0x78);
  local_100 = *(undefined8 *)(param_4 + 0x88);
  uStack_f8 = (undefined1)*(undefined8 *)(param_4 + 0x90);
  uStack_6f = *(undefined8 *)(param_4 + 0x99);
  uStack_ef = (undefined7)uStack_6f;
  local_e8 = (undefined1)((ulong)uStack_6f >> 0x38);
  uStack_f7 = (undefined7)*(undefined8 *)(param_4 + 0x91);
  local_f0 = (undefined1)((ulong)*(undefined8 *)(param_4 + 0x91) >> 0x38);
  uStack_158 = *(undefined8 *)(param_4 + 0x30);
  local_160 = *(undefined **)(param_4 + 0x28);
  puStack_148 = *(undefined **)(param_4 + 0x40);
  local_150 = *(undefined8 *)(param_4 + 0x38);
  uStack_138 = *(undefined8 *)(param_4 + 0x50);
  local_140 = *(undefined8 *)(param_4 + 0x48);
  uStack_128 = *(undefined8 *)(param_4 + 0x60);
  uStack_130 = *(undefined8 *)(param_4 + 0x58);
  iVar1 = (int)&local_e0;
  local_e0 = local_160;
  uStack_d8 = uStack_158;
  uStack_d0 = local_150;
  puStack_c8 = puStack_148;
  local_c0 = local_140;
  uStack_b8 = uStack_138;
  uStack_b0 = uStack_130;
  uStack_a8 = uStack_128;
  local_a0 = local_120;
  uStack_98 = uStack_118;
  uStack_90 = local_110;
  uStack_88 = uStack_108;
  local_80 = local_100;
  uStack_78 = uStack_f8;
  uStack_77 = uStack_f7;
  uStack_70 = local_f0;
  FUN_100276094();
  if (iVar1 == 1) {
    uStack_208 = 0;
    local_210 = 0;
    uVar8 = 1;
    uStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    local_220 = 0;
    uStack_238 = 0;
    local_240 = 0;
    uVar2 = 0;
    puVar5 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    uVar7 = 0xc000000000000000;
    uVar4 = 2;
    uVar9 = 2;
    uVar3 = 0;
  }
  else {
    uStack_238 = local_120;
    local_240 = uStack_128;
    uStack_228 = uStack_130;
    local_230 = uStack_138;
    uStack_218 = CONCAT71(uStack_f7,uStack_f8);
    local_220 = local_100;
    uStack_208 = uStack_108;
    local_210 = local_110;
    uVar8 = CONCAT71(uStack_ef,local_f0);
    uVar2 = uStack_158;
    puVar5 = puStack_148;
    puVar6 = local_160;
    uVar7 = local_150;
    uVar4 = (undefined1)local_140;
    uVar9 = (undefined1)uStack_118;
    uVar3 = local_e8;
  }
  FUN_10007f314(&local_160,auStack_1f8,&DAT_100aab4b0,&DAT_100837c20);
  *param_1 = puVar6;
  param_1[1] = uVar2;
  param_1[2] = uVar7;
  param_1[3] = puVar5;
  *(undefined1 *)(param_1 + 4) = uVar4;
  param_1[8] = uStack_238;
  param_1[7] = local_240;
  param_1[6] = uStack_228;
  param_1[5] = local_230;
  *(undefined1 *)(param_1 + 9) = uVar9;
  param_1[0xb] = uStack_208;
  param_1[10] = local_210;
  param_1[0xd] = uStack_218;
  param_1[0xc] = local_220;
  param_1[0xe] = uVar8;
  *(undefined1 *)(param_1 + 0xf) = uVar3;
  return;
}

