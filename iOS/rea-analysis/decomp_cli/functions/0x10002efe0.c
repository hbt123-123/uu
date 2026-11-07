// rea decompile_all
// name: FUN_10002efe0
// address: 0x10002efe0
// body: available
// range: 0x10002efe0-0x10002f0eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002efe0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined7 uStack_e0;
  undefined1 local_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c1;
  undefined1 auStack_b0 [72];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar4 = &local_f0;
  local_f0 = 0x6f6c6c6568;
  uStack_e8 = 0xe500000000000000;
  FUN_10005fe24(auStack_b0,0x206567617373654d,0xef6f686365206f74);
  FUN_10005be54(&local_68,&local_f0,auStack_b0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  uVar3 = uStack_60;
  uVar2 = local_68;
  local_f0 = CONCAT71(local_f0._1_7_,local_58);
  FUN_100060260();
  uVar1 = *(undefined1 *)puVar4;
  FUN_10002f0ec();
  FUN_10006b084(&local_68,0,0xe000000000000000,uVar1,&DAT_1000f31f0,puVar4);
  uStack_c1 = (undefined1)uStack_50;
  uStack_d1 = (undefined1)uStack_60;
  uStack_d0 = (undefined7)((ulong)uStack_60 >> 8);
  local_d9 = (undefined1)local_68;
  uStack_d8 = (undefined7)((ulong)local_68 >> 8);
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_d1,uStack_d8);
  *(ulong *)((long)param_1 + 0x11) = CONCAT17(local_d9,uStack_e0);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = (undefined1)local_f0;
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_c1,uStack_57);
  *(ulong *)((long)param_1 + 0x21) = CONCAT17(local_58,uStack_d0);
  param_1[7] = local_48;
  param_1[6] = uStack_50;
  return;
}

