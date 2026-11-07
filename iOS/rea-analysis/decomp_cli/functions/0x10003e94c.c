// rea decompile_all
// name: FUN_10003e94c
// address: 0x10003e94c
// body: available
// range: 0x10003e94c-0x10003eb1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003e94c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  undefined7 uStack_1a8;
  undefined1 local_1a1;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined7 uStack_198;
  undefined1 local_191;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined1 auStack_d0 [72];
  undefined1 local_88 [24];
  undefined8 uStack_70;
  undefined8 local_68;
  
  FUN_10005fe24(auStack_d0,0x4920747369737341,0xe900000000000044);
  puVar2 = PTR___sSSN_1000f02f8;
  FUN_10005cdf0(&local_118,auStack_d0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  FUN_10005fe24(&local_118,0xd000000000000038,0x80000001000c6300);
  FUN_10005cdf0(&local_160,&local_118,0,0,0xff,puVar2,&PTR_PTR_1000f88f0);
  uVar3 = 0x6474732d65646f63;
  FUN_100065ca0(0x6474732d65646f63,0xea00000000006e69,0);
  FUN_10005fe24(&local_160,0xd000000000000057,0x80000001000c6340);
  bVar6 = 0;
  puVar4 = (undefined1 *)0x0;
  FUN_100061924();
  puVar5 = puVar4;
  FUN_100060260();
  uVar1 = *puVar5;
  FUN_10002f0ec();
  FUN_10006b084(local_88,0,0xe000000000000000,uVar1,&DAT_1000f31f0,puVar5);
  uStack_199 = (undefined1)local_88._8_8_;
  uStack_198 = SUB87(local_88._8_8_,1);
  local_1a1 = (undefined1)local_88._0_8_;
  uStack_1a0 = SUB87(local_88._0_8_,1);
  uStack_189 = (undefined1)uStack_70;
  local_191 = (undefined1)local_88._16_8_;
  uStack_190 = SUB87(local_88._16_8_,1);
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_199,uStack_1a0);
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(local_1a1,uStack_1a8);
  *param_1 = local_118;
  param_1[1] = uStack_110;
  *(undefined1 *)(param_1 + 2) = local_108;
  param_1[3] = local_160;
  param_1[4] = uStack_158;
  *(undefined1 *)(param_1 + 5) = local_150;
  param_1[6] = puVar4;
  param_1[7] = uVar3;
  *(byte *)(param_1 + 8) = bVar6 & 1;
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_189,uStack_190);
  *(ulong *)((long)param_1 + 0x51) = CONCAT17(local_191,uStack_198);
  param_1[0xd] = local_68;
  param_1[0xc] = uStack_70;
  return;
}

