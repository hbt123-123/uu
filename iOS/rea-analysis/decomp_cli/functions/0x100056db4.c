// rea decompile_all
// name: FUN_100056db4
// address: 0x100056db4
// body: available
// range: 0x100056db4-0x1000578db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100056db4(byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 unaff_x20;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 local_b0;
  undefined8 local_a8;
  
  puVar4 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar14 = *(long *)(param_1 + 0x20);
  puVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
  if ((lVar14 != 0) && (lVar16 = *(long *)(lVar14 + 0x10), lVar16 != 0)) {
    FUN_1000798d0(0,lVar16,0);
    puVar18 = (undefined8 *)(lVar14 + 0x30);
    do {
      uVar11 = puVar18[-1];
      uVar12 = *puVar18;
      if (*(char *)(puVar18 + -2) == '\0') {
        uVar8 = 0x27206c2d;
      }
      else if (*(char *)(puVar18 + -2) == '\x01') {
        uVar8 = 0x2720732d;
      }
      else {
        uVar8 = 0x27206f2d;
      }
      _swift_bridgeObjectRetain(uVar12);
      FUN_100056678(1,uVar11,uVar12);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar11);
      __sSS6appendyySSF(0x27,0xe100000000000000);
      _swift_bridgeObjectRelease(uVar12);
      uVar15 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar15) {
        FUN_1000798d0(1 < *(ulong *)(puVar4 + 0x18),uVar15 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar15 + 1;
      *(undefined8 *)(puVar4 + uVar15 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar15 * 0x10 + 0x28) = 0xe400000000000000;
      puVar18 = puVar18 + 3;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    FUN_10006d548(puVar4);
    puVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
    uVar15 = *(ulong *)(param_1 + 0x90);
    if (uVar15 != 0) {
      uVar17 = *(ulong *)(param_1 + 0x88);
      uVar1 = uVar17 & 0xffffffffffff;
      if ((uVar15 & 0x2000000000000000) != 0) {
        uVar1 = uVar15 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        puVar6 = &DAT_100103f18;
        FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
        _swift_initStackObject();
        *(undefined8 *)(puVar6 + 0x18) = 2;
        *(undefined8 *)(puVar6 + 0x10) = 1;
        FUN_100056678(1,uVar17,uVar15);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar17);
        __sSS6appendyySSF(0x27,0xe100000000000000);
        *(undefined8 *)(puVar6 + 0x20) = 0x2720642d;
        *(undefined8 *)(puVar6 + 0x28) = 0xe400000000000000;
        FUN_10006d548(puVar6);
      }
    }
  }
  bVar2 = *param_1;
  if (bVar2 == 0) {
    _swift_bridgeObjectRelease(0xea00000000006c61);
    uVar11 = 0;
    uVar12 = 0xe000000000000000;
  }
  else {
    uVar15 = 0x6e6f6974706f;
    if (bVar2 != 1) {
      uVar15 = 0x67616c66;
    }
    uVar11 = 0xe600000000000000;
    if (bVar2 != 1) {
      uVar11 = 0xe400000000000000;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar15,uVar11,0x6e6f697469736f70,0xea00000000006c61,0);
    _swift_bridgeObjectRelease(uVar11);
    bVar5 = (uVar15 & 1) == 0;
    uVar11 = 0;
    if (bVar5) {
      uVar11 = 0x72;
    }
    uVar12 = 0xe000000000000000;
    if (bVar5) {
      uVar12 = 0xe100000000000000;
    }
  }
  lVar14 = *(long *)(param_1 + 0x70);
  bVar3 = param_1[0x80];
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      puVar6 = &DAT_100103f18;
      FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
      _swift_initStackObject();
      *(undefined8 *)(puVar6 + 0x18) = 2;
      *(undefined8 *)(puVar6 + 0x10) = 1;
      __sSS6appendyySSF(uVar11,uVar12);
      _swift_bridgeObjectRelease(uVar12);
      __sSS6appendyySSF(0x2720616b66,0xe500000000000000);
      puVar7 = &DAT_100103ed8;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar9 = puVar7;
      FUN_100052ab4();
      uVar11 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar7,puVar9);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar11);
      uVar11 = 0x27;
    }
    else {
      lVar16 = *(long *)(lVar14 + 0x10);
      puVar6 = &DAT_100103f18;
      FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
      if (lVar16 == 1) {
        _swift_initStackObject();
        *(undefined8 *)(puVar6 + 0x18) = 2;
        *(undefined8 *)(puVar6 + 0x10) = 1;
        __ss11_StringGutsV4growyySiF(0x99);
        local_b0 = 0;
        local_a8 = 0xe000000000000000;
        __sSS6appendyySSF(0x2d,0xe100000000000000);
        __sSS6appendyySSF(uVar11,uVar12);
        _swift_bridgeObjectRelease(uVar12);
        __sSS6appendyySSF(0xd00000000000004b,0x80000001000c9b60);
        FUN_1000798d0(0,1,0);
        uVar11 = *(undefined8 *)(lVar14 + 0x20);
        uVar12 = *(undefined8 *)(lVar14 + 0x28);
        _swift_bridgeObjectRetain(uVar12);
        uVar8 = 2;
        FUN_100056678(2,uVar11,uVar12);
        _swift_bridgeObjectRelease(uVar12);
        uVar15 = *(ulong *)(puVar7 + 0x10);
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar15) {
          FUN_1000798d0(1 < *(ulong *)(puVar7 + 0x18),uVar15 + 1,1);
        }
        *(ulong *)(puVar7 + 0x10) = uVar15 + 1;
        *(undefined8 *)(puVar7 + uVar15 * 0x10 + 0x20) = uVar8;
        *(undefined8 *)(puVar7 + uVar15 * 0x10 + 0x28) = uVar11;
        puVar9 = &DAT_100103ed8;
        FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
        puVar10 = puVar9;
        FUN_100052ab4();
        uVar11 = 0;
        uVar12 = 0xe000000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar9,puVar10);
        _swift_release(puVar7);
        __sSS6appendyySSF(uVar11,uVar12);
        _swift_bridgeObjectRelease(uVar12);
        uVar11 = 0xd000000000000049;
        uVar12 = 0x80000001000c9bb0;
        goto LAB_1000573ec;
      }
      if (lVar16 != 0) {
        _swift_initStackObject();
        *(undefined8 *)(puVar6 + 0x18) = 2;
        *(undefined8 *)(puVar6 + 0x10) = 1;
        __ss11_StringGutsV4growyySiF(0xa9);
        __sSS6appendyySSF(0x2d,0xe100000000000000);
        __sSS6appendyySSF(uVar11,uVar12);
        _swift_bridgeObjectRelease(uVar12);
        __sSS6appendyySSF(0xd000000000000011,0x80000001000c9aa0);
        FUN_1000798d0(0,lVar16,0);
        puVar18 = (undefined8 *)(lVar14 + 0x28);
        do {
          uVar11 = puVar18[-1];
          uVar12 = *puVar18;
          _swift_bridgeObjectRetain(uVar12);
          FUN_100056678(2,uVar11,uVar12);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar11);
          __sSS6appendyySSF(0x275c,0xe200000000000000);
          _swift_bridgeObjectRelease(uVar12);
          uVar15 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar15) {
            FUN_1000798d0(1 < *(ulong *)(puVar7 + 0x18),uVar15 + 1,1);
          }
          *(ulong *)(puVar7 + 0x10) = uVar15 + 1;
          *(undefined8 *)(puVar7 + uVar15 * 0x10 + 0x20) = 0x275c;
          *(undefined8 *)(puVar7 + uVar15 * 0x10 + 0x28) = 0xe200000000000000;
          puVar18 = puVar18 + 2;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        puVar9 = &DAT_100103ed8;
        FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
        puVar10 = puVar9;
        FUN_100052ab4();
        uVar11 = 0x20;
        uVar12 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar9,puVar10);
        _swift_release(puVar7);
        __sSS6appendyySSF(uVar11,uVar12);
        _swift_bridgeObjectRelease(uVar12);
        __sSS6appendyySSF(0xd000000000000093,0x80000001000c9ac0);
        *(undefined8 *)(puVar6 + 0x20) = 0;
        *(undefined8 *)(puVar6 + 0x28) = 0xe000000000000000;
        goto LAB_100057400;
      }
      _swift_initStackObject();
      *(undefined8 *)(puVar6 + 0x18) = 2;
      *(undefined8 *)(puVar6 + 0x10) = 1;
      __sSS6appendyySSF(uVar11,uVar12);
      _swift_bridgeObjectRelease(uVar12);
      uVar11 = 0x46;
    }
    local_a8 = 0xe100000000000000;
    local_b0 = 0x2d;
    uVar12 = 0xe100000000000000;
  }
  else {
    lVar16 = *(long *)(param_1 + 0x78);
    if (bVar3 == 2) {
      puVar6 = &DAT_100103f18;
      FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
      _swift_initStackObject();
      *(undefined8 *)(puVar6 + 0x18) = 2;
      *(undefined8 *)(puVar6 + 0x10) = 1;
      local_b0 = 0x2d;
      local_a8 = 0xe100000000000000;
      __sSS6appendyySSF(uVar11,uVar12);
      _swift_bridgeObjectRelease(uVar12);
      __sSS6appendyySSF(0x282720616b66,0xe600000000000000);
      FUN_100056678(1,lVar14,lVar16);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(lVar14);
      uVar11 = 0x2729;
      uVar12 = 0xe200000000000000;
    }
    else {
      if (bVar3 == 3) {
        lVar13 = lVar16 + -1 + (ulong)(lVar14 != 0);
        puVar6 = &DAT_100103f18;
        if (lVar13 != 0 || CARRY8(lVar13 - 1,(ulong)(1 < lVar14 - 1U))) {
          if (lVar14 == 0 && lVar16 == 0) {
            FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
            _swift_initStackObject();
            *(undefined8 *)(puVar6 + 0x18) = 2;
            *(undefined8 *)(puVar6 + 0x10) = 1;
            __sSS6appendyySSF(uVar11,uVar12);
            _swift_bridgeObjectRelease(uVar12);
            uVar11 = 0xe500000000000000;
            __sSS6appendyySSF(0x2827206166,0xe500000000000000);
            FUN_10005556c();
            __sSS6appendyySSF();
            _swift_bridgeObjectRelease(uVar11);
            __sSS6appendyySSF(0x2729,0xe200000000000000);
            *(undefined8 *)(puVar6 + 0x20) = 0x2d;
            *(undefined8 *)(puVar6 + 0x28) = 0xe100000000000000;
            goto LAB_100057400;
          }
          FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
          _swift_initStackObject();
          *(undefined8 *)(puVar6 + 0x18) = 2;
          *(undefined8 *)(puVar6 + 0x10) = 1;
          __ss11_StringGutsV4growyySiF(0x10);
          _swift_bridgeObjectRelease(0xe000000000000000);
          __sSS6appendyySSF(uVar11,uVar12);
          _swift_bridgeObjectRelease(uVar12);
          uVar11 = 0xe600000000000000;
          __sSS6appendyySSF(0x282720616b66,0xe600000000000000);
          FUN_10005563c();
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar11);
          uVar11 = 0xe100000000000000;
          __sSS6appendyySSF(0x20,0xe100000000000000);
          FUN_100052f74(unaff_x20);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar11);
          uVar11 = 0x2729;
          uVar12 = 0xe200000000000000;
        }
        else {
          FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
          _swift_initStackObject();
          *(undefined8 *)(puVar6 + 0x18) = 2;
          *(undefined8 *)(puVar6 + 0x10) = 1;
          __ss11_StringGutsV4growyySiF(0x2a);
          _swift_bridgeObjectRelease(0xe000000000000000);
          __sSS6appendyySSF(uVar11,uVar12);
          _swift_bridgeObjectRelease(uVar12);
          uVar11 = 0xe600000000000000;
          __sSS6appendyySSF(0x282720616b66,0xe600000000000000);
          FUN_10005563c();
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar11);
          uVar11 = 0xe100000000000000;
          __sSS6appendyySSF(0x20,0xe100000000000000);
          FUN_100052f74(unaff_x20);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar11);
          __sSS6appendyySSF(0x20746e756f632820,0xe900000000000028);
          uVar11 = 0xe700000000000000;
          FUN_100054d68(0x736e656b6f745f,0xe700000000000000);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar11);
          __sSS6appendyySSF(0x2820292963702d20,0xe800000000000000);
          uVar11 = 0xe700000000000000;
          FUN_100054d68(0x736e656b6f745f,0xe700000000000000);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar11);
          uVar11 = 0x27292943742d20;
          uVar12 = 0xe700000000000000;
        }
        __sSS6appendyySSF(uVar11,uVar12);
        *(undefined8 *)(puVar6 + 0x20) = 0x2d;
        *(undefined8 *)(puVar6 + 0x28) = 0xe100000000000000;
        goto LAB_100057400;
      }
      if (1 < bVar2) {
        _swift_bridgeObjectRelease(uVar12);
        return puVar4;
      }
      puVar6 = &DAT_100103f18;
      FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
      _swift_initStackObject();
      *(undefined8 *)(puVar6 + 0x18) = 2;
      *(undefined8 *)(puVar6 + 0x10) = 1;
      local_b0 = 0x2d;
      local_a8 = 0xe100000000000000;
      __sSS6appendyySSF(uVar11,uVar12);
      _swift_bridgeObjectRelease(uVar12);
      uVar11 = 0x272720616b66;
      uVar12 = 0xe600000000000000;
    }
  }
LAB_1000573ec:
  __sSS6appendyySSF(uVar11,uVar12);
  *(undefined8 *)(puVar6 + 0x20) = local_b0;
  *(undefined8 *)(puVar6 + 0x28) = local_a8;
LAB_100057400:
  FUN_10006d548(puVar6);
  return puVar4;
}

