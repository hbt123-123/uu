// rea decompile_all
// name: FUN_10002e5bc
// address: 0x10002e5bc
// body: available
// range: 0x10002e5bc-0x10002e67b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002e5bc(void)

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
  
  FUN_10006d1d8(&local_a8,0x6f686365,0xe400000000000000,0xd00000000000002c,0x80000001000c5af0,0,0,0,
                0xe000000000000000,0,0xe000000000000000,1);
  uRam0000000100105820 = uStack_40;
  _DAT_100105818 = local_48;
  uRam0000000100105830 = uStack_30;
  _DAT_100105828 = local_38;
  uRam0000000100105840 = uStack_20;
  _DAT_100105838 = local_28;
  DAT_100105848 = local_18;
  uRam00000001001057e0 = uStack_80;
  _DAT_1001057d8 = local_88;
  uRam00000001001057f0 = uStack_70;
  _DAT_1001057e8 = local_78;
  uRam0000000100105800 = uStack_60;
  _DAT_1001057f8 = local_68;
  uRam0000000100105810 = uStack_50;
  _DAT_100105808 = local_58;
  uRam00000001001057c0 = uStack_a0;
  _DAT_1001057b8 = local_a8;
  uRam00000001001057d0 = uStack_90;
  _DAT_1001057c8 = local_98;
  return;
}

