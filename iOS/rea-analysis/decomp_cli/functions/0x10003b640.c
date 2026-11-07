// rea decompile_all
// name: FUN_10003b640
// address: 0x10003b640
// body: available
// range: 0x10003b640-0x10003b70b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003b640(void)

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
  
  FUN_10006d1d8(&local_a8,0x6f632d7465736572,0xea00000000006564,0xd000000000000036,
                0x80000001000c60c0,0,0,0,0xe000000000000000,0,0xe000000000000000,1);
  uRam0000000100106400 = uStack_40;
  _DAT_1001063f8 = local_48;
  uRam0000000100106410 = uStack_30;
  _DAT_100106408 = local_38;
  uRam0000000100106420 = uStack_20;
  _DAT_100106418 = local_28;
  DAT_100106428 = local_18;
  uRam00000001001063c0 = uStack_80;
  _DAT_1001063b8 = local_88;
  uRam00000001001063d0 = uStack_70;
  _DAT_1001063c8 = local_78;
  uRam00000001001063e0 = uStack_60;
  _DAT_1001063d8 = local_68;
  uRam00000001001063f0 = uStack_50;
  _DAT_1001063e8 = local_58;
  uRam00000001001063a0 = uStack_a0;
  _DAT_100106398 = local_a8;
  uRam00000001001063b0 = uStack_90;
  _DAT_1001063a8 = local_98;
  return;
}

