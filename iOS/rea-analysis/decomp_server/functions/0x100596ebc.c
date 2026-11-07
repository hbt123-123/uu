// rea decompile_all
// name: FUN_100596ebc
// address: 0x100596ebc
// body: available
// range: 0x100596ebc-0x10059737b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100596ebc(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_80;
  long lStack_78;
  undefined1 local_70;
  
  _swift_beginAccess(param_1 + 0x10,auStack_b0,0,0);
  cVar4 = *(char *)(param_1 + 0x10);
  if (cVar4 != '\x03') {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(cVar4);
  }
  _swift_beginAccess(param_1 + 0x11,auStack_c8,0,0);
  bVar5 = *(byte *)(param_1 + 0x11);
  if (bVar5 != 2) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  }
  _swift_beginAccess(param_1 + 0x15,auStack_e0,0,0);
  bVar5 = *(byte *)(param_1 + 0x15);
  if (bVar5 != 2) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  }
  _swift_beginAccess(param_1 + 0x13,auStack_f8,0,0);
  bVar5 = *(byte *)(param_1 + 0x13);
  if (bVar5 != 2) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  }
  _swift_beginAccess(param_1 + 0x12,auStack_110,0,0);
  cVar4 = *(char *)(param_1 + 0x12);
  if (cVar4 != '\x03') {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyySuF(cVar4);
  }
  _swift_beginAccess(param_1 + 0x16,auStack_128,0,0);
  bVar5 = *(byte *)(param_1 + 0x16);
  if (bVar5 != 2) {
    __ss6HasherV8_combineyySuF(10);
    __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  }
  _swift_beginAccess(param_1 + 0x14,auStack_140,0,0);
  bVar5 = *(byte *)(param_1 + 0x14);
  if (bVar5 != 2) {
    __ss6HasherV8_combineyySuF(0xf);
    __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  }
  _swift_beginAccess(param_1 + 0x17,auStack_158,0,0);
  bVar5 = *(byte *)(param_1 + 0x17);
  if (bVar5 != 2) {
    __ss6HasherV8_combineyySuF(0x10);
    __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  }
  _swift_beginAccess(param_1 + 0x18,auStack_170,0,0);
  cVar4 = *(char *)(param_1 + 0x18);
  if (cVar4 != '\x03') {
    __ss6HasherV8_combineyySuF(0x11);
    __ss6HasherV8_combineyySuF(cVar4);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_188,0,0);
  lVar8 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar8 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(0x13);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar8 + 0x10));
    lVar7 = *(long *)(lVar8 + 0x10);
    if (lVar7 != 0) {
      puVar9 = (undefined1 *)(lVar8 + 0x20);
      do {
        __ss6HasherV8_combineyySuF(*puVar9);
        lVar7 = lVar7 + -1;
        puVar9 = puVar9 + 1;
      } while (lVar7 != 0);
    }
  }
  _swift_beginAccess(param_1 + 0x28,auStack_1a0,0,0);
  lVar8 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar8 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar8);
    FUN_1005bb4f0();
    _swift_bridgeObjectRelease(lVar8);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x30,auStack_1b8,0,0);
  lVar8 = *(long *)(param_1 + 0x40);
  if (lVar8 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    __ss6HasherV8_combineyySuF(0x15);
    uStack_258 = param_2[5];
    local_260 = param_2[4];
    uStack_248 = param_2[7];
    uStack_250 = param_2[6];
    local_240 = param_2[8];
    uStack_278 = param_2[1];
    local_280 = *param_2;
    uStack_268 = param_2[3];
    uStack_270 = param_2[2];
    FUN_100008184(uVar1,uVar2);
    _swift_bridgeObjectRetain(lVar8);
    FUN_10059e3f8(&local_280,uVar1,uVar2,lVar8,uVar10);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    FUN_100541944(uVar1,uVar2,lVar8,uVar10);
    param_2[5] = uStack_258;
    param_2[4] = local_260;
    param_2[7] = uStack_248;
    param_2[6] = uStack_250;
    param_2[8] = local_240;
    param_2[1] = uStack_278;
    *param_2 = local_280;
    param_2[3] = uStack_268;
    param_2[2] = uStack_270;
  }
  _swift_beginAccess(param_1 + 0x50,auStack_1d0,0,0);
  lVar8 = *(long *)(param_1 + 0x70);
  if (lVar8 != 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    uVar6 = *(undefined1 *)(param_1 + 0x78);
    local_88 = (undefined1)uVar2;
    local_87 = (undefined1)((ulong)uVar2 >> 8);
    local_98 = uVar1;
    uStack_90 = uVar10;
    local_80 = uVar3;
    lStack_78 = lVar8;
    local_70 = uVar6;
    __ss6HasherV8_combineyySuF(0x16);
    uStack_208 = param_2[5];
    local_210 = param_2[4];
    uStack_1f8 = param_2[7];
    uStack_200 = param_2[6];
    local_1f0 = param_2[8];
    uStack_228 = param_2[1];
    local_230 = *param_2;
    uStack_218 = param_2[3];
    uStack_220 = param_2[2];
    FUN_100008184(uVar1,uVar10);
    _swift_bridgeObjectRetain(lVar8);
    FUN_100599dbc(&local_230);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    FUN_1005419bc(uVar1,uVar10,uVar2,uVar3,lVar8,uVar6);
    param_2[5] = uStack_208;
    param_2[4] = local_210;
    param_2[7] = uStack_1f8;
    param_2[6] = uStack_200;
    param_2[8] = local_1f0;
    param_2[1] = uStack_228;
    *param_2 = local_230;
    param_2[3] = uStack_218;
    param_2[2] = uStack_220;
  }
  _swift_beginAccess(param_1 + 0x80,auStack_1e8,0,0);
  lVar8 = *(long *)(param_1 + 0x80);
  if (*(long *)(lVar8 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar8);
    FUN_1005bad30();
    _swift_bridgeObjectRelease(lVar8);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_100563e08(param_2,1000,0x20000000,param_5);
  return;
}

