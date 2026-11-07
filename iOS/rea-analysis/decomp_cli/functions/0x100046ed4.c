// rea decompile_all
// name: FUN_100046ed4
// address: 0x100046ed4
// body: available
// range: 0x100046ed4-0x100046fa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100046ed4(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined1 auStack_c0 [72];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  FUN_100060260();
  uVar1 = *param_2;
  FUN_100041830();
  FUN_10006b084(&local_78,0,0xe000000000000000,uVar1,&DAT_1000f5e28,param_2);
  uStack_48 = uStack_70;
  local_50 = local_78;
  uStack_38 = uStack_60;
  uStack_40 = local_68;
  local_30 = local_58;
  FUN_10005fe24(auStack_c0,0xd00000000000003d,0x80000001000c6c50);
  FUN_10005cdf0(&local_e0,auStack_c0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[4] = local_30;
  param_1[6] = uStack_d8;
  param_1[5] = CONCAT71(uStack_df,local_e0);
  *(undefined1 *)(param_1 + 7) = local_d0;
  return;
}

