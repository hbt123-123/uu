// rea decompile_all
// name: FUN_1000756ac
// address: 0x1000756ac
// body: available
// range: 0x1000756ac-0x100075d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100075d2c) */
/* WARNING: Removing unreachable block (ram,0x000100075d0c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 ******* FUN_1000756ac(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  int *piVar12;
  undefined8 *****pppppuVar13;
  undefined8 ******ppppppuVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  uint uVar21;
  long lVar22;
  undefined8 ******ppppppuVar23;
  undefined8 ******ppppppuVar24;
  undefined8 uVar25;
  undefined8 *****pppppuVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 *****pppppuVar30;
  undefined8 *****pppppuVar31;
  undefined8 *****pppppuVar32;
  undefined8 *****pppppuVar33;
  undefined8 ****ppppuVar34;
  undefined8 *****pppppuVar35;
  undefined8 *****pppppuVar36;
  undefined8 ****ppppuVar37;
  undefined8 *****pppppuVar38;
  undefined8 ****ppppuVar39;
  undefined8 *****pppppuVar40;
  undefined8 ****ppppuVar41;
  undefined8 *******local_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  
  lVar18 = param_1;
  _swift_bridgeObjectRetain();
  FUN_10004b080();
  lVar22 = *(long *)(param_2 + 0x10);
  if (lVar22 == 0) {
    _swift_bridgeObjectRelease(lVar18);
    pppppuVar13 = *(undefined8 ******)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
    pppppppuVar19 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    lVar17 = 0;
    pppppppuVar19 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      piVar12 = (int *)(param_2 + 0x20 + lVar17 * 0x28);
      iVar2 = *piVar12;
      pppppuVar32 = *(undefined8 ******)(piVar12 + 4);
      pppppuVar33 = *(undefined8 ******)(piVar12 + 2);
      pppppuVar35 = *(undefined8 ******)(piVar12 + 8);
      pppppuVar13 = *(undefined8 ******)(piVar12 + 6);
      if (*(long *)(lVar18 + 0x10) != 0) {
        uVar7 = *(ulong *)(lVar18 + 0x28);
        __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar7,iVar2,4);
        uVar15 = -1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
        uVar7 = uVar7 & (uVar15 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar18 + 0x38 + (uVar7 >> 3 & 0xffffffffffffff8)) >> (uVar7 & 0x3f) & 1) !=
            0) {
          do {
            if (*(int *)(*(long *)(lVar18 + 0x30) + uVar7 * 4) == iVar2) goto LAB_100075744;
            uVar7 = uVar7 + 1 & ~uVar15;
          } while ((*(ulong *)(lVar18 + 0x38 + (uVar7 >> 3 & 0xffffffffffffff8)) >> (uVar7 & 0x3f) &
                   1) != 0);
        }
      }
      ppppppuVar23 = pppppppuVar19;
      _swift_isUniquelyReferenced_nonNull_native();
      local_d8 = pppppppuVar19;
      if (((ulong)ppppppuVar23 & 1) == 0) {
        FUN_10006fc84(0,(long)pppppppuVar19[2] + 1,1);
      }
      pppppuVar30 = local_d8[2];
      if ((undefined8 *****)((ulong)local_d8[3] >> 1) <= pppppuVar30) {
        FUN_10006fc84((undefined8 *****)0x1 < local_d8[3],(undefined8 *****)((long)pppppuVar30 + 1U)
                      ,1);
      }
      local_d8[2] = (undefined8 ******)((long)pppppuVar30 + 1U);
      *(int *)(local_d8 + (long)pppppuVar30 * 5 + 4) = iVar2;
      local_d8[(long)pppppuVar30 * 5 + 6] = (undefined8 ******)pppppuVar32;
      local_d8[(long)pppppuVar30 * 5 + 5] = (undefined8 ******)pppppuVar33;
      local_d8[(long)pppppuVar30 * 5 + 8] = (undefined8 ******)pppppuVar35;
      local_d8[(long)pppppuVar30 * 5 + 7] = (undefined8 ******)pppppuVar13;
      pppppppuVar19 = local_d8;
LAB_100075744:
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar22);
    _swift_bridgeObjectRelease(lVar18);
    pppppuVar13 = pppppppuVar19[2];
  }
  if (pppppuVar13 == (undefined8 *****)0x0) {
    _swift_release(pppppppuVar19);
    return (undefined8 *******)0x0;
  }
  pppppuVar30 = pppppppuVar19[5];
  pppppuVar32 = pppppppuVar19[6];
  pppppuVar33 = pppppppuVar19[7];
  pppppuVar35 = pppppppuVar19[8];
  lVar18 = (long)pppppuVar13 + -1;
  if (lVar18 != 0) {
    ppppppuVar23 = pppppppuVar19 + 0xd;
    uVar21 = *(uint *)(pppppppuVar19 + 4);
    do {
      uVar4 = *(uint *)(ppppppuVar23 + -4);
      pppppuVar36 = ppppppuVar23[-3];
      pppppuVar31 = ppppppuVar23[-2];
      pppppuVar38 = ppppppuVar23[-1];
      pppppuVar40 = *ppppppuVar23;
      pppppuVar13 = pppppuVar30;
      _CGRectGetMaxX(pppppuVar30,pppppuVar32,pppppuVar33,pppppuVar35);
      pppppuVar26 = pppppuVar36;
      _CGRectGetMaxX(pppppuVar36,pppppuVar31,pppppuVar38,pppppuVar40);
      if ((double)pppppuVar13 == (double)pppppuVar26) {
        bVar6 = uVar21 < uVar4;
      }
      else {
        pppppuVar13 = pppppuVar30;
        _CGRectGetMaxX(pppppuVar30,pppppuVar32,pppppuVar33,pppppuVar35);
        pppppuVar26 = pppppuVar36;
        _CGRectGetMaxX(pppppuVar36,pppppuVar31,pppppuVar38,pppppuVar40);
        bVar6 = (double)pppppuVar13 < (double)pppppuVar26;
      }
      if (!bVar6) {
        uVar4 = uVar21;
        pppppuVar40 = pppppuVar35;
        pppppuVar38 = pppppuVar33;
        pppppuVar31 = pppppuVar32;
        pppppuVar36 = pppppuVar30;
      }
      pppppuVar30 = pppppuVar36;
      pppppuVar32 = pppppuVar31;
      pppppuVar33 = pppppuVar38;
      pppppuVar35 = pppppuVar40;
      ppppppuVar23 = ppppppuVar23 + 5;
      lVar18 = lVar18 + -1;
      uVar21 = uVar4;
    } while (lVar18 != 0);
  }
  pppppppuVar8 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100995ea0;
  _swift_release(pppppppuVar19);
  if (lVar22 == 0) {
    ppppppuVar23 = *(undefined8 *******)((long)pppppppuVar8 + 0x10);
    ppppppuVar24 = (undefined8 ******)PTR___swiftEmptyDictionarySingleton_100995ea8;
    if (ppppppuVar23 == (undefined8 ******)0x0) goto LAB_100075a24;
  }
  else {
    local_d8 = pppppppuVar8;
    FUN_10006fc58(0,lVar22,0);
    lVar18 = 0;
    ppppppuVar23 = local_d8[2];
    lVar17 = (long)ppppppuVar23 * 0x28;
    do {
      lVar1 = param_2 + lVar18;
      uVar3 = *(undefined4 *)(lVar1 + 0x20);
      uVar27 = *(undefined8 *)(lVar1 + 0x30);
      uVar25 = *(undefined8 *)(lVar1 + 0x28);
      uVar29 = *(undefined8 *)(lVar1 + 0x40);
      uVar28 = *(undefined8 *)(lVar1 + 0x38);
      bVar6 = (undefined8 ******)((ulong)local_d8[3] >> 1) <= ppppppuVar23;
      ppppppuVar23 = (undefined8 ******)((long)ppppppuVar23 + 1);
      if (bVar6) {
        FUN_10006fc58((undefined8 *****)0x1 < local_d8[3],ppppppuVar23,1);
      }
      local_d8[2] = ppppppuVar23;
      lVar1 = lVar18 + lVar17;
      *(undefined4 *)((long)local_d8 + lVar1 + 0x20) = uVar3;
      *(undefined8 *)((long)local_d8 + lVar1 + 0x30) = uVar27;
      *(undefined8 *)((long)local_d8 + lVar1 + 0x28) = uVar25;
      *(undefined8 *)((long)local_d8 + lVar1 + 0x40) = uVar29;
      *(undefined8 *)((long)local_d8 + lVar1 + 0x38) = uVar28;
      lVar18 = lVar18 + 0x28;
      lVar22 = lVar22 + -1;
      pppppppuVar8 = local_d8;
    } while (lVar22 != 0);
  }
  FUN_100004bb4(&DAT_100a761b8,&DAT_10080a948);
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  ppppppuVar24 = ppppppuVar23;
LAB_100075a24:
  local_d8 = (undefined8 *******)ppppppuVar24;
  _swift_bridgeObjectRetain(pppppppuVar8);
  pppppppuVar10 = (undefined8 *******)0x1;
  FUN_1000735e4();
  _swift_bridgeObjectRelease(pppppppuVar8);
  pppppppuVar19 = local_d8;
  pppppuVar13 = pppppuVar30;
  _CGRectGetMaxX(pppppuVar30,pppppuVar32,pppppuVar33,pppppuVar35);
  pppppppuVar20 = *(undefined8 ********)(param_1 + 0x10);
  pppppppuVar8 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100995ea0;
  if (pppppppuVar20 != (undefined8 *******)0x0) {
    pppppppuVar8 = pppppppuVar20;
    FUN_10006d8c4(pppppppuVar20,0,&DAT_100a761c8,&DAT_10080a960);
    pppppppuVar9 = &local_d8;
    FUN_100074314(pppppppuVar9,pppppppuVar8 + 4,pppppppuVar20,param_1);
    pppppppuVar10 = local_d8;
    _swift_bridgeObjectRetain(param_1);
    FUN_10003f638(pppppppuVar10,pppppppuStack_d0,local_c8,uStack_c0,local_b8);
    pppppppuVar10 = pppppppuStack_d0;
    if (pppppppuVar9 != pppppppuVar20) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100075ae0);
      (*pcVar5)();
    }
  }
  local_d8 = pppppppuVar8;
  FUN_10005fc0c(&local_d8);
  pppppppuVar8 = local_d8;
  ppppppuVar23 = local_d8[2];
  pppppppuVar20 = (undefined8 *******)PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (ppppppuVar23 != (undefined8 ******)0x0) {
    ppppppuVar24 = (undefined8 ******)0x0;
    lVar22 = 0x28;
    do {
      if (pppppppuVar8[2] <= ppppppuVar24) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100075cf4);
        (*pcVar5)();
      }
      if (pppppppuVar19[2] == (undefined8 ******)0x0) {
LAB_100075c78:
        _swift_release(pppppppuVar19);
        _swift_release(pppppppuVar8);
        _swift_bridgeObjectRelease(pppppppuVar20);
        return (undefined8 *******)0x0;
      }
      uVar21 = *(uint *)((long)pppppppuVar8 + lVar22);
      uVar15 = (ulong)uVar21;
      uVar7 = uVar15;
      thunk_FUN_1001a2c34();
      if (((ulong)pppppppuVar10 & 1) == 0) goto LAB_100075c78;
      pppppuVar26 = pppppppuVar19[7] + uVar7 * 4;
      ppppuVar37 = *pppppuVar26;
      ppppuVar39 = pppppuVar26[1];
      ppppuVar41 = pppppuVar26[2];
      ppppuVar34 = pppppuVar26[3];
      pppppuVar26 = pppppuVar30;
      _CGRectGetMinY(pppppuVar30,pppppuVar32,pppppuVar33,pppppuVar35);
      pppppppuVar9 = pppppppuVar20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar15;
      local_d8 = pppppppuVar20;
      thunk_FUN_1001a2c34();
      uVar16 = (ulong)~(uint)pppppppuVar10 & 1;
      lVar18 = (long)pppppppuVar20[2] + uVar16;
      if (SCARRY8((long)pppppppuVar20[2],uVar16)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100075cf8);
        (*pcVar5)();
      }
      if ((long)pppppppuVar20[3] < lVar18) {
        FUN_10006738c(lVar18);
        thunk_FUN_1001a2c34();
        uVar7 = uVar15;
        pppppppuVar11 = pppppppuVar9;
        if (((uint)pppppppuVar10 & 1) != ((uint)pppppppuVar9 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___ss6UInt32VN_100995dc0);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100075d0c);
          (*pcVar5)();
        }
LAB_100075c10:
        if (((ulong)pppppppuVar10 & 1) != 0) goto LAB_100075b18;
LAB_100075c18:
        local_d8[(uVar7 >> 6) + 8] =
             (undefined8 ******)((ulong)local_d8[(uVar7 >> 6) + 8] | 1L << (uVar7 & 0x3f));
        *(uint *)((long)local_d8[6] + uVar7 * 4) = uVar21;
        ppppppuVar14 = local_d8[7];
        ppppppuVar14[uVar7 * 2] = pppppuVar13;
        (ppppppuVar14 + uVar7 * 2)[1] = pppppuVar26;
        if (SCARRY8((long)local_d8[2],1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100075cfc);
          (*pcVar5)();
        }
        local_d8[2] = (undefined8 ******)((long)local_d8[2] + 1);
      }
      else {
        pppppppuVar11 = pppppppuVar10;
        if (((ulong)pppppppuVar9 & 1) != 0) goto LAB_100075c10;
        FUN_100063524();
        if (((ulong)pppppppuVar10 & 1) == 0) goto LAB_100075c18;
LAB_100075b18:
        ppppppuVar14 = local_d8[7];
        ppppppuVar14[uVar7 * 2] = pppppuVar13;
        (ppppppuVar14 + uVar7 * 2)[1] = pppppuVar26;
      }
      pppppppuVar20 = local_d8;
      ppppppuVar24 = (undefined8 ******)((long)ppppppuVar24 + 1);
      _CGRectGetWidth(ppppuVar37,ppppuVar39,ppppuVar41,ppppuVar34);
      pppppuVar13 = (undefined8 *****)((double)pppppuVar13 + (double)ppppuVar37);
      lVar22 = lVar22 + 0x10;
      pppppppuVar10 = pppppppuVar11;
    } while (ppppppuVar23 != ppppppuVar24);
  }
  _swift_release(pppppppuVar19);
  _swift_release(pppppppuVar8);
  return pppppppuVar20;
}

