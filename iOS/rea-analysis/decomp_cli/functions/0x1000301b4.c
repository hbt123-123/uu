// rea decompile_all
// name: FUN_1000301b4
// address: 0x1000301b4
// body: available
// range: 0x1000301b4-0x100030277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000301b4(void)

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
  
  FUN_10006d1d8(&local_a8,0x74656c6c6177,0xe600000000000000,0xd00000000000001d,0x80000001000c5b50,0,
                0,0,0xe000000000000000,0,0xe000000000000000,1);
  uRam00000001001059e8 = uStack_40;
  _DAT_1001059e0 = local_48;
  uRam00000001001059f8 = uStack_30;
  _DAT_1001059f0 = local_38;
  uRam0000000100105a08 = uStack_20;
  _DAT_100105a00 = local_28;
  DAT_100105a10 = local_18;
  uRam00000001001059a8 = uStack_80;
  _DAT_1001059a0 = local_88;
  uRam00000001001059b8 = uStack_70;
  _DAT_1001059b0 = local_78;
  uRam00000001001059c8 = uStack_60;
  _DAT_1001059c0 = local_68;
  uRam00000001001059d8 = uStack_50;
  _DAT_1001059d0 = local_58;
  uRam0000000100105988 = uStack_a0;
  _DAT_100105980 = local_a8;
  uRam0000000100105998 = uStack_90;
  _DAT_100105990 = local_98;
  return;
}

