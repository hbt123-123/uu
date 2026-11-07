// rea decompile_all
// name: FUN_100485fa0
// address: 0x100485fa0
// body: available
// range: 0x100485fa0-0x100486037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100485fa0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_128 [24];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  _swift_beginAccess(param_3 + 0xe8,auStack_128,0,0);
  uStack_68 = *(undefined8 *)(param_3 + 400);
  uStack_70 = *(undefined8 *)(param_3 + 0x188);
  uStack_58 = *(undefined8 *)(param_3 + 0x1a0);
  local_60 = *(undefined8 *)(param_3 + 0x198);
  uStack_48 = *(undefined8 *)(param_3 + 0x1b0);
  uStack_50 = *(undefined8 *)(param_3 + 0x1a8);
  uStack_38 = *(undefined8 *)(param_3 + 0x1c0);
  local_40 = *(undefined8 *)(param_3 + 0x1b8);
  uStack_a8 = *(undefined8 *)(param_3 + 0x150);
  uStack_b0 = *(undefined8 *)(param_3 + 0x148);
  uStack_98 = *(undefined8 *)(param_3 + 0x160);
  local_a0 = *(undefined8 *)(param_3 + 0x158);
  uStack_88 = *(undefined8 *)(param_3 + 0x170);
  uStack_90 = *(undefined8 *)(param_3 + 0x168);
  uStack_78 = *(undefined8 *)(param_3 + 0x180);
  local_80 = *(undefined8 *)(param_3 + 0x178);
  uStack_e8 = *(undefined8 *)(param_3 + 0x110);
  local_f0 = *(undefined8 *)(param_3 + 0x108);
  uStack_d8 = *(undefined8 *)(param_3 + 0x120);
  uStack_e0 = *(undefined8 *)(param_3 + 0x118);
  uStack_c8 = *(undefined8 *)(param_3 + 0x130);
  local_d0 = *(undefined8 *)(param_3 + 0x128);
  uStack_b8 = *(undefined8 *)(param_3 + 0x140);
  local_c0 = *(undefined8 *)(param_3 + 0x138);
  uStack_108 = *(undefined8 *)(param_3 + 0xf0);
  local_110 = *(undefined8 *)(param_3 + 0xe8);
  uStack_f8 = *(undefined8 *)(param_3 + 0x100);
  uStack_100 = *(undefined8 *)(param_3 + 0xf8);
  puVar1 = &local_110;
  FUN_1000ab18c(puVar1);
  return (int)puVar1 == 0;
}

