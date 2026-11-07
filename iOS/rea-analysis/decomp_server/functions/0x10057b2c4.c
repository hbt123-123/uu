// rea decompile_all
// name: FUN_10057b2c4
// address: 0x10057b2c4
// body: available
// range: 0x10057b2c4-0x10057b3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10057b2c4(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_158 [24];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 local_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
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
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1005a8384(0);
    _swift_allocObject();
    FUN_10058f744();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  FUN_1005419a0(&local_140);
  _swift_beginAccess(lVar2 + 0x28,auStack_158,1,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0x70);
  local_80 = *(undefined8 *)(lVar2 + 0x68);
  uStack_68 = *(undefined8 *)(lVar2 + 0x80);
  local_70 = *(undefined8 *)(lVar2 + 0x78);
  uStack_4f = *(undefined8 *)(lVar2 + 0x99);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)(lVar2 + 0x91) >> 0x38);
  uStack_60 = *(undefined8 *)(lVar2 + 0x88);
  uStack_58 = (undefined1)*(undefined8 *)(lVar2 + 0x90);
  local_57 = (undefined7)((ulong)*(undefined8 *)(lVar2 + 0x90) >> 8);
  uStack_a8 = *(undefined8 *)(lVar2 + 0x40);
  uStack_b0 = *(undefined8 *)(lVar2 + 0x38);
  uStack_b8 = *(undefined8 *)(lVar2 + 0x30);
  local_c0 = *(undefined8 *)(lVar2 + 0x28);
  uStack_88 = *(undefined8 *)(lVar2 + 0x60);
  uStack_90 = *(undefined8 *)(lVar2 + 0x58);
  uStack_98 = *(undefined8 *)(lVar2 + 0x50);
  local_a0 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x80) = uStack_e8;
  *(undefined8 *)(lVar2 + 0x78) = local_f0;
  *(undefined8 *)(lVar2 + 0x60) = uStack_108;
  *(undefined8 *)(lVar2 + 0x58) = uStack_110;
  *(undefined8 *)(lVar2 + 0x30) = uStack_138;
  *(undefined8 *)(lVar2 + 0x28) = local_140;
  *(undefined8 *)(lVar2 + 0x40) = uStack_128;
  *(undefined8 *)(lVar2 + 0x38) = uStack_130;
  *(undefined8 *)(lVar2 + 0x50) = uStack_118;
  *(undefined8 *)(lVar2 + 0x48) = local_120;
  *(undefined8 *)(lVar2 + 0x70) = uStack_f8;
  *(undefined8 *)(lVar2 + 0x68) = local_100;
  *(undefined8 *)(lVar2 + 0x99) = uStack_cf;
  *(ulong *)(lVar2 + 0x91) = CONCAT17(uStack_d0,local_d7);
  *(ulong *)(lVar2 + 0x90) = CONCAT71(local_d7,uStack_d8);
  *(undefined8 *)(lVar2 + 0x88) = uStack_e0;
  FUN_100040bb4(&local_c0,&DAT_100aab4b0,&DAT_100837c20);
  return;
}

