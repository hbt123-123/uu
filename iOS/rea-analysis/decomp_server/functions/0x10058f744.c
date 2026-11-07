// rea decompile_all
// name: FUN_10058f744
// address: 0x10058f744
// body: available
// range: 0x10058f744-0x10058f953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10058f744(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long unaff_x20;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  puVar5 = (undefined4 *)(unaff_x20 + 0x20);
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar6 = 0;
  *(undefined1 *)(unaff_x20 + 0x24) = 1;
  FUN_1005419a0(&local_1d0);
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x68) = local_190;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_180;
  *(ulong *)(unaff_x20 + 0x90) = CONCAT71(uStack_167,uStack_168);
  *(undefined8 *)(unaff_x20 + 0x88) = local_170;
  *(undefined8 *)(unaff_x20 + 0x99) = uStack_15f;
  *(ulong *)(unaff_x20 + 0x91) = CONCAT17(uStack_160,uStack_167);
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x28) = local_1d0;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x48) = local_1b0;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_1a0;
  _swift_beginAccess(param_1 + 0x10,auStack_1e8,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar6,auStack_200,1,0);
  *puVar6 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  _swift_beginAccess(param_1 + 0x20,auStack_218,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined1 *)(param_1 + 0x24);
  _swift_beginAccess(puVar5,auStack_230,1,0);
  *puVar5 = uVar3;
  *(undefined1 *)(unaff_x20 + 0x24) = uVar4;
  _swift_beginAccess(param_1 + 0x28,auStack_248,0,0);
  uStack_108 = *(undefined8 *)(param_1 + 0x70);
  local_110 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  local_f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_e8 = (undefined1)*(undefined8 *)(param_1 + 0x90);
  uStack_df = *(undefined8 *)(param_1 + 0x99);
  uStack_e7 = (undefined7)*(undefined8 *)(param_1 + 0x91);
  uStack_e0 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x91) >> 0x38);
  uStack_148 = *(undefined8 *)(param_1 + 0x30);
  local_150 = *(undefined8 *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_1 + 0x40);
  uStack_140 = *(undefined8 *)(param_1 + 0x38);
  uStack_128 = *(undefined8 *)(param_1 + 0x50);
  local_130 = *(undefined8 *)(param_1 + 0x48);
  uStack_118 = *(undefined8 *)(param_1 + 0x60);
  uStack_120 = *(undefined8 *)(param_1 + 0x58);
  _swift_bridgeObjectRetain(uVar2);
  FUN_10007f314(&local_150,&local_d0,&DAT_100aab4b0,&DAT_100837c20);
  _swift_release(param_1);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_260,1,0);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x70);
  local_90 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x78);
  local_70 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_68 = (undefined1)*(undefined8 *)(unaff_x20 + 0x90);
  uStack_5f = *(undefined8 *)(unaff_x20 + 0x99);
  uStack_67 = (undefined7)*(undefined8 *)(unaff_x20 + 0x91);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x91) >> 0x38);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x30);
  local_d0 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x50);
  local_b0 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x48) = local_130;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x28) = local_150;
  *(undefined8 *)(unaff_x20 + 0x99) = uStack_df;
  *(ulong *)(unaff_x20 + 0x91) = CONCAT17(uStack_e0,uStack_e7);
  *(ulong *)(unaff_x20 + 0x90) = CONCAT71(uStack_e7,uStack_e8);
  *(undefined8 *)(unaff_x20 + 0x88) = local_f0;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x68) = local_110;
  FUN_100040bb4(&local_d0,&DAT_100aab4b0,&DAT_100837c20);
  return;
}

