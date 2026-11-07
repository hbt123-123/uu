// rea decompile_all
// name: FUN_1005ba3dc
// address: 0x1005ba3dc
// body: available
// range: 0x1005ba3dc-0x1005ba5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005ba3dc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x20;
  ulong *puVar13;
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
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
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
  puVar13 = (ulong *)(param_1 + 0x48);
  do {
    lVar10 = lVar10 + -1;
    uVar2 = puVar13[-5];
    uVar5 = puVar13[-4];
    uVar3 = puVar13[-3];
    uVar6 = puVar13[-2];
    uVar4 = puVar13[-1];
    uVar7 = *puVar13;
    uStack_d8 = uStack_88;
    local_e0 = local_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    local_c0 = local_70;
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    if (uVar1 == 0) {
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      FUN_100008184(uVar4,uVar7);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      FUN_100008184(uVar4,uVar7);
      __sSS4hash4intoys6HasherVz_tF(&local_100,uVar2,uVar5);
    }
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar1 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      __ss6HasherV8_combineyySuF(2);
      __sSS4hash4intoys6HasherVz_tF(&local_100,uVar3,uVar6);
    }
    uVar8 = (uint)(uVar7 >> 0x20);
    uVar9 = uVar8 >> 0x1e;
    if (uVar8 >> 0x1e < 2) {
      if (uVar9 == 0) {
        if ((uVar7 & 0xff000000000000) == 0) goto LAB_1005ba548;
      }
      else {
        lVar11 = (long)(int)uVar4;
        lVar12 = (long)uVar4 >> 0x20;
LAB_1005ba530:
        if (lVar11 == lVar12) goto LAB_1005ba548;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_100,uVar4,uVar7);
    }
    else if (uVar9 == 2) {
      lVar11 = *(long *)(uVar4 + 0x10);
      lVar12 = *(long *)(uVar4 + 0x18);
      goto LAB_1005ba530;
    }
LAB_1005ba548:
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar5);
    FUN_100006cdc(uVar4,uVar7);
    if (lVar10 == 0) {
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
    puVar13 = puVar13 + 6;
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

