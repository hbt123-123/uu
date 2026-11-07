// rea decompile_all
// name: FUN_1001288d4
// address: 0x1001288d4
// body: available
// range: 0x1001288d4-0x100128abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001288d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_10041740c(&local_148);
  local_100 = local_148;
  _swift_bridgeObjectRelease(0xe000000000000000);
  puVar1 = &DAT_100a75a30;
  FUN_100004bb4(&DAT_100a75a30,&DAT_100809ad8);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x28) = 0x662e63696c627570;
  *(undefined8 *)(puVar1 + 0x30) = 0xef6c72752d656c69;
  *(undefined8 *)(puVar1 + 0x40) = 0xc000000000000000;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  _swift_bridgeObjectRetain(0xef6c72752d656c69);
  FUN_100008184(0,0xc000000000000000);
  FUN_100040bb4(&local_100,&DAT_100a79948,&DAT_10080e690);
  _swift_bridgeObjectRetain_n(param_3,2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_100008184(0,0xc000000000000000);
  FUN_1000407a8(local_138,uStack_130,local_128,uStack_120,local_118);
  uStack_f0 = 1;
  uStack_ec = local_13c;
  uStack_d0 = 0xc000000000000000;
  local_d8 = 0;
  local_c8 = 0;
  uStack_b8 = uStack_108;
  uStack_c0 = local_110;
  local_f8 = puVar1;
  local_e8 = param_2;
  uStack_e0 = param_3;
  FUN_100128ac0(&local_f8,&local_b0);
  _swift_bridgeObjectRelease(param_3);
  FUN_100006cdc(0,0xc000000000000000);
  _swift_bridgeObjectRelease(0xef6c72752d656c69);
  FUN_100006cdc(0,0xc000000000000000);
  local_a8 = 1;
  uStack_a4 = local_13c;
  uStack_88 = 0xc000000000000000;
  local_90 = 0;
  local_80 = 0;
  uStack_70 = uStack_108;
  local_78 = local_110;
  local_b0 = puVar1;
  local_a0 = param_2;
  uStack_98 = param_3;
  FUN_100128afc(&local_b0);
  param_1[5] = uStack_d0;
  param_1[4] = local_d8;
  param_1[7] = uStack_c0;
  param_1[6] = local_c8;
  param_1[8] = uStack_b8;
  param_1[1] = CONCAT44(uStack_ec,uStack_f0);
  *param_1 = local_f8;
  param_1[3] = uStack_e0;
  param_1[2] = local_e8;
  return;
}

