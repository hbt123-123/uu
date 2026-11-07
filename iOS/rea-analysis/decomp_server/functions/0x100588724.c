// rea decompile_all
// name: FUN_100588724
// address: 0x100588724
// body: available
// range: 0x100588724-0x100588c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100588724(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long unaff_x21;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_308 [72];
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  long local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  long local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  _swift_beginAccess(param_1 + 0x10,auStack_d0,0,0);
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    __ss6HasherV8_combineyySuF(1);
    _swift_bridgeObjectRetain(lVar9);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar11,lVar9);
    _swift_bridgeObjectRelease(lVar9);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_e8,0,0);
  lVar9 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar9 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar9);
    FUN_1005bb3b4();
    _swift_bridgeObjectRelease(lVar9);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x30,auStack_100,0,0);
  lVar9 = *(long *)(param_1 + 0x30);
  if (*(long *)(lVar9 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(3);
    lVar12 = *(long *)(lVar9 + 0x10);
    if (lVar12 != 0) {
      _swift_bridgeObjectRetain(lVar9);
      puVar10 = (undefined8 *)(lVar9 + 0x30);
      do {
        lVar1 = puVar10[-2];
        uVar2 = puVar10[-1];
        uVar11 = *puVar10;
        uStack_128 = param_2[5];
        local_130 = param_2[4];
        uStack_118 = param_2[7];
        uStack_120 = param_2[6];
        local_110 = param_2[8];
        uStack_148 = param_2[1];
        local_150 = *param_2;
        uStack_138 = param_2[3];
        uStack_140 = param_2[2];
        FUN_100008184(lVar1,uVar2);
        _swift_retain(uVar11);
        FUN_100588724();
        if (unaff_x21 == 0) {
          uVar5 = (uint)(uVar2 >> 0x20);
          uVar6 = uVar5 >> 0x1e;
          if (uVar5 >> 0x1e < 2) {
            if (uVar6 == 0) {
              if ((uVar2 & 0xff000000000000) == 0) goto LAB_10058883c;
            }
            else {
              lVar7 = (long)(int)lVar1;
              lVar8 = lVar1 >> 0x20;
LAB_1005888f0:
              if (lVar7 == lVar8) goto LAB_10058883c;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_150,lVar1,uVar2);
          }
          else if (uVar6 == 2) {
            lVar7 = *(long *)(lVar1 + 0x10);
            lVar8 = *(long *)(lVar1 + 0x18);
            goto LAB_1005888f0;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_10058883c:
        param_2[5] = uStack_128;
        param_2[4] = local_130;
        param_2[7] = uStack_118;
        param_2[6] = uStack_120;
        param_2[8] = local_110;
        param_2[1] = uStack_148;
        *param_2 = local_150;
        param_2[3] = uStack_138;
        param_2[2] = uStack_140;
        FUN_100006cdc(lVar1,uVar2);
        _swift_release(uVar11);
        puVar10 = puVar10 + 3;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      _swift_bridgeObjectRelease(lVar9);
    }
  }
  _swift_beginAccess(param_1 + 0x38,auStack_168,0,0);
  lVar9 = *(long *)(param_1 + 0x38);
  if (*(long *)(lVar9 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar9);
    FUN_1005bc2c8();
    _swift_bridgeObjectRelease(lVar9);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x40,auStack_180,0,0);
  lVar9 = *(long *)(param_1 + 0x40);
  if (*(long *)(lVar9 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar9);
    FUN_1005bd338();
    _swift_bridgeObjectRelease(lVar9);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x28,auStack_198,0,0);
  lVar9 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar9 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar9);
    FUN_1005bb3b4();
    _swift_bridgeObjectRelease(lVar9);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x50,auStack_1f8,0,0);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x58);
  local_1e0 = *(long *)(param_1 + 0x50);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x60);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x78);
  local_1c0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x80);
  local_1a0 = *(undefined8 *)(param_1 + 0x90);
  if (local_1e0 != 0) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x60);
    local_b0 = *(undefined8 *)(param_1 + 0x58);
    uStack_98 = *(undefined8 *)(param_1 + 0x70);
    local_a0 = *(undefined8 *)(param_1 + 0x68);
    uStack_88 = *(undefined8 *)(param_1 + 0x80);
    local_90 = *(undefined8 *)(param_1 + 0x78);
    uStack_78 = *(undefined8 *)(param_1 + 0x90);
    local_80 = *(undefined8 *)(param_1 + 0x88);
    local_b8 = local_1e0;
    __ss6HasherV8_combineyySuF(7);
    uStack_298 = param_2[5];
    local_2a0 = param_2[4];
    uStack_288 = param_2[7];
    uStack_290 = param_2[6];
    local_280 = param_2[8];
    uStack_2b8 = param_2[1];
    local_2c0 = *param_2;
    uStack_2a8 = param_2[3];
    uStack_2b0 = param_2[2];
    uStack_248 = uStack_1b8;
    local_250 = local_1c0;
    uStack_238 = uStack_1a8;
    uStack_240 = uStack_1b0;
    local_230 = local_1a0;
    uStack_268 = uStack_1d8;
    local_270 = local_1e0;
    uStack_258 = uStack_1c8;
    uStack_260 = uStack_1d0;
    FUN_1005a7e94(&local_270,auStack_308);
    FUN_1005956f8(&local_2c0);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    FUN_100040bb4(&local_1e0,&DAT_100aab4c8,&DAT_100837c38);
    param_2[5] = uStack_298;
    param_2[4] = local_2a0;
    param_2[7] = uStack_288;
    param_2[6] = uStack_290;
    param_2[8] = local_280;
    param_2[1] = uStack_2b8;
    *param_2 = local_2c0;
    param_2[3] = uStack_2a8;
    param_2[2] = uStack_2b0;
  }
  _swift_beginAccess(param_1 + 0x48,&local_270,0,0);
  lVar9 = *(long *)(param_1 + 0x48);
  if (*(long *)(lVar9 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar9);
    FUN_1005bcdec();
    _swift_bridgeObjectRelease(lVar9);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x98,auStack_308,0,0);
  lVar9 = *(long *)(param_1 + 0x98);
  if (*(long *)(lVar9 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar9);
    FUN_1005c6338();
    _swift_bridgeObjectRelease(lVar9);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0xa0,auStack_210,0,0);
  lVar9 = *(long *)(param_1 + 0xa0);
  if (*(long *)(lVar9 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(10);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar9 + 0x10));
    lVar12 = *(long *)(lVar9 + 0x10);
    if (lVar12 != 0) {
      _swift_bridgeObjectRetain(lVar9);
      puVar10 = (undefined8 *)(lVar9 + 0x28);
      do {
        uVar11 = puVar10[-1];
        uVar3 = *puVar10;
        _swift_bridgeObjectRetain(uVar3);
        __sSS4hash4intoys6HasherVz_tF(param_2,uVar11,uVar3);
        _swift_bridgeObjectRelease(uVar3);
        puVar10 = puVar10 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      _swift_bridgeObjectRelease(lVar9);
    }
  }
  _swift_beginAccess(param_1 + 0xa8,auStack_228,0,0);
  cVar4 = *(char *)(param_1 + 0xa8);
  if (cVar4 != '\x03') {
    __ss6HasherV8_combineyySuF(0xb);
    __ss6HasherV8_combineyySuF(cVar4);
  }
  return;
}

