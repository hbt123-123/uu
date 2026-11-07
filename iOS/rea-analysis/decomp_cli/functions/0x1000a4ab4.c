// rea decompile_all
// name: FUN_1000a4ab4
// address: 0x1000a4ab4
// body: available
// range: 0x1000a4ab4-0x1000a5113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000a4ab4(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long *unaff_x20;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined *local_160;
  undefined *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long lStack_120;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  
  local_160 = param_1;
  if ((param_2 & 1) != 0) {
    FUN_1000b3454();
    local_160 = param_1;
  }
  uVar16 = unaff_x20[5];
  lVar21 = *(long *)(uVar16 + 0x10);
  if (lVar21 == 0) {
    uVar20 = *(ulong *)(PTR___swiftEmptyArrayStorage_1000f0740 + 0x10);
    puVar22 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    local_138 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_1000798d0(0,lVar21,0);
    puVar24 = (undefined1 *)(uVar16 + 0x40);
    do {
      puVar22 = local_138;
      uVar9 = *(undefined8 *)(puVar24 + -0x20);
      uVar12 = *(undefined8 *)(puVar24 + -0x18);
      uVar17 = *(undefined8 *)(puVar24 + -8);
      local_70 = *puVar24;
      uVar4 = puVar24[-0x10];
      uVar25 = uVar12;
      local_90 = uVar9;
      uStack_88 = uVar12;
      local_80 = uVar4;
      local_78 = uVar17;
      FUN_1000a4860(uVar9,uVar12,uVar4);
      _swift_bridgeObjectRetain(uVar17);
      puVar23 = local_160;
      FUN_1000a6560();
      FUN_1000a48a8(uVar9,uVar12,uVar4);
      _swift_bridgeObjectRelease(uVar17);
      uVar18 = *(ulong *)(puVar22 + 0x10);
      uVar20 = uVar18 + 1;
      local_138 = puVar22;
      if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar18) {
        FUN_1000798d0(1 < *(ulong *)(puVar22 + 0x18),uVar20,1);
      }
      *(ulong *)(local_138 + 0x10) = uVar20;
      *(undefined **)(local_138 + uVar18 * 0x10 + 0x20) = puVar23;
      *(undefined8 *)(local_138 + uVar18 * 0x10 + 0x28) = uVar25;
      puVar24 = puVar24 + 0x28;
      lVar21 = lVar21 + -1;
      puVar22 = local_138;
    } while (lVar21 != 0);
  }
  uVar18 = 0;
  puVar23 = PTR___swiftEmptyArrayStorage_1000f0740;
  do {
    puVar15 = (ulong *)(puVar22 + uVar18 * 0x10 + 0x28);
    do {
      if (uVar20 == uVar18) {
        _swift_bridgeObjectRelease(puVar22);
        puVar22 = &DAT_100103ed8;
        local_138 = puVar23;
        FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
        puVar8 = &DAT_100103ee0;
        FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
        uVar9 = 10;
        uVar12 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar22,puVar8);
        _swift_release(puVar23);
        uVar20 = unaff_x20[1] & 0xffffffffffff;
        if ((unaff_x20[2] & 0x2000000000000000U) != 0) {
          uVar20 = (ulong)unaff_x20[2] >> 0x38 & 0xf;
        }
        if (uVar20 == 0) {
          puVar23 = (undefined *)0x0;
          uVar25 = 0xe000000000000000;
        }
        else {
          local_138 = (undefined *)0x574549565245564f;
          uStack_130 = 0xea0000000000203a;
          __sSS6appendyySSF();
          uVar25 = uStack_130;
          uVar17 = 0;
          FUN_1000a5114(local_160,0,local_138,uStack_130);
          _swift_bridgeObjectRelease(uVar25);
          local_138 = local_160;
          uStack_130 = uVar17;
          _swift_bridgeObjectRetain(uVar17);
          __sSS6appendyySSF(0xa0a,0xe200000000000000);
          _swift_bridgeObjectRelease(uVar17);
          puVar23 = local_138;
          uVar25 = uStack_130;
        }
        FUN_1000aa0dc();
        if ((uVar16 & 1) == 0) {
          puVar22 = (undefined *)0x0;
          uVar17 = 0xe000000000000000;
        }
        else {
          lVar19 = *unaff_x20;
          lVar21 = *(long *)(lVar19 + 0x10);
          if (lVar21 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1000a5114);
            (*pcVar6)();
          }
          local_138 = PTR___swiftEmptyArrayStorage_1000f0740;
          FUN_1000798d0(0,lVar21,0);
          plVar26 = (long *)(lVar19 + 0x28);
          do {
            puVar7 = local_138;
            lVar10 = plVar26[-1];
            lVar13 = *plVar26;
            (**(code **)(lVar13 + 0x18))();
            uVar16 = *(ulong *)(puVar7 + 0x10);
            local_138 = puVar7;
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar16) {
              FUN_1000798d0(1 < *(ulong *)(puVar7 + 0x18),uVar16 + 1,1);
            }
            puVar7 = local_138;
            *(ulong *)(local_138 + 0x10) = uVar16 + 1;
            *(long *)(local_138 + uVar16 * 0x10 + 0x20) = lVar10;
            *(long *)(local_138 + uVar16 * 0x10 + 0x28) = lVar13;
            plVar26 = plVar26 + 2;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          (**(code **)(*(long *)(lVar19 + 0x28) + 0x10))(&local_138,*(undefined8 *)(lVar19 + 0x20));
          lStack_98 = lStack_120;
          local_a0 = local_128;
          FUN_1000a1b08(&local_a0,&local_148);
          FUN_10006e954(&local_138);
          lVar21 = lStack_98;
          uVar17 = local_a0;
          if (lStack_98 == 0) {
            uVar16 = *(ulong *)(puVar7 + 0x10);
          }
          else {
            uVar16 = *(ulong *)(puVar7 + 0x10);
            puVar11 = puVar7;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((int)puVar11 == 0) || (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar16)) {
              FUN_10006e610();
              puVar7 = puVar11;
            }
            FUN_10002240c(0,0,1,uVar17,lVar21);
            FUN_10001fc18(&local_a0,&DAT_100104b58,&DAT_1000d5be8);
            uVar16 = *(ulong *)(puVar7 + 0x10);
          }
          if (uVar16 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1000a510c);
            (*pcVar6)();
          }
          puVar11 = puVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((int)puVar11 == 0) || (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar16)) {
            FUN_10006e610();
            puVar7 = puVar11;
          }
          FUN_10002240c(1,1,1,0x706c6568,0xe400000000000000);
          local_148 = (undefined *)0x0;
          local_140 = 0xe000000000000000;
          __ss11_StringGutsV4growyySiF(0x2b);
          _swift_bridgeObjectRelease(local_140);
          local_148 = (undefined *)0x272065655320200a;
          local_140 = 0xe800000000000000;
          uVar17 = 0x20;
          uVar14 = 0xe100000000000000;
          __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar22,puVar8);
          _swift_bridgeObjectRelease(puVar7);
          __sSS6appendyySSF(uVar17,uVar14);
          _swift_bridgeObjectRelease(uVar14);
          __sSS6appendyySSF(0xd000000000000021,0x80000001000caa00);
          uVar17 = local_140;
          puVar22 = local_148;
        }
        uVar20 = unaff_x20[3];
        uVar16 = uVar20 & 0xffffffffffff;
        if ((unaff_x20[4] & 0x2000000000000000U) != 0) {
          uVar16 = (ulong)unaff_x20[4] >> 0x38 & 0xf;
        }
        if (uVar16 == 0) {
          local_148 = (undefined *)0x0;
          uVar14 = 0xe000000000000000;
        }
        else {
          local_148 = (undefined *)0x203a4547415355;
          local_140 = 0xe700000000000000;
          FUN_1000a6e40(7);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar20);
          __sSS6appendyySSF(0xa0a,0xe200000000000000);
          uVar14 = local_140;
        }
        puVar7 = local_148;
        local_148 = puVar23;
        local_140 = uVar25;
        __sSS6appendyySSF(puVar7,uVar14);
        _swift_bridgeObjectRelease(uVar14);
        __sSS6appendyySSF(uVar9,uVar12);
        _swift_bridgeObjectRelease(uVar12);
        __sSS6appendyySSF(puVar22,uVar17);
        _swift_bridgeObjectRelease(uVar17);
        auVar5._8_8_ = local_140;
        auVar5._0_8_ = local_148;
        return auVar5;
      }
      if (*(ulong *)(puVar22 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000a5110);
        (*pcVar6)();
      }
      uVar18 = uVar18 + 1;
      uVar1 = puVar15[-1];
      uVar3 = *puVar15;
      puVar15 = puVar15 + 2;
      uVar2 = uVar1 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar2 = uVar3 >> 0x38 & 0xf;
      }
    } while (uVar2 == 0);
    _swift_bridgeObjectRetain(uVar3);
    puVar7 = puVar23;
    _swift_isUniquelyReferenced_nonNull_native();
    local_138 = puVar23;
    if (((ulong)puVar7 & 1) == 0) {
      FUN_1000798d0(0,*(long *)(puVar23 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(local_138 + 0x10);
    if (*(ulong *)(local_138 + 0x18) >> 1 <= uVar2) {
      FUN_1000798d0(1 < *(ulong *)(local_138 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(local_138 + 0x10) = uVar2 + 1;
    *(ulong *)(local_138 + uVar2 * 0x10 + 0x20) = uVar1;
    *(ulong *)(local_138 + uVar2 * 0x10 + 0x28) = uVar3;
    puVar23 = local_138;
  } while( true );
}

