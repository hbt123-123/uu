// rea decompile_all
// name: FUN_100586c14
// address: 0x100586c14
// body: available
// range: 0x100586c14-0x100587013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100586c14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar7 = unaff_x20[0xb];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[10];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  lVar7 = unaff_x20[0xd];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[0xc];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  lVar8 = *unaff_x20;
  lVar7 = *(long *)(lVar8 + 0x10);
  if (lVar7 != 0) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF(lVar7);
    puVar10 = (undefined8 *)(lVar8 + 0x28);
    do {
      uVar1 = puVar10[-1];
      uVar2 = *puVar10;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar10 = puVar10 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((*(long *)(unaff_x20[4] + 0x10) != 0) && (FUN_1005bcab0(unaff_x20[4],4), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[5] + 0x10) != 0) && (FUN_1005bc2c8(unaff_x20[5],5), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[6] + 0x10) != 0) && (FUN_1005bb6b8(unaff_x20[6],6), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[7] + 0x10) != 0) && (FUN_1005bb3b4(unaff_x20[7],7), unaff_x21 != 0)) {
    return;
  }
  lVar7 = unaff_x20[0x10];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[0xe];
    uVar3 = unaff_x20[0xf];
    lVar11 = unaff_x20[0x11];
    __ss6HasherV8_combineyySuF(8);
    uStack_78 = param_1[5];
    local_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    local_60 = param_1[8];
    uStack_98 = param_1[1];
    local_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    FUN_100008184(lVar8,uVar3);
    _swift_bridgeObjectRetain(lVar7);
    _swift_retain(lVar11);
    FUN_10059325c();
    if (unaff_x21 == 0) {
      uVar4 = (uint)(uVar3 >> 0x20);
      uVar5 = uVar4 >> 0x1e;
      if (uVar4 >> 0x1e < 2) {
        if (uVar5 == 0) {
          if ((uVar3 & 0xff000000000000) == 0) goto LAB_100586dbc;
        }
        else {
          lVar12 = (long)(int)lVar8;
          lVar6 = lVar8 >> 0x20;
LAB_100586fec:
          if (lVar12 == lVar6) goto LAB_100586dbc;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_a0,lVar8,uVar3);
      }
      else if (uVar5 == 2) {
        lVar12 = *(long *)(lVar8 + 0x10);
        lVar6 = *(long *)(lVar8 + 0x18);
        goto LAB_100586fec;
      }
    }
    else {
      _swift_errorRelease(unaff_x21);
    }
LAB_100586dbc:
    FUN_1005419ec(lVar8,uVar3,lVar7,lVar11);
    param_1[5] = uStack_78;
    param_1[4] = local_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = local_60;
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  lVar7 = unaff_x20[0x12];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[0x14];
    lVar11 = unaff_x20[0x15];
    lVar12 = unaff_x20[0x13];
    __ss6HasherV8_combineyySuF(9);
    _swift_bridgeObjectRetain(lVar7);
    FUN_100008184(lVar12,lVar8);
    _swift_bridgeObjectRetain(lVar11);
    FUN_100573884(param_1,lVar7,lVar12,lVar8,lVar11);
    FUN_100541a94(lVar7,lVar12,lVar8,lVar11);
  }
  lVar8 = unaff_x20[1];
  lVar7 = *(long *)(lVar8 + 0x10);
  if (lVar7 != 0) {
    __ss6HasherV8_combineyySuF(10);
    __ss6HasherV8_combineyySuF(lVar7);
    puVar9 = (undefined4 *)(lVar8 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar9);
      lVar7 = lVar7 + -1;
      puVar9 = puVar9 + 1;
    } while (lVar7 != 0);
  }
  lVar8 = unaff_x20[2];
  lVar7 = *(long *)(lVar8 + 0x10);
  if (lVar7 != 0) {
    __ss6HasherV8_combineyySuF(0xb);
    __ss6HasherV8_combineyySuF(lVar7);
    puVar9 = (undefined4 *)(lVar8 + 0x20);
    do {
      __ss6HasherV8_combineyys6UInt32VF(*puVar9);
      lVar7 = lVar7 + -1;
      puVar9 = puVar9 + 1;
    } while (lVar7 != 0);
  }
  lVar7 = unaff_x20[0x17];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[0x16];
    __ss6HasherV8_combineyySuF(0xc);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  lVar7 = unaff_x20[0x18];
  if ((long)(char)lVar7 != 0xc) {
    __ss6HasherV8_combineyySuF(0xe);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083cc80 + (long)(char)lVar7 * 8));
  }
  lVar8 = unaff_x20[3];
  lVar7 = *(long *)(lVar8 + 0x10);
  if (lVar7 != 0) {
    __ss6HasherV8_combineyySuF(0xf);
    __ss6HasherV8_combineyySuF(lVar7);
    puVar10 = (undefined8 *)(lVar8 + 0x28);
    do {
      uVar1 = puVar10[-1];
      uVar2 = *puVar10;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar10 = puVar10 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar7 = unaff_x20[8];
  uVar4 = (uint)((ulong)unaff_x20[9] >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[9] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_100586f88;
    }
    lVar8 = (long)(int)lVar7;
    lVar7 = lVar7 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar7 = *(long *)(lVar7 + 0x18);
  }
  if (lVar8 == lVar7) {
    return;
  }
LAB_100586f88:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

