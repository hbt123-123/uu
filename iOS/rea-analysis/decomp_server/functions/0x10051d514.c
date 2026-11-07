// rea decompile_all
// name: FUN_10051d514
// address: 0x10051d514
// body: available
// range: 0x10051d514-0x10051d7ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10051d514(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined *local_68;
  
  lVar5 = param_1;
  _swift_bridgeObjectRetain();
  FUN_10051f308();
  _swift_bridgeObjectRelease(param_1);
  local_68 = PTR___swiftEmptySetSingleton_100995eb0;
  lVar13 = *(long *)(param_4 + 0x10);
  if (lVar13 != 0) {
    lVar14 = 0;
    puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_10051d594:
    if (*(long *)(lVar5 + 0x10) != 0) {
      puVar1 = (ulong *)(param_4 + 0x20 + lVar14 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      __ss6HasherV5_seedABSi_tcfC(auStack_b0,*(undefined8 *)(lVar5 + 0x28));
      _swift_bridgeObjectRetain(uVar3);
      puVar6 = auStack_b0;
      __sSS4hash4intoys6HasherVz_tF(puVar6,uVar2,uVar3);
      __ss6HasherV9_finalizeSiyF();
      uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
      uVar12 = (ulong)puVar6 & (uVar11 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar5 + 0x38 + (uVar12 >> 3 & 0xffffffffffffff8)) >> (uVar12 & 0x3f) & 1) != 0
         ) {
        do {
          puVar1 = (ulong *)(*(long *)(lVar5 + 0x30) + uVar12 * 0x10);
          uVar7 = *puVar1;
          uVar4 = puVar1[1];
          if ((uVar7 == uVar2 && uVar4 == uVar3) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar7,uVar4,uVar2,uVar3,0), (uVar7 & 1) != 0)) {
            puVar8 = local_68;
            if (*(long *)(local_68 + 0x10) == 0) goto LAB_10051d6ec;
            __ss6HasherV5_seedABSi_tcfC(auStack_b0,*(undefined8 *)(local_68 + 0x28));
            puVar6 = auStack_b0;
            __sSS4hash4intoys6HasherVz_tF(puVar6,uVar2,uVar3);
            __ss6HasherV9_finalizeSiyF();
            uVar11 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
            uVar12 = (ulong)puVar6 & (uVar11 ^ 0xffffffffffffffff);
            if ((*(ulong *)(puVar8 + (uVar12 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar12 & 0x3f) &
                1) == 0) goto LAB_10051d6ec;
            goto LAB_10051d6a4;
          }
          uVar12 = uVar12 + 1 & ~uVar11;
        } while ((*(ulong *)(lVar5 + 0x38 + (uVar12 >> 3 & 0xffffffffffffff8)) >> (uVar12 & 0x3f) &
                 1) != 0);
      }
      _swift_bridgeObjectRelease(uVar3);
    }
    goto LAB_10051d588;
  }
  _swift_bridgeObjectRelease(lVar5);
  puVar8 = PTR___swiftEmptySetSingleton_100995eb0;
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_10051d7c4:
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_100995ea0);
  return puVar10;
  while (uVar12 = uVar12 + 1 & ~uVar11,
        (*(ulong *)(puVar8 + (uVar12 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar12 & 0x3f) & 1) != 0)
  {
LAB_10051d6a4:
    puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar12 * 0x10);
    uVar7 = *puVar1;
    uVar4 = puVar1[1];
    if ((uVar7 == uVar2 && uVar4 == uVar3) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,uVar4,uVar2,uVar3,0), (uVar7 & 1) != 0)) {
      _swift_bridgeObjectRelease(uVar3);
      goto LAB_10051d588;
    }
  }
LAB_10051d6ec:
  _swift_bridgeObjectRetain(uVar3);
  FUN_10051e85c(auStack_b0,uVar2,uVar3);
  _swift_bridgeObjectRelease(local_a8);
  puVar8 = puVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar9 = puVar10;
  if (((ulong)puVar8 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    FUN_100507174(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
  }
  uVar11 = *(ulong *)(puVar9 + 0x10);
  puVar10 = puVar9;
  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar11) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
    FUN_100507174(puVar10,uVar11 + 1,1,puVar9);
  }
  *(ulong *)(puVar10 + 0x10) = uVar11 + 1;
  *(ulong *)(puVar10 + uVar11 * 0x10 + 0x20) = uVar2;
  *(ulong *)(puVar10 + uVar11 * 0x10 + 0x28) = uVar3;
LAB_10051d588:
  lVar14 = lVar14 + 1;
  if (lVar14 == lVar13) goto LAB_10051d79c;
  goto LAB_10051d594;
LAB_10051d79c:
  _swift_bridgeObjectRelease(lVar5);
  puVar8 = local_68;
  goto LAB_10051d7c4;
}

