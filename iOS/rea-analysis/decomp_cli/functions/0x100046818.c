// rea decompile_all
// name: FUN_100046818
// address: 0x100046818
// body: available
// range: 0x100046818-0x100046977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100046818(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined1 auStack_f0 [72];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  FUN_100060260();
  uVar1 = *param_2;
  FUN_100041830();
  FUN_10006b084(&local_a8,0,0xe000000000000000,uVar1,&DAT_1000f5e28,param_2);
  uStack_78 = uStack_a0;
  local_80 = local_a8;
  uStack_68 = uStack_90;
  uStack_70 = uStack_98;
  local_60 = local_88;
  FUN_10005fe24(auStack_f0,0xd000000000000049,0x80000001000c6c90);
  puVar2 = PTR___sSSN_1000f02f8;
  FUN_10005cdf0(&local_138,auStack_f0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  local_140 = local_128;
  uVar3 = 0xd000000000000057;
  FUN_10005fe24(&local_138,0xd000000000000057,0x80000001000c6ce0);
  FUN_1000657bc();
  uVar4 = uVar3;
  FUN_10001d358();
  FUN_1000689d4(&local_160,uVar3,uVar4,&local_138,0,0,0xff,puVar2,&PTR_PTR_1000f88f0);
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  param_1[4] = local_60;
  param_1[5] = local_138;
  param_1[6] = uStack_130;
  *(undefined1 *)(param_1 + 7) = local_140;
  param_1[9] = uStack_158;
  param_1[8] = CONCAT71(uStack_15f,local_160);
  *(undefined1 *)(param_1 + 10) = local_150;
  return;
}

