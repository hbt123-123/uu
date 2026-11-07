// rea decompile_all
// name: FUN_100485518
// address: 0x100485518
// body: available
// range: 0x100485518-0x100485587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100485518(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
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
  
  _swift_beginAccess(param_3 + 0x60,auStack_c8,0,0);
  uStack_48 = *(undefined8 *)(param_3 + 200);
  local_50 = *(undefined8 *)(param_3 + 0xc0);
  uStack_38 = *(undefined8 *)(param_3 + 0xd8);
  uStack_40 = *(undefined8 *)(param_3 + 0xd0);
  local_30 = *(undefined8 *)(param_3 + 0xe0);
  uStack_88 = *(undefined8 *)(param_3 + 0x88);
  local_90 = *(undefined8 *)(param_3 + 0x80);
  uStack_78 = *(undefined8 *)(param_3 + 0x98);
  uStack_80 = *(undefined8 *)(param_3 + 0x90);
  uStack_68 = *(undefined8 *)(param_3 + 0xa8);
  local_70 = *(undefined8 *)(param_3 + 0xa0);
  uStack_58 = *(undefined8 *)(param_3 + 0xb8);
  uStack_60 = *(undefined8 *)(param_3 + 0xb0);
  uStack_a8 = *(undefined8 *)(param_3 + 0x68);
  local_b0 = *(undefined8 *)(param_3 + 0x60);
  uStack_98 = *(undefined8 *)(param_3 + 0x78);
  uStack_a0 = *(undefined8 *)(param_3 + 0x70);
  puVar1 = &local_b0;
  FUN_1000ab18c(puVar1);
  return (int)puVar1 == 0;
}

