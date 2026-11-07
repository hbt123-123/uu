// rea decompile_all
// name: FUN_10004b00c
// address: 0x10004b00c
// body: available
// range: 0x10004b00c-0x10004b0cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004b00c(void)

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
  
  FUN_10006d1d8(&local_a8,0x686361747461,0xe600000000000000,0xd00000000000003e,0x80000001000c72f0,0,
                0,0,0xe000000000000000,0,0xe000000000000000,1);
  uRam0000000100106c50 = uStack_40;
  _DAT_100106c48 = local_48;
  uRam0000000100106c60 = uStack_30;
  _DAT_100106c58 = local_38;
  uRam0000000100106c70 = uStack_20;
  _DAT_100106c68 = local_28;
  DAT_100106c78 = local_18;
  uRam0000000100106c10 = uStack_80;
  _DAT_100106c08 = local_88;
  uRam0000000100106c20 = uStack_70;
  _DAT_100106c18 = local_78;
  uRam0000000100106c30 = uStack_60;
  _DAT_100106c28 = local_68;
  uRam0000000100106c40 = uStack_50;
  _DAT_100106c38 = local_58;
  uRam0000000100106bf0 = uStack_a0;
  _DAT_100106be8 = local_a8;
  uRam0000000100106c00 = uStack_90;
  _DAT_100106bf8 = local_98;
  return;
}

