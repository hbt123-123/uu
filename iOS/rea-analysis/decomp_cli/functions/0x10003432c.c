// rea decompile_all
// name: FUN_10003432c
// address: 0x10003432c
// body: available
// range: 0x10003432c-0x100034413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003432c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined7 uStack_d8;
  undefined1 local_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_b9;
  undefined1 auStack_a0 [72];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_10005fe24(auStack_a0,0xd000000000000029,0x80000001000c5d10);
  puVar5 = auStack_a0;
  FUN_10005cdf0(&local_58,puVar5,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  uVar4 = local_48;
  uVar3 = uStack_50;
  uVar2 = local_58;
  FUN_100060260();
  uVar1 = *puVar5;
  FUN_10002f0ec();
  FUN_10006b084(&local_58,0,0xe000000000000000,uVar1,&DAT_1000f31f0,puVar5);
  uStack_b9 = (undefined1)uStack_40;
  uStack_c9 = (undefined1)uStack_50;
  uStack_c8 = (undefined7)((ulong)uStack_50 >> 8);
  local_d1 = (undefined1)local_58;
  uStack_d0 = (undefined7)((ulong)local_58 >> 8);
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_c9,uStack_d0);
  *(ulong *)((long)param_1 + 0x11) = CONCAT17(local_d1,uStack_d8);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar4;
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_b9,uStack_47);
  *(ulong *)((long)param_1 + 0x21) = CONCAT17(local_48,uStack_c8);
  param_1[7] = local_38;
  param_1[6] = uStack_40;
  return;
}

