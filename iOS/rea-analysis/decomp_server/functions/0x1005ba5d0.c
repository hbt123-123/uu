// rea decompile_all
// name: FUN_1005ba5d0
// address: 0x1005ba5d0
// body: available
// range: 0x1005ba5d0-0x1005ba837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005ba5d0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x20;
  long *plVar14;
  long lVar15;
  undefined1 auStack_128 [24];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    return;
  }
  uStack_98 = unaff_x20[5];
  local_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  local_80 = unaff_x20[8];
  uStack_b8 = unaff_x20[1];
  local_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  plVar14 = (long *)(param_1 + 0x50);
  do {
    lVar11 = lVar11 + -1;
    uVar2 = plVar14[-6];
    uVar5 = plVar14[-5];
    lVar3 = plVar14[-4];
    uVar6 = plVar14[-3];
    lVar4 = plVar14[-2];
    lVar7 = plVar14[-1];
    lVar15 = *plVar14;
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    local_d0 = local_80;
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    uStack_108 = uStack_b8;
    local_110 = local_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    if (uVar1 == 0) {
      _swift_bridgeObjectRetain(uVar5);
      FUN_100008184(lVar3,uVar6);
      FUN_100481814(lVar4,lVar7,lVar15);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      _swift_bridgeObjectRetain(uVar5);
      FUN_100008184(lVar3,uVar6);
      FUN_100481814(lVar4,lVar7,lVar15);
      __sSS4hash4intoys6HasherVz_tF(&local_110,uVar2,uVar5);
    }
    if (lVar15 != 0) {
      __ss6HasherV8_combineyySuF(2);
      _swift_beginAccess(lVar15 + 0x10,auStack_128,0,0);
      uVar2 = *(ulong *)(lVar15 + 0x10);
      uVar8 = *(ulong *)(lVar15 + 0x18);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar8 & 0x2000000000000000) != 0) {
        uVar1 = uVar8 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        FUN_100481814(lVar4,lVar7,lVar15);
        _swift_bridgeObjectRetain(uVar8);
        __sSS4hash4intoys6HasherVz_tF(&local_110,uVar2,uVar8);
        FUN_10008f148(lVar4,lVar7,lVar15);
        _swift_bridgeObjectRelease(uVar8);
      }
    }
    uVar9 = (uint)(uVar6 >> 0x20);
    uVar10 = uVar9 >> 0x1e;
    if (uVar9 >> 0x1e < 2) {
      if (uVar10 == 0) {
        if ((uVar6 & 0xff000000000000) == 0) goto LAB_1005ba7a4;
      }
      else {
        lVar12 = (long)(int)lVar3;
        lVar13 = lVar3 >> 0x20;
LAB_1005ba78c:
        if (lVar12 == lVar13) goto LAB_1005ba7a4;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_110,lVar3,uVar6);
    }
    else if (uVar10 == 2) {
      lVar12 = *(long *)(lVar3 + 0x10);
      lVar13 = *(long *)(lVar3 + 0x18);
      goto LAB_1005ba78c;
    }
LAB_1005ba7a4:
    _swift_bridgeObjectRelease(uVar5);
    FUN_100006cdc(lVar3,uVar6);
    FUN_10008f148(lVar4,lVar7,lVar15);
    if (lVar11 == 0) {
      unaff_x20[5] = uStack_e8;
      unaff_x20[4] = local_f0;
      unaff_x20[7] = uStack_d8;
      unaff_x20[6] = uStack_e0;
      unaff_x20[8] = local_d0;
      unaff_x20[1] = uStack_108;
      *unaff_x20 = local_110;
      unaff_x20[3] = uStack_f8;
      unaff_x20[2] = uStack_100;
      return;
    }
    plVar14 = plVar14 + 7;
    uStack_98 = uStack_e8;
    local_a0 = local_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    local_80 = local_d0;
    uStack_b8 = uStack_108;
    local_c0 = local_110;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
  } while( true );
}

