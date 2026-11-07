// rea decompile_all
// name: FUN_100434db4
// address: 0x100434db4
// body: available
// range: 0x100434db4-0x100434e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100434db4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_d8 [24];
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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  _swift_beginAccess(param_3 + 0x20,auStack_d8,0,0);
  uStack_58 = *(undefined8 *)(param_3 + 0x88);
  uStack_60 = *(undefined8 *)(param_3 + 0x80);
  uStack_48 = *(undefined8 *)(param_3 + 0x98);
  local_50 = *(undefined8 *)(param_3 + 0x90);
  uStack_38 = *(undefined8 *)(param_3 + 0xa8);
  uStack_40 = *(undefined8 *)(param_3 + 0xa0);
  local_30 = *(undefined8 *)(param_3 + 0xb0);
  uStack_98 = *(undefined8 *)(param_3 + 0x48);
  local_a0 = *(undefined8 *)(param_3 + 0x40);
  uStack_88 = *(undefined8 *)(param_3 + 0x58);
  uStack_90 = *(undefined8 *)(param_3 + 0x50);
  uStack_78 = *(undefined8 *)(param_3 + 0x68);
  local_80 = *(undefined8 *)(param_3 + 0x60);
  uStack_68 = *(undefined8 *)(param_3 + 0x78);
  local_70 = *(undefined8 *)(param_3 + 0x70);
  uStack_b8 = *(undefined8 *)(param_3 + 0x28);
  local_c0 = *(undefined8 *)(param_3 + 0x20);
  uStack_a8 = *(undefined8 *)(param_3 + 0x38);
  uStack_b0 = *(undefined8 *)(param_3 + 0x30);
  puVar1 = &local_c0;
  FUN_100438dbc(puVar1);
  return (int)puVar1 == 0;
}

