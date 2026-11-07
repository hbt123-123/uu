// rea decompile_all
// name: FUN_1005bdb20
// address: 0x1005bdb20
// body: available
// range: 0x1005bdb20-0x1005bdd73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bdb20(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *unaff_x20;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  local_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  local_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  pbVar10 = (byte *)(param_1 + 0x59);
  do {
    lVar6 = lVar6 + -1;
    lVar12 = *(long *)(pbVar10 + -0x39);
    uVar13 = *(ulong *)(pbVar10 + -0x31);
    iVar3 = *(int *)(pbVar10 + -0x29);
    uVar15 = *(undefined8 *)(pbVar10 + -0x21);
    lVar14 = *(long *)(pbVar10 + -0x19);
    uVar8 = *(undefined8 *)(pbVar10 + -0x11);
    lVar11 = *(long *)(pbVar10 + -9);
    bVar2 = pbVar10[-1];
    bVar1 = *pbVar10;
    uStack_d8 = uStack_88;
    local_e0 = local_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    local_c0 = local_70;
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    if ((pbVar10[-0x25] & 1) == 0) {
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyys6UInt64VF((long)iVar3);
    }
    if (lVar14 == 0) {
      FUN_100008184(lVar12,uVar13);
      _swift_bridgeObjectRetain(lVar11);
    }
    else {
      __ss6HasherV8_combineyySuF(2);
      FUN_100008184(lVar12,uVar13);
      _swift_bridgeObjectRetain(lVar11);
      _swift_bridgeObjectRetain(lVar14);
      __sSS4hash4intoys6HasherVz_tF(&local_100,uVar15,lVar14);
    }
    if (lVar11 != 0) {
      __ss6HasherV8_combineyySuF(3);
      __sSS4hash4intoys6HasherVz_tF(&local_100,uVar8,lVar11);
    }
    if (bVar2 != 2) {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
    }
    if (bVar1 != 2) {
      __ss6HasherV8_combineyySuF(6);
      __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
    }
    uVar4 = (uint)(uVar13 >> 0x20);
    uVar5 = uVar4 >> 0x1e;
    if (uVar4 >> 0x1e < 2) {
      if (uVar5 == 0) {
        if ((uVar13 & 0xff000000000000) == 0) goto LAB_1005bdcec;
      }
      else {
        lVar7 = (long)(int)lVar12;
        lVar9 = lVar12 >> 0x20;
LAB_1005bdcd4:
        if (lVar7 == lVar9) goto LAB_1005bdcec;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_100,lVar12,uVar13);
    }
    else if (uVar5 == 2) {
      lVar7 = *(long *)(lVar12 + 0x10);
      lVar9 = *(long *)(lVar12 + 0x18);
      goto LAB_1005bdcd4;
    }
LAB_1005bdcec:
    FUN_100006cdc(lVar12,uVar13);
    _swift_bridgeObjectRelease(lVar14);
    _swift_bridgeObjectRelease(lVar11);
    if (lVar6 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = local_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = local_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = local_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    pbVar10 = pbVar10 + 0x40;
    uStack_88 = uStack_d8;
    local_90 = local_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    local_70 = local_c0;
    uStack_a8 = uStack_f8;
    local_b0 = local_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
  } while( true );
}

