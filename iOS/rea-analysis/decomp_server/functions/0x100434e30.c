// rea decompile_all
// name: FUN_100434e30
// address: 0x100434e30
// body: available
// range: 0x100434e30-0x100434f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100434e30(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_190 [24];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1004341f8(0);
    _swift_allocObject();
    FUN_10043886c();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  FUN_100438e38(&local_178);
  _swift_beginAccess(lVar2 + 0x20,auStack_190,1,0);
  uStack_b8 = *(undefined8 *)(lVar2 + 0x48);
  local_c0 = *(undefined8 *)(lVar2 + 0x40);
  uStack_a8 = *(undefined8 *)(lVar2 + 0x58);
  uStack_b0 = *(undefined8 *)(lVar2 + 0x50);
  uStack_98 = *(undefined8 *)(lVar2 + 0x68);
  local_a0 = *(undefined8 *)(lVar2 + 0x60);
  uStack_88 = *(undefined8 *)(lVar2 + 0x78);
  uStack_90 = *(undefined8 *)(lVar2 + 0x70);
  uStack_78 = *(undefined8 *)(lVar2 + 0x88);
  local_80 = *(undefined8 *)(lVar2 + 0x80);
  uStack_68 = *(undefined8 *)(lVar2 + 0x98);
  local_70 = *(undefined8 *)(lVar2 + 0x90);
  local_50 = *(undefined8 *)(lVar2 + 0xb0);
  uStack_58 = *(undefined8 *)(lVar2 + 0xa8);
  uStack_60 = *(undefined8 *)(lVar2 + 0xa0);
  uStack_d8 = *(undefined8 *)(lVar2 + 0x28);
  local_e0 = *(undefined8 *)(lVar2 + 0x20);
  uStack_c8 = *(undefined8 *)(lVar2 + 0x38);
  uStack_d0 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x38) = uStack_160;
  *(undefined8 *)(lVar2 + 0x30) = local_168;
  *(undefined8 *)(lVar2 + 0x68) = uStack_130;
  *(undefined8 *)(lVar2 + 0x60) = local_138;
  *(undefined8 *)(lVar2 + 0x78) = uStack_120;
  *(undefined8 *)(lVar2 + 0x70) = local_128;
  *(undefined8 *)(lVar2 + 0x28) = uStack_170;
  *(undefined8 *)(lVar2 + 0x20) = local_178;
  *(undefined8 *)(lVar2 + 0x88) = uStack_110;
  *(undefined8 *)(lVar2 + 0x80) = local_118;
  *(undefined8 *)(lVar2 + 0x98) = uStack_100;
  *(undefined8 *)(lVar2 + 0x90) = local_108;
  *(undefined8 *)(lVar2 + 0xa8) = uStack_f0;
  *(undefined8 *)(lVar2 + 0xa0) = uStack_f8;
  *(undefined8 *)(lVar2 + 0xb0) = local_e8;
  *(undefined8 *)(lVar2 + 0x48) = uStack_150;
  *(undefined8 *)(lVar2 + 0x40) = local_158;
  *(undefined8 *)(lVar2 + 0x58) = uStack_140;
  *(undefined8 *)(lVar2 + 0x50) = local_148;
  FUN_100040bb4(&local_e0,&DAT_100a9f378,&DAT_100827760);
  return;
}

