// rea decompile_all
// name: FUN_10009c974
// address: 0x10009c974
// body: available
// range: 0x10009c974-0x10009cee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10009c974(undefined *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined1 auStack_140 [16];
  undefined *local_130;
  ulong uStack_128;
  undefined *local_120;
  ulong uStack_118;
  undefined *local_110;
  ulong uStack_108;
  undefined *local_100;
  ulong local_f8;
  uint local_ec;
  undefined8 local_e8;
  char *local_e0;
  char *pcStack_d8;
  undefined *local_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined *local_78;
  undefined *local_70;
  
  local_e8 = param_4;
  if (*(long *)(param_3 + 0x10) == 0) {
LAB_10009ca74:
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_110 = param_1;
    uStack_108 = param_2;
    FUN_1003fb4bc(FUN_10009ff4c,&local_120,0xd000000000000093,0x800000010087fc10,0xd000000000000035,
                  0x8000000100880060,0xd4,0);
    local_100 = (undefined *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    puVar6 = param_1;
    uVar11 = param_2;
    FUN_1001a2c70();
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_3);
      goto LAB_10009ca74;
    }
    puVar1 = (ulong *)(*(long *)(param_3 + 0x38) + (long)puVar6 * 0x10);
    puVar6 = (undefined *)*puVar1;
    uVar11 = puVar1[1];
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRelease(param_3);
    local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_100 = puVar6;
    if (uVar11 != 0) {
      uVar12 = (ulong)puVar6 & 0xffffffffffff;
      if ((uVar11 & 0x2000000000000000) != 0) {
        uVar12 = uVar11 >> 0x38 & 0xf;
      }
      local_f8 = uVar11;
      if (uVar12 == 0) {
        local_ec = 0;
      }
      else {
        _swift_bridgeObjectRetain(uVar11);
        puVar6 = (undefined *)0x0;
        FUN_100033898(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
        uVar11 = *(ulong *)(puVar6 + 0x10);
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          FUN_100033898(puVar6,uVar11 + 1,1);
        }
        local_ec = 0;
        *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
        *(undefined **)(puVar6 + uVar11 * 0x10 + 0x20) = local_100;
        *(ulong *)(puVar6 + uVar11 * 0x10 + 0x28) = local_f8;
        local_70 = puVar6;
      }
      goto LAB_10009caf8;
    }
  }
  local_f8 = 0;
  local_ec = 1;
  local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_10009caf8:
  local_d0 = param_1;
  uStack_c8 = param_2;
  FUN_10009c2e4(param_1,param_2);
  FUN_10005f920();
  puVar6 = local_70;
  local_78 = PTR___swiftEmptySetSingleton_100995eb0;
  uVar11 = *(ulong *)(local_70 + 0x10);
  local_e0 = "rver11LogUploader";
  pcStack_d8 = " from server bundle id: ";
  if (uVar11 == 0) {
    _swift_bridgeObjectRelease(local_70);
    _swift_bridgeObjectRelease(local_f8);
    puVar6 = PTR___swiftEmptySetSingleton_100995eb0;
  }
  else {
    uVar12 = 0;
    do {
      puVar13 = local_78;
      if (*(ulong *)(puVar6 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10009cecc);
        (*pcVar5)();
      }
      puVar2 = *(undefined **)(puVar6 + uVar12 * 0x10 + 0x20);
      uVar3 = *(ulong *)((long)(puVar6 + uVar12 * 0x10 + 0x20) + 8);
      if (*(long *)(local_78 + 0x10) == 0) {
        _swift_bridgeObjectRetain(uVar3);
      }
      else {
        __ss6HasherV5_seedABSi_tcfC(auStack_c0,*(undefined8 *)(local_78 + 0x28));
        _swift_bridgeObjectRetain(uVar3);
        puVar7 = auStack_c0;
        __sSS4hash4intoys6HasherVz_tF(puVar7,puVar2,uVar3);
        __ss6HasherV9_finalizeSiyF();
        uVar10 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
        uVar14 = (ulong)puVar7 & (uVar10 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar13 + (uVar14 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar14 & 0x3f) & 1)
            != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(puVar13 + 0x30) + uVar14 * 0x10);
            puVar8 = (undefined *)*puVar1;
            uVar4 = puVar1[1];
            if ((puVar8 == puVar2 && uVar4 == uVar3) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (puVar8,uVar4,puVar2,uVar3,0), ((ulong)puVar8 & 1) != 0)) {
              _swift_bridgeObjectRelease(uVar3);
              goto LAB_10009cb74;
            }
            uVar14 = uVar14 + 1 & ~uVar10;
          } while ((*(ulong *)(puVar13 + (uVar14 >> 3 & 0xffffffffffffff8) + 0x38) >>
                    (uVar14 & 0x3f) & 1) != 0);
        }
      }
      _swift_bridgeObjectRetain(uVar3);
      FUN_10006d958(auStack_c0,puVar2,uVar3);
      _swift_bridgeObjectRelease(local_b8);
      if ((local_ec & 1) == 0) {
        if ((local_100 == puVar2) && (local_f8 == uVar3)) {
          puVar13 = (undefined *)0x1;
        }
        else {
          puVar13 = local_100;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (local_100,local_f8,puVar2,uVar3,0);
        }
      }
      else {
        puVar13 = (undefined *)0x0;
      }
      FUN_100401b14(0);
      puVar8 = puVar2;
      FUN_10009a3a0(puVar2,uVar3,local_e8,0,0);
      if (*(long *)(puVar8 + 0x10) != 0) {
        _swift_bridgeObjectRelease(puVar6);
        _swift_bridgeObjectRelease(local_f8);
        _swift_bridgeObjectRelease(local_78);
        if (((ulong)puVar13 & 1) == 0) {
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_130 = local_d0;
          uStack_128 = uStack_c8;
          local_120 = puVar2;
          uStack_118 = uVar3;
          local_110 = puVar8;
          FUN_1003fb48c(FUN_10009ff5c,auStack_140,0xd000000000000093,
                        (ulong)local_e0 | 0x8000000000000000,0xd000000000000035,
                        (ulong)pcStack_d8 | 0x8000000000000000,0xeb,0);
          _swift_bridgeObjectRelease(uVar3);
          return puVar8;
        }
        _swift_bridgeObjectRelease(uVar3);
        return puVar8;
      }
      _swift_bridgeObjectRelease(puVar8);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_120 = local_d0;
      uStack_118 = uStack_c8;
      if (((ulong)puVar13 & 1) == 0) {
        pcVar5 = FUN_10009ff6c;
        uVar9 = 0xe6;
      }
      else {
        pcVar5 = FUN_10009ff78;
        uVar9 = 0xe4;
      }
      local_110 = puVar2;
      uStack_108 = uVar3;
      FUN_1003fb4bc(pcVar5,&local_130,0xd000000000000093,(ulong)local_e0 | 0x8000000000000000,
                    0xd000000000000035,(ulong)pcStack_d8 | 0x8000000000000000,uVar9,0);
      _swift_bridgeObjectRelease(uVar3);
LAB_10009cb74:
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar11);
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(local_f8);
    puVar6 = local_78;
  }
  _swift_bridgeObjectRelease(puVar6);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_110 = local_d0;
  uStack_108 = uStack_c8;
  FUN_1003fb4bc(FUN_10009ff54,&local_120,0xd000000000000093,(ulong)local_e0 | 0x8000000000000000,
                0xd000000000000035,(ulong)pcStack_d8 | 0x8000000000000000,0xf0,0);
  return PTR___swiftEmptyArrayStorage_100995ea0;
}

