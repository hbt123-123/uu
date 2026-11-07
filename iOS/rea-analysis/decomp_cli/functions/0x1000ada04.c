// rea decompile_all
// name: FUN_1000ada04
// address: 0x1000ada04
// body: available
// range: 0x1000ada04-0x1000adc8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ada04(void)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong local_328;
  ulong uStack_320;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
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
  ulong local_d8;
  ulong local_d0;
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
  
  uVar11 = *(ulong *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar3 = *(byte *)(unaff_x20 + 0x28);
  cVar4 = *(char *)(unaff_x20 + 0x60);
  if (cVar4 == '\a') {
    FUN_1000ae448(uVar11,uVar12,bVar3);
    return;
  }
  if (cVar4 == '\f') {
    FUN_1000ae6c4(*(undefined8 *)(unaff_x20 + 0x10),uVar11,uVar12);
    return;
  }
  if (cVar4 != '\r') {
    return;
  }
  lVar10 = *(long *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x50);
  FUN_1000aebd4(&local_258,lVar10,uVar2,uVar13);
  uStack_168 = uStack_1f0;
  local_170 = local_1f8;
  uStack_158 = uStack_1e0;
  uStack_160 = local_1e8;
  local_150 = local_1d8;
  uStack_1a8 = uStack_230;
  local_1b0 = local_238;
  uStack_198 = uStack_220;
  local_1a0 = local_228;
  uStack_188 = uStack_210;
  local_190 = local_218;
  uStack_178 = uStack_200;
  uStack_180 = local_208;
  uStack_1c8 = uStack_250;
  local_1d0 = local_258;
  uStack_1b8 = uStack_240;
  uStack_1c0 = local_248;
  iVar9 = (int)&local_1d0;
  FUN_1000b0b24();
  uVar8 = uStack_198;
  uVar7 = local_1a0;
  if (iVar9 != 1) {
    _swift_bridgeObjectRetain(uStack_198);
    FUN_10001fc18(&local_258,&DAT_100104d60,&USHORT_1000d6ad8);
    FUN_1000ae94c(lVar10,uVar2,uVar13);
    if (*(long *)(lVar10 + 0x10) != 0) {
      uStack_a8 = *(undefined8 *)(lVar10 + 0xb8);
      local_b0 = *(undefined8 *)(lVar10 + 0xb0);
      uStack_98 = *(undefined8 *)(lVar10 + 200);
      uStack_a0 = *(undefined8 *)(lVar10 + 0xc0);
      uStack_88 = *(undefined8 *)(lVar10 + 0xd8);
      local_90 = *(undefined8 *)(lVar10 + 0xd0);
      uStack_78 = *(undefined8 *)(lVar10 + 0xe8);
      uStack_80 = *(undefined8 *)(lVar10 + 0xe0);
      uStack_e8 = *(undefined8 *)(lVar10 + 0x78);
      local_f0 = *(undefined8 *)(lVar10 + 0x70);
      local_d8 = *(ulong *)(lVar10 + 0x88);
      uStack_e0 = *(undefined8 *)(lVar10 + 0x80);
      uStack_c8 = *(undefined8 *)(lVar10 + 0x98);
      local_d0 = *(ulong *)(lVar10 + 0x90);
      uStack_b8 = *(undefined8 *)(lVar10 + 0xa8);
      uStack_c0 = *(undefined8 *)(lVar10 + 0xa0);
      uStack_128 = *(undefined8 *)(lVar10 + 0x38);
      uStack_130 = *(undefined8 *)(lVar10 + 0x30);
      uStack_118 = *(undefined8 *)(lVar10 + 0x48);
      local_120 = *(undefined8 *)(lVar10 + 0x40);
      uStack_108 = *(undefined8 *)(lVar10 + 0x58);
      uStack_110 = *(undefined8 *)(lVar10 + 0x50);
      uStack_f8 = *(undefined8 *)(lVar10 + 0x68);
      local_100 = *(undefined8 *)(lVar10 + 0x60);
      uStack_138 = *(undefined8 *)(lVar10 + 0x28);
      local_140 = *(undefined8 *)(lVar10 + 0x20);
      FUN_10006ff98(&local_140,&local_328);
      _swift_bridgeObjectRelease(lVar10);
      uVar6 = local_d0;
      uVar5 = local_d8;
      uVar1 = local_d8 & 0xffffffffffff;
      if ((local_d0 & 0x2000000000000000) != 0) {
        uVar1 = local_d0 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        FUN_100084a5c(&local_328,&local_140);
        FUN_10008efb4(&local_140);
        uVar5 = local_328;
        uVar6 = uStack_320;
      }
      else {
        _swift_bridgeObjectRetain(local_d0);
        FUN_10008efb4(&local_140);
      }
      if (bVar3 < 0xfe) {
        FUN_1000979e4(uVar11,uVar12,bVar3);
        local_328 = uVar11;
        uStack_320 = uVar12;
        __sSS6appendyySSF(0x3c20,0xe200000000000000);
      }
      else {
        local_328 = 0x3c;
        uStack_320 = 0xe100000000000000;
      }
      __sSS6appendyySSF(uVar5,uVar6);
      __sSS6appendyySSF(0x20203e,0xe300000000000000);
      __sSS6appendyySSF(uVar7,uVar8);
      _swift_bridgeObjectRelease(uVar6);
      _swift_bridgeObjectRelease(uVar8);
      return;
    }
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(lVar10);
    return;
  }
  return;
}

