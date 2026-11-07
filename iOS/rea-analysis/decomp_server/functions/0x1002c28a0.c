// rea decompile_all
// name: FUN_1002c28a0
// address: 0x1002c28a0
// body: available
// range: 0x1002c28a0-0x1002c36c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c28a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long unaff_x20;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x21;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined auStack_190 [16];
  undefined8 auStack_180 [2];
  long local_170 [4];
  code *local_150;
  long local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  code *local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 *local_a0;
  undefined *local_98 [4];
  long lStack_78;
  undefined8 local_58;
  
  lVar14 = *(long *)(param_4 + -8);
  lVar18 = (long)local_170 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSqMa(0,param_4);
  lVar22 = *(long *)(lVar3 + -8);
  lVar19 = lVar18 - (*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar22 + 0x10))(lVar19,param_2,lVar3);
  lVar4 = lVar19;
  (**(code **)(lVar14 + 0x30))(lVar19,1,param_4);
  if ((int)lVar4 == 1) {
    (**(code **)(lVar22 + 8))(lVar19,lVar3);
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_3,lVar4);
    return;
  }
  local_100 = param_1;
  (**(code **)(lVar14 + 0x20))(lVar18,lVar19,param_4);
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar21 = *(long *)(lVar3 + -8);
  lVar19 = lVar19 - (*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar21 + 0x10))(lVar19,param_3,lVar3);
  lVar22 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar22 + -8);
  local_108 = *(long *)(lVar16 + 0x40);
  puVar20 = (undefined *)(lVar19 - (local_108 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  local_110 = *(long *)(*(long *)(puVar5 + -8) + 0x40);
  lVar17 = (long)puVar20 - (local_110 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation10URLRequestV3urlAA3URLVSgvg(lVar17);
  local_118 = *(code **)(lVar16 + 0x30);
  lVar4 = lVar17;
  (*local_118)(lVar17,1,lVar22);
  if ((int)lVar4 == 1) {
    FUN_100040bb4(lVar17,&DAT_100a83428,&DAT_100817bb0);
    puVar6 = (undefined8 *)0x0;
    FUN_100277ad0();
    puVar15 = puVar6;
    FUN_1002c272c();
    _swift_allocError(puVar6,puVar15,0,0);
    *puVar15 = 0;
    puVar15[1] = 0;
    *(undefined1 *)(puVar15 + 2) = 0;
    _swift_storeEnumTagMultiPayload(puVar15,puVar6,6);
    _swift_willThrow();
    (**(code **)(lVar21 + 8))(lVar19,lVar3);
  }
  else {
    pcVar11 = *(code **)(lVar16 + 0x20);
    puVar5 = puVar20;
    local_128 = lVar21;
    local_120 = lVar3;
    (*pcVar11)(puVar20,lVar17,lVar22);
    __s10Foundation10URLRequestV10httpMethodSSSgvg();
    if (lVar17 == 0) {
      __s10Foundation10URLRequestV10httpMethodSSSgvg();
      puVar10 = (undefined *)0x6c696e;
      if (lVar17 != 0) {
        puVar10 = puVar5;
      }
      lVar4 = -0x1d00000000000000;
      if (lVar17 != 0) {
        lVar4 = lVar17;
      }
      puVar6 = (undefined8 *)0x0;
      FUN_100277ad0();
      puVar15 = puVar6;
      FUN_1002c272c();
      _swift_allocError(puVar6,puVar15,0,0);
      *puVar15 = puVar10;
      puVar15[1] = lVar4;
      *(undefined1 *)(puVar15 + 2) = 0;
      _swift_storeEnumTagMultiPayload(puVar15,puVar6,6);
      _swift_willThrow();
      (**(code **)(lVar16 + 8))(puVar20,lVar22);
      (**(code **)(local_128 + 8))(lVar19,local_120);
    }
    else {
      local_148 = lVar16;
      local_140 = puVar20;
      local_138 = lVar18;
      local_130 = lVar19;
      if (*(char *)(unaff_x20 + 0x18) == '\0') {
        puVar10 = &DAT_100a83a48;
        local_150 = pcVar11;
        FUN_100004bb4(&DAT_100a83a48,&DAT_100818350);
        _swift_initStaticObject();
        local_98[3] = puVar5;
        lStack_78 = lVar17;
        *(undefined ***)(puVar20 + -0x10) = local_98 + 3;
        uVar23 = 0;
        FUN_100152a38(FUN_10000d558,puVar20 + -0x20,puVar10);
        _swift_arrayDestroy(puVar10 + 0x20,3,&DAT_1009ad298);
        _swift_bridgeObjectRelease();
        if ((uVar23 & 1) != 0) goto LAB_1002c2d0c;
      }
      else if (*(char *)(unaff_x20 + 0x18) == '\x01') {
        local_150 = pcVar11;
        _swift_bridgeObjectRelease(lVar17);
LAB_1002c2d0c:
        lVar3 = 0;
        __s10Foundation13URLComponentsVMa();
        lVar16 = *(long *)(lVar3 + -8);
        lVar19 = (long)puVar20 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
        puVar5 = &DAT_100a83a38;
        FUN_100004bb4(&DAT_100a83a38,&DAT_100818330);
        lVar17 = lVar19 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
        __s10Foundation13URLComponentsV3url23resolvingAgainstBaseURLACSgAA0G0Vh_SbtcfC
                  (lVar17,puVar20,0);
        lVar4 = lVar17;
        (**(code **)(lVar16 + 0x30))(lVar17,1,lVar3);
        if ((int)lVar4 != 1) {
          local_170[2] = lVar16;
          (**(code **)(lVar16 + 0x20))(lVar19,lVar17,lVar3);
          puVar5 = &DAT_100a82c50;
          FUN_100004bb4(&DAT_100a82c50,&DAT_100817210);
          puVar15 = (undefined8 *)
                    (lVar19 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
                    );
          FUN_1002c36c4(local_98 + 3,unaff_x20,lVar18,param_4,param_5,&local_58);
          lVar4 = lStack_78;
          local_170[3] = lVar22;
          if (unaff_x21 == 0) {
            *puVar15 = local_98[3];
            puVar15[1] = lVar4;
          }
          else {
            *puVar15 = local_58;
            puVar15[1] = 0;
            *(undefined1 *)(puVar15 + 2) = 1;
            uVar8 = 0;
            FUN_100277ad0(0);
            _swift_storeEnumTagMultiPayload(puVar15,uVar8,6);
          }
          _swift_storeEnumTagMultiPayload(puVar15,puVar5,unaff_x21 != 0);
          lVar4 = 0;
          FUN_100277ad0();
          uVar23 = (long)puVar15 -
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
          puVar6 = puVar15;
          _swift_getEnumCaseMultiPayload();
          if ((int)puVar6 != 1) {
            local_170[0] = lVar4;
            uVar8 = *puVar15;
            uVar1 = puVar15[1];
            __s10Foundation13URLComponentsV19percentEncodedQuerySSSgvg();
            lVar4 = 0;
            local_a0 = puVar6;
            local_98[0] = puVar5;
            local_98[1] = (undefined *)uVar8;
            local_98[2] = (undefined *)uVar1;
            puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
            do {
              ppuVar2 = local_98 + lVar4 * 2;
              do {
                ppuVar12 = ppuVar2;
                lVar4 = lVar4 + 1;
                if (lVar4 == 3) {
                  puVar20 = &DAT_100a83a40;
                  FUN_100004bb4(&DAT_100a83a40,&DAT_100818340);
                  _swift_arrayDestroy(&local_a0,2,puVar20);
                  puVar20 = &DAT_100a82770;
                  local_98[3] = puVar5;
                  FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
                  puVar10 = puVar20;
                  FUN_100280754();
                  uVar7 = 0x26;
                  uVar9 = 0xe100000000000000;
                  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF
                            (0x26,0xe100000000000000,puVar20,puVar10);
                  _swift_bridgeObjectRelease(puVar5);
                  uVar23 = uVar7 & 0xffffffffffff;
                  if ((uVar9 & 0x2000000000000000) != 0) {
                    uVar23 = uVar9 >> 0x38 & 0xf;
                  }
                  if (uVar23 == 0) {
                    _swift_bridgeObjectRelease(uVar9);
                    uVar7 = 0;
                    uVar9 = 0;
                  }
                  __s10Foundation13URLComponentsV19percentEncodedQuerySSSgvs(uVar7,uVar9);
                  lVar18 = lVar19 - (local_108 + 0xfU & 0xfffffffffffffff0);
                  uVar23 = local_110 + 0xfU & 0xfffffffffffffff0;
                  puVar6 = (undefined8 *)(lVar18 - uVar23);
                  local_170[1] = lVar19;
                  __s10Foundation13URLComponentsV3urlAA3URLVSgvg(puVar6);
                  lVar4 = local_170[3];
                  puVar15 = puVar6;
                  (*local_118)(puVar6,1,local_170[3]);
                  if ((int)puVar15 == 1) {
                    FUN_100040bb4(puVar6,&DAT_100a83428,&DAT_100817bb0);
                    FUN_1002c272c();
                    lVar18 = local_170[0];
                    _swift_allocError(local_170[0],puVar6,0,0);
                    *puVar6 = 0;
                    puVar6[1] = 0;
                    *(undefined1 *)(puVar6 + 2) = 0;
                    _swift_storeEnumTagMultiPayload(puVar6,lVar18,6);
                    _swift_willThrow();
                    (**(code **)(local_170[2] + 8))(lVar19,lVar3);
                    (**(code **)(local_148 + 8))(local_140,lVar4);
                    (**(code **)(local_128 + 8))(local_130,local_120);
                    lVar18 = local_138;
                    goto LAB_1002c2c28;
                  }
                  (*local_150)(lVar18,puVar6,lVar4);
                  lVar22 = local_148;
                  lVar16 = lVar18 - uVar23;
                  (**(code **)(local_148 + 0x10))(lVar16,lVar18,lVar4);
                  (**(code **)(lVar22 + 0x38))(lVar16,0,1,lVar4);
                  lVar17 = local_130;
                  __s10Foundation10URLRequestV3urlAA3URLVSgvs(lVar16);
                  pcVar11 = *(code **)(lVar22 + 8);
                  (*pcVar11)(lVar18,lVar4);
                  (**(code **)(local_170[2] + 8))(lVar19,lVar3);
                  (*pcVar11)(local_140,lVar4);
                  goto LAB_1002c30e4;
                }
                puVar20 = *ppuVar12;
                ppuVar2 = ppuVar12 + 2;
              } while (puVar20 == (undefined *)0x0);
              puVar13 = ppuVar12[-1];
              _swift_bridgeObjectRetain(puVar20);
              puVar10 = puVar5;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar10 & 1) == 0) {
                puVar10 = (undefined *)0x0;
                FUN_1002968f4(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
                puVar5 = puVar10;
              }
              uVar23 = *(ulong *)(puVar5 + 0x10);
              if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar23) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
                FUN_1002968f4(puVar10,uVar23 + 1,1,puVar5);
                puVar5 = puVar10;
              }
              *(ulong *)(puVar5 + 0x10) = uVar23 + 1;
              *(undefined **)(puVar5 + uVar23 * 0x10 + 0x20) = puVar13;
              *(undefined **)(puVar5 + uVar23 * 0x10 + 0x28) = puVar20;
            } while( true );
          }
          FUN_10026531c(puVar15,uVar23);
          uVar9 = 0xf;
          __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xf,0,0,0x12,0,0)
          ;
          lVar22 = local_130;
          lVar18 = local_170[2];
          uVar7 = uVar9;
          if ((uVar9 & 1) != 0) {
            FUN_1002c272c();
            uVar7 = uVar23;
            _swift_willThrowTypedImpl(uVar23,lVar4,uVar9);
          }
          FUN_1002c272c();
          _swift_allocError(lVar4,uVar7,0,0);
          FUN_10026531c(uVar23);
          (**(code **)(lVar18 + 8))(lVar19,lVar3);
          (**(code **)(local_148 + 8))(local_140,local_170[3]);
          (**(code **)(local_128 + 8))(lVar22,local_120);
          lVar18 = local_138;
          goto LAB_1002c2c28;
        }
        FUN_100040bb4(lVar17,&DAT_100a83a38,&DAT_100818330);
      }
      else {
        _swift_bridgeObjectRelease();
      }
      __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
      puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (lVar17 != 0) {
        local_98[3] = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_1002bb634();
        _swift_bridgeObjectRelease(lVar17);
        puVar5 = local_98[3];
      }
      uVar23 = 0;
      uVar7 = 0x2d746e65746e6f43;
      FUN_1002bbc2c(0x2d746e65746e6f43,0xec00000065707954,puVar5);
      if ((uVar23 & 1) == 0) {
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1002c36c0);
          (*pcVar11)();
        }
        uVar23 = *(ulong *)(puVar5 + 0x10);
        _swift_bridgeObjectRelease(puVar5);
        if (uVar23 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1002c36c4);
          (*pcVar11)();
        }
      }
      else {
        _swift_bridgeObjectRelease();
        __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
        local_98[3] = PTR___swiftEmptyArrayStorage_100995ea0;
        if (puVar5 != (undefined *)0x0) {
          FUN_1002bb634();
          _swift_bridgeObjectRelease(puVar5);
        }
        FUN_1002bba74(0x2d746e65746e6f43,0xec00000065707954,&DAT_d000000000000030,0x80000001008a9bd0
                     );
        puVar5 = local_98[3];
        puVar10 = local_98[3];
        FUN_1002bc258(local_98[3]);
        _swift_bridgeObjectRelease(puVar5);
        __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(puVar10);
      }
      puVar5 = &DAT_100a82c60;
      FUN_100004bb4(&DAT_100a82c60,&DAT_100817220);
      puVar15 = (undefined8 *)
                (puVar20 + -(*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
      FUN_1002c376c(local_98 + 3,unaff_x20,lVar18,param_4,param_5,&local_58);
      puVar20 = local_98[3];
      if (unaff_x21 == 0) {
        puVar15[1] = lStack_78;
        *puVar15 = puVar20;
      }
      else {
        *puVar15 = local_58;
        puVar15[1] = 0;
        *(undefined1 *)(puVar15 + 2) = 1;
        uVar8 = 0;
        FUN_100277ad0(0);
        _swift_storeEnumTagMultiPayload(puVar15,uVar8,6);
      }
      _swift_storeEnumTagMultiPayload(puVar15,puVar5,unaff_x21 != 0);
      lVar4 = 0;
      FUN_100277ad0();
      uVar23 = (long)puVar15 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      puVar6 = puVar15;
      _swift_getEnumCaseMultiPayload(puVar15,puVar5);
      lVar17 = local_130;
      if ((int)puVar6 != 1) {
        __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs(*puVar15,puVar15[1]);
        (**(code **)(local_148 + 8))(local_140,lVar22);
LAB_1002c30e4:
        (**(code **)(local_128 + 0x20))(local_100,lVar17,local_120);
        pcVar11 = *(code **)(lVar14 + 8);
        lVar18 = local_138;
        goto LAB_1002c2c34;
      }
      FUN_10026531c(puVar15,uVar23);
      uVar9 = 0xf;
      __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xf,0,0,0x12,0,0);
      lVar3 = local_120;
      lVar18 = local_128;
      uVar7 = uVar9;
      if ((uVar9 & 1) != 0) {
        FUN_1002c272c();
        uVar7 = uVar23;
        _swift_willThrowTypedImpl(uVar23,lVar4,uVar9);
      }
      FUN_1002c272c();
      _swift_allocError(lVar4,uVar7,0,0);
      FUN_10026531c(uVar23);
      (**(code **)(local_148 + 8))(local_140,lVar22);
      (**(code **)(lVar18 + 8))(local_130,lVar3);
      lVar18 = local_138;
    }
  }
LAB_1002c2c28:
  pcVar11 = *(code **)(lVar14 + 8);
LAB_1002c2c34:
  (*pcVar11)(lVar18,param_4);
  return;
}

