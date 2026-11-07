// rea decompile_all
// name: FUN_10059325c
// address: 0x10059325c
// body: available
// range: 0x10059325c-0x100593847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10059325c(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  byte bVar2;
  long unaff_x21;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    __ss6HasherV8_combineyySuF(1);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_90,0,0);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    __ss6HasherV8_combineyySuF(8);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x33,auStack_a8,0,0);
  bVar2 = *(byte *)(param_1 + 0x33);
  if ((ulong)bVar2 != 3) {
    __ss6HasherV8_combineyySuF(9);
    __ss6HasherV8_combineyySuF((ulong)bVar2 + 1);
  }
  _swift_beginAccess(param_1 + 0x30,auStack_c0,0,0);
  bVar2 = *(byte *)(param_1 + 0x30);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(10);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x38,auStack_d8,0,0);
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    __ss6HasherV8_combineyySuF(0xb);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x48,auStack_f0,0,0);
  bVar2 = *(byte *)(param_1 + 0x48);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x10);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x49,auStack_108,0,0);
  bVar2 = *(byte *)(param_1 + 0x49);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x11);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x4a,auStack_120,0,0);
  bVar2 = *(byte *)(param_1 + 0x4a);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x12);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x31,auStack_138,0,0);
  bVar2 = *(byte *)(param_1 + 0x31);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x14);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x4b,auStack_150,0,0);
  bVar2 = *(byte *)(param_1 + 0x4b);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x17);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x32,auStack_168,0,0);
  bVar2 = *(byte *)(param_1 + 0x32);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x1b);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x4c,auStack_180,0,0);
  bVar2 = *(byte *)(param_1 + 0x4c);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x1f);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  _swift_beginAccess(param_1 + 0x50,auStack_198,0,0);
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    __ss6HasherV8_combineyySuF(0x24);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x60,auStack_1b0,0,0);
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    __ss6HasherV8_combineyySuF(0x25);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x70,auStack_1c8,0,0);
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    __ss6HasherV8_combineyySuF(0x27);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x80,auStack_1e0,0,0);
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    __ss6HasherV8_combineyySuF(0x28);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x90,auStack_1f8,0,0);
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    __ss6HasherV8_combineyySuF(0x29);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0xa0,auStack_210,0,0);
  lVar3 = *(long *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    __ss6HasherV8_combineyySuF(0x2c);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0xb0,auStack_228,0,0);
  lVar3 = *(long *)(param_1 + 0xb8);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    __ss6HasherV8_combineyySuF(0x2d);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0xc0,auStack_240,0,0);
  lVar3 = *(long *)(param_1 + 0xd0);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    uVar1 = *(undefined8 *)(param_1 + 200);
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
    __ss6HasherV8_combineyySuF(0x32);
    uStack_278 = param_2[5];
    local_280 = param_2[4];
    uStack_268 = param_2[7];
    uStack_270 = param_2[6];
    local_260 = param_2[8];
    uStack_298 = param_2[1];
    local_2a0 = *param_2;
    uStack_288 = param_2[3];
    uStack_290 = param_2[2];
    FUN_100008184(uVar4,uVar1);
    _swift_bridgeObjectRetain(lVar3);
    FUN_10059e3f8(&local_2a0,uVar4,uVar1,lVar3,uVar5);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    FUN_100541944(uVar4,uVar1,lVar3,uVar5);
    param_2[5] = uStack_278;
    param_2[4] = local_280;
    param_2[7] = uStack_268;
    param_2[6] = uStack_270;
    param_2[8] = local_260;
    param_2[1] = uStack_298;
    *param_2 = local_2a0;
    param_2[3] = uStack_288;
    param_2[2] = uStack_290;
  }
  _swift_beginAccess(param_1 + 0xe0,auStack_258,0,0);
  lVar3 = *(long *)(param_1 + 0xe0);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_1005bad30();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_100563e08(param_2,1000,0x20000000,param_5);
  return;
}

