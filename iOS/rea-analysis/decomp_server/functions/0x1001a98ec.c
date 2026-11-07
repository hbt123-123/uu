// rea decompile_all
// name: FUN_1001a98ec
// address: 0x1001a98ec
// body: available
// range: 0x1001a98ec-0x1001a9e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001a99e8) */

undefined * FUN_1001a98ec(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  ulong local_280;
  long local_278;
  long local_270;
  undefined *local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  long local_250;
  undefined1 auStack_248 [72];
  undefined1 auStack_200 [136];
  undefined1 auStack_178 [56];
  undefined1 auStack_140 [16];
  ulong local_130;
  long lStack_128;
  char local_10f;
  undefined1 auStack_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  char local_d7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  long lStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined7 uStack_88;
  undefined1 local_81;
  undefined3 uStack_80;
  
  lVar2 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar11 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&local_280 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar8 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar8 = param_2 >> 0x38 & 0xf;
  }
  local_268 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar8 != 0) {
    local_b0 = param_1;
    uStack_a8 = param_2;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar10);
    FUN_10009ff0c();
    uVar8 = 0;
    lVar4 = lVar10;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (lVar10,0,PTR___sSSN_1009957f8,lVar3);
    (**(code **)(lVar11 + 8))(lVar10,lVar2);
    local_268 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar8 >> 0x3c < 0xf) {
      FUN_100008184(lVar4,uVar8);
      lVar3 = lVar4;
      FUN_10067eda8(auStack_178,lVar4,uVar8,0);
      FUN_100686eb4();
      if (lVar3 == 0) {
        FUN_100006cc8(lVar4,uVar8);
        FUN_1000abcec(auStack_178);
        local_268 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      else {
        local_278 = lVar4;
        lVar2 = *(long *)(lVar3 + 0x10);
        if (lVar2 == 0) {
          FUN_1000abcec(auStack_178);
          _swift_bridgeObjectRelease(lVar3);
          FUN_100006cc8(local_278,uVar8);
          local_268 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
        else {
          local_280 = uVar8;
          local_268 = PTR___swiftEmptyArrayStorage_100995ea0;
          lVar10 = 0x20;
          uStack_258 = 2;
          local_260 = 1;
          local_270 = lVar3;
          puVar12 = PTR___sSSN_1009957f8;
          do {
            local_250 = lVar2;
            puVar1 = (ulong *)(lVar3 + lVar10);
            uStack_a8 = puVar1[1];
            local_b0 = *puVar1;
            uStack_98 = puVar1[3];
            local_a0 = puVar1[2];
            uStack_90 = puVar1[4];
            uStack_88 = (undefined7)puVar1[5];
            uStack_80 = (undefined3)((uint)*(undefined4 *)((long)puVar1 + 0x2f) >> 8);
            local_81 = (undefined1)(puVar1[5] >> 0x38);
            puVar5 = &DAT_100a76d38;
            FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
            puVar6 = puVar5;
            _swift_initStackObject();
            *(undefined8 *)(puVar6 + 0x18) = uStack_258;
            *(undefined8 *)(puVar6 + 0x10) = local_260;
            *(undefined **)(puVar6 + 0x38) = puVar12;
            *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_1009e61c8;
            *(undefined8 *)(puVar6 + 0x20) = 0x65707974;
            *(undefined8 *)(puVar6 + 0x28) = 0xe400000000000000;
            FUN_1000b049c(&local_b0,auStack_200);
            thunk_FUN_10068573c(auStack_140,puVar6);
            _swift_setDeallocating(puVar6);
            uVar9 = *(undefined8 *)(puVar6 + 0x10);
            puVar7 = &DAT_100a76d40;
            FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
            _swift_arrayDestroy(puVar6 + 0x20,uVar9,puVar7);
            lVar2 = lStack_128;
            uVar8 = local_130;
            if (local_10f == '\x01') {
              lStack_b8 = lStack_128;
              local_c0 = local_130;
              _swift_bridgeObjectRetain(lStack_128);
              FUN_1000abcec(auStack_140);
              _swift_initStackObject(puVar5,auStack_248);
              *(undefined8 *)(puVar5 + 0x18) = uStack_258;
              *(undefined8 *)(puVar5 + 0x10) = local_260;
              *(undefined **)(puVar5 + 0x38) = puVar12;
              *(undefined ***)(puVar5 + 0x40) = &PTR_PTR_1009e61c8;
              *(undefined8 *)(puVar5 + 0x20) = 0x65756c6176;
              *(undefined8 *)(puVar5 + 0x28) = 0xe500000000000000;
              thunk_FUN_10068573c(auStack_108);
              _swift_setDeallocating(puVar5);
              _swift_arrayDestroy(puVar5 + 0x20,*(undefined8 *)(puVar5 + 0x10),puVar7);
              if (local_d7 == '\x01') {
                uStack_c8 = uStack_f0;
                local_d0 = local_f8;
                _swift_bridgeObjectRetain(uStack_f0);
                FUN_1000abcec(auStack_108);
                if ((uVar8 == 0x6c6f6f62) && (lVar2 == -0x1c00000000000000)) {
                  FUN_1000a9ec8(&local_c0);
                }
                else {
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar8,lVar2,0x6c6f6f62,0xe400000000000000,0);
                  FUN_1000a9ec8(&local_c0);
                  lVar3 = local_270;
                  puVar12 = PTR___sSSN_1009957f8;
                  if ((uVar8 & 1) == 0) {
                    FUN_1000abcec(&local_b0);
                    FUN_1000a9ec8(&local_d0);
                    goto LAB_1001a9b14;
                  }
                }
                lVar3 = local_270;
                puVar12 = PTR___sSSN_1009957f8;
                puVar5 = local_268;
                _swift_isUniquelyReferenced_nonNull_native();
                puVar7 = local_268;
                if (((ulong)puVar5 & 1) == 0) {
                  puVar7 = (undefined *)0x0;
                  FUN_100033898(0,*(long *)(local_268 + 0x10) + 1,1);
                }
                uVar8 = *(ulong *)(puVar7 + 0x10);
                if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar8) {
                  puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
                  FUN_100033898(puVar7,uVar8 + 1,1);
                }
                *(ulong *)(puVar7 + 0x10) = uVar8 + 1;
                *(undefined8 *)(puVar7 + uVar8 * 0x10 + 0x28) = uStack_c8;
                *(undefined8 *)(puVar7 + uVar8 * 0x10 + 0x20) = local_d0;
                local_268 = puVar7;
                FUN_1000abcec(&local_b0);
              }
              else {
                FUN_1000abcec(auStack_108);
                FUN_1000abcec(&local_b0);
                FUN_1000a9ec8(&local_c0);
                lVar3 = local_270;
                puVar12 = PTR___sSSN_1009957f8;
              }
            }
            else {
              FUN_1000abcec(auStack_140);
              FUN_1000abcec(&local_b0);
            }
LAB_1001a9b14:
            lVar10 = lVar10 + 0x38;
            lVar2 = local_250 + -1;
          } while (lVar2 != 0);
          FUN_1000abcec(auStack_178);
          _swift_bridgeObjectRelease(lVar3);
          FUN_100006cc8(local_278,local_280);
        }
      }
    }
  }
  return local_268;
}

