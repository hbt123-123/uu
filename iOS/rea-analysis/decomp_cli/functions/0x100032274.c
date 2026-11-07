// rea decompile_all
// name: FUN_100032274
// address: 0x100032274
// body: available
// range: 0x100032274-0x10003233f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100032274(void)

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
  
  FUN_10006d1d8(&local_a8,0x656e6e6f63736964,0xea00000000007463,0xd000000000000037,
                0x80000001000c5c90,0,0,0,0xe000000000000000,0,0xe000000000000000,1);
  uRam0000000100105ce0 = uStack_40;
  _DAT_100105cd8 = local_48;
  uRam0000000100105cf0 = uStack_30;
  _DAT_100105ce8 = local_38;
  uRam0000000100105d00 = uStack_20;
  _DAT_100105cf8 = local_28;
  DAT_100105d08 = local_18;
  uRam0000000100105ca0 = uStack_80;
  _DAT_100105c98 = local_88;
  uRam0000000100105cb0 = uStack_70;
  _DAT_100105ca8 = local_78;
  uRam0000000100105cc0 = uStack_60;
  _DAT_100105cb8 = local_68;
  uRam0000000100105cd0 = uStack_50;
  _DAT_100105cc8 = local_58;
  uRam0000000100105c80 = uStack_a0;
  _DAT_100105c78 = local_a8;
  uRam0000000100105c90 = uStack_90;
  _DAT_100105c88 = local_98;
  return;
}

