// rea decompile_all
// name: FUN_100048900
// address: 0x100048900
// body: available
// range: 0x100048900-0x100048a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100048900(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
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
  puVar2 = param_2;
  FUN_100041830();
  uVar3 = 0;
  FUN_10006b084(&local_90,0,0xe000000000000000,uVar1,&DAT_1000f5e28,puVar2);
  uStack_128 = uStack_88;
  local_130 = local_90;
  uStack_118 = uStack_78;
  uStack_120 = uStack_80;
  local_110 = local_70;
  uVar1 = *param_2;
  FUN_10002f0ec();
  FUN_10006b084(&local_68,0,0xe000000000000000,uVar1,&DAT_1000f31f0,uVar3);
  uStack_100 = uStack_60;
  uStack_108 = local_68;
  uStack_f0 = uStack_50;
  local_f8 = uStack_58;
  local_e8 = local_48;
  FUN_10005fe24(auStack_d8,0x206e6f6973736553,0xec000000656d616e);
  FUN_10005cdf0(&local_150,auStack_d8,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  param_1[5] = uStack_108;
  param_1[4] = local_110;
  param_1[7] = local_f8;
  param_1[6] = uStack_100;
  param_1[1] = uStack_128;
  *param_1 = local_130;
  param_1[3] = uStack_118;
  param_1[2] = uStack_120;
  param_1[9] = local_e8;
  param_1[8] = uStack_f0;
  param_1[0xb] = uStack_148;
  param_1[10] = CONCAT71(uStack_14f,local_150);
  *(undefined1 *)(param_1 + 0xc) = local_140;
  return;
}

