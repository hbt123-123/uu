// rea decompile_all
// name: FUN_100056728
// address: 0x100056728
// body: available
// range: 0x100056728-0x100056db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100056728(undefined8 *param_1,undefined8 *param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,long *param_7)

{
  ulong uVar1;
  undefined *puVar2;
  char cVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long unaff_x21;
  ulong *puVar15;
  long lVar16;
  undefined *local_198;
  undefined *puStack_190;
  undefined *local_188;
  ulong *local_150;
  ulong *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  uStack_98 = param_2[0x11];
  local_a0 = param_2[0x10];
  uStack_88 = param_2[0x13];
  uStack_90 = param_2[0x12];
  uVar12 = 0x6e6f6974706f;
  local_80 = param_2[0x14];
  uStack_d8 = param_2[9];
  local_e0 = param_2[8];
  uStack_c8 = param_2[0xb];
  uStack_d0 = param_2[10];
  uStack_b8 = param_2[0xd];
  local_c0 = param_2[0xc];
  uStack_a8 = param_2[0xf];
  uStack_b0 = param_2[0xe];
  uStack_118 = param_2[1];
  local_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  uStack_f8 = param_2[5];
  local_100 = (undefined *)param_2[4];
  uStack_e8 = param_2[7];
  uStack_f0 = param_2[6];
  cVar3 = (char)local_120;
  if ((char)local_120 == '\0') {
    puVar9 = param_3;
    _swift_bridgeObjectRelease(0xea00000000006c61,param_3,0x6e6f697469736f70);
LAB_100056830:
    uVar12 = *param_3 & 0xffffffffffff;
    if ((param_3[1] & 0x2000000000000000) != 0) {
      uVar12 = param_3[1] >> 0x38 & 0xf;
    }
    if (uVar12 != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    if ((uStack_108 & 0x100) != 0) {
      *param_3 = 0x65672d20;
      param_3[1] = 0xe400000000000000;
      _swift_bridgeObjectRelease();
    }
  }
  else {
    if ((char)local_120 == '\x01') {
      puVar15 = (ulong *)0xe600000000000000;
    }
    else {
      puVar15 = (ulong *)0xe400000000000000;
      uVar12 = 0;
    }
    puVar9 = puVar15;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(puVar15);
    if ((uVar12 & 1) != 0) goto LAB_100056830;
  }
  local_140 = param_4;
  uStack_138 = param_5;
  if (cVar3 == '\0') {
    _swift_bridgeObjectRetain(param_5);
    puVar15 = (ulong *)0xea00000000006c61;
    _swift_bridgeObjectRelease();
  }
  else {
    uVar12 = 0x6e6f6974706f;
    if (cVar3 != '\x01') {
      uVar12 = 0x67616c66;
    }
    puVar15 = (ulong *)0xe600000000000000;
    if (cVar3 != '\x01') {
      puVar15 = (ulong *)0xe400000000000000;
    }
    puVar9 = puVar15;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar12,puVar15,0x6e6f697469736f70,0xea00000000006c61,0);
    _swift_bridgeObjectRetain(param_5);
    _swift_bridgeObjectRelease();
    if ((uVar12 & 1) == 0) {
      FUN_100054bc8();
      local_150 = puVar15;
      puStack_148 = puVar9;
      __sSS6appendyySSF(0x2220,0xe200000000000000);
      puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
      puVar13 = (undefined *)*param_6;
      local_188 = PTR___swiftEmptyArrayStorage_1000f0740;
      if (puVar13 != (undefined *)0x0) {
        local_188 = puVar13;
      }
      puVar7 = &DAT_100103f18;
      FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
      _swift_initStackObject();
      uStack_128 = param_6[3];
      local_130 = param_6[2];
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined8 *)(puVar7 + 0x28) = uStack_128;
      *(undefined8 *)(puVar7 + 0x20) = local_130;
      _swift_bridgeObjectRetain(puVar13);
      FUN_10000eb58(&local_130,&local_198);
      FUN_10006d548(puVar7);
      puVar7 = local_188;
      local_198 = local_188;
      puVar13 = &DAT_100103ed8;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar5 = puVar13;
      FUN_100052ab4();
      uVar6 = 0x20;
      uVar10 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar13,puVar5);
      _swift_bridgeObjectRelease(puVar7);
      __sSS6appendyySSF(uVar6,uVar10);
      _swift_bridgeObjectRelease(uVar10);
      __sSS6appendyySSF(0x22,0xe100000000000000);
      puVar7 = local_100;
      puVar14 = puVar11;
      if ((uStack_108 & 0x100) == 0) {
        if (local_100 != (undefined *)0x0) {
          _swift_bridgeObjectRetain(local_100);
          puVar14 = puVar7;
          goto LAB_1000569fc;
        }
        lVar16 = *(long *)(PTR___swiftEmptyArrayStorage_1000f0740 + 0x10);
        puVar14 = PTR___swiftEmptyArrayStorage_1000f0740;
        if (lVar16 == 0) goto LAB_100056c5c;
LAB_100056a04:
        local_188 = puVar11;
        FUN_1000798d0(0,lVar16,0);
        puVar8 = (undefined8 *)(puVar14 + 0x30);
        do {
          puVar11 = local_188;
          uVar6 = puVar8[-1];
          uVar10 = *puVar8;
          local_198 = (undefined *)0x20;
          puStack_190 = (undefined *)0xe100000000000000;
          _swift_bridgeObjectRetain(uVar10);
          __sSS6appendyySSF(uVar6,uVar10);
          _swift_bridgeObjectRelease(uVar10);
          puVar2 = puStack_190;
          puVar7 = local_198;
          uVar12 = *(ulong *)(puVar11 + 0x10);
          local_188 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar12) {
            FUN_1000798d0(1 < *(ulong *)(puVar11 + 0x18),uVar12 + 1,1);
          }
          puVar11 = local_188;
          *(ulong *)(local_188 + 0x10) = uVar12 + 1;
          *(undefined **)(local_188 + uVar12 * 0x10 + 0x20) = puVar7;
          *(undefined **)(local_188 + uVar12 * 0x10 + 0x28) = puVar2;
          puVar8 = puVar8 + 3;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        _swift_bridgeObjectRelease(puVar14);
      }
      else {
LAB_1000569fc:
        lVar16 = *(long *)(puVar14 + 0x10);
        if (lVar16 != 0) goto LAB_100056a04;
LAB_100056c5c:
        _swift_bridgeObjectRelease(puVar14);
      }
      local_198 = puVar11;
      _swift_bridgeObjectRetain(puVar11);
      FUN_1000578dc(&local_198);
      if (unaff_x21 != 0) {
        _swift_errorRelease(unaff_x21);
        _swift_release(local_198);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100056db4);
        (*pcVar4)();
      }
      _swift_bridgeObjectRelease(puVar11);
      puVar7 = local_198;
      uVar6 = 0;
      puVar11 = (undefined *)0xe000000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar13,puVar5);
      _swift_release(puVar7);
      __sSS6appendyySSF(uVar6,puVar11);
      goto LAB_100056cd0;
    }
  }
  FUN_100054c98();
  local_150 = puVar15;
  puStack_148 = puVar9;
  __sSS6appendyySSF(0x2220,0xe200000000000000);
  puVar11 = (undefined *)*param_6;
  local_188 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (puVar11 != (undefined *)0x0) {
    local_188 = puVar11;
  }
  puVar13 = &DAT_100103f18;
  FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
  _swift_initStackObject();
  uStack_128 = param_6[3];
  local_130 = param_6[2];
  *(undefined8 *)(puVar13 + 0x18) = 2;
  *(undefined8 *)(puVar13 + 0x10) = 1;
  *(undefined8 *)(puVar13 + 0x28) = uStack_128;
  *(undefined8 *)(puVar13 + 0x20) = local_130;
  _swift_bridgeObjectRetain(puVar11);
  FUN_10000eb58(&local_130,&local_198);
  FUN_10006d548(puVar13);
  puVar13 = local_188;
  local_198 = local_188;
  puVar11 = &DAT_100103ed8;
  FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
  puVar7 = puVar11;
  FUN_100052ab4();
  uVar6 = 0x20;
  uVar10 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar11,puVar7);
  _swift_bridgeObjectRelease(puVar13);
  __sSS6appendyySSF(uVar6,uVar10);
  _swift_bridgeObjectRelease(uVar10);
  __sSS6appendyySSF(0x2022,0xe200000000000000);
  puVar11 = (undefined *)(*param_7 + 1);
  if (SCARRY8(*param_7,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100056da0);
    (*pcVar4)();
  }
  *param_7 = (long)puVar11;
  puVar13 = PTR___sSiN_1000f03e8;
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_1000f0418;
  local_188 = puVar11;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  uVar12 = *param_3;
  uVar1 = param_3[1];
  local_198 = puVar13;
  puStack_190 = puVar7;
  _swift_bridgeObjectRetain(uVar1);
  __sSS6appendyySSF(uVar12,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  puVar11 = puStack_190;
  __sSS6appendyySSF(local_198,puStack_190);
LAB_100056cd0:
  _swift_bridgeObjectRelease(puVar11);
  puVar9 = puStack_148;
  __sSS6appendyySSF(local_150,puStack_148);
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x2027,0xe200000000000000);
  puVar8 = &local_120;
  FUN_100056db4();
  puVar11 = &DAT_100103ed8;
  local_150 = puVar8;
  FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
  puVar13 = puVar11;
  FUN_100052ab4();
  uVar6 = 0x20;
  uVar10 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar11,puVar13);
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(uVar6,uVar10);
  _swift_bridgeObjectRelease(uVar10);
  *param_1 = local_140;
  param_1[1] = uStack_138;
  return;
}

