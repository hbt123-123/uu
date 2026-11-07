// rea decompile_all
// name: FUN_10057b248
// address: 0x10057b248
// body: available
// range: 0x10057b248-0x10057b2c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10057b248(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [24];
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  _swift_beginAccess(param_3 + 0x28,auStack_b8,0,0);
  uStack_58 = *(undefined8 *)(param_3 + 0x70);
  local_60 = *(undefined8 *)(param_3 + 0x68);
  uStack_48 = *(undefined8 *)(param_3 + 0x80);
  uStack_50 = *(undefined8 *)(param_3 + 0x78);
  local_40 = *(undefined8 *)(param_3 + 0x88);
  uStack_38 = (undefined1)*(undefined8 *)(param_3 + 0x90);
  uStack_2f = *(undefined8 *)(param_3 + 0x99);
  uStack_37 = (undefined7)*(undefined8 *)(param_3 + 0x91);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0x91) >> 0x38);
  uStack_98 = *(undefined8 *)(param_3 + 0x30);
  local_a0 = *(undefined8 *)(param_3 + 0x28);
  uStack_88 = *(undefined8 *)(param_3 + 0x40);
  uStack_90 = *(undefined8 *)(param_3 + 0x38);
  uStack_78 = *(undefined8 *)(param_3 + 0x50);
  local_80 = *(undefined8 *)(param_3 + 0x48);
  uStack_68 = *(undefined8 *)(param_3 + 0x60);
  uStack_70 = *(undefined8 *)(param_3 + 0x58);
  puVar1 = &local_a0;
  FUN_100276094(puVar1);
  return (int)puVar1 == 0;
}

