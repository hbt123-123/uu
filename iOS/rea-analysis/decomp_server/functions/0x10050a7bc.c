// rea decompile_all
// name: FUN_10050a7bc
// address: 0x10050a7bc
// body: available
// range: 0x10050a7bc-0x10050afe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050a7bc(undefined1 *param_1,uint param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long *unaff_x20;
  long unaff_x21;
  long lVar27;
  undefined1 *puVar28;
  ulong uVar29;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  undefined1 *local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  undefined1 *local_190;
  ulong local_f8;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 local_90 [48];
  ulong local_58;
  
  lVar27 = *(long *)(param_4 + -8);
  uVar14 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar11 = auStack_1c0 + -uVar14;
  lVar15 = (long)puVar11 - uVar14;
  lVar12 = *(long *)(param_5 + 8);
  lVar5 = 0;
  local_198 = lVar15;
  _swift_getAssociatedTypeWitness();
  lVar16 = *(long *)(lVar5 + -8);
  uVar14 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_190 = (undefined1 *)(lVar15 - uVar14);
  lVar17 = (long)local_190 - uVar14;
  lVar15 = 0xff;
  local_1a0 = lVar17;
  _swift_getTupleTypeMetadata2(0xff,lVar5,param_4,"key value ",0);
  lVar6 = 0;
  __sSqMa(0,lVar15);
  lVar18 = *(long *)(lVar6 + -8);
  uVar14 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = lVar17 - uVar14;
  lVar19 = lVar17 - uVar14;
  uVar3 = param_2 << 3;
  if (uVar3 < 0x80) {
    local_1b8 = 1;
  }
  else if (uVar3 < 0x4000) {
    local_1b8 = 2;
  }
  else if (uVar3 < 0x200000) {
    local_1b8 = 3;
  }
  else {
    local_1b8 = 4;
    if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
      local_1b8 = 5;
    }
  }
  lVar7 = lVar12;
  _swift_getAssociatedConformanceWitness
            (lVar12,param_3,lVar5,0x100900ffc,&TargetProtocolRequirement_100901004);
  lVar9 = lVar5;
  local_1b0 = param_1;
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    _swift_retain(param_1);
    __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
    __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
    lVar25 = -0xa8;
    puVar8 = auStack_e0;
    __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
              (auStack_b8,puVar8,lVar5,param_4,lVar7);
  }
  else {
    FUN_100532368(param_1,lVar5,param_4,lVar7);
    puVar8 = param_1;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    _swift_unknownObjectRetain(param_1);
    lVar25 = -0x80;
    __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
              (local_90,puVar8,lVar5,param_4,lVar7);
  }
  local_1a8 = *(long *)(&stack0x00000000 + lVar25);
  lVar7 = *(long *)(&stack0xfffffffffffffff0 + lVar25);
  lVar1 = *(long *)(&stack0xfffffffffffffff8 + lVar25);
  uVar24 = local_1a8 + 0x40U >> 6;
  lVar23 = *(long *)(&stack0x00000008 + lVar25);
  uVar14 = *(ulong *)(&stack0x00000010 + lVar25);
  puVar28 = local_190;
  do {
    lVar25 = lVar23;
    if (lVar7 < 0) {
      __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      lVar26 = local_1a0;
      local_f8 = uVar14;
      if (puVar8 == (undefined1 *)0x0) {
LAB_10050acb4:
        uVar13 = 1;
      }
      else {
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(local_1a0);
        _swift_unknownObjectRelease(puVar8);
        lVar10 = local_198;
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(local_198,lVar9,param_4,param_4);
        _swift_unknownObjectRelease(lVar9);
        iVar2 = *(int *)(lVar15 + 0x30);
        (**(code **)(lVar16 + 0x20))(lVar17,lVar26,lVar5);
        (**(code **)(lVar27 + 0x20))(lVar17 + iVar2,lVar10,param_4);
        uVar13 = 0;
      }
    }
    else {
      uVar20 = uVar14;
      if (uVar14 == 0) {
        uVar29 = uVar24;
        if ((long)uVar24 <= lVar23 + 1) {
          uVar29 = lVar23 + 1;
        }
        lVar9 = lVar23;
        do {
          lVar25 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10050afd4);
            (*pcVar4)();
          }
          if ((long)uVar24 <= lVar25) {
            local_f8 = 0;
            lVar25 = uVar29 - 1;
            goto LAB_10050acb4;
          }
          uVar20 = *(ulong *)(lVar1 + lVar25 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar20 == 0);
      }
      uVar29 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
      uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
      uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
      uVar29 = LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) | lVar25 << 6;
      lVar9 = lVar12;
      _swift_getAssociatedConformanceWitness
                (lVar12,param_3,lVar5,0x100900ffc,&TargetProtocolRequirement_100901004);
      lVar26 = lVar7;
      __ss17_NativeDictionaryV5_keysSpyxGvg(lVar7,lVar5,param_4,lVar9);
      lVar21 = *(long *)(lVar16 + 0x48);
      FUN_100008290(lVar7,lVar5,param_4,lVar9);
      lVar10 = lVar7;
      __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar7,lVar5,param_4,lVar9);
      lVar22 = *(long *)(lVar27 + 0x48);
      FUN_100008290(lVar7,lVar5,param_4,lVar9);
      iVar2 = *(int *)(lVar15 + 0x30);
      (**(code **)(lVar16 + 0x10))(lVar17,lVar26 + lVar21 * uVar29,lVar5);
      (**(code **)(lVar27 + 0x10))(lVar17 + iVar2,lVar10 + lVar22 * uVar29,param_4);
      uVar13 = 0;
      puVar28 = local_190;
      local_f8 = uVar20 - 1 & uVar20;
    }
    lVar26 = *(long *)(lVar15 + -8);
    (**(code **)(lVar26 + 0x38))(lVar17,uVar13,1,lVar15);
    (**(code **)(lVar18 + 0x20))(lVar19,lVar17,lVar6);
    lVar9 = lVar19;
    (**(code **)(lVar26 + 0x30))(lVar19,1,lVar15);
    if ((int)lVar9 == 1) {
      FUN_10003f638(lVar7,lVar1,local_1a8,lVar23,uVar14);
      _swift_getAssociatedConformanceWitness
                (lVar12,param_3,lVar5,0x100900ffc,&TargetProtocolRequirement_100901004);
      puVar11 = local_1b0;
      __sSD5countSivg(local_1b0,lVar5,param_4,lVar12);
      lVar5 = (long)puVar11 * local_1b8;
      if (SUB168(SEXT816((long)puVar11) * SEXT816(local_1b8),8) != lVar5 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10050afe0);
        (*pcVar4)();
      }
      if (!SCARRY8(*unaff_x20,lVar5)) {
        *unaff_x20 = *unaff_x20 + lVar5;
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10050afe4);
      (*pcVar4)();
    }
    iVar2 = *(int *)(lVar15 + 0x30);
    (**(code **)(lVar16 + 0x20))(puVar28,lVar19,lVar5);
    (**(code **)(lVar27 + 0x20))(puVar11,lVar19 + iVar2,param_4);
    local_58 = 0;
    (**(code **)(lVar12 + 0x30))(puVar28,1,&local_58,&DAT_1009ce318,&PTR_PTR_1009ce330,param_3);
    if (unaff_x21 != 0) {
      FUN_10003f638(lVar7,lVar1,local_1a8,lVar23,uVar14);
      (**(code **)(lVar27 + 8))(puVar11,param_4);
      (**(code **)(lVar16 + 8))(puVar28,lVar5);
      return;
    }
    FUN_1005097e0(puVar11,2,param_4,param_6);
    (**(code **)(lVar27 + 8))(puVar11,param_4);
    puVar8 = puVar28;
    lVar9 = lVar5;
    (**(code **)(lVar16 + 8))();
    if (local_58 < 0x80) {
      lVar23 = 1;
    }
    else if ((long)local_58 < 0) {
      lVar23 = 10;
    }
    else if (local_58 >> 0x23 == 0) {
      if (local_58 < 0x200000) {
        lVar23 = 2;
        if (local_58 < 0x4000) goto LAB_10050ae98;
      }
      else {
        lVar23 = 4;
        uVar14 = local_58;
LAB_10050ae8c:
        if (uVar14 >> 0x1c == 0) goto LAB_10050ae98;
      }
LAB_10050ae94:
      lVar23 = lVar23 + 1;
    }
    else {
      if (local_58 >> 0x31 != 0) {
        uVar14 = local_58 >> 0x1c;
        lVar23 = 8;
        goto LAB_10050ae8c;
      }
      lVar23 = 6;
      if (local_58 >> 0x2a != 0) goto LAB_10050ae94;
    }
LAB_10050ae98:
    if (SCARRY8(lVar23,local_58)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10050afd8);
      (*pcVar4)();
    }
    if (SCARRY8(*unaff_x20,lVar23 + local_58)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10050afdc);
      (*pcVar4)();
    }
    *unaff_x20 = *unaff_x20 + lVar23 + local_58;
    lVar23 = lVar25;
    uVar14 = local_f8;
  } while( true );
}

