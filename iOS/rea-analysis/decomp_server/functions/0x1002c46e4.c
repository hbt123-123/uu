// rea decompile_all
// name: FUN_1002c46e4
// address: 0x1002c46e4
// body: available
// range: 0x1002c46e4-0x1002c508b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined *
FUN_1002c46e4(ID param_1,undefined *param_2,undefined8 param_3,undefined4 param_4,code *param_5,
             undefined8 param_6,uint param_7)

{
  ID IVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  ID *pIVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ID local_120;
  undefined *local_118;
  ID local_110;
  char *pcStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  ID local_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  ID local_b0;
  ID local_a8;
  undefined *puStack_a0;
  long local_98;
  undefined1 auStack_90 [32];
  undefined *local_70;
  
  local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003e8bc(param_3,auStack_90);
  puVar12 = &DAT_100a83bb0;
  FUN_100004bb4(&DAT_100a83bb0,&DAT_100818478);
  puVar11 = PTR___sypN_100995e88;
  plVar5 = &local_98;
  _swift_dynamicCast(plVar5,auStack_90,PTR___sypN_100995e88 + 8,puVar12,0);
  if ((int)plVar5 != 0) {
    lVar16 = 0;
    uVar18 = 1L << ((ulong)*(byte *)(local_98 + 0x20) & 0x3f);
    uVar21 = 0xffffffffffffffff;
    if ((long)uVar18 < 0x40) {
      uVar21 = ~(-1L << (uVar18 & 0x3f));
    }
    uVar21 = uVar21 & *(ulong *)(local_98 + 0x40);
    uVar18 = uVar18 + 0x3f >> 6;
    lVar19 = lVar16;
    if (uVar21 == 0) goto LAB_1002c47b0;
LAB_1002c47dc:
    do {
      uVar17 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar21 = uVar21 - 1 & uVar21;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | lVar19 << 6;
      pIVar7 = (ID *)(*(long *)(local_98 + 0x30) + uVar17 * 0x10);
      local_110 = *pIVar7;
      pcVar14 = (char *)pIVar7[1];
      pcStack_108 = pcVar14;
      FUN_10003e8bc(*(long *)(local_98 + 0x38) + uVar17 * 0x20,&local_100);
      _swift_bridgeObjectRetain(pcVar14);
      lVar16 = lVar19;
      while( true ) {
        pcVar14 = pcStack_108;
        IVar10 = local_110;
        pcStack_d8 = pcStack_108;
        local_e0 = local_110;
        uStack_c8 = uStack_f8;
        uStack_d0 = local_100;
        uStack_b8 = uStack_e8;
        local_c0 = local_f0;
        if (pcStack_108 == (char *)0x0) {
          _swift_release(local_98);
          puVar12 = local_70;
          goto LAB_1002c4fac;
        }
        FUN_10007f3d4(&uStack_d0,&local_110);
        local_a8 = param_1;
        puStack_a0 = param_2;
        _swift_bridgeObjectRetain();
        __sSS6appendyySSF(0x5b,0xe100000000000000);
        __sSS6appendyySSF(IVar10,pcVar14);
        _swift_bridgeObjectRelease(pcVar14);
        __sSS6appendyySSF(0x5d,0xe100000000000000);
        puVar12 = puStack_a0;
        IVar10 = local_a8;
        FUN_1002c46e4(local_a8,puStack_a0,&local_110,param_4,param_5,param_6,param_7 & 1);
        _swift_bridgeObjectRelease(puVar12);
        FUN_1002c5a30(IVar10);
        FUN_10003f094(&local_110);
        lVar19 = lVar16;
        if (uVar21 != 0) break;
LAB_1002c47b0:
        uVar17 = uVar18;
        if ((long)uVar18 <= lVar16 + 1) {
          uVar17 = lVar16 + 1;
        }
        while( true ) {
          lVar19 = lVar16 + 1;
          if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c4d38);
            (*pcVar3)();
          }
          if ((long)uVar18 <= lVar19) break;
          uVar21 = ((ulong *)(local_98 + 0x40))[lVar19];
          lVar16 = lVar16 + 1;
          if (uVar21 != 0) goto LAB_1002c47dc;
        }
        uVar21 = 0;
        uStack_f8 = 0;
        local_100 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        pcStack_108 = (char *)0x0;
        local_110 = 0;
        lVar16 = uVar17 - 1;
      }
    } while( true );
  }
  puVar12 = &DAT_100a83bb8;
  FUN_100004bb4(&DAT_100a83bb8,&DAT_100818480);
  plVar5 = &local_98;
  _swift_dynamicCast(plVar5,auStack_90,puVar11 + 8,puVar12,0);
  if ((int)plVar5 != 0) {
    uVar21 = *(ulong *)(local_98 + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar21 != 0) {
      uVar18 = 0;
      lVar16 = local_98;
      do {
        lVar16 = lVar16 + 0x20;
        if (*(ulong *)(local_98 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c4fdc);
          (*pcVar3)();
        }
        local_110 = uVar18;
        FUN_10003e8bc(lVar16,(ulong)&local_110 | 8);
        IVar10 = local_110;
        pcStack_d8 = pcStack_108;
        local_e0 = local_110;
        uStack_c8 = uStack_f8;
        uStack_d0 = local_100;
        local_c0 = local_f0;
        if (local_f0 == 0) goto LAB_1002c4c4c;
        FUN_10007f3d4((ulong)&local_e0 | 8,&local_110);
        if (param_5 == (code *)0x0) {
          local_a8 = param_1;
          puStack_a0 = param_2;
          _swift_bridgeObjectRetain();
          uVar6 = 0x5d5b;
          uVar13 = 0xe200000000000000;
LAB_1002c4a48:
          __sSS6appendyySSF(uVar6,uVar13);
          IVar8 = local_a8;
          puVar11 = puStack_a0;
        }
        else {
          IVar8 = param_1;
          puVar11 = param_2;
          if (param_5 == (code *)0x1) {
            _swift_bridgeObjectRetain(param_2);
          }
          else {
            if (param_5 == (code *)0x2) {
              local_a8 = param_1;
              puStack_a0 = param_2;
              _swift_bridgeObjectRetain();
              __sSS6appendyySSF(0x5b,0xe100000000000000);
              local_b0 = IVar10;
              puVar11 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
              __ss23CustomStringConvertibleP11descriptionSSvgTj
                        (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
              __sSS6appendyySSF();
              _swift_bridgeObjectRelease(puVar11);
              uVar6 = 0x5d;
              uVar13 = 0xe100000000000000;
              goto LAB_1002c4a48;
            }
            (*param_5)(param_1,param_2,IVar10);
          }
        }
        FUN_1002c46e4();
        _swift_bridgeObjectRelease(puVar11);
        lVar19 = *(long *)(IVar8 + 0x10);
        lVar20 = *(long *)(puVar12 + 0x10);
        if (SCARRY8(lVar20,lVar19)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c4fe0);
          (*pcVar3)();
        }
        puVar11 = puVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar11 == 0) || ((long)(*(ulong *)(puVar12 + 0x18) >> 1) < lVar20 + lVar19)) {
          FUN_100296afc();
          puVar12 = puVar11;
          if (*(long *)(IVar8 + 0x10) == 0) goto LAB_1002c4938;
LAB_1002c4ae8:
          lVar20 = *(long *)(puVar11 + 0x10);
          if ((long)((*(ulong *)(puVar11 + 0x18) >> 1) - lVar20) < lVar19) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c4fe8);
            (*pcVar3)();
          }
          puVar12 = &DAT_100a833c8;
          FUN_100004bb4(&DAT_100a833c8,&DAT_1008178a0);
          _swift_arrayInitWithCopy(puVar11 + lVar20 * 0x20 + 0x20,IVar8 + 0x20,lVar19,puVar12);
          _swift_bridgeObjectRelease(IVar8);
          if (lVar19 != 0) {
            if (SCARRY8(*(long *)(puVar11 + 0x10),lVar19)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c4fec);
              (*pcVar3)();
            }
            *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + lVar19;
          }
        }
        else {
          puVar11 = puVar12;
          if (*(long *)(IVar8 + 0x10) != 0) goto LAB_1002c4ae8;
LAB_1002c4938:
          _swift_bridgeObjectRelease(IVar8);
          puVar11 = puVar12;
          if (lVar19 != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c4fe4);
            (*pcVar3)();
          }
        }
        uVar18 = uVar18 + 1;
        local_70 = puVar11;
        FUN_10003f094(&local_110);
        puVar12 = puVar11;
      } while (uVar21 != uVar18);
    }
    local_c0 = 0;
    pcStack_d8 = (char *)0x0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
LAB_1002c4c4c:
    _swift_bridgeObjectRelease(local_98);
    goto LAB_1002c4fac;
  }
  uVar6 = 0;
  FUN_1002c63f4(0);
  pIVar7 = &local_110;
  _swift_dynamicCast(pIVar7,auStack_90,puVar11 + 8,uVar6,0);
  IVar10 = local_110;
  local_e0 = param_1;
  pcStack_d8 = param_2;
  if ((int)pIVar7 == 0) {
    pIVar7 = &local_110;
    _swift_dynamicCast(pIVar7,auStack_90,puVar11 + 8,PTR___sSbN_1009958c8,0);
    if ((int)pIVar7 == 0) {
      if (DAT_100a81bf0 != -1) {
        _swift_once(&DAT_100a81bf0,FUN_100357644);
      }
      IVar8 = 0;
      __s10Foundation12CharacterSetVMa();
      FUN_10021bec0();
      IVar10 = IVar8;
      FUN_1002c6438();
      local_120 = IVar8;
      local_118 = PTR___sSSN_1009957f8;
      __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                (IVar8,PTR___sSSN_1009957f8,IVar10);
      if (local_118 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(param_2);
        local_120 = param_1;
        local_118 = param_2;
      }
      local_e0 = 0;
      pcStack_d8 = (char *)0xe000000000000000;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (param_3,&local_e0,puVar11 + 8,PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      IVar9 = local_e0;
      pcVar14 = pcStack_d8;
    }
    else {
      cVar2 = (char)local_110;
      if (DAT_100a81bf0 != -1) {
        _swift_once(&DAT_100a81bf0,FUN_100357644);
      }
      IVar8 = 0;
      __s10Foundation12CharacterSetVMa();
      FUN_10021bec0();
      IVar10 = IVar8;
      FUN_1002c6438();
      local_120 = IVar8;
      local_118 = PTR___sSSN_1009957f8;
      __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                (IVar8,PTR___sSSN_1009957f8,IVar10);
      if (local_118 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(param_2);
        local_120 = param_1;
        local_118 = param_2;
      }
      bVar4 = cVar2 != '\0';
      IVar1 = 0x30;
      if (bVar4) {
        IVar1 = 0x31;
      }
      IVar9 = 0x65757274;
      if (!bVar4) {
        IVar9 = 0x65736c6166;
      }
      pcVar14 = (char *)0xe400000000000000;
      if (!bVar4) {
        pcVar14 = (char *)0xe500000000000000;
      }
      if ((param_7 & 1) == 0) {
        pcVar14 = (char *)0xe100000000000000;
        IVar9 = IVar1;
      }
    }
    pcVar15 = PTR___sSSN_1009957f8;
    local_e0 = IVar9;
    pcStack_d8 = pcVar14;
    __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
              (IVar8,PTR___sSSN_1009957f8,IVar10);
    if (pcVar15 != (char *)0x0) {
      _swift_bridgeObjectRelease(pcVar14);
      IVar9 = IVar8;
      pcVar14 = pcVar15;
    }
    puVar11 = (undefined *)0x0;
    FUN_100296afc(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
    uVar21 = *(ulong *)(puVar11 + 0x10);
    puVar12 = puVar11;
    if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar21) {
      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
      FUN_100296afc(puVar12,uVar21 + 1,1,puVar11);
    }
    *(ulong *)(puVar12 + 0x10) = uVar21 + 1;
    *(ID *)(puVar12 + uVar21 * 0x20 + 0x20) = local_120;
    *(undefined **)(puVar12 + uVar21 * 0x20 + 0x28) = local_118;
    *(ID *)(puVar12 + uVar21 * 0x20 + 0x30) = IVar9;
    *(char **)(puVar12 + uVar21 * 0x20 + 0x38) = pcVar14;
    goto LAB_1002c4fac;
  }
  IVar8 = local_110;
  _objc_retainAutorelease();
  pcVar14 = "objCType";
  uVar21 = _objc_msgSend(IVar8,"objCType");
  __sSS7cStringSSSPys4Int8VG_tcfC();
  if ((uVar21 == 99) && (pcVar14 == (char *)0xe100000000000000)) {
    _swift_bridgeObjectRelease(0xe100000000000000);
LAB_1002c4c7c:
    if (DAT_100a81bf0 != -1) {
      _swift_once(&DAT_100a81bf0,FUN_100357644);
    }
    IVar9 = 0;
    __s10Foundation12CharacterSetVMa();
    FUN_10021bec0();
    IVar8 = IVar9;
    FUN_1002c6438();
    local_120 = IVar9;
    local_118 = PTR___sSSN_1009957f8;
    __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
              (IVar9,PTR___sSSN_1009957f8,IVar8);
    if (local_118 == (undefined *)0x0) {
      _swift_bridgeObjectRetain(param_2);
      local_120 = param_1;
      local_118 = param_2;
    }
    IVar10 = _objc_msgSend(IVar10,"boolValue");
    bVar4 = (int)IVar10 != 0;
    IVar1 = 0x30;
    if (bVar4) {
      IVar1 = 0x31;
    }
    IVar10 = 0x65757274;
    if (!bVar4) {
      IVar10 = 0x65736c6166;
    }
    pcVar14 = (char *)0xe400000000000000;
    if (!bVar4) {
      pcVar14 = (char *)0xe500000000000000;
    }
    if ((param_7 & 1) == 0) {
      pcVar14 = (char *)0xe100000000000000;
      IVar10 = IVar1;
    }
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(pcVar14);
    if ((uVar21 & 1) != 0) goto LAB_1002c4c7c;
    if (DAT_100a81bf0 != -1) {
      _swift_once(&DAT_100a81bf0,FUN_100357644);
    }
    IVar9 = 0;
    __s10Foundation12CharacterSetVMa();
    FUN_10021bec0();
    IVar8 = IVar9;
    FUN_1002c6438();
    local_120 = IVar9;
    local_118 = PTR___sSSN_1009957f8;
    __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
              (IVar9,PTR___sSSN_1009957f8,IVar8);
    if (local_118 == (undefined *)0x0) {
      _swift_bridgeObjectRetain(param_2);
      local_120 = param_1;
      local_118 = param_2;
    }
    pcVar14 = "description";
    IVar10 = _objc_msgSend(IVar10,"description");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  pcVar15 = PTR___sSSN_1009957f8;
  local_e0 = IVar10;
  pcStack_d8 = pcVar14;
  __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
            (IVar9,PTR___sSSN_1009957f8,IVar8);
  if (pcVar15 != (char *)0x0) {
    _swift_bridgeObjectRelease(pcVar14);
    pcVar14 = pcVar15;
    IVar10 = IVar9;
  }
  puVar11 = (undefined *)0x0;
  FUN_100296afc(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
  uVar21 = *(ulong *)(puVar11 + 0x10);
  puVar12 = puVar11;
  if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar21) {
    puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
    FUN_100296afc(puVar12,uVar21 + 1,1,puVar11);
  }
  *(ulong *)(puVar12 + 0x10) = uVar21 + 1;
  *(ID *)(puVar12 + uVar21 * 0x20 + 0x20) = local_120;
  *(undefined **)(puVar12 + uVar21 * 0x20 + 0x28) = local_118;
  *(ID *)(puVar12 + uVar21 * 0x20 + 0x30) = IVar10;
  *(char **)(puVar12 + uVar21 * 0x20 + 0x38) = pcVar14;
LAB_1002c4fac:
  FUN_10003f094(auStack_90);
  return puVar12;
}

