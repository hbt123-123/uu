// rea decompile_all
// name: FUN_1000e9cf4
// address: 0x1000e9cf4
// body: available
// range: 0x1000e9cf4-0x1000ea32b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000e9cf4(undefined *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_130 [16];
  ulong auStack_120 [4];
  ulong auStack_100 [4];
  long local_e0;
  long local_d8;
  long *local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  ulong local_b0;
  ulong local_a8;
  undefined *local_a0;
  code *local_98;
  long lStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  FUN_1000e984c();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar16 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_d8 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar15 = (lVar16 - extraout_x12) - extraout_x12_00;
  FUN_1000e9934();
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    plVar11 = (long *)(param_2 + 0x38);
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_e0 = lVar15;
    do {
      uVar14 = plVar11[-3];
      puVar6 = (undefined *)plVar11[-2];
      local_c0 = plVar11[-1];
      lStack_b8 = *plVar11;
      uVar4 = uVar14 & 0xffffffffffff;
      if (((ulong)puVar6 & 0x2000000000000000) != 0) {
        uVar4 = (ulong)puVar6 >> 0x38 & 0xf;
      }
      local_d0 = plVar11;
      local_c8 = lVar3;
      _swift_bridgeObjectRetain(puVar6);
      puVar7 = param_1;
      if (uVar4 == 0) {
LAB_1000ea0d4:
        _swift_bridgeObjectRelease(puVar8);
        _swift_bridgeObjectRelease(puVar7);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong *)(lVar15 + -0x10) = uVar14;
        *(undefined **)(lVar15 + -8) = puVar6;
        FUN_1003fb4ec(FUN_1000ea3a0,lVar15 + -0x20,0xd0000000000000a9,0x8000000100887e20,
                      0xd00000000000001e,0x8000000100888280,0x177,0);
        _swift_bridgeObjectRelease(puVar6);
        uVar5 = 1;
        puVar8 = (undefined *)0x0;
        goto LAB_1000ea2fc;
      }
      _swift_bridgeObjectRetain(puVar6);
      uVar4 = 0x2f;
      __sSS9hasPrefixySbSSF(0x2f,0xe100000000000000,uVar14,puVar6);
      if ((uVar4 & 1) != 0) {
LAB_1000ea0c4:
        _swift_bridgeObjectRelease(puVar8);
        puVar7 = puVar6;
        puVar8 = param_1;
        goto LAB_1000ea0d4;
      }
      uVar4 = 0x5c;
      __sSS9hasPrefixySbSSF(0x5c,0xe100000000000000,uVar14,puVar6);
      if ((uVar4 & 1) != 0) goto LAB_1000ea0c4;
      local_70 = 0x5c;
      uStack_68 = 0xe100000000000000;
      local_80 = 0x2f;
      uStack_78 = 0xe100000000000000;
      local_a8 = uVar14;
      local_a0 = puVar6;
      FUN_10009ff0c();
      *(ulong *)(lVar15 + -0x10) = uVar4;
      *(ulong *)(lVar15 + -8) = uVar4;
      *(ulong *)(lVar15 + -0x18) = uVar4;
      *(undefined **)(lVar15 + -0x20) = PTR___sSSN_1009957f8;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (&local_70,&local_80,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
      local_a8 = 0x2f;
      local_a0 = (undefined *)0xe100000000000000;
      local_b0 = uVar14;
      (*(code *)PTR____chkstk_darwin_100995498)();
      lVar3 = lVar15 + -0x20;
      *(ulong **)(lVar15 + -0x10) = &local_a8;
      uVar5 = 0x7fffffffffffffff;
      pcVar10 = FUN_10009ff84;
      FUN_10000b9ac(0x7fffffffffffffff,0);
      uVar4 = 0x2e2e;
      uVar9 = 0xe200000000000000;
      __sSsySsSScfC();
      local_a8 = uVar4;
      local_a0 = (undefined *)uVar9;
      local_98 = pcVar10;
      lStack_90 = lVar3;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(ulong **)(lVar15 + -0x10) = &local_a8;
      uVar4 = 0;
      FUN_100152ce4(FUN_1000ea368,lVar15 + -0x20,uVar5);
      uVar14 = local_b0;
      _swift_bridgeObjectRelease(lVar3);
      _swift_bridgeObjectRelease(uVar5);
      if ((uVar4 & 1) != 0) goto LAB_1000ea0c4;
      if (*(long *)(param_1 + 0x10) == 0) {
        _swift_bridgeObjectRelease(param_1);
        _swift_bridgeObjectRelease(puVar6);
LAB_1000ea19c:
        _swift_bridgeObjectRelease(puVar8);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong *)(lVar15 + -0x10) = uVar14;
        *(undefined **)(lVar15 + -8) = puVar6;
        FUN_1003fb4ec(FUN_1000ea384,lVar15 + -0x20,0xd0000000000000a9,0x8000000100887e20,
                      0xd00000000000001e,0x8000000100888280,0x17b,0);
        _swift_bridgeObjectRelease(puVar6);
        uVar5 = 1;
        puVar8 = (undefined *)0x3;
        goto LAB_1000ea2fc;
      }
      _swift_bridgeObjectRetain(param_1);
      uVar4 = uVar14;
      puVar7 = puVar6;
      FUN_1001a2c70(uVar14);
      lVar3 = local_d8;
      if (((ulong)puVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar6);
        _swift_bridgeObjectRelease_n(param_1,2);
        goto LAB_1000ea19c;
      }
      lVar13 = *(long *)(lVar12 + 0x48);
      FUN_100082394(*(long *)(param_1 + 0x38) + lVar13 * uVar4,local_d8,FUN_1000e984c);
      _swift_bridgeObjectRelease(param_1);
      lVar1 = local_e0;
      FUN_1000823d8(lVar3,local_e0,FUN_1000e984c);
      lVar2 = lStack_b8;
      lVar3 = local_c0;
      if ((local_c0 != 0 || lStack_b8 != 0) &&
         ((*(long *)(lVar1 + 0x10) != local_c0 || (*(long *)(lVar1 + 0x18) != lStack_b8)))) {
        _swift_bridgeObjectRelease(puVar8);
        _swift_bridgeObjectRelease(param_1);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar4 = local_b0;
        *(ulong *)(lVar15 + -0x40) = local_b0;
        *(undefined **)(lVar15 + -0x38) = puVar6;
        *(long *)(lVar15 + -0x30) = lVar1;
        *(ulong *)(lVar15 + -0x28) = uVar4;
        *(undefined **)(lVar15 + -0x20) = puVar6;
        *(long *)(lVar15 + -0x18) = lVar3;
        *(long *)(lVar15 + -0x10) = lVar2;
        FUN_1003fb4ec(FUN_1000ea38c,lVar15 + -0x50,0xd0000000000000a9,0x8000000100887e20,
                      0xd00000000000001e,0x8000000100888280,0x180,0);
        _swift_bridgeObjectRelease_n(puVar6,2);
        FUN_1000d27dc(lVar1,FUN_1000e984c);
        uVar5 = 1;
        puVar8 = (undefined *)0x4;
        goto LAB_1000ea2fc;
      }
      _swift_bridgeObjectRelease_n(puVar6,2);
      FUN_100082394(lVar1,lVar16,FUN_1000e984c);
      puVar6 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100035e40(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar4 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100035e40(puVar8,uVar4 + 1,1,puVar7);
      }
      plVar11 = local_d0 + 4;
      *(ulong *)(puVar8 + 0x10) = uVar4 + 1;
      FUN_1000823d8(lVar16,puVar8 + uVar4 * lVar13 +
                                    ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                                    ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)),
                    FUN_1000e984c);
      FUN_1000d27dc(lVar1,FUN_1000e984c);
      lVar3 = local_c8 + -1;
    } while (lVar3 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  uVar5 = 0;
LAB_1000ea2fc:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = puVar8;
  return auVar17;
}

