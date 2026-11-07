// rea decompile_all
// name: FUN_1000315e4
// address: 0x1000315e4
// body: available
// range: 0x1000315e4-0x1000316a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000315e4(void)

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
  
  FUN_10006d1d8(&local_a8,0x6f666e69,0xe400000000000000,0xd000000000000012,0x80000001000c5be0,0,0,0,
                0xe000000000000000,0,0xe000000000000000,1);
  uRam0000000100105bb0 = uStack_40;
  _DAT_100105ba8 = local_48;
  uRam0000000100105bc0 = uStack_30;
  _DAT_100105bb8 = local_38;
  uRam0000000100105bd0 = uStack_20;
  _DAT_100105bc8 = local_28;
  DAT_100105bd8 = local_18;
  uRam0000000100105b70 = uStack_80;
  _DAT_100105b68 = local_88;
  uRam0000000100105b80 = uStack_70;
  _DAT_100105b78 = local_78;
  uRam0000000100105b90 = uStack_60;
  _DAT_100105b88 = local_68;
  uRam0000000100105ba0 = uStack_50;
  _DAT_100105b98 = local_58;
  uRam0000000100105b50 = uStack_a0;
  _DAT_100105b48 = local_a8;
  uRam0000000100105b60 = uStack_90;
  _DAT_100105b58 = local_98;
  return;
}

