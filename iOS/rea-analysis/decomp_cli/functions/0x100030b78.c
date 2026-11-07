// rea decompile_all
// name: FUN_100030b78
// address: 0x100030b78
// body: available
// range: 0x100030b78-0x100030cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100030b78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  
  puVar1 = &DAT_100102bd8;
  FUN_10000eb08(&DAT_100102bd8,&DAT_1000cf6a8);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 10;
  *(undefined8 *)(puVar1 + 0x10) = 5;
  puVar2 = puVar1;
  FUN_100030dbc();
  *(undefined **)(puVar1 + 0x20) = &DAT_1000f3f40;
  *(undefined **)(puVar1 + 0x28) = puVar2;
  FUN_100030dfc();
  *(undefined **)(puVar1 + 0x30) = &DAT_1000f3ec0;
  *(undefined **)(puVar1 + 0x38) = puVar2;
  FUN_100030e3c();
  *(undefined **)(puVar1 + 0x40) = &DAT_1000f3e40;
  *(undefined **)(puVar1 + 0x48) = puVar2;
  FUN_100030e7c();
  *(undefined **)(puVar1 + 0x50) = &DAT_1000f3dc0;
  *(undefined **)(puVar1 + 0x58) = puVar2;
  FUN_100030ebc();
  *(undefined **)(puVar1 + 0x60) = &DAT_1000f3d40;
  *(undefined **)(puVar1 + 0x68) = puVar2;
  FUN_10006d1d8(&local_d8,0x656369766564,0xe600000000000000,0xd00000000000001a,0x80000001000c5b70,0,
                0,0,0xe000000000000000,0,0xe000000000000000,1);
  uRam0000000100105a80 = uStack_70;
  _DAT_100105a78 = local_78;
  uRam0000000100105a90 = uStack_60;
  _DAT_100105a88 = local_68;
  uRam0000000100105aa0 = uStack_50;
  _DAT_100105a98 = local_58;
  DAT_100105aa8 = local_48;
  uRam0000000100105a40 = uStack_b0;
  _DAT_100105a38 = local_b8;
  uRam0000000100105a50 = uStack_a0;
  _DAT_100105a48 = local_a8;
  uRam0000000100105a60 = uStack_90;
  _DAT_100105a58 = local_98;
  uRam0000000100105a70 = uStack_80;
  _DAT_100105a68 = local_88;
  uRam0000000100105a20 = uStack_d0;
  _DAT_100105a18 = local_d8;
  uRam0000000100105a30 = uStack_c0;
  _DAT_100105a28 = local_c8;
  return;
}

