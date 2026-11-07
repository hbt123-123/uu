// rea decompile_all
// name: FUN_1000b1064
// address: 0x1000b1064
// body: available
// range: 0x1000b1064-0x1000b1a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000b1064(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  long *unaff_x20;
  long lVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  uint uVar23;
  long lVar24;
  undefined8 local_a8;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  long local_70;
  long lStack_68;
  
  uVar3 = (uint)param_3 >> 6 & 3;
  if (uVar3 != 1) {
    lVar17 = *unaff_x20;
    local_70 = unaff_x20[1];
    lVar19 = *(long *)(lVar17 + 0x10);
    lStack_68 = lVar17;
    FUN_1000133cc(&lStack_68,&local_88,&DAT_100104d48,&USHORT_1000d6ae0);
    FUN_1000133cc(&local_70,&local_88,&DAT_100104d68,&USHORT_1000d6ae8);
    puVar16 = PTR___swiftEmptyArrayStorage_1000f0740;
    puVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
    if (lVar19 != 0) {
      puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
      puVar22 = (undefined8 *)(lVar17 + 0x20);
      do {
        puVar9 = puVar16;
        if ((undefined *)0x1 < (undefined *)*puVar22) {
          puVar9 = (undefined *)*puVar22;
        }
        lVar17 = *(long *)(puVar9 + 0x10);
        lVar24 = *(long *)(puVar10 + 0x10);
        if (SCARRY8(lVar24,lVar17)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1000b1a28);
          (*pcVar7)();
        }
        FUN_10008726c();
        puVar8 = puVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar8 == 0) || ((long)(*(ulong *)(puVar10 + 0x18) >> 1) < lVar24 + lVar17)) {
          FUN_10006edd4();
          puVar10 = puVar8;
          if (*(long *)(puVar9 + 0x10) != 0) goto LAB_1000b11d4;
LAB_1000b115c:
          _swift_bridgeObjectRelease(puVar9);
          puVar8 = puVar10;
          if (lVar17 != 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1000b1a2c);
            (*pcVar7)();
          }
        }
        else {
          puVar8 = puVar10;
          if (*(long *)(puVar9 + 0x10) == 0) goto LAB_1000b115c;
LAB_1000b11d4:
          if ((long)((*(ulong *)(puVar8 + 0x18) >> 1) - *(long *)(puVar8 + 0x10)) < lVar17) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1000b1a30);
            (*pcVar7)();
          }
          _swift_arrayInitWithCopy
                    (puVar8 + *(long *)(puVar8 + 0x10) * 0x18 + 0x20,puVar9 + 0x20,lVar17,
                     &DAT_1000fa640);
          _swift_bridgeObjectRelease(puVar9);
          if (lVar17 != 0) {
            if (SCARRY8(*(long *)(puVar8 + 0x10),lVar17)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1000b1a38);
              (*pcVar7)();
            }
            *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + lVar17;
          }
        }
        lVar19 = lVar19 + -1;
        puVar10 = puVar8;
        puVar22 = puVar22 + 0x1a;
      } while (lVar19 != 0);
    }
    FUN_10001fc18(&lStack_68,&DAT_100104d48,&USHORT_1000d6ae0);
    FUN_10001fc18(&local_70,&DAT_100104d68,&USHORT_1000d6ae8);
    uVar15 = *(ulong *)(puVar8 + 0x10);
    puVar16 = PTR___swiftEmptyArrayStorage_1000f0740;
    if (uVar15 == 0) {
LAB_1000b148c:
      _swift_bridgeObjectRelease(puVar8);
      uVar15 = 0;
      uVar14 = *(ulong *)(puVar16 + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
      do {
        lVar17 = uVar15 * 0x18;
        do {
          lVar19 = lVar17;
          if (uVar14 == uVar15) {
            _swift_release(puVar16);
            uVar15 = *(ulong *)(puVar8 + 0x10);
            if (uVar15 == 0) {
              _swift_release(puVar8);
              local_88 = (undefined *)0x0;
              local_80 = 0xe000000000000000;
              __ss11_StringGutsV4growyySiF(0x13);
              _swift_bridgeObjectRelease(local_80);
              param_3 = param_3 & 0xffffffff;
              goto LAB_1000b15f4;
            }
            local_a8 = *(undefined8 *)(puVar8 + 0x20);
            uVar11 = *(undefined8 *)(puVar8 + 0x28);
            uVar18 = (uint)(byte)puVar8[0x30];
            FUN_100065610(local_a8,uVar11,uVar18);
            if (uVar15 == 1) goto LAB_1000b1928;
            uVar14 = 1;
            goto LAB_1000b1638;
          }
          if (*(ulong *)(puVar16 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1000b1a20);
            (*pcVar7)();
          }
          uVar15 = uVar15 + 1;
          bVar2 = puVar16[lVar19 + 0x30];
          lVar17 = lVar19 + 0x18;
        } while ((bVar2 & 0xc0) == 0x40);
        uVar11 = *(undefined8 *)(puVar16 + lVar19 + 0x20);
        uVar12 = *(undefined8 *)(puVar16 + lVar19 + 0x28);
        FUN_100065610(uVar11,uVar12,bVar2);
        puVar10 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        local_88 = puVar8;
        if (((ulong)puVar10 & 1) == 0) {
          FUN_1000799e4(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar20 = *(ulong *)(local_88 + 0x10);
        if (*(ulong *)(local_88 + 0x18) >> 1 <= uVar20) {
          FUN_1000799e4(1 < *(ulong *)(local_88 + 0x18),uVar20 + 1,1);
        }
        *(ulong *)(local_88 + 0x10) = uVar20 + 1;
        *(undefined8 *)(local_88 + uVar20 * 0x18 + 0x20) = uVar11;
        *(undefined8 *)(local_88 + uVar20 * 0x18 + 0x28) = uVar12;
        local_88[uVar20 * 0x18 + 0x30] = bVar2;
        puVar8 = local_88;
      } while( true );
    }
    uVar14 = 0;
LAB_1000b127c:
    pbVar21 = puVar8 + uVar14 * 0x18 + 0x30;
    uVar20 = uVar14;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1000b1a24);
        (*pcVar7)();
      }
      uVar11 = *(undefined8 *)(pbVar21 + -0x10);
      uVar12 = *(undefined8 *)(pbVar21 + -8);
      bVar2 = *pbVar21;
      if (bVar2 >> 6 == 0) {
        local_88 = (undefined *)0x2d2d;
        local_80 = 0xe200000000000000;
LAB_1000b130c:
        _swift_bridgeObjectRetain(uVar12);
        __sSS6appendyySSF(uVar11,uVar12);
      }
      else {
        if (bVar2 >> 6 != 1) {
          local_88 = (undefined *)0x2d;
          local_80 = 0xe100000000000000;
          goto LAB_1000b130c;
        }
        local_88 = (undefined *)0x0;
        local_80 = 0xe000000000000000;
        _swift_bridgeObjectRetain(uVar12);
        __sSS6appendyySSF(0x2d,0xe100000000000000);
        __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                  (&local_88,uVar11,uVar12,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
      }
      uVar13 = local_80;
      puVar10 = local_88;
      if (uVar3 == 0) {
        local_88 = (undefined *)0x2d2d;
        local_80 = 0xe200000000000000;
LAB_1000b1394:
        __sSS6appendyySSF(param_1,param_2);
      }
      else {
        if (uVar3 != 1) {
          local_88 = (undefined *)0x2d;
          local_80 = 0xe100000000000000;
          goto LAB_1000b1394;
        }
        local_88 = (undefined *)0x0;
        local_80 = 0xe000000000000000;
        __sSS6appendyySSF(0x2d,0xe100000000000000);
        __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                  (&local_88,param_1,param_2,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
      }
      uVar5 = local_80;
      puVar9 = local_88;
      FUN_1000af06c(local_88,local_80,puVar10,uVar13);
      _swift_bridgeObjectRelease(uVar13);
      _swift_bridgeObjectRelease(uVar5);
      if ((long)puVar9 < 4) goto LAB_1000b1400;
      uVar20 = uVar20 + 1;
      FUN_100065628(uVar11,uVar12,bVar2);
      pbVar21 = pbVar21 + 0x18;
      if (uVar15 == uVar20) goto LAB_1000b148c;
    } while( true );
  }
  local_88 = (undefined *)0x0;
  local_80 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x13);
  _swift_bridgeObjectRelease(local_80);
LAB_1000b15f4:
  local_80 = 0x80000001000cad70;
  local_88 = (undefined *)0xd000000000000010;
  FUN_1000979e4(param_1,param_2,param_3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_2);
  uVar11 = 0x27;
  uVar12 = 0xe100000000000000;
LAB_1000b19f4:
  __sSS6appendyySSF(uVar11,uVar12);
  auVar4._8_8_ = local_80;
  auVar4._0_8_ = local_88;
  return auVar4;
LAB_1000b1400:
  puVar10 = puVar16;
  _swift_isUniquelyReferenced_nonNull_native();
  local_78 = puVar16;
  if (((ulong)puVar10 & 1) == 0) {
    FUN_1000799e4(0,*(long *)(puVar16 + 0x10) + 1,1);
  }
  uVar1 = *(ulong *)(local_78 + 0x10);
  if (*(ulong *)(local_78 + 0x18) >> 1 <= uVar1) {
    FUN_1000799e4(1 < *(ulong *)(local_78 + 0x18),uVar1 + 1,1);
  }
  uVar14 = uVar20 + 1;
  *(ulong *)(local_78 + 0x10) = uVar1 + 1;
  *(undefined8 *)(local_78 + uVar1 * 0x18 + 0x20) = uVar11;
  *(undefined8 *)(local_78 + uVar1 * 0x18 + 0x28) = uVar12;
  local_78[uVar1 * 0x18 + 0x30] = bVar2;
  puVar16 = local_78;
  if (uVar15 - 1 == uVar20) goto LAB_1000b148c;
  goto LAB_1000b127c;
LAB_1000b1638:
  pbVar21 = puVar8 + uVar14 * 0x18 + 0x30;
  uVar20 = uVar14;
  do {
    if (*(ulong *)(puVar8 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1000b1a34);
      (*pcVar7)();
    }
    uVar12 = *(undefined8 *)(pbVar21 + -0x10);
    uVar13 = *(undefined8 *)(pbVar21 + -8);
    uVar23 = (uint)*pbVar21;
    bVar2 = *pbVar21 >> 6;
    if (bVar2 == 0) {
      local_88 = (undefined *)0x2d2d;
      local_80 = 0xe200000000000000;
LAB_1000b16d4:
      _swift_bridgeObjectRetain(uVar13);
      __sSS6appendyySSF(uVar12,uVar13);
    }
    else {
      if (bVar2 != 1) {
        local_88 = (undefined *)0x2d;
        local_80 = 0xe100000000000000;
        goto LAB_1000b16d4;
      }
      local_88 = (undefined *)0x0;
      local_80 = 0xe000000000000000;
      _swift_bridgeObjectRetain(uVar13);
      __sSS6appendyySSF(0x2d,0xe100000000000000);
      __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                (&local_88,uVar12,uVar13,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
    }
    uVar5 = local_80;
    puVar16 = local_88;
    if (uVar3 == 0) {
      local_88 = (undefined *)0x2d2d;
      local_80 = 0xe200000000000000;
LAB_1000b175c:
      __sSS6appendyySSF(param_1,param_2);
    }
    else {
      if (uVar3 != 1) {
        local_88 = (undefined *)0x2d;
        local_80 = 0xe100000000000000;
        goto LAB_1000b175c;
      }
      local_88 = (undefined *)0x0;
      local_80 = 0xe000000000000000;
      __sSS6appendyySSF(0x2d,0xe100000000000000);
      __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                (&local_88,param_1,param_2,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
    }
    uVar6 = local_80;
    puVar10 = local_88;
    FUN_1000af06c(local_88,local_80,puVar16,uVar5);
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar6);
    if (uVar18 >> 6 == 0) {
      local_88 = (undefined *)0x2d2d;
      local_80 = 0xe200000000000000;
LAB_1000b17fc:
      __sSS6appendyySSF(local_a8,uVar11);
    }
    else {
      if (uVar18 >> 6 != 1) {
        local_88 = (undefined *)0x2d;
        local_80 = 0xe100000000000000;
        goto LAB_1000b17fc;
      }
      local_88 = (undefined *)0x0;
      local_80 = 0xe000000000000000;
      __sSS6appendyySSF(0x2d,0xe100000000000000);
      __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                (&local_88,local_a8,uVar11,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
    }
    uVar5 = local_80;
    puVar16 = local_88;
    if (uVar3 == 0) {
      local_88 = (undefined *)0x2d2d;
      local_80 = 0xe200000000000000;
LAB_1000b1878:
      __sSS6appendyySSF(param_1,param_2);
    }
    else {
      if (uVar3 != 1) {
        local_88 = (undefined *)0x2d;
        local_80 = 0xe100000000000000;
        goto LAB_1000b1878;
      }
      local_88 = (undefined *)0x0;
      local_80 = 0xe000000000000000;
      __sSS6appendyySSF(0x2d,0xe100000000000000);
      __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                (&local_88,param_1,param_2,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
    }
    uVar6 = local_80;
    puVar9 = local_88;
    FUN_1000af06c(local_88,local_80,puVar16,uVar5);
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar6);
    if ((long)puVar10 < (long)puVar9) break;
    uVar20 = uVar20 + 1;
    FUN_100065628(uVar12,uVar13,uVar23);
    pbVar21 = pbVar21 + 0x18;
    if (uVar15 == uVar20) goto LAB_1000b1928;
  } while( true );
  FUN_100065628(local_a8,uVar11,uVar18);
  uVar14 = uVar20 + 1;
  uVar11 = uVar13;
  local_a8 = uVar12;
  uVar18 = uVar23;
  if (uVar15 - 1 == uVar20) goto LAB_1000b1928;
  goto LAB_1000b1638;
LAB_1000b1928:
  _swift_release(puVar8);
  local_88 = (undefined *)0x0;
  local_80 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x27);
  _swift_bridgeObjectRelease(local_80);
  local_88 = (undefined *)0xd000000000000010;
  local_80 = 0x80000001000cad70;
  FUN_1000979e4(param_1,param_2,(uint)param_3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_2);
  __sSS6appendyySSF(0xd000000000000011,0x80000001000cad90);
  uVar12 = local_a8;
  uVar13 = uVar11;
  FUN_1000979e4(local_a8,uVar11,uVar18);
  FUN_100065628(local_a8,uVar11,uVar18);
  __sSS6appendyySSF(uVar12,uVar13);
  _swift_bridgeObjectRelease(uVar13);
  uVar11 = 0x3f27;
  uVar12 = 0xe200000000000000;
  goto LAB_1000b19f4;
}

