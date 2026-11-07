// rea decompile_all
// name: FUN_1001934bc
// address: 0x1001934bc
// body: available
// range: 0x1001934bc-0x10019398f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001934bc(undefined8 *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_270 [16];
  long local_260;
  undefined **ppuStack_258;
  undefined *local_250;
  undefined8 *local_248;
  undefined8 local_240;
  ulong uStack_238;
  char *local_230;
  char *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined *local_210;
  undefined8 uStack_208;
  long local_200;
  undefined8 uStack_1f8;
  undefined *local_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [72];
  undefined *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined *local_148;
  long local_140;
  ulong uStack_138;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [24];
  
  if (param_2 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  local_248 = param_1;
  if (uVar5 == 0) {
    uStack_1e8 = 0;
    local_1f0 = (undefined *)0x0;
    puVar9 = (undefined *)0x0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_210 = (undefined *)0x0;
    uStack_208 = 0;
    local_220 = 0;
    uStack_218 = 0;
  }
  else {
    FUN_10041740c(&local_c0);
    uStack_f8 = uStack_b0;
    local_100 = local_b8;
    uStack_e8 = uStack_a0;
    uStack_f0 = local_a8;
    uStack_d8 = uStack_90;
    local_e0 = local_98;
    uStack_c8 = uStack_80;
    uStack_d0 = local_88;
    local_250 = local_c0;
    if (param_2 >> 0x3e == 0) {
      uVar5 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = param_2 & 0xffffffffffffff8;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar5 = param_2;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar5 != 0) {
      local_148 = PTR___swiftEmptyArrayStorage_100995ea0;
      param_3 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
      FUN_100070070(0,param_3,0);
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100193990);
        (*pcVar4)();
      }
      if ((param_2 & 0xc000000000000001) == 0) {
        plVar10 = (long *)(param_2 + 0x20);
        do {
          uVar16 = *(undefined8 *)(*plVar10 + 0x58);
          uVar6 = *(ulong *)(local_148 + 0x10);
          uVar14 = uVar6 + 1;
          if (*(ulong *)(local_148 + 0x18) >> 1 <= uVar6) {
            param_3 = uVar14;
            FUN_100070070(1 < *(ulong *)(local_148 + 0x18),uVar14,1);
          }
          *(ulong *)(local_148 + 0x10) = uVar14;
          *(undefined8 *)(local_148 + uVar6 * 8 + 0x20) = uVar16;
          plVar10 = plVar10 + 1;
          uVar5 = uVar5 - 1;
          puVar9 = local_148;
        } while (uVar5 != 0);
      }
      else {
        uVar14 = 0;
        do {
          puVar9 = local_148;
          uVar6 = uVar14;
          param_3 = param_2;
          FUN_10016a034();
          uVar16 = *(undefined8 *)(uVar6 + 0x58);
          _swift_unknownObjectRelease(uVar6);
          uVar1 = *(ulong *)(puVar9 + 0x10);
          uVar6 = uVar1 + 1;
          local_148 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
            param_3 = uVar6;
            FUN_100070070(1 < *(ulong *)(puVar9 + 0x18),uVar6,1);
          }
          uVar14 = uVar14 + 1;
          *(ulong *)(local_148 + 0x10) = uVar6;
          *(undefined8 *)(local_148 + uVar1 * 8 + 0x20) = uVar16;
          puVar9 = local_148;
        } while (uVar5 != uVar14);
      }
    }
    lVar13 = *(long *)(puVar9 + 0x10);
    if (lVar13 == 0) {
      _swift_bridgeObjectRelease(puVar9);
      lVar13 = *(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      uVar16 = 0;
      FUN_100401b14();
      local_228 = s___taskID__100894f70 + 0x10;
      local_230 = s____mac___100899160 + 0x10;
      local_1f0 = PTR___swiftEmptyArrayStorage_100995ea0;
      lVar12 = 0x20;
      uStack_238 = 0xc000000000000000;
      local_240 = 0;
      local_220 = uVar16;
      local_210 = puVar9;
      do {
        lVar15 = *(long *)(local_210 + lVar12);
        local_148 = (undefined *)((ulong)local_148 & 0xffffffff00000000);
        local_140 = 0;
        uStack_138 = 0xe000000000000000;
        uStack_128 = uStack_238;
        local_130 = local_240;
        if (lVar15 == 0) {
          lVar11 = 0;
          param_3 = 0xe000000000000000;
        }
        else {
          lVar11 = lVar15;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        }
        _swift_bridgeObjectRelease(0xe000000000000000);
        local_148 = (undefined *)((ulong)local_148 & 0xffffffff00000000);
        local_140 = lVar11;
        uStack_138 = param_3;
        (*(code *)PTR____chkstk_darwin_100995498)();
        ppuStack_258 = &local_148;
        local_260 = lVar15;
        FUN_1003fb45c(FUN_100193a1c,auStack_270,0xd0000000000000a8,
                      (ulong)local_228 | 0x8000000000000000,0xd00000000000002e,
                      (ulong)local_230 | 0x8000000000000000,0x36,7);
        uVar14 = uStack_128;
        uVar16 = local_130;
        uVar5 = uStack_138;
        uVar2 = local_148._0_4_;
        local_200 = local_140;
        _swift_bridgeObjectRetain(uStack_138);
        FUN_100008184(uVar16,uVar14);
        puVar9 = local_1f0;
        puVar7 = local_1f0;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar9;
        if (((ulong)puVar7 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_100036574(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
        }
        uVar6 = *(ulong *)(puVar8 + 0x10);
        local_1f0 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar6) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_100036574(puVar9,uVar6 + 1,1,puVar8);
          local_1f0 = puVar9;
        }
        param_3 = uStack_128;
        uVar3 = local_130;
        *(ulong *)(local_1f0 + 0x10) = uVar6 + 1;
        *(undefined4 *)(local_1f0 + uVar6 * 0x28 + 0x20) = uVar2;
        *(long *)(local_1f0 + uVar6 * 0x28 + 0x28) = local_200;
        *(ulong *)(local_1f0 + uVar6 * 0x28 + 0x30) = uVar5;
        *(undefined8 *)(local_1f0 + uVar6 * 0x28 + 0x38) = uVar16;
        *(ulong *)(local_1f0 + uVar6 * 0x28 + 0x40) = uVar14;
        _swift_bridgeObjectRelease(uStack_138);
        FUN_100006cdc(uVar3);
        lVar12 = lVar12 + 8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      _swift_bridgeObjectRelease(local_210);
      lVar13 = *(long *)(local_1f0 + 0x10);
      puVar9 = local_1f0;
    }
    if (lVar13 == 0) {
      _swift_bridgeObjectRelease(puVar9);
      local_148 = local_250;
      uStack_138 = uStack_f8;
      local_140 = local_100;
      uStack_128 = uStack_e8;
      local_130 = uStack_f0;
      uStack_118 = uStack_d8;
      local_120 = local_e0;
      uStack_108 = uStack_c8;
      uStack_110 = uStack_d0;
      FUN_100128afc(&local_148);
      puVar9 = (undefined *)0x0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_210 = (undefined *)0x0;
      uStack_208 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_1f0 = (undefined *)0x0;
      uStack_1e8 = 0;
    }
    else {
      FUN_100193a24(local_78);
      uStack_180 = uStack_f8;
      local_188 = local_100;
      uStack_170 = uStack_e8;
      local_178 = uStack_f0;
      uStack_160 = uStack_d8;
      local_168 = local_e0;
      uStack_150 = uStack_c8;
      local_158 = uStack_d0;
      uStack_1f8 = uStack_e8;
      local_200 = uStack_f0;
      uStack_1e8 = uStack_f8;
      local_1f0 = (undefined *)local_100;
      uStack_218 = uStack_c8;
      local_220 = uStack_d0;
      uStack_208 = uStack_d8;
      local_210 = (undefined *)local_e0;
      uStack_118 = uStack_d8;
      local_120 = local_e0;
      uStack_108 = uStack_c8;
      uStack_110 = uStack_d0;
      uStack_138 = uStack_f8;
      local_140 = local_100;
      uStack_128 = uStack_e8;
      local_130 = uStack_f0;
      local_190 = puVar9;
      local_148 = puVar9;
      FUN_100128ac0(&local_190,auStack_1d8);
      FUN_100128afc(&local_148);
    }
  }
  *local_248 = puVar9;
  local_248[2] = uStack_1e8;
  local_248[1] = local_1f0;
  local_248[4] = uStack_1f8;
  local_248[3] = local_200;
  local_248[6] = uStack_208;
  local_248[5] = local_210;
  local_248[8] = uStack_218;
  local_248[7] = local_220;
  return;
}

