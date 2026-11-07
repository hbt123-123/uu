// rea decompile_all
// name: FUN_1000ff738
// address: 0x1000ff738
// body: available
// range: 0x1000ff738-0x1000ff8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ff738(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_220 [16];
  undefined8 *local_210;
  undefined1 auStack_1f8 [176];
  undefined *local_148 [3];
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar2 = *(undefined8 *)(DAT_100b360a8 + 0x88);
  _swift_retain(uVar2);
  FUN_100083910(&local_110,param_1,param_2);
  _swift_release(uVar2);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_210 = &local_110;
  FUN_1003fb48c(param_5,auStack_220,0xd000000000000094,0x800000010088a280,0xd00000000000001e,
                0x800000010088a320,0x4f,0);
  local_130 = &DAT_1009dd308;
  FUN_100102d80();
  local_128 = param_5;
  FUN_100102dc0();
  puVar1 = &DAT_10099cf68;
  local_120 = param_5;
  _swift_allocObject(&DAT_10099cf68,0xc0,7);
  *(undefined8 *)(puVar1 + 0x98) = uStack_88;
  *(undefined8 *)(puVar1 + 0x90) = local_90;
  *(undefined8 *)(puVar1 + 0xa8) = uStack_78;
  *(undefined8 *)(puVar1 + 0xa0) = uStack_80;
  *(undefined8 *)(puVar1 + 0xb8) = uStack_68;
  *(undefined8 *)(puVar1 + 0xb0) = local_70;
  *(undefined8 *)(puVar1 + 0x58) = uStack_c8;
  *(undefined8 *)(puVar1 + 0x50) = local_d0;
  *(undefined8 *)(puVar1 + 0x68) = uStack_b8;
  *(undefined8 *)(puVar1 + 0x60) = uStack_c0;
  *(undefined8 *)(puVar1 + 0x78) = uStack_a8;
  *(undefined8 *)(puVar1 + 0x70) = local_b0;
  *(undefined8 *)(puVar1 + 0x88) = uStack_98;
  *(undefined8 *)(puVar1 + 0x80) = uStack_a0;
  *(undefined8 *)(puVar1 + 0x18) = uStack_108;
  *(undefined8 *)(puVar1 + 0x10) = local_110;
  *(undefined8 *)(puVar1 + 0x28) = uStack_f8;
  *(undefined8 *)(puVar1 + 0x20) = uStack_100;
  *(undefined8 *)(puVar1 + 0x38) = uStack_e8;
  *(undefined8 *)(puVar1 + 0x30) = local_f0;
  *(undefined8 *)(puVar1 + 0x48) = uStack_d8;
  *(undefined8 *)(puVar1 + 0x40) = uStack_e0;
  local_118 = 1;
  local_148[0] = puVar1;
  FUN_10008f6c4(&local_110,auStack_1f8);
  (*param_3)(local_148);
  FUN_10008f3dc(&local_110);
  FUN_100102518(local_148);
  return;
}

