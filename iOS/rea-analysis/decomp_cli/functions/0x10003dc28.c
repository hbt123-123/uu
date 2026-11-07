// rea decompile_all
// name: FUN_10003dc28
// address: 0x10003dc28
// body: available
// range: 0x10003dc28-0x10003dd93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003dc28(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined7 uStack_148;
  undefined1 local_141;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined7 uStack_138;
  undefined1 local_131;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 auStack_c0 [72];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  undefined8 local_58;
  
  FUN_10005fe24(auStack_c0,0xd00000000000004a,0x80000001000c63a0);
  FUN_10005cdf0(&local_108,auStack_c0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  uVar2 = 0x6474732d65646f63;
  FUN_100065ca0(0x6474732d65646f63,0xea00000000006e69,0);
  FUN_10005fe24(&local_108,0xd000000000000057,0x80000001000c6340);
  bVar5 = 0;
  puVar3 = (undefined1 *)0x0;
  FUN_100061924();
  puVar4 = puVar3;
  FUN_100060260();
  uVar1 = *puVar4;
  FUN_10002f0ec();
  FUN_10006b084(local_78,0,0xe000000000000000,uVar1,&DAT_1000f31f0,puVar4);
  uStack_129 = (undefined1)uStack_60;
  local_131 = (undefined1)local_78._16_8_;
  uStack_130 = SUB87(local_78._16_8_,1);
  uStack_139 = (undefined1)local_78._8_8_;
  uStack_138 = SUB87(local_78._8_8_,1);
  local_141 = (undefined1)local_78._0_8_;
  uStack_140 = SUB87(local_78._0_8_,1);
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_129,uStack_130);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(local_131,uStack_138);
  param_1[10] = local_58;
  param_1[9] = uStack_60;
  *param_1 = local_108;
  param_1[1] = uStack_100;
  *(undefined1 *)(param_1 + 2) = local_f8;
  param_1[3] = puVar3;
  param_1[4] = uVar2;
  *(byte *)(param_1 + 5) = bVar5 & 1;
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_139,uStack_140);
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(local_141,uStack_148);
  return;
}

