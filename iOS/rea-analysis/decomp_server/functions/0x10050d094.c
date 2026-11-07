// rea decompile_all
// name: FUN_10050d094
// address: 0x10050d094
// body: available
// range: 0x10050d094-0x10050dae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050d094(undefined1 *param_1,code *param_2,long param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,long param_9,long param_10,
                  undefined8 param_11)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  char *unaff_x20;
  ulong uVar19;
  long lVar20;
  long unaff_x21;
  code *pcVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  byte *pbVar24;
  long lVar25;
  undefined1 *puVar26;
  long lVar27;
  long lVar28;
  undefined1 auStack_210 [16];
  long alStack_200 [6];
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  ulong local_198;
  ulong local_190;
  ulong local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  undefined8 local_158;
  code *local_150;
  undefined1 *local_148;
  code *local_140;
  code *local_138;
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 local_90 [48];
  undefined1 *local_58;
  
  lVar8 = param_10;
  lVar20 = param_9;
  local_158 = param_11;
  lVar28 = *(long *)(param_10 + -8);
  uVar9 = *(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1a0 = auStack_1d0 + -uVar9;
  local_1b8 = (long)local_1a0 - uVar9;
  lVar25 = local_1b8 - uVar9;
  lVar10 = *(long *)(param_9 + -8);
  uVar9 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1a8 = (undefined1 *)(lVar25 - uVar9);
  local_1c0 = (long)local_1a8 - uVar9;
  puVar26 = (undefined1 *)(local_1c0 - uVar9);
  lVar3 = 0xff;
  local_170 = param_3;
  local_150 = (code *)param_4;
  local_148 = param_1;
  local_140 = param_2;
  local_138 = param_7;
  local_130 = param_8;
  local_128 = param_5;
  local_120 = param_6;
  _swift_getTupleTypeMetadata2(0xff,param_9,param_10,"key value ",0);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  pcVar13 = local_140;
  uVar5 = local_158;
  local_118 = *(long *)(lVar4 + -8);
  uVar9 = *(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_160 = (long)puVar26 - uVar9;
  local_168 = local_160 - uVar9;
  lVar27 = local_168 - uVar9;
  lVar18 = lVar27 - uVar9;
  local_108 = lVar8;
  local_100 = lVar20;
  local_110 = lVar4;
  if (*unaff_x20 != '\x01') {
    lVar4 = lVar20;
    local_170 = lVar3;
    if (((ulong)local_148 & 0xc000000000000001) == 0) {
      _swift_retain();
      lVar8 = local_108;
      uVar5 = local_158;
      __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
      __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
      lVar3 = -0xa8;
      puVar7 = auStack_e0;
      __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
                (auStack_b8,puVar7,lVar20,lVar8,uVar5);
    }
    else {
      puVar26 = local_148;
      FUN_100532368(local_148,lVar20,lVar8,local_158);
      puVar7 = puVar26;
      __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
      _swift_unknownObjectRetain(puVar26);
      lVar3 = -0x80;
      __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
                (local_90,puVar7,lVar20,lVar8,uVar5);
    }
    local_1c8 = *(long *)((long)&param_9 + lVar3);
    puVar15 = *(undefined1 **)((long)&param_10 + lVar3);
    local_180 = *(long *)(&stack0xfffffffffffffff0 + lVar3);
    local_178 = *(long *)(&stack0xfffffffffffffff8 + lVar3);
    local_198 = local_1c8 + 0x40U >> 6;
    local_188 = ((ulong)pcVar13 & 0x1fffffff) << 3;
    local_190 = ((ulong)pcVar13 & 0x1fffffff) << 3 | 2;
    local_150 = *(code **)((long)&param_11 + lVar3);
    puVar22 = local_1a0;
    puVar26 = local_1a8;
    local_1b0 = lVar28;
    do {
      lVar25 = local_100;
      lVar18 = local_108;
      lVar3 = local_180;
      local_148 = puVar15;
      if (local_180 < 0) {
        __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
        lVar3 = local_1c0;
        if (puVar7 == (undefined1 *)0x0) {
          local_140 = local_150;
          puVar15 = local_148;
LAB_10050d820:
          uVar5 = 1;
          lVar4 = local_170;
          lVar27 = local_160;
        }
        else {
          __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(local_1c0);
          _swift_unknownObjectRelease(puVar7);
          lVar18 = local_1b8;
          __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(local_1b8,lVar4,lVar8,lVar8);
          _swift_unknownObjectRelease(lVar4);
          lVar27 = local_160;
          lVar4 = local_170;
          iVar1 = *(int *)(local_170 + 0x30);
          (**(code **)(lVar10 + 0x20))(local_160,lVar3,lVar20);
          (**(code **)(lVar28 + 0x20))(lVar27 + iVar1,lVar18,lVar8);
          uVar5 = 0;
          local_140 = local_150;
          puVar15 = local_148;
        }
      }
      else {
        pcVar13 = local_150;
        uVar9 = (ulong)puVar15;
        if (local_150 == (code *)0x0) {
          uVar19 = local_198;
          if ((long)local_198 <= (long)((long)puVar15 + 1U)) {
            uVar19 = (long)puVar15 + 1;
          }
          uVar17 = (ulong)puVar15;
          do {
            uVar9 = uVar17 + 1;
            if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x10050dae0);
              (*pcVar13)();
            }
            if ((long)local_198 <= (long)uVar9) {
              local_140 = (code *)0x0;
              puVar15 = (undefined1 *)(uVar19 - 1);
              goto LAB_10050d820;
            }
            pcVar13 = *(code **)(local_178 + uVar9 * 8);
            uVar17 = uVar17 + 1;
          } while (pcVar13 == (code *)0x0);
        }
        uVar19 = ((ulong)pcVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)pcVar13 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        local_140 = (code *)((ulong)(pcVar13 + -1) & (ulong)pcVar13);
        uVar19 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | uVar9 << 6;
        lVar20 = local_180;
        __ss17_NativeDictionaryV5_keysSpyxGvg(local_180,local_100,local_108,uVar5);
        lVar11 = *(long *)(lVar10 + 0x48);
        FUN_100008290(lVar3,lVar25,lVar18,uVar5);
        lVar8 = lVar3;
        __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar3,lVar25,lVar18,uVar5);
        lVar28 = local_1b0;
        lVar12 = *(long *)(local_1b0 + 0x48);
        FUN_100008290(lVar3,lVar25,lVar18,uVar5);
        lVar27 = local_160;
        lVar4 = local_170;
        iVar1 = *(int *)(local_170 + 0x30);
        (**(code **)(lVar10 + 0x10))(local_160,lVar20 + lVar11 * uVar19,lVar25);
        (**(code **)(lVar28 + 0x10))(lVar27 + iVar1,lVar8 + lVar12 * uVar19,lVar18);
        uVar5 = 0;
        puVar15 = (undefined1 *)uVar9;
        puVar22 = local_1a0;
        puVar26 = local_1a8;
        lVar8 = lVar18;
      }
      lVar20 = *(long *)(lVar4 + -8);
      (**(code **)(lVar20 + 0x38))(lVar27,uVar5,1,lVar4);
      lVar3 = local_168;
      (**(code **)(local_118 + 0x20))(local_168,lVar27,local_110);
      lVar18 = lVar3;
      (**(code **)(lVar20 + 0x30))(lVar3,1,lVar4);
      lVar20 = local_100;
      if ((int)lVar18 == 1) {
        FUN_10003f638(local_180,local_178,local_1c8,local_148,local_150);
        return;
      }
      iVar1 = *(int *)(lVar4 + 0x30);
      (**(code **)(lVar10 + 0x20))(puVar26,lVar3,local_100);
      (**(code **)(lVar28 + 0x20))(puVar22,lVar3 + iVar1,lVar8);
      pbVar23 = *(byte **)(unaff_x20 + 8);
      uVar9 = local_190;
      uVar19 = local_190;
      pbVar24 = pbVar23;
      if (0x7f < local_188) {
        do {
          pbVar24 = pbVar23 + 1;
          *pbVar23 = (byte)uVar9 | 0x80;
          uVar19 = uVar9 >> 7;
          uVar17 = uVar9 >> 0xe;
          uVar9 = uVar19;
          pbVar23 = pbVar24;
        } while (uVar17 != 0);
      }
      pbVar23 = pbVar24 + 1;
      *pbVar24 = (byte)uVar19;
      *(byte **)(unaff_x20 + 8) = pbVar23;
      local_58 = (undefined1 *)0x0;
      (*local_128)(&local_58,puVar26,puVar22);
      if (unaff_x21 != 0) goto LAB_10050da68;
      puVar7 = local_58;
      puVar16 = local_58;
      pbVar24 = pbVar23;
      if ((undefined1 *)0x7f < local_58) {
        do {
          pbVar23 = pbVar24 + 1;
          *pbVar24 = (byte)puVar7 | 0x80;
          puVar16 = (undefined1 *)((ulong)puVar7 >> 7);
          uVar9 = (ulong)puVar7 >> 0xe;
          puVar7 = puVar16;
          pbVar24 = pbVar23;
        } while (uVar9 != 0);
      }
      *pbVar23 = (byte)puVar16;
      *(byte **)(unaff_x20 + 8) = pbVar23 + 1;
      (*local_138)(unaff_x20,puVar26,puVar22);
      (**(code **)(lVar28 + 8))(puVar22,lVar8);
      puVar7 = puVar26;
      lVar4 = lVar20;
      (**(code **)(lVar10 + 8))();
      local_150 = local_140;
      uVar5 = local_158;
    } while( true );
  }
  local_58 = local_148;
  local_160 = lVar18;
  *(long *)(lVar18 + -0x30) = lVar20;
  *(long *)(lVar18 + -0x28) = lVar8;
  lVar20 = local_170;
  *(undefined8 *)(lVar18 + -0x20) = local_158;
  *(long *)(lVar18 + -0x18) = lVar20;
  *(code **)(lVar18 + -0x10) = local_150;
  uVar5 = 0;
  __sSDMa(0,local_100,lVar8);
  puVar6 = PTR___sSDyxq_GSTsMc_100995788;
  _swift_getWitnessTable(PTR___sSDyxq_GSTsMc_100995788,uVar5);
  pcVar13 = FUN_10050e6c8;
  __sSTsE6sorted2bySay7ElementQzGSbAD_ADtKXE_tKF(FUN_10050e6c8,lVar18 + -0x40,uVar5,puVar6);
  pcVar21 = (code *)0x0;
  local_148 = (undefined1 *)(((ulong)local_140 & 0x1fffffff) << 3);
  local_150 = (code *)(((ulong)local_140 & 0x1fffffff) << 3 | 2);
  lVar20 = local_100;
  local_140 = pcVar13;
  while( true ) {
    pcVar13 = local_140;
    pcVar14 = local_140;
    __sSa8endIndexSivg(local_140,lVar3);
    if (pcVar21 == pcVar14) {
      uVar5 = 1;
    }
    else {
      __sSayxSicig(lVar27,pcVar21,pcVar13,lVar3);
      bVar2 = SCARRY8((long)pcVar21,1);
      pcVar21 = pcVar21 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10050dae4);
        (*pcVar13)();
      }
      uVar5 = 0;
    }
    lVar4 = *(long *)(lVar3 + -8);
    (**(code **)(lVar4 + 0x38))(lVar27,uVar5,1,lVar3);
    (**(code **)(local_118 + 0x20))(lVar18,lVar27,local_110);
    lVar8 = lVar18;
    (**(code **)(lVar4 + 0x30))(lVar18,1,lVar3);
    if ((int)lVar8 == 1) {
      _swift_bridgeObjectRelease(local_140);
      return;
    }
    iVar1 = *(int *)(lVar3 + 0x30);
    (**(code **)(lVar10 + 0x20))(puVar26,lVar18,lVar20);
    (**(code **)(lVar28 + 0x20))(lVar25,lVar18 + iVar1,local_108);
    pbVar23 = *(byte **)(unaff_x20 + 8);
    pcVar13 = local_150;
    pcVar14 = local_150;
    pbVar24 = pbVar23;
    if (0x7f < local_148) {
      do {
        pbVar24 = pbVar23 + 1;
        *pbVar23 = (byte)pcVar13 | 0x80;
        pcVar14 = (code *)((ulong)pcVar13 >> 7);
        uVar9 = (ulong)pcVar13 >> 0xe;
        pcVar13 = pcVar14;
        pbVar23 = pbVar24;
      } while (uVar9 != 0);
    }
    pbVar23 = pbVar24 + 1;
    *pbVar24 = (byte)pcVar14;
    *(byte **)(unaff_x20 + 8) = pbVar23;
    local_58 = (undefined1 *)0x0;
    (*local_128)(&local_58,puVar26,lVar25);
    if (unaff_x21 != 0) break;
    puVar7 = local_58;
    puVar15 = local_58;
    pbVar24 = pbVar23;
    if ((undefined1 *)0x7f < local_58) {
      do {
        pbVar23 = pbVar24 + 1;
        *pbVar24 = (byte)puVar7 | 0x80;
        puVar15 = (undefined1 *)((ulong)puVar7 >> 7);
        uVar9 = (ulong)puVar7 >> 0xe;
        puVar7 = puVar15;
        pbVar24 = pbVar23;
      } while (uVar9 != 0);
    }
    *pbVar23 = (byte)puVar15;
    *(byte **)(unaff_x20 + 8) = pbVar23 + 1;
    (*local_138)(unaff_x20,puVar26,lVar25);
    (**(code **)(lVar28 + 8))(lVar25,local_108);
    lVar20 = local_100;
    (**(code **)(lVar10 + 8))(puVar26,local_100);
  }
  _swift_bridgeObjectRelease(local_140);
  (**(code **)(lVar28 + 8))(lVar25,local_108);
  pcVar13 = *(code **)(lVar10 + 8);
  lVar20 = local_100;
LAB_10050dab4:
  (*pcVar13)(puVar26,lVar20);
  return;
LAB_10050da68:
  FUN_10003f638(local_180,local_178,local_1c8,local_148,local_150);
  (**(code **)(lVar28 + 8))(puVar22,lVar8);
  pcVar13 = *(code **)(lVar10 + 8);
  goto LAB_10050dab4;
}

