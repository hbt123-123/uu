// rea decompile_all
// name: FUN_10004e444
// address: 0x10004e444
// body: available
// range: 0x10004e444-0x10004e59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004e444(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined7 uStack_148;
  undefined1 local_141;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined7 uStack_138;
  undefined1 uStack_129;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 auStack_c0 [72];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FUN_10005fe24(auStack_c0,0xd000000000000014,0x80000001000c6c10);
  puVar2 = PTR___sSSN_1000f02f8;
  FUN_10005cdf0(&local_108,auStack_c0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  FUN_10005fe24(&local_108,0xd000000000000010,0x80000001000c6c30);
  puVar6 = &local_108;
  FUN_10005cdf0(&local_78,puVar6,0,0,0xff,puVar2,&PTR_PTR_1000f88f0);
  uVar5 = local_68;
  uVar4 = uStack_70;
  uVar3 = local_78;
  FUN_100060260();
  uVar1 = *(undefined1 *)puVar6;
  FUN_10002f0ec();
  FUN_10006b084(&local_78,0,0xe000000000000000,uVar1,&DAT_1000f31f0,puVar6);
  uStack_129 = (undefined1)uStack_60;
  uStack_139 = (undefined1)uStack_70;
  uStack_138 = (undefined7)((ulong)uStack_70 >> 8);
  local_141 = (undefined1)local_78;
  uStack_140 = (undefined7)((ulong)local_78 >> 8);
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_129,uStack_67);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(local_68,uStack_138);
  param_1[10] = local_58;
  param_1[9] = uStack_60;
  *param_1 = local_108;
  param_1[1] = uStack_100;
  *(undefined1 *)(param_1 + 2) = local_f8;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  *(undefined1 *)(param_1 + 5) = uVar5;
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_139,uStack_140);
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(local_141,uStack_148);
  return;
}

