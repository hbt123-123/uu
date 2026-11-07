// rea decompile_all
// name: FUN_10059b5d4
// address: 0x10059b5d4
// body: available
// range: 0x10059b5d4-0x10059b85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10059b5d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  long lStack_90;
  undefined1 local_88;
  undefined1 local_87;
  long local_80;
  long lStack_78;
  undefined1 local_70;
  
  bVar3 = *(byte *)(unaff_x20 + 4);
  if (bVar3 != 2) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys5UInt8VF(bVar3 & 1);
  }
  lVar8 = unaff_x20[7];
  if (lVar8 != 0) {
    lVar7 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    lVar9 = unaff_x20[8];
    __ss6HasherV8_combineyySuF(2);
    uStack_108 = param_1[5];
    local_110 = param_1[4];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    local_f0 = param_1[8];
    uStack_128 = param_1[1];
    local_130 = *param_1;
    uStack_118 = param_1[3];
    uStack_120 = param_1[2];
    FUN_100008184(lVar7,lVar1);
    _swift_bridgeObjectRetain(lVar8);
    FUN_10059e3f8(&local_130,lVar7,lVar1,lVar8,lVar9);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    FUN_100541944(lVar7,lVar1,lVar8,lVar9);
    param_1[5] = uStack_108;
    param_1[4] = local_110;
    param_1[7] = uStack_f8;
    param_1[6] = uStack_100;
    param_1[8] = local_f0;
    param_1[1] = uStack_128;
    *param_1 = local_130;
    param_1[3] = uStack_118;
    param_1[2] = uStack_120;
  }
  bVar3 = *(byte *)(unaff_x20 + 9);
  if (bVar3 != 2) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys5UInt8VF(bVar3 & 1);
  }
  lVar8 = unaff_x20[0xe];
  if (lVar8 != 1) {
    lVar7 = unaff_x20[10];
    lVar9 = unaff_x20[0xb];
    lVar1 = unaff_x20[0xc];
    lVar2 = unaff_x20[0xd];
    lVar5 = unaff_x20[0xf];
    local_88 = (undefined1)lVar1;
    local_87 = (undefined1)((ulong)lVar1 >> 8);
    local_98 = lVar7;
    lStack_90 = lVar9;
    local_80 = lVar2;
    lStack_78 = lVar8;
    local_70 = (char)lVar5;
    __ss6HasherV8_combineyySuF(4);
    uStack_b8 = param_1[5];
    local_c0 = param_1[4];
    uStack_a8 = param_1[7];
    uStack_b0 = param_1[6];
    local_a0 = param_1[8];
    uStack_d8 = param_1[1];
    local_e0 = *param_1;
    uStack_c8 = param_1[3];
    uStack_d0 = param_1[2];
    FUN_100008184(lVar7,lVar9);
    _swift_bridgeObjectRetain(lVar8);
    FUN_100599dbc(&local_e0);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    FUN_1005419bc(lVar7,lVar9,lVar1,lVar2,lVar8,(char)lVar5);
    param_1[5] = uStack_b8;
    param_1[4] = local_c0;
    param_1[7] = uStack_a8;
    param_1[6] = uStack_b0;
    param_1[8] = local_a0;
    param_1[1] = uStack_d8;
    *param_1 = local_e0;
    param_1[3] = uStack_c8;
    param_1[2] = uStack_d0;
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_1005bad30(*unaff_x20,999), unaff_x21 != 0)) {
    return;
  }
  FUN_100563e08(param_1,1000,0x20000000,unaff_x20[3]);
  if (unaff_x21 != 0) {
    return;
  }
  lVar8 = unaff_x20[1];
  uVar4 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar6 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_10059b848;
    }
    lVar7 = (long)(int)lVar8;
    lVar8 = lVar8 >> 0x20;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    lVar7 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar8 + 0x18);
  }
  if (lVar7 == lVar8) {
    return;
  }
LAB_10059b848:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}

