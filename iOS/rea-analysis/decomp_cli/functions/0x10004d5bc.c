// rea decompile_all
// name: FUN_10004d5bc
// address: 0x10004d5bc
// body: available
// range: 0x10004d5bc-0x10004d6d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004d5bc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined1 auStack_98 [72];
  
  FUN_10005fe24(auStack_98,0xd000000000000041,0x80000001000c7490);
  puVar1 = PTR___sSSN_1000f02f8;
  FUN_10005cdf0(&local_e0,auStack_98,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  local_110 = 0x68737a;
  uStack_108 = 0xe300000000000000;
  uVar2 = 0xd000000000000028;
  FUN_10005fe24(&local_e0,0xd000000000000028,0x80000001000c74e0);
  FUN_1000657bc();
  uVar3 = uVar2;
  FUN_10001d358();
  FUN_1000675f8(&local_100,&local_110,uVar2,uVar3,&local_e0,0,0,0xff,puVar1,&PTR_PTR_1000f88f0);
  *param_1 = local_e0;
  param_1[1] = uStack_d8;
  *(undefined1 *)(param_1 + 2) = local_d0;
  param_1[4] = uStack_f8;
  param_1[3] = local_100;
  *(undefined1 *)(param_1 + 5) = local_f0;
  return;
}

