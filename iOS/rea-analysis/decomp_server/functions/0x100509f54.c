// rea decompile_all
// name: FUN_100509f54
// address: 0x100509f54
// body: available
// range: 0x100509f54-0x10050a7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100509f54(undefined1 *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *unaff_x20;
  long unaff_x21;
  undefined1 *puVar19;
  long lVar20;
  long local_1c0;
  undefined1 *local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  undefined1 *local_198;
  long local_190;
  ulong local_188;
  long local_180;
  undefined8 local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  ulong local_128;
  long local_120;
  undefined8 local_118;
  ulong local_110;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 local_90 [48];
  ulong local_58;
  
  local_180 = *(long *)(param_6 + 8);
  lVar6 = 0;
  local_178 = param_4;
  _swift_getAssociatedTypeWitness
            (0,local_180,param_4,0x100900ffc,&TargetProtocolRequirement_10090100c);
  lVar11 = *(long *)(lVar6 + -8);
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_170 = (long)&local_1c0 - uVar12;
  lVar13 = local_170 - uVar12;
  local_120 = *(long *)(param_5 + 8);
  lVar7 = 0;
  local_1a0 = lVar13;
  local_118 = param_3;
  _swift_getAssociatedTypeWitness
            (0,local_120,param_3,0x100900ffc,&TargetProtocolRequirement_10090100c);
  lVar14 = *(long *)(lVar7 + -8);
  uVar12 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar19 = (undefined1 *)(lVar13 - uVar12);
  lVar15 = (long)puVar19 - uVar12;
  lVar13 = 0xff;
  local_1a8 = lVar15;
  _swift_getTupleTypeMetadata2(0xff,lVar7,lVar6,"key value ",0);
  lVar8 = 0;
  __sSqMa(0,lVar13);
  local_148 = *(long *)(lVar8 + -8);
  uVar12 = *(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_190 = lVar15 - uVar12;
  local_150 = local_190 - uVar12;
  uVar2 = param_2 << 3;
  if (uVar2 < 0x80) {
    local_1c0 = 1;
  }
  else if (uVar2 < 0x4000) {
    local_1c0 = 2;
  }
  else if (uVar2 < 0x200000) {
    local_1c0 = 3;
  }
  else {
    local_1c0 = 4;
    if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
      local_1c0 = 5;
    }
  }
  lVar15 = local_120;
  local_140 = lVar8;
  _swift_getAssociatedConformanceWitness
            (local_120,local_118,lVar7,0x100900ffc,&TargetProtocolRequirement_100901004);
  lVar8 = lVar7;
  local_1b8 = param_1;
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    _swift_retain(param_1);
    __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
    __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
    lVar20 = -0xa8;
    puVar9 = auStack_e0;
    __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
              (auStack_b8,puVar9,lVar7,lVar6,lVar15);
  }
  else {
    FUN_100532368(param_1,lVar7,lVar6,lVar15);
    puVar9 = param_1;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    _swift_unknownObjectRetain(param_1);
    lVar20 = -0x80;
    __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC(local_90,puVar9,lVar7,lVar6,lVar15)
    ;
  }
  local_1b0 = *(long *)(&stack0x00000000 + lVar20);
  lVar15 = *(long *)(&stack0x00000008 + lVar20);
  local_130 = *(long *)(&stack0xfffffffffffffff0 + lVar20);
  local_158 = *(long *)(&stack0xfffffffffffffff8 + lVar20);
  local_188 = local_1b0 + 0x40U >> 6;
  local_128 = *(ulong *)(&stack0x00000010 + lVar20);
  lVar20 = local_190;
  local_198 = puVar19;
  local_168 = lVar13;
  local_138 = lVar7;
  do {
    lVar4 = local_130;
    lVar18 = lVar15;
    local_160 = lVar15;
    if (local_130 < 0) {
      __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      lVar15 = local_1a8;
      bVar10 = puVar9 == (undefined1 *)0x0;
      if (!bVar10) {
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(local_1a8);
        _swift_unknownObjectRelease(puVar9);
        lVar4 = local_1a0;
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(local_1a0,lVar8,lVar6,lVar6);
        _swift_unknownObjectRelease(lVar8);
        lVar13 = local_168;
        iVar1 = *(int *)(local_168 + 0x30);
        (**(code **)(lVar14 + 0x20))(lVar20,lVar15,lVar7);
        (**(code **)(lVar11 + 0x20))(lVar20 + iVar1,lVar4,lVar6);
      }
      local_110 = local_128;
    }
    else {
      uVar12 = local_128;
      if (local_128 == 0) {
        uVar3 = local_188;
        if ((long)local_188 <= lVar15 + 1) {
          uVar3 = lVar15 + 1;
        }
        do {
          lVar18 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10050a7ac);
            (*pcVar5)();
          }
          if ((long)local_188 <= lVar18) {
            local_110 = 0;
            bVar10 = true;
            lVar18 = uVar3 - 1;
            goto LAB_10050a47c;
          }
          uVar12 = *(ulong *)(local_158 + lVar18 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar12 == 0);
      }
      uVar3 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      local_110 = uVar12 - 1 & uVar12;
      uVar12 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar18 << 6;
      lVar13 = local_120;
      _swift_getAssociatedConformanceWitness
                (local_120,local_118,lVar7,0x100900ffc,&TargetProtocolRequirement_100901004);
      lVar8 = lVar4;
      __ss17_NativeDictionaryV5_keysSpyxGvg(lVar4,lVar7,lVar6,lVar13);
      lVar16 = *(long *)(lVar14 + 0x48);
      FUN_100008290(lVar4,lVar7,lVar6,lVar13);
      lVar15 = lVar4;
      __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar4,lVar7,lVar6,lVar13);
      lVar17 = *(long *)(lVar11 + 0x48);
      FUN_100008290(lVar4,lVar7,lVar6,lVar13);
      lVar13 = local_168;
      lVar20 = local_190;
      iVar1 = *(int *)(local_168 + 0x30);
      (**(code **)(lVar14 + 0x10))(local_190,lVar8 + lVar16 * uVar12,lVar7);
      (**(code **)(lVar11 + 0x10))(lVar20 + iVar1,lVar15 + lVar17 * uVar12,lVar6);
      bVar10 = false;
      puVar19 = local_198;
    }
LAB_10050a47c:
    lVar15 = lVar18;
    lVar7 = *(long *)(lVar13 + -8);
    (**(code **)(lVar7 + 0x38))(lVar20,bVar10,1,lVar13);
    lVar8 = local_150;
    (**(code **)(local_148 + 0x20))(local_150,lVar20,local_140);
    lVar18 = lVar8;
    (**(code **)(lVar7 + 0x30))(lVar8,1,lVar13);
    lVar7 = local_138;
    if ((int)lVar18 == 1) {
      FUN_10003f638(local_130,local_158,local_1b0,local_160,local_128);
      lVar13 = local_138;
      lVar7 = local_120;
      _swift_getAssociatedConformanceWitness
                (local_120,local_118,local_138,0x100900ffc,&TargetProtocolRequirement_100901004);
      puVar19 = local_1b8;
      __sSD5countSivg(local_1b8,lVar13,lVar6,lVar7);
      lVar13 = (long)puVar19 * local_1c0;
      if (SUB168(SEXT816((long)puVar19) * SEXT816(local_1c0),8) != lVar13 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10050a7b8);
        (*pcVar5)();
      }
      if (!SCARRY8(*unaff_x20,lVar13)) {
        *unaff_x20 = *unaff_x20 + lVar13;
        return;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10050a7bc);
      (*pcVar5)();
    }
    iVar1 = *(int *)(lVar13 + 0x30);
    (**(code **)(lVar14 + 0x20))(puVar19,lVar8,local_138);
    lVar18 = local_170;
    (**(code **)(lVar11 + 0x20))(local_170,lVar8 + iVar1,lVar6);
    local_58 = 0;
    (**(code **)(local_120 + 0x30))(puVar19,1,&local_58,&DAT_1009ce318,&PTR_PTR_1009ce330,local_118)
    ;
    if (unaff_x21 != 0) {
      FUN_10003f638(local_130,local_158,local_1b0,local_160,local_128);
      (**(code **)(lVar11 + 8))(lVar18,lVar6);
      (**(code **)(lVar14 + 8))(puVar19,lVar7);
      return;
    }
    (**(code **)(local_180 + 0x30))(lVar18,2,&local_58,&DAT_1009ce318,&PTR_PTR_1009ce330,local_178);
    (**(code **)(lVar11 + 8))(lVar18,lVar6);
    puVar9 = puVar19;
    lVar8 = lVar7;
    (**(code **)(lVar14 + 8))();
    if (local_58 < 0x80) {
      lVar18 = 1;
    }
    else if ((long)local_58 < 0) {
      lVar18 = 10;
    }
    else if (local_58 >> 0x23 == 0) {
      if (local_58 < 0x200000) {
        lVar18 = 2;
        if (local_58 < 0x4000) goto LAB_10050a650;
      }
      else {
        lVar18 = 4;
        uVar12 = local_58;
LAB_10050a644:
        if (uVar12 >> 0x1c == 0) goto LAB_10050a650;
      }
LAB_10050a64c:
      lVar18 = lVar18 + 1;
    }
    else {
      if (local_58 >> 0x31 != 0) {
        uVar12 = local_58 >> 0x1c;
        lVar18 = 8;
        goto LAB_10050a644;
      }
      lVar18 = 6;
      if (local_58 >> 0x2a != 0) goto LAB_10050a64c;
    }
LAB_10050a650:
    if (SCARRY8(lVar18,local_58)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10050a7b0);
      (*pcVar5)();
    }
    if (SCARRY8(*unaff_x20,lVar18 + local_58)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10050a7b4);
      (*pcVar5)();
    }
    *unaff_x20 = *unaff_x20 + lVar18 + local_58;
    local_128 = local_110;
  } while( true );
}

