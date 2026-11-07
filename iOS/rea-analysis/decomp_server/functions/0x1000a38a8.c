// rea decompile_all
// name: FUN_1000a38a8
// address: 0x1000a38a8
// body: available
// range: 0x1000a38a8-0x1000a422f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_1000a38a8(void)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  code *pcVar16;
  code *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar18;
  ulong extraout_x12;
  undefined8 uVar19;
  ulong uVar20;
  code *pcVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  code *pcVar27;
  undefined8 uVar28;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  ulong local_160;
  ulong local_158;
  int local_14c;
  long local_148;
  long local_140;
  ulong local_138;
  undefined8 local_130;
  long local_128;
  ulong local_120;
  long local_118;
  code *local_110;
  ulong local_108;
  undefined *local_100;
  undefined *local_f8;
  code *local_f0;
  code *pcStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int local_c4;
  int local_c0 [2];
  code *local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  byte local_98;
  code *local_90;
  undefined8 uStack_88;
  
  lVar6 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar23 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar23 + 0x40));
  pcVar5 = (code *)((long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0;
  FUN_1000aaa7c();
  lVar26 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar26 + 0x40));
  pcVar27 = pcVar5 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar13 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_initStaticObject();
  FUN_1000a3308(local_c0);
  _swift_arrayDestroy(puVar13 + 0x20,3,PTR___sSSN_1009957f8);
  local_14c = local_c0[0];
  if (local_c0[0] == 0) {
    local_f0 = (code *)0xa;
    pcStack_e8 = (code *)0xe100000000000000;
    local_148 = lVar7;
    local_140 = lVar26;
    local_110 = pcVar27;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(code ***)(pcVar27 + -0x10) = &local_f0;
    _swift_bridgeObjectRetain(uStack_b0);
    lVar6 = 0x7fffffffffffffff;
    FUN_10000b9ac(0x7fffffffffffffff,1,FUN_10009ff84,pcVar27 + -0x20,local_b8,uStack_b0);
    _swift_bridgeObjectRelease(uStack_b0);
    uStack_88 = uStack_a0;
    local_90 = local_a8;
    FUN_1000a9ec8(&local_90);
    uVar22 = *(ulong *)(lVar6 + 0x10);
    if (uVar22 != 0) {
      local_130 = 0;
      uVar20 = 0;
      lVar7 = lVar6 + 0x20;
      puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_128 = lVar7;
      local_120 = uVar22;
      local_118 = lVar6;
LAB_1000a3af8:
      if (*(ulong *)(lVar6 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a421c);
        (*pcVar5)();
      }
      puVar1 = (ulong *)(lVar7 + uVar20 * 0x20);
      uVar18 = *puVar1;
      uVar15 = puVar1[1];
      uVar25 = uVar15 >> 0xe;
      if (uVar25 != uVar18 >> 0xe) {
        uVar22 = puVar1[2];
        uVar2 = puVar1[3];
        local_108 = uVar20;
        local_100 = puVar13;
        _swift_bridgeObjectRetain(uVar2);
        local_f8 = PTR___swiftEmptyArrayStorage_100995ea0;
        uVar20 = uVar18;
LAB_1000a3b38:
        uVar24 = uVar20 >> 0xe;
        uVar9 = uVar20;
        if (uVar24 != uVar25) {
          do {
            uVar8 = uVar20;
            uVar14 = uVar18;
            __sSsySJSS5IndexVcig(uVar20,uVar18,uVar15,uVar22,uVar2);
            if ((uVar8 == 0x7c) && (uVar14 == 0xe100000000000000)) {
              _swift_bridgeObjectRelease(0xe100000000000000);
LAB_1000a3bd0:
              if (uVar9 >> 0xe != uVar24) goto LAB_1000a3c08;
              __sSs5index5afterSS5IndexVAD_tF(uVar20,uVar18,uVar15,uVar22,uVar2);
              uVar9 = uVar20;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              _swift_bridgeObjectRelease(uVar14);
              if ((uVar8 & 1) != 0) goto LAB_1000a3bd0;
              __sSs5index5afterSS5IndexVAD_tF(uVar20,uVar18,uVar15,uVar22,uVar2);
            }
            uVar24 = uVar20 >> 0xe;
            if (uVar24 == uVar25) break;
          } while( true );
        }
        goto LAB_1000a3d00;
      }
      goto LAB_1000a3aec;
    }
    _swift_bridgeObjectRelease(lVar6);
    pcVar27 = (code *)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    pcStack_e8 = (code *)uStack_a0;
    local_f0 = local_a8;
    if ((local_98 & 1) == 0) {
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      _swift_bridgeObjectRetain(uStack_a0);
      __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(pcVar5);
      FUN_10009ff0c();
      pcVar27 = pcVar5;
      puVar13 = PTR___sSSN_1009957f8;
      __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                (pcVar5,PTR___sSSN_1009957f8,uStack_a0);
      (**(code **)(lVar23 + 8))(pcVar5,lVar6);
      FUN_1000a9ec8(&local_f0);
      uVar22 = (ulong)pcVar27 & 0xffffffffffff;
      if (((ulong)puVar13 & 0x2000000000000000) != 0) {
        uVar22 = (ulong)puVar13 >> 0x38 & 0xf;
      }
      if (uVar22 == 0) {
        _swift_bridgeObjectRelease(puVar13);
        local_90 = (code *)0x0;
        uStack_88 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x17);
        _swift_bridgeObjectRelease(uStack_88);
        local_90 = (code *)0x7365732d7473696c;
        uStack_88 = 0xed0000736e6f6973;
        __sSS6appendyySSF(0x1000000000000013,0x8000000100880a50);
        local_c4 = local_14c;
        puVar13 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8
                  );
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar13);
        pcVar27 = local_90;
      }
    }
    else {
      local_90 = (code *)0x7365732d7473696c;
      uStack_88 = 0xed0000736e6f6973;
      __sSS6appendyySSF(0xe88ca1e8a789e620,0xad0000b697e685b6);
      pcVar27 = local_90;
    }
    uStack_88 = uStack_b0;
    local_90 = local_b8;
    FUN_1000a9ec8(&local_90);
    FUN_1000a9ec8(&local_f0);
  }
  return pcVar27;
LAB_1000a3c08:
  if (uVar24 < uVar9 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a4230);
    (*pcVar5)();
  }
  uVar24 = uVar20;
  uVar8 = uVar18;
  uVar14 = uVar15;
  __sSsySsSnySS5IndexVGcig();
  puVar13 = local_f8;
  local_160 = uVar14;
  local_158 = uVar8;
  local_138 = uVar24;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar13 & 1) == 0) {
    puVar13 = (undefined *)0x0;
    FUN_100033d08(0,*(long *)(local_f8 + 0x10) + 1,1);
    local_f8 = puVar13;
  }
  uVar24 = *(ulong *)(local_f8 + 0x10);
  if (*(ulong *)(local_f8 + 0x18) >> 1 <= uVar24) {
    puVar13 = (undefined *)(ulong)(1 < *(ulong *)(local_f8 + 0x18));
    FUN_100033d08(puVar13,uVar24 + 1,1,local_f8);
    local_f8 = puVar13;
  }
  puVar13 = local_f8;
  *(ulong *)(local_f8 + 0x10) = uVar24 + 1;
  *(ulong *)(local_f8 + uVar24 * 0x20 + 0x20) = uVar9;
  *(ulong *)(local_f8 + uVar24 * 0x20 + 0x28) = local_138;
  *(ulong *)(local_f8 + uVar24 * 0x20 + 0x30) = local_158;
  *(ulong *)(local_f8 + uVar24 * 0x20 + 0x38) = local_160;
  __sSs5index5afterSS5IndexVAD_tF(uVar20,uVar18,uVar15,uVar22,uVar2);
  uVar9 = uVar20;
  if (*(long *)(puVar13 + 0x10) == 3) goto LAB_1000a3d00;
  goto LAB_1000a3b38;
LAB_1000a3d00:
  if (uVar9 >> 0xe == uVar25) {
    _swift_bridgeObjectRelease(uVar2);
    lVar6 = *(long *)(local_f8 + 0x10);
    puVar13 = local_f8;
  }
  else {
    if (uVar25 < uVar9 >> 0xe) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a4220);
      (*pcVar5)();
    }
    uVar22 = uVar15;
    __sSsySsSnySS5IndexVGcig();
    _swift_bridgeObjectRelease(uVar2);
    puVar13 = local_f8;
    puVar10 = local_f8;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar12 = puVar13;
    if (((ulong)puVar10 & 1) == 0) {
      puVar12 = (undefined *)0x0;
      FUN_100033d08(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
    }
    uVar20 = *(ulong *)(puVar12 + 0x10);
    lVar6 = uVar20 + 1;
    puVar13 = puVar12;
    if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar20) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
      FUN_100033d08(puVar13,lVar6,1,puVar12);
    }
    *(long *)(puVar13 + 0x10) = lVar6;
    *(ulong *)(puVar13 + uVar20 * 0x20 + 0x20) = uVar9;
    *(ulong *)(puVar13 + uVar20 * 0x20 + 0x28) = uVar15;
    *(ulong *)(puVar13 + uVar20 * 0x20 + 0x30) = uVar18;
    *(ulong *)(puVar13 + uVar20 * 0x20 + 0x38) = uVar22;
  }
  if (lVar6 == 4) {
    uVar22 = *(ulong *)(puVar13 + 0x20);
    uVar20 = *(ulong *)(puVar13 + 0x28);
    uVar11 = *(undefined8 *)(puVar13 + 0x30);
    uVar19 = *(undefined8 *)(puVar13 + 0x38);
    _swift_bridgeObjectRetain(uVar19);
    __sSS14_fromSubstringySSSshFZ(uVar22,uVar20,uVar11,uVar19);
    _swift_bridgeObjectRelease(uVar19);
    uVar18 = *(ulong *)(puVar13 + 0x10);
    if (uVar18 < 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a4224);
      (*pcVar5)();
    }
    pcVar5 = *(code **)(puVar13 + 0x40);
    pcVar17 = *(code **)(puVar13 + 0x48);
    if (((ulong)pcVar17 ^ (ulong)pcVar5) < 0x4000) {
      pcVar21 = (code *)0x1;
    }
    else {
      uVar28 = *(undefined8 *)(puVar13 + 0x50);
      uVar19 = *(undefined8 *)(puVar13 + 0x58);
      local_138 = uVar22;
      local_f8 = puVar13;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(ulong *)(pcVar27 + -0x10) = 10;
      local_f0 = pcVar5;
      pcStack_e8 = pcVar17;
      local_e0 = uVar28;
      uStack_d8 = uVar19;
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar16 = pcVar27 + -0x50;
      *(code ***)(pcVar27 + -0x40) = &local_f0;
      *(code **)(pcVar27 + -0x38) = FUN_10000d5ac;
      *(ulong *)(pcVar27 + -0x30) = extraout_x12;
      _swift_bridgeObjectRetain(uVar19);
      uVar11 = local_130;
      pcVar21 = FUN_1000aaab4;
      FUN_10000cb20(FUN_1000aaab4,pcVar16,uVar28,uVar19);
      local_130 = uVar11;
      if (((uint)pcVar16 >> 8 & 1) != 0) {
        FUN_10000c1cc(pcVar5,pcVar17,uVar28,uVar19,10);
        pcVar21 = pcVar5;
        pcVar16 = pcVar17;
      }
      _swift_bridgeObjectRelease(uVar19);
      if (((ulong)pcVar16 & 1) != 0) {
        pcVar21 = (code *)0x1;
      }
      uVar18 = *(ulong *)(local_f8 + 0x10);
      uVar22 = local_138;
      puVar13 = local_f8;
    }
    if (uVar18 < 3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a4228);
      (*pcVar5)();
    }
    uVar11 = *(undefined8 *)(puVar13 + 0x60);
    uVar18 = *(ulong *)(puVar13 + 0x68);
    uVar19 = *(undefined8 *)(puVar13 + 0x70);
    uVar28 = *(undefined8 *)(puVar13 + 0x78);
    _swift_bridgeObjectRetain(uVar28);
    __sSdySdSgSscfC(uVar11,uVar18,uVar19,uVar28);
    if (*(ulong *)(puVar13 + 0x10) < 4) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a422c);
      (*pcVar5)();
    }
    uVar19 = 0;
    if ((uVar18 & 1) == 0) {
      uVar19 = uVar11;
    }
    uVar11 = *(undefined8 *)(puVar13 + 0x80);
    uVar3 = *(undefined8 *)(puVar13 + 0x88);
    uVar28 = *(undefined8 *)(puVar13 + 0x90);
    uVar4 = *(undefined8 *)(puVar13 + 0x98);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRelease(puVar13);
    FUN_1000aa024(uVar11,uVar3,uVar28,uVar4,0x31,0xe100000000000000);
    _swift_bridgeObjectRelease(uVar4);
    pcVar5 = local_110;
    lVar6 = local_148;
    __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC
              (local_110 + *(int *)(local_148 + 0x18),uVar19);
    *(ulong *)pcVar5 = uVar22;
    *(ulong *)(pcVar5 + 8) = uVar20;
    *(code **)(pcVar5 + 0x10) = pcVar21;
    puVar13 = local_100;
    pcVar5[*(int *)(lVar6 + 0x1c)] = (code)((byte)uVar11 & 1);
    puVar10 = local_100;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar12 = puVar13;
    if (((ulong)puVar10 & 1) == 0) {
      puVar12 = (undefined *)0x0;
      FUN_100034fa0(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
    }
    uVar20 = local_108;
    lVar6 = local_118;
    uVar22 = local_120;
    lVar7 = local_128;
    uVar18 = *(ulong *)(puVar12 + 0x10);
    puVar13 = puVar12;
    if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar18) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
      FUN_100034fa0(puVar13,uVar18 + 1,1,puVar12);
    }
    *(ulong *)(puVar13 + 0x10) = uVar18 + 1;
    FUN_1000aaad0(local_110,
                  puVar13 + *(long *)(local_140 + 0x48) * uVar18 +
                            ((ulong)*(byte *)(local_140 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(local_140 + 0x50) ^ 0xffffffffffffffff)));
  }
  else {
    _swift_bridgeObjectRelease(puVar13);
    uVar20 = local_108;
    uVar22 = local_120;
    lVar6 = local_118;
    puVar13 = local_100;
    lVar7 = local_128;
  }
LAB_1000a3aec:
  uVar20 = uVar20 + 1;
  if (uVar20 == uVar22) {
    _swift_bridgeObjectRelease(lVar6);
    return (code *)puVar13;
  }
  goto LAB_1000a3af8;
}

