// rea decompile_all
// name: FUN_100100e20
// address: 0x100100e20
// body: available
// range: 0x100100e20-0x100100fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100100e20(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_220 [16];
  undefined8 *local_210;
  undefined1 auStack_200 [176];
  undefined1 auStack_150 [24];
  undefined *local_138 [3];
  undefined *local_120;
  code *local_118;
  code *local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar3 = *(undefined8 *)(DAT_100b360a8 + 0x88);
  _swift_retain(uVar3);
  FUN_100083910(&local_100,param_1,param_2);
  _swift_release(uVar3);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  pcVar1 = FUN_100102d78;
  local_210 = &local_100;
  FUN_1003fb48c(FUN_100102d78,auStack_220,0xd000000000000094,0x800000010088a280,0xd00000000000001e,
                0x800000010088a320,0x4f,0);
  local_120 = &DAT_1009dd308;
  FUN_100102d80();
  local_118 = pcVar1;
  FUN_100102dc0();
  puVar2 = &DAT_10099cf68;
  local_110 = pcVar1;
  _swift_allocObject(&DAT_10099cf68,0xc0,7);
  *(undefined8 *)(puVar2 + 0x98) = uStack_78;
  *(undefined8 *)(puVar2 + 0x90) = local_80;
  *(undefined8 *)(puVar2 + 0xa8) = uStack_68;
  *(undefined8 *)(puVar2 + 0xa0) = uStack_70;
  *(undefined8 *)(puVar2 + 0xb8) = uStack_58;
  *(undefined8 *)(puVar2 + 0xb0) = local_60;
  *(undefined8 *)(puVar2 + 0x58) = uStack_b8;
  *(undefined8 *)(puVar2 + 0x50) = local_c0;
  *(undefined8 *)(puVar2 + 0x68) = uStack_a8;
  *(undefined8 *)(puVar2 + 0x60) = uStack_b0;
  *(undefined8 *)(puVar2 + 0x78) = uStack_98;
  *(undefined8 *)(puVar2 + 0x70) = local_a0;
  *(undefined8 *)(puVar2 + 0x88) = uStack_88;
  *(undefined8 *)(puVar2 + 0x80) = uStack_90;
  *(undefined8 *)(puVar2 + 0x18) = uStack_f8;
  *(undefined8 *)(puVar2 + 0x10) = local_100;
  *(undefined8 *)(puVar2 + 0x28) = uStack_e8;
  *(undefined8 *)(puVar2 + 0x20) = uStack_f0;
  *(undefined8 *)(puVar2 + 0x38) = uStack_d8;
  *(undefined8 *)(puVar2 + 0x30) = local_e0;
  *(undefined8 *)(puVar2 + 0x48) = uStack_c8;
  *(undefined8 *)(puVar2 + 0x40) = uStack_d0;
  local_108 = 1;
  local_138[0] = puVar2;
  _swift_beginAccess(param_3 + 0x10,auStack_150,1,0);
  FUN_10008f6c4(&local_100,auStack_200);
  FUN_1001025a8(local_138,param_3 + 0x10);
  FUN_10008f3dc(&local_100);
  FUN_100102518(local_138);
  return;
}

