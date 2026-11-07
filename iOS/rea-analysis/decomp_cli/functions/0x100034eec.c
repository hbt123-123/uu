// rea decompile_all
// name: FUN_100034eec
// address: 0x100034eec
// body: available
// range: 0x100034eec-0x10003506f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100034eec(void)

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
  *(undefined8 *)(puVar1 + 0x18) = 0xe;
  *(undefined8 *)(puVar1 + 0x10) = 7;
  puVar2 = puVar1;
  FUN_100035154();
  *(undefined **)(puVar1 + 0x20) = &DAT_1000f4870;
  *(undefined **)(puVar1 + 0x28) = puVar2;
  FUN_100035194();
  *(undefined **)(puVar1 + 0x30) = &DAT_1000f47f0;
  *(undefined **)(puVar1 + 0x38) = puVar2;
  FUN_1000351d4();
  *(undefined **)(puVar1 + 0x40) = &DAT_1000f4770;
  *(undefined **)(puVar1 + 0x48) = puVar2;
  FUN_100035214();
  *(undefined **)(puVar1 + 0x50) = &DAT_1000f46f0;
  *(undefined **)(puVar1 + 0x58) = puVar2;
  FUN_100035254();
  *(undefined **)(puVar1 + 0x60) = &DAT_1000f4670;
  *(undefined **)(puVar1 + 0x68) = puVar2;
  FUN_100035294();
  *(undefined **)(puVar1 + 0x70) = &DAT_1000f45f0;
  *(undefined **)(puVar1 + 0x78) = puVar2;
  FUN_1000352d4();
  *(undefined **)(puVar1 + 0x80) = &DAT_1000f4570;
  *(undefined **)(puVar1 + 0x88) = puVar2;
  FUN_10006d1d8(&local_d8,0x637064756f6c63,0xe700000000000000,0xd00000000000001c,0x80000001000c5d60,
                0,0,0,0xe000000000000000,0,0xe000000000000000,1);
  uRam0000000100105e10 = uStack_70;
  _DAT_100105e08 = local_78;
  uRam0000000100105e20 = uStack_60;
  _DAT_100105e18 = local_68;
  uRam0000000100105e30 = uStack_50;
  _DAT_100105e28 = local_58;
  DAT_100105e38 = local_48;
  uRam0000000100105dd0 = uStack_b0;
  _DAT_100105dc8 = local_b8;
  uRam0000000100105de0 = uStack_a0;
  _DAT_100105dd8 = local_a8;
  uRam0000000100105df0 = uStack_90;
  _DAT_100105de8 = local_98;
  uRam0000000100105e00 = uStack_80;
  _DAT_100105df8 = local_88;
  uRam0000000100105db0 = uStack_d0;
  _DAT_100105da8 = local_d8;
  uRam0000000100105dc0 = uStack_c0;
  _DAT_100105db8 = local_c8;
  return;
}

