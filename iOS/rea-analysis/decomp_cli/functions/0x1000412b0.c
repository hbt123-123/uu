// rea decompile_all
// name: FUN_1000412b0
// address: 0x1000412b0
// body: available
// range: 0x1000412b0-0x100041423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000412b0(void)

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
  *(undefined8 *)(puVar1 + 0x18) = 0xc;
  *(undefined8 *)(puVar1 + 0x10) = 6;
  puVar2 = puVar1;
  FUN_1000416b0();
  *(undefined **)(puVar1 + 0x20) = &DAT_1000f5da0;
  *(undefined **)(puVar1 + 0x28) = puVar2;
  FUN_1000416f0();
  *(undefined **)(puVar1 + 0x30) = &DAT_1000f5d20;
  *(undefined **)(puVar1 + 0x38) = puVar2;
  FUN_100041730();
  *(undefined **)(puVar1 + 0x40) = &DAT_1000f5ca0;
  *(undefined **)(puVar1 + 0x48) = puVar2;
  FUN_100041770();
  *(undefined **)(puVar1 + 0x50) = &DAT_1000f5c18;
  *(undefined **)(puVar1 + 0x58) = puVar2;
  FUN_1000417b0();
  *(undefined **)(puVar1 + 0x60) = &DAT_1000f5b90;
  *(undefined **)(puVar1 + 0x68) = puVar2;
  FUN_1000417f0();
  *(undefined **)(puVar1 + 0x70) = &DAT_1000f5b08;
  *(undefined **)(puVar1 + 0x78) = puVar2;
  FUN_10006d1d8(&local_c8,0x6d726574,0xe400000000000000,0xd000000000000022,0x80000001000c63f0,0,0,
                0xd000000000000528,0x80000001000c6420,0,0xe000000000000000,1);
  uRam00000001001066f8 = uStack_60;
  _DAT_1001066f0 = local_68;
  uRam0000000100106708 = uStack_50;
  _DAT_100106700 = local_58;
  uRam0000000100106718 = uStack_40;
  _DAT_100106710 = local_48;
  DAT_100106720 = local_38;
  uRam00000001001066b8 = uStack_a0;
  _DAT_1001066b0 = local_a8;
  uRam00000001001066c8 = uStack_90;
  _DAT_1001066c0 = local_98;
  uRam00000001001066d8 = uStack_80;
  _DAT_1001066d0 = local_88;
  uRam00000001001066e8 = uStack_70;
  _DAT_1001066e0 = local_78;
  uRam0000000100106698 = uStack_c0;
  _DAT_100106690 = local_c8;
  uRam00000001001066a8 = uStack_b0;
  _DAT_1001066a0 = local_b8;
  return;
}

