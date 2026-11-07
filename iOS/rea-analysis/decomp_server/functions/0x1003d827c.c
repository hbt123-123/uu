// rea decompile_all
// name: FUN_1003d827c
// address: 0x1003d827c
// body: available
// range: 0x1003d827c-0x1003d8547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003d83bc) */

undefined1  [16] FUN_1003d827c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  uint uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined *local_a0;
  undefined *local_98;
  ulong local_90;
  long local_88;
  long lStack_80;
  undefined *local_78;
  ulong uStack_70;
  
  lVar16 = *unaff_x20;
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  local_88 = *(long *)(lVar1 + -8);
  lStack_80 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_88 + 0x40));
  puVar6 = (undefined *)((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar12 = *(ulong *)(lVar16 + 0x138);
  lVar2 = 0;
  __sSqMa(0,uVar12);
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar6 - extraout_x8_00;
  lVar17 = *(long *)(uVar12 - 8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  puVar14 = (undefined *)(lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar15 + 0x10))(lVar13,param_1,lVar2);
  lVar1 = lVar13;
  (**(code **)(lVar17 + 0x30))(lVar13,1,uVar12);
  if ((int)lVar1 == 1) {
    (**(code **)(lVar15 + 8))(lVar13,lVar2);
    local_98 = (undefined *)0x0;
    local_90 = 0xf000000000000000;
  }
  else {
    (**(code **)(lVar17 + 0x20))(puVar14,lVar13,uVar12);
    puVar3 = puVar14;
    uVar7 = uVar12;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj
              (puVar14,uVar12,*(undefined8 *)(lVar16 + 0x148));
    puVar4 = &DAT_100a89490;
    local_98 = puVar3;
    local_90 = uVar7;
    FUN_1003d81bc();
    puVar3 = &DAT_100a894c8;
    uVar8 = uVar7;
    local_a0 = puVar4;
    FUN_1003d81bc();
    puVar4 = puVar3;
    local_78 = puVar3;
    uStack_70 = uVar8;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar6);
    FUN_10009ff0c();
    uVar9 = 1;
    puVar5 = puVar6;
    puVar10 = PTR___sSSN_1009957f8;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (puVar6,1,PTR___sSSN_1009957f8,puVar4);
    uVar11 = (uint)puVar4;
    (**(code **)(local_88 + 8))(puVar6,lStack_80);
    if (uVar9 >> 0x3c < 0xf) {
      puVar3 = puVar5;
      FUN_100665cbc(puVar5,uVar9);
      FUN_100006cc8(puVar5,uVar9);
    }
    else {
      _swift_bridgeObjectRetain(uVar8);
      uVar9 = uVar8;
      FUN_10039c910(puVar3,uVar8);
      _swift_bridgeObjectRelease(uVar8);
    }
    _swift_bridgeObjectRelease(uVar8);
    FUN_1006357a4(puVar3);
    puVar6 = local_a0;
    uVar8 = uVar7;
    FUN_10039c9a8(local_a0,uVar7,puVar3,uVar9,puVar10,uVar11 & 1,local_98,local_90);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar9);
    (**(code **)(lVar17 + 8))(puVar14,uVar12);
    if (uVar8 >> 0x3c < 0xf) {
      FUN_100006cdc(local_98,local_90);
      local_98 = puVar6;
      local_90 = uVar8;
    }
  }
  auVar18._8_8_ = local_90;
  auVar18._0_8_ = local_98;
  return auVar18;
}

