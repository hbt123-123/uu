// rea decompile_all
// name: FUN_1000215b0
// address: 0x1000215b0
// body: available
// range: 0x1000215b0-0x10002175b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000215b0(void)

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
  *(undefined8 *)(puVar1 + 0x18) = 0x12;
  *(undefined8 *)(puVar1 + 0x10) = 9;
  puVar2 = puVar1;
  FUN_1000219a0();
  *(undefined **)(puVar1 + 0x20) = &DAT_1000f34e8;
  *(undefined **)(puVar1 + 0x28) = puVar2;
  FUN_1000219e0();
  *(undefined **)(puVar1 + 0x30) = &DAT_1000f3468;
  *(undefined **)(puVar1 + 0x38) = puVar2;
  FUN_100021a20();
  *(undefined **)(puVar1 + 0x40) = &DAT_1000f3878;
  *(undefined **)(puVar1 + 0x48) = puVar2;
  FUN_100021a60();
  *(undefined **)(puVar1 + 0x50) = &DAT_1000f3c70;
  *(undefined **)(puVar1 + 0x58) = puVar2;
  FUN_100021aa0();
  *(undefined **)(puVar1 + 0x60) = &DAT_1000f44a0;
  *(undefined **)(puVar1 + 0x68) = puVar2;
  FUN_100021ae0();
  *(undefined **)(puVar1 + 0x70) = &DAT_1000f4fa0;
  *(undefined **)(puVar1 + 0x78) = puVar2;
  FUN_100021b20();
  *(undefined **)(puVar1 + 0x80) = &DAT_1000f59a0;
  *(undefined **)(puVar1 + 0x88) = puVar2;
  FUN_100021b60();
  *(undefined **)(puVar1 + 0x90) = &DAT_1000f6530;
  *(undefined **)(puVar1 + 0x98) = puVar2;
  FUN_100021ba0();
  *(undefined **)(puVar1 + 0xa0) = &DAT_1000f33e8;
  *(undefined **)(puVar1 + 0xa8) = puVar2;
  FUN_10006d1d8(&local_c8,0x696c632d63797575,0xe800000000000000,0xd00000000000001b,
                0x80000001000c51f0,0,0,0xd000000000000668,0x80000001000c5210,0,0xe000000000000000,1)
  ;
  uRam0000000100105650 = uStack_60;
  _DAT_100105648 = local_68;
  uRam0000000100105660 = uStack_50;
  _DAT_100105658 = local_58;
  uRam0000000100105670 = uStack_40;
  _DAT_100105668 = local_48;
  DAT_100105678 = local_38;
  uRam0000000100105610 = uStack_a0;
  _DAT_100105608 = local_a8;
  uRam0000000100105620 = uStack_90;
  _DAT_100105618 = local_98;
  uRam0000000100105630 = uStack_80;
  _DAT_100105628 = local_88;
  uRam0000000100105640 = uStack_70;
  _DAT_100105638 = local_78;
  uRam00000001001055f0 = uStack_c0;
  _DAT_1001055e8 = local_c8;
  uRam0000000100105600 = uStack_b0;
  _DAT_1001055f8 = local_b8;
  return;
}

