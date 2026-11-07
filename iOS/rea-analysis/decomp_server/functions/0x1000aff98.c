// rea decompile_all
// name: FUN_1000aff98
// address: 0x1000aff98
// body: available
// range: 0x1000aff98-0x1000b0437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000b016c) */

undefined8 * FUN_1000aff98(undefined1 *param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long extraout_x8;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long local_310;
  ulong local_308;
  undefined8 *local_300;
  undefined4 local_2f4;
  undefined1 *local_2f0;
  ulong local_2e8;
  long local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2a8 [72];
  undefined1 auStack_260 [56];
  undefined1 auStack_228 [152];
  undefined1 auStack_190 [56];
  undefined1 auStack_158 [56];
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [56];
  undefined8 *local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 local_81;
  undefined3 uStack_80;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar15 = (long)&local_310 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100a76d38;
  FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
  local_2d0 = puVar7;
  _swift_initStackObject();
  uStack_2b8 = 2;
  local_2c0 = 1;
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  *(undefined **)(puVar7 + 0x38) = PTR___sSSN_1009957f8;
  *(undefined ***)(puVar7 + 0x40) = &PTR_PTR_1009e61c8;
  puVar12 = (undefined8 *)(puVar7 + 0x20);
  *puVar12 = 0x656b5f7475706e69;
  *(undefined8 *)(puVar7 + 0x28) = 0xea00000000007379;
  thunk_FUN_10068573c(auStack_190);
  _swift_setDeallocating(puVar7);
  uVar11 = *(ulong *)(puVar7 + 0x10);
  puVar7 = &DAT_100a76d40;
  FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
  local_2d8 = puVar7;
  _swift_arrayDestroy();
  FUN_100687bd8();
  FUN_1000abcec(auStack_190);
  uVar2 = (ulong)puVar12 & 0xffffffffffff;
  if ((uVar11 & 0x2000000000000000) != 0) {
    uVar2 = uVar11 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    uVar2 = uVar11;
    local_b0 = puVar12;
    uStack_a8 = uVar11;
    _swift_bridgeObjectRetain(uVar11);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar15);
    FUN_10009ff0c();
    uVar9 = 0;
    lVar3 = lVar15;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (lVar15,0,PTR___sSSN_1009957f8,uVar2);
    (**(code **)(lVar13 + 8))(lVar15,lVar1);
    _swift_bridgeObjectRelease(uVar11);
    if (uVar9 >> 0x3c < 0xf) {
      FUN_100008184(lVar3,uVar9);
      lVar1 = lVar3;
      FUN_10067eda8(auStack_158,lVar3,uVar9,0);
      local_2e8 = uVar9;
      FUN_100686eb4();
      if (lVar1 == 0) {
        FUN_1000abcec(param_1);
        puVar8 = auStack_158;
      }
      else {
        local_2f0 = param_1;
        lVar13 = *(long *)(lVar1 + 0x10);
        if (lVar13 != 0) {
          local_310 = lVar3;
          local_308 = uVar11;
          local_300 = puVar12;
          local_2f4 = param_2;
          lVar15 = 0x20;
          local_2e0 = lVar1;
          puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
          do {
            puVar6 = local_2d0;
            puVar12 = (undefined8 *)(local_2e0 + lVar15);
            uStack_a8 = puVar12[1];
            local_b0 = (undefined8 *)*puVar12;
            uStack_98 = puVar12[3];
            local_a0 = puVar12[2];
            uStack_90 = puVar12[4];
            uStack_88 = (undefined7)puVar12[5];
            uStack_80 = (undefined3)((uint)*(undefined4 *)((long)puVar12 + 0x2f) >> 8);
            local_81 = (undefined1)((ulong)puVar12[5] >> 0x38);
            puVar4 = local_2d0;
            _swift_initStackObject(local_2d0,auStack_228);
            *(undefined8 *)(puVar4 + 0x18) = uStack_2b8;
            *(undefined8 *)(puVar4 + 0x10) = local_2c0;
            *(undefined **)(puVar4 + 0x38) = PTR___sSSN_1009957f8;
            *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_1009e61c8;
            puVar12 = (undefined8 *)(puVar4 + 0x20);
            *puVar12 = 0x65645f7475706e69;
            *(undefined8 *)(puVar4 + 0x28) = 0xec00000065636976;
            FUN_1000b049c(&local_b0,auStack_260);
            thunk_FUN_10068573c(auStack_120,puVar4);
            _swift_setDeallocating(puVar4);
            puVar5 = local_2d8;
            uVar10 = *(undefined8 *)(puVar4 + 0x10);
            _swift_arrayDestroy(puVar12,uVar10,local_2d8);
            FUN_100687bd8();
            local_2c8 = uVar10;
            FUN_1000abcec(auStack_120);
            _swift_initStackObject(puVar6,auStack_2a8);
            *(undefined8 *)(puVar6 + 0x18) = uStack_2b8;
            *(undefined8 *)(puVar6 + 0x10) = local_2c0;
            *(undefined **)(puVar6 + 0x38) = PTR___sSSN_1009957f8;
            *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_1009e61c8;
            puVar14 = (undefined8 *)(puVar6 + 0x20);
            *puVar14 = 0x6f635f7475706e69;
            *(undefined8 *)(puVar6 + 0x28) = 0xea00000000006564;
            thunk_FUN_10068573c(auStack_e8);
            _swift_setDeallocating(puVar6);
            _swift_arrayDestroy(puVar14,*(undefined8 *)(puVar6 + 0x10),puVar5);
            FUN_100689480();
            FUN_1000abcec(auStack_e8);
            puVar5 = puVar7;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar6 = puVar7;
            if (((ulong)puVar5 & 1) == 0) {
              puVar6 = (undefined *)0x0;
              FUN_100035150(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
            }
            uVar2 = *(ulong *)(puVar6 + 0x10);
            puVar7 = puVar6;
            if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
              puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
              FUN_100035150(puVar7,uVar2 + 1,1,puVar6);
            }
            *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
            *(undefined8 **)(puVar7 + uVar2 * 0x18 + 0x20) = puVar12;
            *(undefined8 *)(puVar7 + uVar2 * 0x18 + 0x28) = local_2c8;
            *(undefined8 **)(puVar7 + uVar2 * 0x18 + 0x30) = puVar14;
            FUN_1000abcec(&local_b0);
            lVar1 = local_2e0;
            lVar15 = lVar15 + 0x38;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          FUN_1000abcec(auStack_158);
          _swift_bridgeObjectRelease(lVar1);
          FUN_1000abcec(local_2f0);
          FUN_100006cc8(local_310,local_2e8);
          return local_300;
        }
        FUN_1000abcec(auStack_158);
        _swift_bridgeObjectRelease(lVar1);
        puVar8 = local_2f0;
      }
      FUN_1000abcec(puVar8);
      FUN_100006cc8(lVar3,local_2e8);
      return puVar12;
    }
  }
  FUN_1000abcec(param_1);
  return puVar12;
}

