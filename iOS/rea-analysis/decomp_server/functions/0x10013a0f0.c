// rea decompile_all
// name: FUN_10013a0f0
// address: 0x10013a0f0
// body: available
// range: 0x10013a0f0-0x10013a617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10013a0f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  uint *puVar15;
  ulong uVar16;
  undefined1 auStack_230 [16];
  undefined **local_220;
  undefined **ppuStack_218;
  long local_210;
  long local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  char *local_1e8;
  char *pcStack_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  long local_1a0;
  undefined1 auStack_190 [40];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  uVar6 = 0;
  FUN_100401b14();
  local_1e8 = s___1008918c0 + 0x10;
  pcStack_1e0 = "allTakProcessData";
  local_1d8 = uVar6;
  local_1a0 = param_1;
  FUN_1003fb45c(FUN_100145904,auStack_1b0,0xd0000000000000ad,0x8000000100890750,0xd000000000000026,
                0x80000001008918d0,0x37,7);
  puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar10 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::managerModel;
  _swift_weakLoadStrong();
  if (lVar10 != 0) {
    lVar13 = *(long *)(param_1 + 0x10);
    local_210 = lVar10;
    local_208 = param_1;
    if (lVar13 != 0) {
      puVar15 = (uint *)(param_1 + 0x20);
      uStack_1f8 = 0;
      local_200 = 0xf000000000000000;
      puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
      do {
        uVar16 = *(ulong *)(puVar15 + 2);
        local_a0 = *(undefined8 *)puVar15;
        uStack_88 = *(undefined8 *)(puVar15 + 6);
        lVar10 = *(long *)(puVar15 + 4);
        uVar6 = *(undefined8 *)(puVar15 + 8);
        uVar5 = *puVar15;
        uStack_1b8 = *(undefined8 *)(puVar15 + 2);
        local_1c0 = *(undefined8 *)(puVar15 + 4);
        local_1c8 = *(undefined8 *)(puVar15 + 6);
        uStack_98 = uVar16;
        lStack_90 = lVar10;
        local_80 = uVar6;
        FUN_10014590c(&local_a0,&local_168);
        uVar9 = uVar16;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar16,lVar10);
        if (((uVar16 == 0x662e63696c627570) && (lVar10 == -0x10938d8ad29a9397)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar16,lVar10,0x662e63696c627570,0xef6c72752d656c69,0), (uVar16 & 1) != 0)) {
          lVar10 = 0;
          local_1d0 = lVar13;
          FUN_10016dae4();
          _swift_allocObject();
          *(undefined8 *)(lVar10 + 0x10) = 0;
          *(undefined1 *)(lVar10 + 0x18) = 0;
          *(undefined8 *)(lVar10 + 0x28) = 0;
          *(undefined8 *)(lVar10 + 0x20) = 0;
          *(undefined8 *)(lVar10 + 0x38) = 0;
          *(undefined8 *)(lVar10 + 0x30) = 0;
          *(undefined8 *)(lVar10 + 0x48) = 0;
          *(undefined8 *)(lVar10 + 0x40) = 0;
          *(undefined8 *)(lVar10 + 0x58) = 0;
          *(undefined8 *)(lVar10 + 0x50) = 0;
          *(undefined8 *)(lVar10 + 0x60) = 0;
          *(undefined8 *)(lVar10 + 0x68) = 0xf000000000000000;
          *(undefined8 *)(lVar10 + 0x70) = 0;
          *(undefined8 *)(lVar10 + 0x78) = 0;
          *(undefined8 *)(lVar10 + 0x88) = uStack_1f8;
          *(undefined8 *)(lVar10 + 0x80) = local_200;
          *(undefined4 *)(lVar10 + 0x90) = 0;
          FUN_100145750(&local_168);
          *(undefined8 *)(lVar10 + 0x130) = uStack_d0;
          *(undefined8 *)(lVar10 + 0x128) = uStack_d8;
          *(undefined8 *)(lVar10 + 0x140) = uStack_c0;
          *(undefined8 *)(lVar10 + 0x138) = local_c8;
          *(undefined8 *)(lVar10 + 0x150) = uStack_b0;
          *(undefined8 *)(lVar10 + 0x148) = uStack_b8;
          *(undefined8 *)(lVar10 + 0xe0) = uStack_120;
          *(undefined8 *)(lVar10 + 0xd8) = local_128;
          *(undefined8 *)(lVar10 + 0xf0) = uStack_110;
          *(undefined8 *)(lVar10 + 0xe8) = uStack_118;
          *(undefined8 *)(lVar10 + 0x100) = uStack_100;
          *(undefined8 *)(lVar10 + 0xf8) = local_108;
          *(undefined8 *)(lVar10 + 0x110) = uStack_f0;
          *(undefined8 *)(lVar10 + 0x108) = uStack_f8;
          *(undefined8 *)(lVar10 + 0x120) = uStack_e0;
          *(undefined8 *)(lVar10 + 0x118) = local_e8;
          *(undefined8 *)(lVar10 + 0xa0) = uStack_160;
          *(undefined8 *)(lVar10 + 0x98) = local_168;
          *(undefined8 *)(lVar10 + 0xb0) = uStack_150;
          *(undefined8 *)(lVar10 + 0xa8) = local_158;
          *(undefined8 *)(lVar10 + 0xc0) = uStack_140;
          *(undefined8 *)(lVar10 + 0xb8) = local_148;
          *(undefined8 *)(lVar10 + 0xd0) = uStack_130;
          *(undefined8 *)(lVar10 + 200) = local_138;
          *(undefined8 *)(lVar10 + 0x158) = 0;
          *(undefined4 *)(lVar10 + 0x160) = 0;
          *(undefined1 *)(lVar10 + 0x164) = 0;
          *(undefined1 *)(lVar10 + 0x18) = 3;
          uVar1 = *(undefined8 *)(lVar10 + 0x30);
          uVar3 = *(undefined8 *)(lVar10 + 0x38);
          uVar2 = *(undefined8 *)(lVar10 + 0x40);
          uVar4 = *(undefined8 *)(lVar10 + 0x48);
          uVar14 = *(undefined8 *)(lVar10 + 0x50);
          *(ulong *)(lVar10 + 0x30) = (ulong)uVar5;
          *(undefined8 *)(lVar10 + 0x38) = uStack_1b8;
          *(undefined8 *)(lVar10 + 0x40) = local_1c0;
          *(undefined8 *)(lVar10 + 0x48) = local_1c8;
          *(undefined8 *)(lVar10 + 0x50) = uVar6;
          FUN_10014590c(&local_a0,auStack_190);
          FUN_100139ca0(uVar1,uVar3,uVar2,uVar4,uVar14);
          *(ulong *)(lVar10 + 0x58) = uVar9;
          _swift_retain(lVar10);
          puVar8 = puVar11;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar8 == 0) || ((long)puVar11 < 0)) ||
             (lVar13 = local_1d0, puVar8 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar11 >> 0x3e == 0) {
              puVar7 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
              if ((long)puVar11 < 0) {
                puVar7 = puVar11;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg(puVar7);
            }
            lVar13 = local_1d0;
            puVar8 = (undefined *)0x0;
            FUN_1000358f0(0,puVar7 + 1,1,puVar11);
          }
          uVar12 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar16 = *(ulong *)(uVar12 + 0x10);
          puVar11 = puVar8;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar16) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_1000358f0(puVar11,uVar16 + 1,1,puVar8);
            uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar12 + 0x10) = uVar16 + 1;
          *(long *)(uVar12 + uVar16 * 8 + 0x20) = lVar10;
          _swift_release(lVar10);
          local_a8 = puVar11;
        }
        puVar15 = puVar15 + 10;
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_220 = (undefined **)&local_a0;
        ppuStack_218 = (undefined **)uVar9;
        FUN_1003fb45c(FUN_100145948,auStack_230,0xd0000000000000ad,
                      (ulong)pcStack_1e0 | 0x8000000000000000,0xd000000000000026,
                      (ulong)local_1e8 | 0x8000000000000000,0x46,7);
        FUN_100145950(&local_a0);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    ppuStack_218 = &local_a8;
    local_220 = (undefined **)local_208;
    FUN_1003fb45c(FUN_100145984,auStack_230,0xd0000000000000ad,
                  (ulong)pcStack_1e0 | 0x8000000000000000,0xd000000000000026,
                  (ulong)local_1e8 | 0x8000000000000000,0x48,7);
    if ((ulong)local_a8 >> 0x3e == 0) {
      puVar11 = *(undefined **)(((ulong)local_a8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar11 = (undefined *)((ulong)local_a8 & 0xffffffffffffff8);
      if ((long)local_a8 < 0) {
        puVar11 = local_a8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (puVar11 == (undefined *)0x0) {
      _swift_release(local_210);
      puVar11 = local_a8;
    }
    else {
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_220 = &local_a8;
      FUN_1003fb45c(FUN_10014598c,auStack_230,0xd0000000000000ad,
                    (ulong)pcStack_1e0 | 0x8000000000000000,0xd000000000000026,
                    (ulong)local_1e8 | 0x8000000000000000,0x4a,7);
      _swift_release(local_210);
      puVar11 = local_a8;
    }
  }
  return puVar11;
}

