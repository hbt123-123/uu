// rea decompile_all
// name: FUN_10002f930
// address: 0x10002f930
// body: available
// range: 0x10002f930-0x10002fa5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002f930(void)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = &DAT_100102bd8;
  FUN_10000eb08(&DAT_100102bd8,&DAT_1000cf6a8);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  puVar2 = puVar1;
  FUN_10002fb54();
  *(undefined **)(puVar1 + 0x20) = &DAT_1000f39c8;
  *(undefined **)(puVar1 + 0x28) = puVar2;
  FUN_10002fb94();
  *(undefined **)(puVar1 + 0x30) = &DAT_1000f3948;
  *(undefined **)(puVar1 + 0x38) = puVar2;
  FUN_10006d1d8(&local_c8,0x72657375,0xe400000000000000,0x6d6f632072657355,0xed000073646e616d,0,0,0,
                0xe000000000000000,0,0xe000000000000000,1);
  uRam00000001001058b8 = uStack_60;
  _DAT_1001058b0 = local_68;
  uRam00000001001058c8 = uStack_50;
  _DAT_1001058c0 = local_58;
  uRam00000001001058d8 = uStack_40;
  _DAT_1001058d0 = local_48;
  DAT_1001058e0 = local_38;
  uRam0000000100105878 = uStack_a0;
  _DAT_100105870 = local_a8;
  uRam0000000100105888 = uStack_90;
  _DAT_100105880 = local_98;
  uRam0000000100105898 = uStack_80;
  _DAT_100105890 = local_88;
  uRam00000001001058a8 = uStack_70;
  _DAT_1001058a0 = local_78;
  uRam0000000100105858 = uStack_c0;
  _DAT_100105850 = local_c8;
  uRam0000000100105868 = uStack_b0;
  _DAT_100105860 = local_b8;
  return;
}

