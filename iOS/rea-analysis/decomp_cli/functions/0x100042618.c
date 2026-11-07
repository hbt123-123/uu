// rea decompile_all
// name: FUN_100042618
// address: 0x100042618
// body: available
// range: 0x100042618-0x1000426fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100042618(void)

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
  FUN_10006d1d8(&local_b8,0x736c,0xe200000000000000,0xd00000000000002d,0x80000001000c6ad0,0,0,0,
                0xe000000000000000,0,0xe000000000000000,1);
  uRam00000001001068c0 = uStack_50;
  _DAT_1001068b8 = local_58;
  uRam00000001001068d0 = uStack_40;
  _DAT_1001068c8 = local_48;
  uRam00000001001068e0 = uStack_30;
  _DAT_1001068d8 = local_38;
  DAT_1001068e8 = local_28;
  uRam0000000100106880 = uStack_90;
  _DAT_100106878 = local_98;
  uRam0000000100106890 = uStack_80;
  _DAT_100106888 = local_88;
  uRam00000001001068a0 = uStack_70;
  _DAT_100106898 = local_78;
  uRam00000001001068b0 = uStack_60;
  _DAT_1001068a8 = local_68;
  uRam0000000100106860 = uStack_b0;
  _DAT_100106858 = local_b8;
  uRam0000000100106870 = uStack_a0;
  _DAT_100106868 = local_a8;
  return;
}

