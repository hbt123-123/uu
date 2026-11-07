// rea decompile_all
// name: FUN_1003ae9f8
// address: 0x1003ae9f8
// body: available
// range: 0x1003ae9f8-0x1003afa8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1003ae9f8(ulong *******param_1,undefined **param_2,ID param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ID IVar5;
  ulong *******pppppppuVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *******pppppppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined *puVar24;
  ID IVar25;
  ulong uVar26;
  long lVar27;
  ulong *******local_190;
  undefined *local_188;
  undefined8 uStack_180;
  undefined1 auStack_160 [32];
  ulong *******local_140;
  undefined **ppuStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 auStack_118 [5];
  ulong *******local_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 auStack_c8 [4];
  undefined *local_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *local_78;
  
  IVar5 = SensorsAnalyticsSDK::sharedInstance
                    ((ID)&objc::class_t::SensorsAnalyticsSDK,"sharedInstance");
  if (IVar5 != 0) {
    pppppppuVar6 = param_1;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    if (param_3 == 0) {
      IVar25 = 0;
    }
    else {
      IVar25 = param_3;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (param_3,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
                 PTR___ss11AnyHashableVSHsWP_100995ad8);
    }
    SensorsAnalyticsSDK::track_withProperties_
              (IVar5,"track:withProperties:",(ID)pppppppuVar6,IVar25);
  }
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cc648();
  local_78 = puVar7;
  if (param_3 != 0) {
    uVar21 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
    uVar26 = 0xffffffffffffffff;
    if ((long)uVar21 < 0x40) {
      uVar26 = ~(-1L << (uVar21 & 0x3f));
    }
    uVar26 = uVar26 & *(ulong *)(param_3 + 0x40);
    _swift_bridgeObjectRetain(param_3);
    lVar27 = 0;
joined_r0x0001003aeb28:
    while (uVar26 != 0) {
      uVar20 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar26 = uVar26 - 1 & uVar26;
      uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) | lVar27 << 6;
      lVar14 = *(long *)(param_3 + 0x38);
      FUN_100082260(*(long *)(param_3 + 0x30) + uVar20 * 0x28,&local_f0);
      FUN_10003e8bc(lVar14 + uVar20 * 0x20,auStack_c8);
      ppuStack_138 = ppuStack_e8;
      local_140 = local_f0;
      uStack_128 = uStack_d8;
      local_130 = uStack_e0;
      local_120 = local_d0;
      FUN_10007f3d4(auStack_c8,auStack_118);
      FUN_1003afa90(&local_140,&local_188);
      puVar8 = &local_a0;
      _swift_dynamicCast(puVar8,&local_188,PTR___ss11AnyHashableVN_100995ad0,PTR___sSSN_1009957f8,6)
      ;
      uVar2 = uStack_98;
      uVar20 = local_a0;
      if (((ulong)puVar8 & 1) == 0) {
        FUN_100040bb4(&local_140,&DAT_100a8ba58,&DAT_100820958);
        FUN_10003f094(auStack_160);
      }
      else {
        FUN_10003f094(auStack_160);
        FUN_1003afa90(&local_140,&local_188);
        puVar13 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar9 = uVar20;
        uVar15 = uVar2;
        local_a8 = puVar7;
        FUN_1001a2c70();
        uVar22 = (ulong)~(uint)uVar15 & 1;
        lVar14 = *(long *)(puVar7 + 0x10) + uVar22;
        if (SCARRY8(*(long *)(puVar7 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003afa7c);
          (*pcVar3)();
        }
        if (*(long *)(puVar7 + 0x18) < lVar14) {
          FUN_1000675f0(lVar14,puVar13);
          uVar9 = uVar20;
          uVar22 = uVar2;
          FUN_1001a2c70();
          if (((uint)uVar15 & 1) != ((uint)uVar22 & 1)) goto LAB_1003afa80;
joined_r0x0001003aecfc:
          if ((uVar15 & 1) == 0) goto LAB_1003aed00;
LAB_1003aeca0:
          _swift_bridgeObjectRelease(uVar2);
          puVar7 = local_a8;
          FUN_10007f3d4(*(long *)(local_a8 + 0x38) + uVar9 * 0x20,&local_a0);
          FUN_10007f3d4(auStack_160,*(long *)(puVar7 + 0x38) + uVar9 * 0x20);
          FUN_100040bb4(&local_140,&DAT_100a8ba58,&DAT_100820958);
        }
        else {
          if (((ulong)puVar13 & 1) == 0) {
            FUN_100063670();
            goto joined_r0x0001003aecfc;
          }
          if ((uVar15 & 1) != 0) goto LAB_1003aeca0;
LAB_1003aed00:
          puVar7 = local_a8;
          *(ulong *)(local_a8 + (uVar9 >> 6) * 8 + 0x40) =
               *(ulong *)(local_a8 + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
          puVar8 = (ulong *)(*(long *)(local_a8 + 0x30) + uVar9 * 0x10);
          *puVar8 = uVar20;
          puVar8[1] = uVar2;
          FUN_10007f3d4(auStack_160,*(long *)(local_a8 + 0x38) + uVar9 * 0x20);
          FUN_100040bb4(&local_140,&DAT_100a8ba58,&DAT_100820958);
          if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003afa80);
            (*pcVar3)();
          }
          *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
          uStack_98 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
        }
        FUN_100040bb4(&local_a0,&DAT_100a766e0,&DAT_10080bdb0);
        FUN_100132650(&local_188);
      }
    }
    bVar4 = SCARRY8(lVar27,1);
    lVar27 = lVar27 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003afa70);
      (*pcVar3)();
    }
    if (lVar27 < (long)(uVar21 + 0x3f >> 6)) {
      uVar26 = ((ulong *)(param_3 + 0x40))[lVar27];
      goto joined_r0x0001003aeb28;
    }
    local_78 = puVar7;
    _swift_release(param_3);
  }
  uVar26 = 0x24;
  __sSS9hasPrefixySbSSF(0x24,0xe100000000000000,param_1,param_2);
  puVar13 = PTR___sSSN_1009957f8;
  if ((uVar26 & 1) == 0) {
    _swift_bridgeObjectRetain(param_2);
    local_190 = param_1;
    ppuVar16 = param_2;
  }
  else {
    local_140 = (ulong *******)0x24;
    ppuStack_138 = (undefined **)0xe100000000000000;
    local_188 = (undefined *)0x0;
    uStack_180 = 0xe000000000000000;
    local_f0 = param_1;
    ppuStack_e8 = param_2;
    FUN_10009ff0c();
    local_190 = (ulong *******)&local_140;
    ppuVar16 = &local_188;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (local_190,ppuVar16,0,0,0,1,puVar13,puVar13,puVar13,uVar26,uVar26,uVar26);
  }
  puVar8 = (ulong *)PTR__swift_isaMask_100995ee0;
  if (((param_1 == (ulong *******)0x7765695670704124) &&
      (param_2 == (undefined **)0xee006e6565726353)) ||
     (pppppppuVar6 = param_1,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (param_1,param_2,0x7765695670704124,0xee006e6565726353,0),
     ((ulong)pppppppuVar6 & 1) != 0)) {
    _swift_bridgeObjectRelease(ppuVar16);
    if (*(long *)(puVar7 + 0x10) == 0) {
LAB_1003af00c:
      local_190 = (ulong *******)0x0;
      ppuVar16 = (undefined **)0xe000000000000000;
    }
    else {
      _swift_bridgeObjectRetain(puVar7);
      lVar27 = 0x656c74697424;
      uVar26 = 0;
      FUN_1001a2c70(0x656c74697424);
      if ((uVar26 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar7);
        goto LAB_1003af00c;
      }
      FUN_10003e8bc(*(long *)(puVar7 + 0x38) + lVar27 * 0x20,&local_f0);
      _swift_bridgeObjectRelease(puVar7);
      pppppppuVar6 = (ulong *******)&local_140;
      _swift_dynamicCast(pppppppuVar6,&local_f0,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
      local_190 = local_140;
      ppuVar16 = ppuStack_138;
      if (((ulong)pppppppuVar6 & 1) == 0) goto LAB_1003af00c;
    }
    uVar10 = 0;
    FUN_100232e2c(0);
    FUN_100232e4c(local_190,ppuVar16,uVar10);
    _swift_bridgeObjectRelease(ppuVar16);
    uVar21 = 1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
    uVar26 = 0xffffffffffffffff;
    if ((long)uVar21 < 0x40) {
      uVar26 = ~(-1L << (uVar21 & 0x3f));
    }
    uVar26 = uVar26 & *(ulong *)(puVar7 + 0x40);
    uVar21 = uVar21 + 0x3f >> 6;
    _swift_bridgeObjectRetain(puVar7);
    lVar27 = 0;
joined_r0x0001003af078:
    if (uVar26 == 0) {
      uVar26 = uVar21;
      if ((long)uVar21 <= lVar27 + 1) {
        uVar26 = lVar27 + 1;
      }
      lVar23 = uVar26 - 1;
      lVar14 = lVar27;
      do {
        lVar27 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003af348);
          (*pcVar3)();
        }
        if ((long)uVar21 <= lVar27) {
          uVar26 = 0;
          uStack_128 = 0;
          local_130 = 0;
          auStack_118[0] = 0;
          local_120 = 0;
          ppuStack_138 = (undefined **)0x0;
          local_140 = (ulong *******)0x0;
          goto LAB_1003af108;
        }
        uVar26 = *(ulong *)((long)(puVar7 + 0x40) + lVar27 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar26 == 0);
    }
    uVar20 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar26 = uVar26 - 1 & uVar26;
    uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) | lVar27 << 6;
    puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x30) + uVar20 * 0x10);
    local_140 = (ulong *******)*puVar1;
    ppuVar16 = (undefined **)puVar1[1];
    ppuStack_138 = ppuVar16;
    FUN_10003e8bc(*(long *)(puVar7 + 0x38) + uVar20 * 0x20,&local_130);
    _swift_bridgeObjectRetain(ppuVar16);
    lVar23 = lVar27;
LAB_1003af108:
    ppuVar16 = ppuStack_138;
    pppppppuVar6 = local_140;
    ppuStack_e8 = ppuStack_138;
    local_f0 = local_140;
    uStack_d8 = uStack_128;
    uStack_e0 = local_130;
    auStack_c8[0] = auStack_118[0];
    local_d0 = local_120;
    if (ppuStack_138 != (undefined **)0x0) {
      FUN_10007f3d4(&uStack_e0,&local_140);
      lVar27 = lVar23;
      if (((pppppppuVar6 == (ulong *******)0x656c74697424) &&
          (ppuVar16 == (undefined **)0xe600000000000000)) ||
         (pppppppuVar11 = pppppppuVar6, ppuVar17 = ppuVar16,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (pppppppuVar6,ppuVar16,0x656c74697424,0xe600000000000000,0),
         ((ulong)pppppppuVar11 & 1) != 0)) {
        FUN_10003f094(&local_140);
        _swift_bridgeObjectRelease(ppuVar16);
      }
      else {
        ppuVar12 = &local_188;
        (**(code **)((*puVar8 & (ulong)*local_190) + 0x108))();
        if (*ppuVar17 == (undefined *)0x0) {
          _swift_bridgeObjectRelease(ppuVar16);
          (*(code *)ppuVar12)(&local_188,0);
        }
        else {
          FUN_10003e8bc(&local_140,&local_a0);
          puVar13 = *ppuVar17;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar24 = *ppuVar17;
          *ppuVar17 = (undefined *)0x8000000000000000;
          pppppppuVar11 = pppppppuVar6;
          ppuVar18 = ppuVar16;
          local_a8 = puVar24;
          FUN_1001a2c70();
          uVar20 = (ulong)~(uint)ppuVar18 & 1;
          lVar14 = *(long *)(puVar24 + 0x10) + uVar20;
          if (SCARRY8(*(long *)(puVar24 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003afa74);
            (*pcVar3)();
          }
          if (*(long *)(puVar24 + 0x18) < lVar14) {
            FUN_1000675f0(lVar14,puVar13);
            pppppppuVar11 = pppppppuVar6;
            ppuVar19 = ppuVar16;
            FUN_1001a2c70();
            if (((uint)ppuVar18 & 1) != ((uint)ppuVar19 & 1)) {
LAB_1003afa80:
              __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                        (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1003afa90);
              (*pcVar3)();
            }
          }
          else if (((ulong)puVar13 & 1) == 0) {
            FUN_100063670();
          }
          puVar13 = local_a8;
          puVar8 = (ulong *)PTR__swift_isaMask_100995ee0;
          if (((ulong)ppuVar18 & 1) == 0) {
            *(ulong *)(local_a8 + ((ulong)pppppppuVar11 >> 6) * 8 + 0x40) =
                 *(ulong *)(local_a8 + ((ulong)pppppppuVar11 >> 6) * 8 + 0x40) |
                 1L << ((ulong)pppppppuVar11 & 0x3f);
            puVar1 = (undefined8 *)(*(long *)(local_a8 + 0x30) + (long)pppppppuVar11 * 0x10);
            *puVar1 = pppppppuVar6;
            puVar1[1] = ppuVar16;
            FUN_10007f3d4(&local_a0,*(long *)(local_a8 + 0x38) + (long)pppppppuVar11 * 0x20);
            if (SCARRY8(*(long *)(puVar13 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1003afa78);
              (*pcVar3)();
            }
            *(long *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + 1;
          }
          else {
            _swift_bridgeObjectRelease(ppuVar16);
            puVar13 = local_a8;
            lVar14 = *(long *)(local_a8 + 0x38) + (long)pppppppuVar11 * 0x20;
            FUN_10003f094(lVar14);
            FUN_10007f3d4(&local_a0,lVar14);
          }
          puVar24 = *ppuVar17;
          *ppuVar17 = puVar13;
          _swift_bridgeObjectRelease(puVar24);
          (*(code *)ppuVar12)(&local_188,0);
        }
        FUN_10003f094(&local_140);
      }
      goto joined_r0x0001003af078;
    }
    _swift_release(puVar7);
    goto LAB_1003af5b4;
  }
  if (((param_1 == (ulong *******)&DAT_d000000000000010) &&
      (param_2 == (undefined **)0x80000001008b0780)) ||
     (pppppppuVar6 = param_1,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (param_1,param_2,&DAT_d000000000000010,0x80000001008b0780,0),
     ((ulong)pppppppuVar6 & 1) != 0)) {
    uVar26 = 0xec000000676e6972;
    lVar27 = 0x74735f6574617473;
    if (*(long *)(puVar7 + 0x10) != 0) {
      _swift_bridgeObjectRetain(puVar7);
      lVar14 = lVar27;
      uVar21 = uVar26;
      FUN_1001a2c70(0x74735f6574617473);
      if ((uVar21 & 1) != 0) {
        FUN_10003e8bc(*(long *)(puVar7 + 0x38) + lVar14 * 0x20,&local_f0);
        _swift_bridgeObjectRelease(puVar7);
        FUN_10007f3d4(&local_f0,&local_140);
        puVar7 = local_78;
        puVar13 = local_78;
        _swift_isUniquelyReferenced_nonNull_native(local_78);
        local_188 = puVar7;
        FUN_100061e1c(&local_140,0x5f6c6f72746e6f63,0xec00000065707974,puVar13);
        local_78 = local_188;
        goto LAB_1003af484;
      }
      _swift_bridgeObjectRelease(puVar7);
    }
    FUN_1003e7ecc(&local_f0,0x5f6c6f72746e6f63,0xec00000065707974);
    FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
LAB_1003af484:
    FUN_1003e7ecc(&local_f0,lVar27,uVar26);
    FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
  }
  else if (((param_1 == (ulong *******)0xd000000000000016) &&
           (param_2 == (undefined **)0x80000001008b0840)) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (param_1,param_2,0xd000000000000016,0x80000001008b0840,0),
          ((ulong)param_1 & 1) != 0)) {
    uVar26 = 0xee00676e69727473;
    lVar27 = 0x5f746e65746e6f63;
    if (*(long *)(puVar7 + 0x10) == 0) {
LAB_1003af604:
      FUN_1003e7ecc(&local_f0,&DAT_d000000000000010,0x80000001008b05b0);
      FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
    }
    else {
      _swift_bridgeObjectRetain(puVar7);
      FUN_1001a2c70(0x5f746e65746e6f63);
      if ((uVar26 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar7);
        goto LAB_1003af604;
      }
      FUN_10003e8bc(*(long *)(puVar7 + 0x38) + lVar27 * 0x20,&local_f0);
      _swift_bridgeObjectRelease(puVar7);
      FUN_10007f3d4(&local_f0,&local_140);
      puVar7 = local_78;
      puVar13 = local_78;
      _swift_isUniquelyReferenced_nonNull_native(local_78);
      local_188 = puVar7;
      FUN_100061e1c(&local_140,&DAT_d000000000000010,0x80000001008b05b0,puVar13);
      local_78 = local_188;
    }
    uVar26 = 0xef676e697274735f;
    lVar27 = 0x32746e65746e6f63;
    FUN_1003e7ecc(&local_f0,0x5f746e65746e6f63,0xee00676e69727473);
    FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
    puVar7 = local_78;
    if (*(long *)(local_78 + 0x10) == 0) {
LAB_1003af718:
      FUN_1003e7ecc(&local_f0,0x5f73776f646e6977,0xec000000656d616e);
      FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
    }
    else {
      _swift_bridgeObjectRetain(local_78);
      uVar21 = uVar26;
      FUN_1001a2c70(0x32746e65746e6f63);
      if ((uVar21 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar7);
        goto LAB_1003af718;
      }
      FUN_10003e8bc(*(long *)(puVar7 + 0x38) + lVar27 * 0x20,&local_f0);
      _swift_bridgeObjectRelease(puVar7);
      FUN_10007f3d4(&local_f0,&local_140);
      puVar13 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native(puVar7);
      local_188 = puVar7;
      FUN_100061e1c(&local_140,0x5f73776f646e6977,0xec000000656d616e,puVar13);
      local_78 = local_188;
    }
    lVar27 = 0x33746e65746e6f63;
    FUN_1003e7ecc(&local_f0,0x32746e65746e6f63,0xef676e697274735f);
    FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
    puVar7 = local_78;
    if (*(long *)(local_78 + 0x10) == 0) {
LAB_1003af81c:
      FUN_1003e7ecc(&local_f0,0x5f737365636f7270,0xec000000656d616e);
      FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
    }
    else {
      _swift_bridgeObjectRetain(local_78);
      uVar21 = uVar26;
      FUN_1001a2c70(0x33746e65746e6f63);
      if ((uVar21 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar7);
        goto LAB_1003af81c;
      }
      FUN_10003e8bc(*(long *)(puVar7 + 0x38) + lVar27 * 0x20,&local_f0);
      _swift_bridgeObjectRelease(puVar7);
      FUN_10007f3d4(&local_f0,&local_140);
      puVar13 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native(puVar7);
      local_188 = puVar7;
      FUN_100061e1c(&local_140,0x5f737365636f7270,0xec000000656d616e,puVar13);
      local_78 = local_188;
    }
    lVar27 = 0x34746e65746e6f63;
    FUN_1003e7ecc(&local_f0,0x33746e65746e6f63,0xef676e697274735f);
    FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
    puVar7 = local_78;
    if (*(long *)(local_78 + 0x10) == 0) {
LAB_1003af90c:
      FUN_1003e7ecc(&local_f0,0x5f737365636f7270,0xec00000068746170);
      FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
    }
    else {
      _swift_bridgeObjectRetain(local_78);
      uVar21 = uVar26;
      FUN_1001a2c70(0x34746e65746e6f63);
      if ((uVar21 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar7);
        goto LAB_1003af90c;
      }
      FUN_10003e8bc(*(long *)(puVar7 + 0x38) + lVar27 * 0x20,&local_f0);
      _swift_bridgeObjectRelease(puVar7);
      FUN_10007f3d4(&local_f0,&local_140);
      puVar13 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native(puVar7);
      local_188 = puVar7;
      FUN_100061e1c(&local_140,0x5f737365636f7270,0xec00000068746170,puVar13);
      local_78 = local_188;
    }
    lVar27 = 0x35746e65746e6f63;
    FUN_1003e7ecc(&local_f0,0x34746e65746e6f63,0xef676e697274735f);
    FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
    puVar7 = local_78;
    if (*(long *)(local_78 + 0x10) != 0) {
      _swift_bridgeObjectRetain(local_78);
      lVar14 = lVar27;
      uVar21 = uVar26;
      FUN_1001a2c70(0x35746e65746e6f63);
      if ((uVar21 & 1) != 0) {
        FUN_10003e8bc(*(long *)(puVar7 + 0x38) + lVar14 * 0x20,&local_f0);
        _swift_bridgeObjectRelease(puVar7);
        FUN_10007f3d4(&local_f0,&local_140);
        puVar13 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native(puVar7);
        local_188 = puVar7;
        FUN_100061e1c(&local_140,0x6c6c6f72746e6f63,0xef657079745f7265,puVar13);
        local_78 = local_188;
        goto LAB_1003af484;
      }
      _swift_bridgeObjectRelease(puVar7);
    }
    FUN_1003e7ecc(&local_f0,0x6c6c6f72746e6f63,0xef657079745f7265);
    FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
    goto LAB_1003af484;
  }
  puVar7 = local_78;
  if (*(long *)(local_78 + 0x10) != 0) {
    lVar27 = 0x656372756f73;
    _swift_bridgeObjectRetain(local_78);
    uVar26 = 0;
    FUN_1001a2c70(0x656372756f73);
    if ((uVar26 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar7);
    }
    else {
      FUN_10003e8bc(*(long *)(puVar7 + 0x38) + lVar27 * 0x20,&local_140);
      _swift_bridgeObjectRelease(puVar7);
      FUN_10007f3d4(&local_140,&local_f0);
      FUN_10003e8bc(&local_f0,&local_140);
      puVar13 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native(puVar7);
      local_188 = puVar7;
      FUN_100061e1c(&local_140,0x72756f735f64726e,0xea00000000006563,puVar13);
      local_78 = local_188;
      FUN_1003e7ecc(&local_140,0x656372756f73,0xe600000000000000);
      FUN_100040bb4(&local_140,&DAT_100a766e0,&DAT_10080bdb0);
      FUN_10003f094(&local_f0);
      puVar7 = local_78;
    }
  }
  FUN_100232e2c(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(puVar7);
  FUN_100233c5c(local_190,ppuVar16,puVar7);
LAB_1003af5b4:
  (**(code **)((*puVar8 & (ulong)*local_190) + 0x110))();
  _swift_bridgeObjectRelease(puVar7);
  return 0;
}

