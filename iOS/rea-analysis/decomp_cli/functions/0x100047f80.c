// rea decompile_all
// name: FUN_100047f80
// address: 0x100047f80
// body: available
// range: 0x100047f80-0x10004810b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100047f80(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined1 auStack_d8 [72];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_100060260();
  uVar1 = *param_2;
  puVar3 = param_2;
  FUN_100041830();
  uVar4 = 0;
  FUN_10006b084(&local_90,0,0xe000000000000000,uVar1,&DAT_1000f5e28,puVar3);
  uStack_168 = uStack_88;
  local_170 = local_90;
  uStack_158 = uStack_78;
  uStack_160 = uStack_80;
  local_150 = local_70;
  uVar1 = *param_2;
  FUN_10002f0ec();
  FUN_10006b084(&local_68,0,0xe000000000000000,uVar1,&DAT_1000f31f0,uVar4);
  uStack_140 = uStack_60;
  uStack_148 = local_68;
  uStack_130 = uStack_50;
  local_138 = uStack_58;
  local_128 = local_48;
  FUN_10005fe24(auStack_d8,0xd000000000000014,0x80000001000c6c10);
  puVar2 = PTR___sSSN_1000f02f8;
  FUN_10005cdf0(&local_120,auStack_d8,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  local_178 = local_110;
  FUN_10005fe24(&local_120,0xd000000000000010,0x80000001000c6c30);
  FUN_10005cdf0(&local_190,&local_120,0,0,0xff,puVar2,&PTR_PTR_1000f88f0);
  param_1[5] = uStack_148;
  param_1[4] = local_150;
  param_1[7] = local_138;
  param_1[6] = uStack_140;
  param_1[9] = local_128;
  param_1[8] = uStack_130;
  param_1[1] = uStack_168;
  *param_1 = local_170;
  param_1[3] = uStack_158;
  param_1[2] = uStack_160;
  param_1[10] = local_120;
  param_1[0xb] = uStack_118;
  *(undefined1 *)(param_1 + 0xc) = local_178;
  param_1[0xe] = uStack_188;
  param_1[0xd] = CONCAT71(uStack_18f,local_190);
  *(undefined1 *)(param_1 + 0xf) = local_180;
  return;
}

