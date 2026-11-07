// rea decompile_all
// name: FUN_100035384
// address: 0x100035384
// body: available
// range: 0x100035384-0x100035467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100035384(void)

{
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  
  FUN_10000eb08(&DAT_100102c30,&DAT_1000d0700);
  _swift_initStaticObject();
  FUN_10006d1d8(&local_b8,0x736c,0xe200000000000000,0xd000000000000011,0x80000001000c5d80,0,0,0,
                0xe000000000000000,0,0xe000000000000000,1);
  uRam0000000100105ea8 = uStack_50;
  _DAT_100105ea0 = local_58;
  uRam0000000100105eb8 = uStack_40;
  _DAT_100105eb0 = local_48;
  uRam0000000100105ec8 = uStack_30;
  _DAT_100105ec0 = local_38;
  DAT_100105ed0 = local_28;
  uRam0000000100105e68 = uStack_90;
  _DAT_100105e60 = local_98;
  uRam0000000100105e78 = uStack_80;
  _DAT_100105e70 = local_88;
  uRam0000000100105e88 = uStack_70;
  _DAT_100105e80 = local_78;
  uRam0000000100105e98 = uStack_60;
  _DAT_100105e90 = local_68;
  uRam0000000100105e48 = uStack_b0;
  _DAT_100105e40 = local_b8;
  uRam0000000100105e58 = uStack_a0;
  _DAT_100105e50 = local_a8;
  return;
}

