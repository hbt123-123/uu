// rea decompile_all
// name: FUN_10058e118
// address: 0x10058e118
// body: available
// range: 0x10058e118-0x10058e3eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10058e118(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long unaff_x21;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_228 [72];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  long local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  long local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  _swift_beginAccess(param_1 + 0x10,auStack_b0,0,0);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    __ss6HasherV8_combineyySuF(1);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_c8,0,0);
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_1005bc2e4();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x28,auStack_128,0,0);
  uStack_108 = *(undefined8 *)(param_1 + 0x30);
  local_110 = *(long *)(param_1 + 0x28);
  uStack_f8 = *(undefined8 *)(param_1 + 0x40);
  uStack_100 = *(undefined8 *)(param_1 + 0x38);
  uStack_e8 = *(undefined8 *)(param_1 + 0x50);
  local_f0 = *(undefined8 *)(param_1 + 0x48);
  uStack_d8 = *(undefined8 *)(param_1 + 0x60);
  uStack_e0 = *(undefined8 *)(param_1 + 0x58);
  local_d0 = *(undefined8 *)(param_1 + 0x68);
  if (local_110 != 0) {
    uStack_88 = *(undefined8 *)(param_1 + 0x38);
    local_90 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = *(undefined8 *)(param_1 + 0x48);
    local_80 = *(undefined8 *)(param_1 + 0x40);
    uStack_68 = *(undefined8 *)(param_1 + 0x58);
    local_70 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    local_60 = *(undefined8 *)(param_1 + 0x60);
    local_98 = local_110;
    __ss6HasherV8_combineyySuF(3);
    uStack_1b8 = param_2[5];
    local_1c0 = param_2[4];
    uStack_1a8 = param_2[7];
    uStack_1b0 = param_2[6];
    local_1a0 = param_2[8];
    uStack_1d8 = param_2[1];
    local_1e0 = *param_2;
    uStack_1c8 = param_2[3];
    uStack_1d0 = param_2[2];
    uStack_168 = uStack_e8;
    local_170 = local_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    local_150 = local_d0;
    uStack_188 = uStack_108;
    local_190 = local_110;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    FUN_1005a8324(&local_190,auStack_228);
    FUN_10059ad08(&local_1e0);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    FUN_100040bb4(&local_110,&DAT_100aab4b8,&DAT_100837c28);
    param_2[5] = uStack_1b8;
    param_2[4] = local_1c0;
    param_2[7] = uStack_1a8;
    param_2[6] = uStack_1b0;
    param_2[8] = local_1a0;
    param_2[1] = uStack_1d8;
    *param_2 = local_1e0;
    param_2[3] = uStack_1c8;
    param_2[2] = uStack_1d0;
  }
  _swift_beginAccess(param_1 + 0x70,&local_190,0,0);
  lVar3 = *(long *)(param_1 + 0x70);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_1005c6338();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x78,auStack_228,0,0);
  lVar3 = *(long *)(param_1 + 0x78);
  if (*(long *)(lVar3 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar3 + 0x10));
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 != 0) {
      _swift_bridgeObjectRetain(lVar3);
      puVar6 = (undefined8 *)(lVar3 + 0x28);
      do {
        uVar4 = puVar6[-1];
        uVar1 = *puVar6;
        _swift_bridgeObjectRetain(uVar1);
        __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,uVar1);
        _swift_bridgeObjectRelease(uVar1);
        puVar6 = puVar6 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      _swift_bridgeObjectRelease(lVar3);
    }
  }
  _swift_beginAccess(param_1 + 0x80,auStack_140,0,0);
  cVar2 = *(char *)(param_1 + 0x80);
  if (cVar2 != '\x03') {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyySuF(cVar2);
  }
  return;
}

