// rea decompile_all
// name: FUN_10016e184
// address: 0x10016e184
// body: available
// range: 0x10016e184-0x10016e6cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10016e184(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong *puVar18;
  ulong uVar19;
  char *pcVar20;
  ulong uVar21;
  undefined1 auStack_160 [16];
  ulong *local_150;
  undefined **local_148;
  long local_138;
  long local_130;
  char *local_128;
  undefined8 local_120;
  undefined *local_108;
  undefined1 auStack_e0 [16];
  long local_d0;
  undefined4 local_c4;
  undefined *local_c0;
  undefined1 local_b8;
  undefined *local_98;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  
  uVar7 = 0;
  FUN_100401b14();
  pcVar20 = "handleReceiveCopy(result:)";
  uVar6 = 0x16f450;
  local_d0 = param_1;
  FUN_1003fb45c(FUN_10016f450,auStack_e0,0xd0000000000000a9,0x8000000100893700,0xd00000000000002a,
                0x8000000100895bd0,0x17,7);
  FUN_10016f208();
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar14 = unaff_x20 + 0x10;
  _swift_weakLoadStrong();
  if (lVar14 != 0) {
    lVar16 = *(long *)(param_1 + 0x10);
    local_138 = lVar14;
    local_130 = param_1;
    if (lVar16 != 0) {
      puVar18 = (ulong *)(param_1 + 0x20);
      local_108 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_128 = "handleReceiveCopy(result:)";
      local_120 = uVar7;
      do {
        uVar15 = puVar18[1];
        local_90 = *puVar18;
        uStack_78 = puVar18[3];
        uVar21 = puVar18[2];
        uVar19 = puVar18[4];
        uVar5 = *puVar18;
        uVar1 = puVar18[1];
        uVar12 = puVar18[2];
        uVar13 = puVar18[3];
        uStack_88 = uVar15;
        uStack_80 = uVar21;
        local_70 = uVar19;
        FUN_10014590c(&local_90,&local_c0);
        uVar8 = uVar15;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar15,uVar21);
        if (((uVar15 != 0x662e63696c627570) || (uVar21 != 0xef6c72752d656c69)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar15,uVar21,0x662e63696c627570,0xef6c72752d656c69,0), (uVar15 & 1) == 0)) {
          uVar15 = local_90 & 0xffffffff;
          lVar9 = 0;
          FUN_10016dae4();
          _swift_allocObject();
          FUN_10016d3cc();
          *(undefined4 *)(lVar9 + 0x10) = uVar6;
          lVar14 = lVar9;
          FUN_10016f208();
          *(int *)(lVar9 + 0x14) = (int)lVar14;
          FUN_10016f458();
          uVar7 = *(undefined8 *)(lVar9 + 0x28);
          *(long *)(lVar9 + 0x20) = lVar14;
          *(ulong *)(lVar9 + 0x28) = uVar15;
          _swift_bridgeObjectRelease(uVar7);
          *(undefined1 *)(lVar9 + 0x18) = 0;
          uVar7 = *(undefined8 *)(lVar9 + 0x30);
          uVar3 = *(undefined8 *)(lVar9 + 0x38);
          uVar2 = *(undefined8 *)(lVar9 + 0x40);
          uVar4 = *(undefined8 *)(lVar9 + 0x48);
          uVar17 = *(undefined8 *)(lVar9 + 0x50);
          *(ulong *)(lVar9 + 0x30) = (ulong)(uint)uVar5;
          *(ulong *)(lVar9 + 0x38) = uVar1;
          *(ulong *)(lVar9 + 0x40) = uVar12;
          *(ulong *)(lVar9 + 0x48) = uVar13;
          *(ulong *)(lVar9 + 0x50) = uVar19;
          FUN_10014590c(&local_90,&local_c0);
          FUN_100139ca0(uVar7,uVar3,uVar2,uVar4,uVar17);
          *(ulong *)(lVar9 + 0x58) = uVar8;
          _swift_retain(lVar9);
          puVar10 = local_108;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar10 == 0) || ((long)local_108 < 0)) ||
             (pcVar20 = local_128, ((ulong)local_108 >> 0x3e & 1) != 0)) {
            if ((ulong)local_108 >> 0x3e == 0) {
              puVar10 = *(undefined **)(((ulong)local_108 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar10 = (undefined *)((ulong)local_108 & 0xffffffffffffff8);
              if ((long)local_108 < 0) {
                puVar10 = local_108;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg(puVar10);
            }
            pcVar20 = local_128;
            puVar11 = (undefined *)0x0;
            FUN_1000358f0(0,puVar10 + 1,1,local_108);
            local_108 = puVar11;
          }
          uVar12 = (ulong)local_108 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar12 + 0x10);
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_1000358f0(puVar10,uVar1 + 1,1,local_108);
            uVar12 = (ulong)puVar10 & 0xffffffffffffff8;
            local_108 = puVar10;
          }
          *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
          *(long *)(uVar12 + uVar1 * 8 + 0x20) = lVar9;
          _swift_release(lVar9);
          local_98 = local_108;
        }
        puVar18 = puVar18 + 5;
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_150 = &local_90;
        local_148 = (undefined **)uVar8;
        FUN_1003fb45c(FUN_10016f5e4,auStack_160,0xd0000000000000a9,
                      (ulong)pcVar20 | 0x8000000000000000,0xd00000000000002a,0x8000000100895bd0,0x2a
                      ,7);
        FUN_100145950(&local_90);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_148 = &local_98;
    local_150 = (ulong *)local_130;
    FUN_1003fb45c(FUN_10016f5ec,auStack_160,0xd0000000000000a9,(ulong)pcVar20 | 0x8000000000000000,
                  0xd00000000000002a,0x8000000100895bd0,0x2c,7);
    puVar10 = local_98;
    if ((ulong)local_98 >> 0x3e == 0) {
      puVar11 = *(undefined **)(((ulong)local_98 & 0xffffffffffffff8) + 0x10);
      lVar14 = local_138;
    }
    else {
      puVar11 = (undefined *)((ulong)local_98 & 0xffffffffffffff8);
      if ((long)local_98 < 0) {
        puVar11 = local_98;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar14 = local_138;
    }
    local_138 = lVar14;
    if (puVar11 != (undefined *)0x0) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_150 = (ulong *)CONCAT44(local_150._4_4_,uVar6);
      local_148 = &local_98;
      FUN_1003fb45c(FUN_10016f5f4,auStack_160,0xd0000000000000a9,(ulong)pcVar20 | 0x8000000000000000
                    ,0xd00000000000002a,0x8000000100895bd0,0x2e,7);
      puVar10 = local_98;
      lVar14 = *(long *)(unaff_x20 + 0x28);
      if ((ulong)local_98 >> 0x3e == 0) {
        puVar11 = *(undefined **)(((ulong)local_98 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar11 = (undefined *)((ulong)local_98 & 0xffffffffffffff8);
        if ((long)local_98 < 0) {
          puVar11 = local_98;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      local_b8 = 0;
      local_c4 = uVar6;
      local_c0 = puVar11;
      _swift_retain(lVar14);
      FUN_1003e3634(&local_c0,&local_c4);
      _swift_release(local_138);
    }
    _swift_release(lVar14);
  }
  return puVar10;
}

