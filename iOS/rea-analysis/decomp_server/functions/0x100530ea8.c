// rea decompile_all
// name: FUN_100530ea8
// address: 0x100530ea8
// body: available
// range: 0x100530ea8-0x1005318e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010053137c) */
/* WARNING: Removing unreachable block (ram,0x000100531840) */

void FUN_100530ea8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long unaff_x20;
  long lVar28;
  long unaff_x21;
  long lVar29;
  code *pcVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined1 auStack_240 [16];
  long alStack_230 [6];
  undefined1 auStack_200 [8];
  long local_1f8;
  ulong local_188;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 local_f8;
  undefined6 uStack_f0;
  undefined2 uStack_ea;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 uStack_e4;
  char cStack_e3;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 local_90 [48];
  
  lVar12 = *(long *)(param_8 + -8);
  uVar13 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar20 = auStack_200 + -uVar13;
  lVar21 = (long)puVar20 - uVar13;
  lVar14 = lVar21 - uVar13;
  lVar15 = *(long *)(param_7 + -8);
  uVar13 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar22 = (undefined1 *)(lVar14 - uVar13);
  lVar23 = (long)puVar22 - uVar13;
  lVar16 = lVar23 - uVar13;
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,param_7,param_8,"key value ",0);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar31 = *(long *)(lVar6 + -8);
  uVar13 = *(long *)(lVar31 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar29 = lVar16 - uVar13;
  lVar25 = lVar29 - uVar13;
  lVar33 = lVar25 - uVar13;
  lVar32 = lVar33 - uVar13;
  FUN_10052d69c(param_2);
  uVar11 = param_9;
  if (unaff_x21 != 0) {
    return;
  }
  FUN_1004fa030(0x7b,0xe100000000000000);
  uStack_e6 = *(undefined1 *)(unaff_x20 + 0x48);
  uStack_e5 = *(undefined1 *)(unaff_x20 + 0x49);
  uStack_e4 = *(undefined1 *)(unaff_x20 + 0x4a);
  cStack_e3 = *(char *)(unaff_x20 + 0x4b);
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0x100;
  uStack_f0 = SUB86(PTR___swiftEmptyArrayStorage_100995ea0,0);
  uStack_ea = (undefined2)((ulong)PTR___swiftEmptyArrayStorage_100995ea0 >> 0x30);
  uStack_e8 = 0;
  uStack_e7 = 1;
  if (cStack_e3 != '\x01') {
    lVar14 = param_7;
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      _swift_retain();
      __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
      __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
      lVar16 = -0xa8;
      puVar10 = auStack_e0;
      __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
                (auStack_b8,puVar10,param_7,param_8,uVar11);
    }
    else {
      puVar1 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
      if ((long)param_1 < 0) {
        puVar1 = param_1;
      }
      puVar10 = puVar1;
      __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
      _swift_unknownObjectRetain(puVar1);
      lVar16 = -0x80;
      __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
                (local_90,puVar10,param_7,param_8,uVar11);
    }
    local_1f8 = *(long *)((long)&param_9 + lVar16);
    lVar32 = *(long *)(&stack0xfffffffffffffff0 + lVar16);
    lVar33 = *(long *)(&stack0xfffffffffffffff8 + lVar16);
    uVar24 = local_1f8 + 0x40U >> 6;
    uVar13 = *(ulong *)(&stack0x00000010 + lVar16);
    lVar16 = *(long *)(&stack0x00000008 + lVar16);
    do {
      lVar27 = lVar16;
      if (lVar32 < 0) {
        __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
        local_188 = uVar13;
        if (puVar10 == (undefined1 *)0x0) {
LAB_1005316b4:
          uVar7 = 1;
        }
        else {
          __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(lVar23);
          _swift_unknownObjectRelease(puVar10);
          __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(lVar21,lVar14,param_8,param_8);
          _swift_unknownObjectRelease(lVar14);
          iVar2 = *(int *)(lVar5 + 0x30);
          (**(code **)(lVar15 + 0x20))(lVar29,lVar23,param_7);
          (**(code **)(lVar12 + 0x20))(lVar29 + iVar2,lVar21,param_8);
          uVar7 = 0;
        }
      }
      else {
        uVar17 = uVar13;
        if (uVar13 == 0) {
          uVar26 = uVar24;
          if ((long)uVar24 <= lVar16 + 1) {
            uVar26 = lVar16 + 1;
          }
          lVar14 = lVar16;
          do {
            lVar27 = lVar14 + 1;
            if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1005318e0);
              (*pcVar3)();
            }
            if ((long)uVar24 <= lVar27) {
              local_188 = 0;
              lVar27 = uVar26 - 1;
              goto LAB_1005316b4;
            }
            uVar17 = *(ulong *)(lVar33 + lVar27 * 8);
            lVar14 = lVar14 + 1;
          } while (uVar17 == 0);
        }
        uVar26 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
        uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
        uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
        uVar26 = LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) | lVar27 << 6;
        lVar14 = lVar32;
        __ss17_NativeDictionaryV5_keysSpyxGvg(lVar32,param_7,param_8,uVar11);
        lVar18 = *(long *)(lVar15 + 0x48);
        FUN_100008290(lVar32,param_7,param_8,uVar11);
        lVar28 = lVar32;
        __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar32,param_7,param_8,uVar11);
        lVar19 = *(long *)(lVar12 + 0x48);
        FUN_100008290(lVar32,param_7,param_8,uVar11);
        iVar2 = *(int *)(lVar5 + 0x30);
        (**(code **)(lVar15 + 0x10))(lVar29,lVar14 + lVar18 * uVar26,param_7);
        (**(code **)(lVar12 + 0x10))(lVar29 + iVar2,lVar28 + lVar19 * uVar26,param_8);
        uVar7 = 0;
        local_188 = uVar17 - 1 & uVar17;
      }
      lVar28 = *(long *)(lVar5 + -8);
      (**(code **)(lVar28 + 0x38))(lVar29,uVar7,1,lVar5);
      (**(code **)(lVar31 + 0x20))(lVar25,lVar29,lVar6);
      lVar14 = lVar25;
      (**(code **)(lVar28 + 0x30))(lVar25,1,lVar5);
      if ((int)lVar14 == 1) goto LAB_1005317f0;
      iVar2 = *(int *)(lVar5 + 0x30);
      (**(code **)(lVar15 + 0x20))(puVar22,lVar25,param_7);
      (**(code **)(lVar12 + 0x20))(puVar20,lVar25 + iVar2,param_8);
      (*param_5)(&local_108,puVar22,puVar20);
      (**(code **)(lVar12 + 8))(puVar20,param_8);
      puVar10 = puVar22;
      lVar14 = param_7;
      (**(code **)(lVar15 + 8))();
      uVar13 = local_188;
      lVar16 = lVar27;
    } while( true );
  }
  *(long *)(lVar32 + -0x30) = param_7;
  *(long *)(lVar32 + -0x28) = param_8;
  *(undefined8 *)(lVar32 + -0x20) = uVar11;
  *(undefined8 *)(lVar32 + -0x18) = param_3;
  *(undefined8 *)(lVar32 + -0x10) = param_4;
  uVar7 = 0;
  __sSDMa(0,param_7,param_8,uVar11);
  puVar8 = PTR___sSDyxq_GSTsMc_100995788;
  _swift_getWitnessTable(PTR___sSDyxq_GSTsMc_100995788,uVar7);
  pcVar3 = FUN_10050e6c8;
  __sSTsE6sorted2bySay7ElementQzGSbAD_ADtKXE_tKF(FUN_10050e6c8,lVar32 + -0x40,uVar7,puVar8);
  pcVar30 = (code *)0x0;
  while( true ) {
    pcVar9 = pcVar3;
    __sSa8endIndexSivg(pcVar3,lVar5);
    if (pcVar30 == pcVar9) {
      uVar11 = 1;
    }
    else {
      __sSayxSicig(lVar33,pcVar30,pcVar3,lVar5);
      bVar4 = SCARRY8((long)pcVar30,1);
      pcVar30 = pcVar30 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005318e4);
        (*pcVar3)();
      }
      uVar11 = 0;
    }
    lVar23 = *(long *)(lVar5 + -8);
    (**(code **)(lVar23 + 0x38))(lVar33,uVar11,1,lVar5);
    (**(code **)(lVar31 + 0x20))(lVar32,lVar33,lVar6);
    lVar21 = lVar32;
    (**(code **)(lVar23 + 0x30))(lVar32,1,lVar5);
    if ((int)lVar21 == 1) break;
    iVar2 = *(int *)(lVar5 + 0x30);
    (**(code **)(lVar15 + 0x20))(lVar16,lVar32,param_7);
    (**(code **)(lVar12 + 0x20))(lVar14,lVar32 + iVar2,param_8);
    (*param_5)(&local_108,lVar16,lVar14);
    (**(code **)(lVar12 + 8))(lVar14,param_8);
    (**(code **)(lVar15 + 8))(lVar16,param_7);
  }
  _swift_bridgeObjectRelease(pcVar3);
LAB_100531820:
  FUN_1004fa13c(CONCAT26(uStack_ea,uStack_f0));
  FUN_1004fa030(0x7d,0xe100000000000000);
  return;
LAB_1005317f0:
  FUN_10003f638(lVar32,lVar33,local_1f8,lVar16,uVar13);
  goto LAB_100531820;
}

