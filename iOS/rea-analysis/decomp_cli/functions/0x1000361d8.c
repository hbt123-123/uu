// rea decompile_all
// name: FUN_1000361d8
// address: 0x1000361d8
// body: available
// range: 0x1000361d8-0x10003629b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000361d8(void)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FUN_10006d1d8(&local_a8,0x68636e75616c,0xe600000000000000,0xd000000000000046,0x80000001000c5e30,0,
                0,0,0xe000000000000000,0,0xe000000000000000,1);
  uRam0000000100105fd8 = uStack_40;
  _DAT_100105fd0 = local_48;
  uRam0000000100105fe8 = uStack_30;
  _DAT_100105fe0 = local_38;
  uRam0000000100105ff8 = uStack_20;
  _DAT_100105ff0 = local_28;
  DAT_100106000 = local_18;
  uRam0000000100105f98 = uStack_80;
  _DAT_100105f90 = local_88;
  uRam0000000100105fa8 = uStack_70;
  _DAT_100105fa0 = local_78;
  uRam0000000100105fb8 = uStack_60;
  _DAT_100105fb0 = local_68;
  uRam0000000100105fc8 = uStack_50;
  _DAT_100105fc0 = local_58;
  uRam0000000100105f78 = uStack_a0;
  _DAT_100105f70 = local_a8;
  uRam0000000100105f88 = uStack_90;
  _DAT_100105f80 = local_98;
  return;
}

