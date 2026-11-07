// rea decompile_all
// name: FUN_100484f90
// address: 0x100484f90
// body: available
// range: 0x100484f90-0x1004850b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100484f90(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_178 [24];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_100492e44(0);
    _swift_allocObject();
    FUN_10048be0c();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_f8 = param_1[0xd];
  local_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  local_f0 = param_1[0xe];
  local_e0 = param_1[0x10];
  uStack_138 = param_1[5];
  local_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  local_120 = param_1[8];
  uStack_108 = param_1[0xb];
  local_110 = param_1[10];
  uStack_158 = param_1[1];
  local_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  FUN_100008290(&local_160);
  _swift_beginAccess(lVar2 + 0x60,auStack_178,1,0);
  local_50 = *(undefined8 *)(lVar2 + 0xe0);
  uStack_68 = *(undefined8 *)(lVar2 + 200);
  local_70 = *(undefined8 *)(lVar2 + 0xc0);
  uStack_58 = *(undefined8 *)(lVar2 + 0xd8);
  uStack_60 = *(undefined8 *)(lVar2 + 0xd0);
  uStack_a8 = *(undefined8 *)(lVar2 + 0x88);
  local_b0 = *(undefined8 *)(lVar2 + 0x80);
  uStack_98 = *(undefined8 *)(lVar2 + 0x98);
  uStack_a0 = *(undefined8 *)(lVar2 + 0x90);
  uStack_88 = *(undefined8 *)(lVar2 + 0xa8);
  local_90 = *(undefined8 *)(lVar2 + 0xa0);
  uStack_78 = *(undefined8 *)(lVar2 + 0xb8);
  uStack_80 = *(undefined8 *)(lVar2 + 0xb0);
  uStack_c8 = *(undefined8 *)(lVar2 + 0x68);
  local_d0 = *(undefined8 *)(lVar2 + 0x60);
  uStack_b8 = *(undefined8 *)(lVar2 + 0x78);
  uStack_c0 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x68) = uStack_158;
  *(undefined8 *)(lVar2 + 0x60) = local_160;
  *(undefined8 *)(lVar2 + 0x78) = uStack_148;
  *(undefined8 *)(lVar2 + 0x70) = uStack_150;
  *(undefined8 *)(lVar2 + 200) = uStack_f8;
  *(undefined8 *)(lVar2 + 0xc0) = local_100;
  *(undefined8 *)(lVar2 + 0xd8) = uStack_e8;
  *(undefined8 *)(lVar2 + 0xd0) = local_f0;
  *(undefined8 *)(lVar2 + 0x88) = uStack_138;
  *(undefined8 *)(lVar2 + 0x80) = local_140;
  *(undefined8 *)(lVar2 + 0x98) = uStack_128;
  *(undefined8 *)(lVar2 + 0x90) = uStack_130;
  *(undefined8 *)(lVar2 + 0xe0) = local_e0;
  *(undefined8 *)(lVar2 + 0xa8) = uStack_118;
  *(undefined8 *)(lVar2 + 0xa0) = local_120;
  *(undefined8 *)(lVar2 + 0xb8) = uStack_108;
  *(undefined8 *)(lVar2 + 0xb0) = local_110;
  FUN_100040bb4(&local_d0,&DAT_100aa0bc0,&DAT_10082de08);
  return;
}

