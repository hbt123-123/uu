// rea decompile_all
// name: FUN_10009c7e0
// address: 0x10009c7e0
// body: available
// range: 0x10009c7e0-0x10009cfcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10009c7e0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  byte *pbVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined **ppuVar23;
  long lVar24;
  ulong uVar25;
  undefined *local_140;
  undefined *local_118;
  undefined *local_110;
  undefined **local_108;
  undefined *local_100;
  undefined **ppuStack_f8;
  ulong local_f0;
  long local_e8;
  long local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  ulong uStack_cf;
  undefined *local_b8;
  undefined **local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined **ppuStack_98;
  long lStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  char cStack_78;
  
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 < param_2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10009cfbc);
    (*pcVar6)();
  }
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10009cfc0);
    (*pcVar6)();
  }
  lVar18 = param_1 + 0x20;
  _swift_bridgeObjectRetain();
  puVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar22 = param_2;
  do {
    pbVar5 = (byte *)(param_1 + 0x58 + lVar22 * 0x40);
    lVar24 = lVar22;
    do {
      pbVar11 = pbVar5;
      if (lVar17 == lVar24) {
        local_140 = PTR___swiftEmptyArrayStorage_1000f0740;
        if (lVar17 == param_2) goto LAB_10009c8e8;
        lVar22 = param_2;
        lVar24 = param_2;
        goto LAB_10009ce38;
      }
      if ((lVar22 < param_2) || (lVar17 <= lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10009cfa0);
        (*pcVar6)();
      }
      lVar24 = lVar24 + 1;
      pbVar5 = pbVar11 + 0x40;
    } while ((*pbVar11 & 1) == 0);
    uVar20 = *(undefined8 *)(pbVar11 + -0x10);
    puVar9 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar7 = puVar8;
    if (((ulong)puVar9 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      FUN_10006f910(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar2 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      FUN_10006f910(puVar8,uVar2 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
    *(undefined8 *)(puVar8 + uVar2 * 8 + 0x20) = uVar20;
    lVar22 = lVar24;
  } while( true );
LAB_10009ce38:
  do {
    if ((lVar24 < param_2) || (lVar17 <= lVar22)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10009cfa4);
      (*pcVar6)();
    }
    puVar1 = (undefined8 *)(lVar18 + lVar22 * 0x40);
    ppuStack_f8 = (undefined **)puVar1[1];
    local_100 = (undefined *)*puVar1;
    local_e8 = puVar1[3];
    local_f0 = puVar1[2];
    local_e0 = puVar1[4];
    uStack_d8 = (undefined1)puVar1[5];
    uStack_cf = *(ulong *)((long)puVar1 + 0x31);
    uStack_d7 = (undefined7)*(undefined8 *)((long)puVar1 + 0x29);
    uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x29) >> 0x38);
    lVar22 = lVar22 + 1;
    if ((((local_f0 & 0x6000000000000000) == 0x4000000000000000) && (local_f0 == 0x4000000000000000)
        ) && ((local_e8 == 0 && local_e0 == 0) &&
              (ppuStack_f8 == (undefined **)0x0 && local_100 == (undefined *)0x0))) {
LAB_10009cec0:
      if (lVar22 == lVar17) break;
      goto LAB_10009ce38;
    }
    if ((uStack_cf & 0x100000000000000) == 0) {
      lVar13 = *(long *)(puVar8 + 0x10);
      plVar15 = (long *)(puVar8 + 0x20);
      do {
        if (lVar13 == 0) goto LAB_10009cecc;
        lVar16 = *plVar15;
        lVar13 = lVar13 + -1;
        plVar15 = plVar15 + 1;
      } while (lVar16 != CONCAT71(uStack_d7,uStack_d8));
      goto LAB_10009cec0;
    }
LAB_10009cecc:
    FUN_10008efe8(&local_100,&local_b0);
    puVar9 = local_140;
    _swift_isUniquelyReferenced_nonNull_native();
    local_110 = local_140;
    if (((ulong)puVar9 & 1) == 0) {
      FUN_100079990(0,*(long *)(local_140 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(local_110 + 0x10);
    if (*(ulong *)(local_110 + 0x18) >> 1 <= uVar2) {
      FUN_100079990(1 < *(ulong *)(local_110 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(local_110 + 0x10) = uVar2 + 1;
    *(ulong *)(local_110 + uVar2 * 0x40 + 0x51) = uStack_cf;
    *(ulong *)(local_110 + uVar2 * 0x40 + 0x49) = CONCAT17(uStack_d0,uStack_d7);
    *(long *)(local_110 + uVar2 * 0x40 + 0x38) = local_e8;
    *(ulong *)(local_110 + uVar2 * 0x40 + 0x30) = local_f0;
    *(ulong *)(local_110 + uVar2 * 0x40 + 0x48) = CONCAT71(uStack_d7,uStack_d8);
    *(long *)(local_110 + uVar2 * 0x40 + 0x40) = local_e0;
    *(undefined ***)(local_110 + uVar2 * 0x40 + 0x28) = ppuStack_f8;
    *(undefined **)(local_110 + uVar2 * 0x40 + 0x20) = local_100;
    local_140 = local_110;
    lVar24 = lVar22;
  } while (lVar22 != lVar17);
LAB_10009c8e8:
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(puVar8);
  lVar17 = *(long *)(local_140 + 0x10);
  if (lVar17 == 0) {
    _swift_release(local_140);
    puVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    local_b8 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_1000799c8(0,lVar17,0);
    lVar18 = 0;
    do {
      puVar8 = local_b8;
      plVar15 = (long *)(local_140 + lVar18 * 0x40 + 0x20);
      lVar22 = plVar15[1];
      ppuVar21 = (undefined **)*plVar15;
      ppuVar23 = (undefined **)plVar15[3];
      local_a0 = plVar15[2];
      uVar25 = plVar15[5];
      lVar24 = plVar15[4];
      uVar10 = *(ulong *)((long)plVar15 + 0x31);
      uStack_7f = (undefined7)uVar10;
      cStack_78 = (char)(uVar10 >> 0x38);
      cVar4 = cStack_78;
      uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)plVar15 + 0x29) >> 0x38);
      local_88 = (undefined1)uVar25;
      uStack_87 = (undefined7)(uVar25 >> 8);
      uVar2 = CONCAT71(uStack_7f,uStack_80);
      local_b0 = ppuVar21;
      lStack_a8 = lVar22;
      ppuStack_98 = ppuVar23;
      lStack_90 = lVar24;
      if (cStack_78 == '\x01') {
        if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009cfac);
          (*pcVar6)();
        }
        if (*(ulong *)(param_3 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009cfb0);
          (*pcVar6)();
        }
LAB_10009c9b0:
        puVar1 = (undefined8 *)(param_3 + 0x20 + uVar25 * 0x10);
        local_118 = (undefined *)*puVar1;
        ppuVar21 = (undefined **)puVar1[1];
        FUN_10008efe8(&local_b0,&local_100);
        ppuVar23 = ppuVar21;
        _swift_bridgeObjectRetain(ppuVar21);
      }
      else {
        if ((local_a0 & 0x6000000000000000) != 0) {
          if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10009cfb4);
            (*pcVar6)();
          }
          if (*(ulong *)(param_3 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10009cfb8);
            (*pcVar6)();
          }
          goto LAB_10009c9b0;
        }
        if ((long)local_a0 < 0) {
          uVar3 = (uint)local_a0 >> 6 & 3;
          if (uVar3 == 0) {
            local_110 = (undefined *)0x2d2d;
            local_108 = (undefined **)0xe200000000000000;
LAB_10009cda4:
            FUN_10008efe8(&local_b0,&local_100);
            __sSS6appendyySSF(ppuVar21,lVar22);
          }
          else {
            if (uVar3 != 1) {
              local_110 = (undefined *)0x2d;
              local_108 = (undefined **)0xe100000000000000;
              goto LAB_10009cda4;
            }
            local_110 = (undefined *)0x0;
            local_108 = (undefined **)0xe000000000000000;
            FUN_10008efe8(&local_b0,&local_100);
            __sSS6appendyySSF(0x2d,0xe100000000000000);
            __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                      (&local_110,ppuVar21,lVar22,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                       PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
          }
          local_100 = local_110;
          ppuStack_f8 = local_108;
          __sSS6appendyySSF(0x3d,0xe100000000000000);
          __sSS6appendyySSF(ppuVar23,lVar24);
          local_118 = local_100;
          ppuVar21 = ppuStack_f8;
        }
        else {
          uVar3 = (uint)local_a0 >> 6 & 3;
          if (uVar3 == 0) {
            local_110 = (undefined *)0x2d2d;
            local_108 = (undefined **)0xe200000000000000;
LAB_10009cd5c:
            FUN_10008efe8(&local_b0,&local_100);
            __sSS6appendyySSF(ppuVar21,lVar22);
          }
          else {
            if (uVar3 != 1) {
              local_110 = (undefined *)0x2d;
              local_108 = (undefined **)0xe100000000000000;
              goto LAB_10009cd5c;
            }
            local_110 = (undefined *)0x0;
            local_108 = (undefined **)0xe000000000000000;
            FUN_10008efe8(&local_b0,&local_100);
            __sSS6appendyySSF(0x2d,0xe100000000000000);
            ppuVar23 = &local_110;
            __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                      (ppuVar23,ppuVar21,lVar22,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                       PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
            ppuVar21 = ppuVar23;
          }
          local_118 = local_110;
          ppuVar23 = ppuVar21;
          ppuVar21 = local_108;
        }
      }
      FUN_10008f0c8();
      puVar9 = (undefined *)0x1;
      __sSh15minimumCapacityShyxGSi_tcfC(1,&DAT_1000fa530,ppuVar23);
      __ss6HasherV5_seedABSi_tcfC(&local_100,*(undefined8 *)(puVar9 + 0x28));
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyySuF(uVar25);
      if (cVar4 == '\0') {
        __ss6HasherV8_combineyySuF(1);
        uVar19 = uVar2;
      }
      else {
        uVar19 = 0;
      }
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar12 = -1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
      uVar19 = uVar19 & (uVar12 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar9 + (uVar19 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar19 & 0x3f) & 1) !=
          0) {
        do {
          puVar14 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar19 * 0x18);
          if (((*(byte *)((long)puVar14 + 0x11) & 1) == 0) && (*puVar14 == uVar25)) {
            if ((puVar14[2] & 1) == 0) {
              if (((uVar10 & 0x100000000000000) == 0) && (puVar14[1] == uVar2)) goto LAB_10009cc34;
            }
            else if ((uVar10 & 0x100000000000000) != 0) goto LAB_10009cc34;
          }
          uVar19 = uVar19 + 1 & ~uVar12;
        } while ((*(ulong *)(puVar9 + (uVar19 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar19 & 0x3f) &
                 1) != 0);
      }
      puVar7 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar12 = *(ulong *)(puVar9 + 0x10);
      local_110 = puVar9;
      if (uVar12 < *(ulong *)(puVar9 + 0x18)) {
        if (((ulong)puVar7 & 1) == 0) {
          FUN_1000825c4();
          puVar9 = local_110;
        }
      }
      else {
        if ((int)puVar7 == 0) {
          FUN_1000829c0(uVar12 + 1);
        }
        else {
          FUN_100082fd0(uVar12 + 1);
        }
        puVar9 = local_110;
        __ss6HasherV5_seedABSi_tcfC(&local_100,*(undefined8 *)(local_110 + 0x28));
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(uVar25);
        if (cVar4 == '\0') {
          __ss6HasherV8_combineyySuF(1);
          uVar19 = uVar2;
        }
        else {
          uVar19 = 0;
        }
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar12 = -1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
        uVar19 = uVar19 & (uVar12 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar9 + (uVar19 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar19 & 0x3f) & 1)
            != 0) {
          do {
            puVar14 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar19 * 0x18);
            if (((*(byte *)((long)puVar14 + 0x11) & 1) == 0) && (*puVar14 == uVar25)) {
              if ((puVar14[2] & 1) == 0) {
                if (((uVar10 & 0x100000000000000) == 0) && (puVar14[1] == uVar2)) {
LAB_10009cfc0:
                  __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                            (&DAT_1000fa530);
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10009cfd0);
                  (*pcVar6)();
                }
              }
              else if ((uVar10 & 0x100000000000000) != 0) goto LAB_10009cfc0;
            }
            uVar19 = uVar19 + 1 & ~uVar12;
          } while ((*(ulong *)(puVar9 + (uVar19 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar19 & 0x3f)
                   & 1) != 0);
        }
      }
      uVar10 = uVar19 >> 3 & 0xffffffffffffff8;
      *(ulong *)(puVar9 + uVar10 + 0x38) =
           *(ulong *)(puVar9 + uVar10 + 0x38) | 1L << (uVar19 & 0x3f);
      puVar14 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar19 * 0x18);
      *puVar14 = uVar25;
      puVar14[1] = uVar2;
      *(char *)(puVar14 + 2) = cVar4;
      *(undefined1 *)((long)puVar14 + 0x11) = 0;
      if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10009cfa8);
        (*pcVar6)();
      }
      *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
LAB_10009cc34:
      FUN_10009f8f4(&local_b0,FUN_1000838ec);
      uVar2 = *(ulong *)(puVar8 + 0x10);
      local_b8 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
        FUN_1000799c8(1 < *(ulong *)(puVar8 + 0x18),uVar2 + 1,1);
      }
      puVar8 = local_b8;
      lVar18 = lVar18 + 1;
      *(ulong *)(local_b8 + 0x10) = uVar2 + 1;
      *(undefined **)(local_b8 + uVar2 * 0x18 + 0x20) = puVar9;
      *(undefined **)(local_b8 + uVar2 * 0x18 + 0x28) = local_118;
      *(undefined ***)(local_b8 + uVar2 * 0x18 + 0x30) = ppuVar21;
    } while (lVar18 != lVar17);
    _swift_release(local_140);
  }
  return puVar8;
}

