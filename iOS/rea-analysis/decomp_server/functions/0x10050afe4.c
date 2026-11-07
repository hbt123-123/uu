// rea decompile_all
// name: FUN_10050afe4
// address: 0x10050afe4
// body: available
// range: 0x10050afe4-0x10050b82b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050afe4(undefined1 *param_1,uint param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *unaff_x20;
  long unaff_x21;
  undefined1 *puVar19;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  undefined1 *local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  undefined1 *local_188;
  ulong local_180;
  undefined8 local_178;
  undefined1 *local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  ulong local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  ulong local_110;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 local_90 [48];
  ulong local_58;
  
  lVar9 = *(long *)(param_4 + -8);
  uVar10 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = (long)(auStack_1c0 + -uVar10) - uVar10;
  local_120 = *(long *)(param_5 + 8);
  lVar4 = 0;
  local_198 = lVar11;
  local_178 = param_7;
  local_118 = param_3;
  _swift_getAssociatedTypeWitness();
  lVar12 = *(long *)(lVar4 + -8);
  uVar13 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_188 = (undefined1 *)(lVar11 - uVar13);
  lVar14 = (long)local_188 - uVar13;
  lVar11 = 0xff;
  local_1a0 = lVar14;
  _swift_getTupleTypeMetadata2(0xff,lVar4,param_4,"key value ",0);
  lVar5 = 0;
  __sSqMa(0,lVar11);
  local_148 = *(long *)(lVar5 + -8);
  uVar13 = *(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_150 = lVar14 - uVar13;
  local_158 = local_150 - uVar13;
  uVar2 = param_2 << 3;
  if (uVar2 < 0x80) {
    local_1b8 = 1;
  }
  else if (uVar2 < 0x4000) {
    local_1b8 = 2;
  }
  else if (uVar2 < 0x200000) {
    local_1b8 = 3;
  }
  else {
    local_1b8 = 4;
    if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
      local_1b8 = 5;
    }
  }
  lVar14 = local_120;
  _swift_getAssociatedConformanceWitness
            (local_120,local_118,lVar4,0x100900ffc,&TargetProtocolRequirement_100901004);
  lVar7 = lVar4;
  local_1b0 = param_1;
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    _swift_retain(param_1);
    __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
    __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
    lVar17 = -0xa8;
    puVar6 = auStack_e0;
    __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
              (auStack_b8,puVar6,lVar4,param_4,lVar14);
  }
  else {
    FUN_100532368(param_1,lVar4,param_4,lVar14);
    puVar6 = param_1;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    _swift_unknownObjectRetain(param_1);
    lVar17 = -0x80;
    __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
              (local_90,puVar6,lVar4,param_4,lVar14);
  }
  local_1a8 = *(long *)(&stack0x00000000 + lVar17);
  lVar14 = *(long *)(&stack0x00000008 + lVar17);
  local_138 = *(long *)(&stack0xfffffffffffffff0 + lVar17);
  local_160 = *(long *)(&stack0xfffffffffffffff8 + lVar17);
  local_180 = local_1a8 + 0x40U >> 6;
  local_130 = *(ulong *)(&stack0x00000010 + lVar17);
  puVar19 = local_188;
  local_190 = lVar5;
  local_170 = auStack_1c0 + -uVar10;
  local_168 = lVar11;
  local_140 = lVar4;
  do {
    lVar17 = local_138;
    local_128 = lVar14;
    if (local_138 < 0) {
      __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      lVar14 = local_1a0;
      if (puVar6 == (undefined1 *)0x0) {
        local_110 = local_130;
        lVar14 = local_128;
LAB_10050b4f8:
        uVar8 = 1;
        lVar7 = local_150;
      }
      else {
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(local_1a0);
        _swift_unknownObjectRelease(puVar6);
        lVar17 = local_198;
        __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(local_198,lVar7,param_4,param_4);
        _swift_unknownObjectRelease(lVar7);
        lVar7 = local_150;
        lVar11 = local_168;
        iVar1 = *(int *)(local_168 + 0x30);
        (**(code **)(lVar12 + 0x20))(local_150,lVar14,lVar4);
        (**(code **)(lVar9 + 0x20))(lVar7 + iVar1,lVar17,param_4);
        uVar8 = 0;
        local_110 = local_130;
        lVar14 = local_128;
      }
    }
    else {
      uVar10 = local_130;
      lVar18 = lVar14;
      if (local_130 == 0) {
        uVar13 = local_180;
        if ((long)local_180 <= lVar14 + 1) {
          uVar13 = lVar14 + 1;
        }
        do {
          lVar18 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10050b81c);
            (*pcVar3)();
          }
          if ((long)local_180 <= lVar18) {
            local_110 = 0;
            lVar14 = uVar13 - 1;
            goto LAB_10050b4f8;
          }
          uVar10 = *(ulong *)(local_160 + lVar18 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar10 == 0);
      }
      uVar13 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      local_110 = uVar10 - 1 & uVar10;
      uVar10 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar18 << 6;
      lVar11 = local_120;
      _swift_getAssociatedConformanceWitness
                (local_120,local_118,lVar4,0x100900ffc,&TargetProtocolRequirement_100901004);
      lVar5 = lVar17;
      __ss17_NativeDictionaryV5_keysSpyxGvg(lVar17,lVar4,param_4,lVar11);
      lVar15 = *(long *)(lVar12 + 0x48);
      FUN_100008290(lVar17,lVar4,param_4,lVar11);
      lVar14 = lVar17;
      __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar17,lVar4,param_4,lVar11);
      lVar16 = *(long *)(lVar9 + 0x48);
      FUN_100008290(lVar17,lVar4,param_4,lVar11);
      lVar7 = local_150;
      lVar11 = local_168;
      iVar1 = *(int *)(local_168 + 0x30);
      (**(code **)(lVar12 + 0x10))(local_150,lVar5 + lVar15 * uVar10,lVar4);
      (**(code **)(lVar9 + 0x10))(lVar7 + iVar1,lVar14 + lVar16 * uVar10,param_4);
      uVar8 = 0;
      puVar19 = local_188;
      lVar14 = lVar18;
      lVar5 = local_190;
    }
    lVar4 = *(long *)(lVar11 + -8);
    (**(code **)(lVar4 + 0x38))(lVar7,uVar8,1,lVar11);
    lVar17 = local_158;
    (**(code **)(local_148 + 0x20))(local_158,lVar7,lVar5);
    lVar7 = lVar17;
    (**(code **)(lVar4 + 0x30))(lVar17,1,lVar11);
    lVar4 = local_140;
    if ((int)lVar7 == 1) {
      FUN_10003f638(local_138,local_160,local_1a8,local_128,local_130);
      lVar11 = local_140;
      lVar4 = local_120;
      _swift_getAssociatedConformanceWitness
                (local_120,local_118,local_140,0x100900ffc,&TargetProtocolRequirement_100901004);
      puVar6 = local_1b0;
      __sSD5countSivg(local_1b0,lVar11,param_4,lVar4);
      lVar11 = (long)puVar6 * local_1b8;
      if (SUB168(SEXT816((long)puVar6) * SEXT816(local_1b8),8) != lVar11 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10050b828);
        (*pcVar3)();
      }
      if (!SCARRY8(*unaff_x20,lVar11)) {
        *unaff_x20 = *unaff_x20 + lVar11;
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10050b82c);
      (*pcVar3)();
    }
    iVar1 = *(int *)(lVar11 + 0x30);
    (**(code **)(lVar12 + 0x20))(puVar19,lVar17,local_140);
    puVar6 = local_170;
    (**(code **)(lVar9 + 0x20))(local_170,lVar17 + iVar1,param_4);
    local_58 = 0;
    (**(code **)(local_120 + 0x30))(puVar19,1,&local_58,&DAT_1009ce318,&PTR_PTR_1009ce330,local_118)
    ;
    if (unaff_x21 != 0) {
      FUN_10003f638(local_138,local_160,local_1a8,local_128,local_130);
      (**(code **)(lVar9 + 8))(puVar6,param_4);
      (**(code **)(lVar12 + 8))(puVar19,lVar4);
      return;
    }
    FUN_100509adc(puVar6,2,param_4,local_178);
    (**(code **)(lVar9 + 8))(puVar6,param_4);
    puVar6 = puVar19;
    lVar7 = lVar4;
    (**(code **)(lVar12 + 8))();
    if (local_58 < 0x80) {
      lVar17 = 1;
    }
    else if ((long)local_58 < 0) {
      lVar17 = 10;
    }
    else {
      if (local_58 >> 0x23 == 0) {
        if (0x1fffff < local_58) {
          lVar17 = 4;
          uVar10 = local_58 >> 0x1c;
          goto joined_r0x00010050b6c0;
        }
        lVar17 = 2;
        if (local_58 < 0x4000) goto LAB_10050b6c8;
      }
      else {
        if (local_58 >> 0x31 == 0) {
          uVar10 = local_58 >> 0x2a;
          lVar17 = 6;
        }
        else {
          lVar17 = 8;
          uVar10 = local_58 >> 0x38;
        }
joined_r0x00010050b6c0:
        if (uVar10 == 0) goto LAB_10050b6c8;
      }
      lVar17 = lVar17 + 1;
    }
LAB_10050b6c8:
    if (SCARRY8(lVar17,local_58)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10050b820);
      (*pcVar3)();
    }
    if (SCARRY8(*unaff_x20,lVar17 + local_58)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10050b824);
      (*pcVar3)();
    }
    *unaff_x20 = *unaff_x20 + lVar17 + local_58;
    local_130 = local_110;
  } while( true );
}

