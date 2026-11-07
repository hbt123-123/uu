// rea decompile_all
// name: FUN_100273614
// address: 0x100273614
// body: available
// range: 0x100273614-0x100274133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100274130 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100273ec0) */

void FUN_100273614(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,uint param_6,long *param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ID *pIVar6;
  ID IVar7;
  long **pplVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  TargetProtocolConformanceDescriptor *pTVar13;
  char *pcVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  long *unaff_x20;
  long unaff_x21;
  long lVar24;
  code *pcVar25;
  long lVar26;
  undefined1 auStack_1b0 [8];
  undefined8 *local_1a8;
  ID local_138 [11];
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __sSqMa(0,param_7);
  lVar16 = *(long *)(lVar2 + -8);
  uVar17 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar22 = auStack_1b0 + -uVar17;
  puVar18 = puVar22 + -uVar17;
  lVar19 = param_7[-1];
  uVar17 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar23 = (long)puVar18 - uVar17;
  lVar20 = lVar23 - uVar17;
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar21 = *(long *)(lVar3 + -8);
  lVar26 = lVar20 - (*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)0x0;
  FUN_100274540(0,param_7,param_8);
  lVar24 = lVar26 - (*(long *)(puVar4[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_4 == 0) {
LAB_1002739d4:
    puVar4 = (undefined8 *)unaff_x20[3];
    pcVar14 = (char *)unaff_x20[4];
    puVar9 = puVar4;
    FUN_100008184(puVar4,pcVar14);
  }
  else {
    local_1a8 = puVar4;
    FUN_100273260(&local_e0,param_6 & 1);
    if (unaff_x21 != 0) goto LAB_1002740bc;
    uVar5 = 0;
    FUN_10004003c(0,&DAT_100a81870,&PTR__OBJC_CLASS___NSDictionary_100a65898);
    pIVar6 = local_138;
    _swift_dynamicCast(pIVar6,&local_e0,PTR___sypN_100995e88 + 8,uVar5,6);
    if ((int)pIVar6 == 0) {
      uStack_b8 = 0;
      local_c0 = (long *)0x0;
      lStack_a8 = 0;
      local_b0 = 0;
LAB_100273978:
      pplVar8 = &local_c0;
      FUN_100040bb4(pplVar8,&DAT_100a81320,&DAT_1008153f0);
      if ((param_6 & 1) != 0) {
        FUN_100262084();
        _swift_allocError(&DAT_1009a8e98,pplVar8,0,0);
        *pplVar8 = unaff_x20;
        pplVar8[1] = (long *)0x0;
        *(undefined1 *)(pplVar8 + 2) = 1;
        _swift_willThrow();
        _swift_retain(unaff_x20);
        goto LAB_1002740bc;
      }
      goto LAB_1002739d4;
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    IVar7 = _objc_msgSend(local_138[0],"valueForKeyPath:",param_3);
    if (IVar7 == 0) {
      uStack_d8 = 0;
      local_e0 = (long *)0x0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_e0,IVar7);
      _swift_unknownObjectRelease(IVar7);
    }
    lStack_a8 = lStack_c8;
    local_b0 = uStack_d0;
    uStack_b8 = uStack_d8;
    local_c0 = local_e0;
    if (lStack_c8 == 0) goto LAB_100273978;
    thunk_FUN_10007f3d4(&local_c0,&local_98);
    puVar4 = &local_98;
    FUN_10003f030(puVar4,local_80);
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    IVar7 = NSJSONSerialization::isValidJSONObject_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,"isValidJSONObject:",puVar4);
    _swift_unknownObjectRelease(puVar4);
    if ((int)IVar7 == 0) {
      plVar10 = (long *)&DAT_100a81880;
      FUN_100004bb4(&DAT_100a81880,&DAT_100815c60);
      _swift_initStackObject();
      plVar10[3] = 2;
      plVar10[2] = 1;
      plVar10[4] = 0x65756c6176;
      plVar10[5] = -0x1b00000000000000;
      FUN_10003e8bc(&local_98,plVar10 + 6);
      plVar11 = plVar10;
      FUN_100264d0c();
      _swift_setDeallocating(plVar10);
      FUN_100040bb4(plVar10 + 4,&DAT_100a81310,&DAT_1008153d8);
      local_c0 = plVar11;
      _swift_bridgeObjectRetain(plVar11);
      puVar12 = &DAT_100a81888;
      FUN_100004bb4(&DAT_100a81888,&DAT_100815c70);
      pplVar8 = &local_c0;
      __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(pplVar8,puVar12);
      IVar7 = NSJSONSerialization::isValidJSONObject_
                        ((ID)&_OBJC_CLASS___NSJSONSerialization,"isValidJSONObject:",pplVar8);
      _swift_unknownObjectRelease(pplVar8);
      if ((int)IVar7 != 0) {
        local_c0 = plVar11;
        _swift_bridgeObjectRetain(plVar11);
        pplVar8 = &local_c0;
        __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(pplVar8,puVar12);
        local_c0 = (long *)0x0;
        pcVar14 = "dataWithJSONObject:options:error:";
        IVar7 = NSJSONSerialization::dataWithJSONObject_options_error_
                          ((ID)&_OBJC_CLASS___NSJSONSerialization,
                           "dataWithJSONObject:options:error:",pplVar8,0,&local_c0);
        _swift_unknownObjectRelease(pplVar8);
        if (IVar7 != 0) {
          __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar7);
          _swift_bridgeObjectRelease(plVar11);
          puVar4 = local_1a8;
          pTVar13 = &TargetProtocolConformanceDescriptor_100815d48;
          _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100815d48,local_1a8);
          __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                    (lVar24,puVar4,IVar7,pcVar14,puVar4,pTVar13);
          FUN_10003f094(&local_98);
          FUN_100006cdc(IVar7,pcVar14);
          (**(code **)(lVar19 + 0x20))(param_1,lVar24,param_7);
          goto LAB_1002740bc;
        }
        plVar10 = local_c0;
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_c0);
        puVar4 = (undefined8 *)0x0;
        _swift_willThrow();
        FUN_100262084();
        _swift_allocError(&DAT_1009a8e98,puVar4,0,0);
        *puVar4 = unaff_x20;
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 1;
        _swift_willThrow();
        _swift_retain(unaff_x20);
        _swift_bridgeObjectRelease(plVar11);
        goto LAB_1002740ac;
      }
      _swift_bridgeObjectRelease();
      FUN_100262084();
      _swift_allocError(&DAT_1009a8e98,plVar11,0,0);
      *plVar11 = (long)unaff_x20;
      plVar11[1] = 0;
      *(undefined1 *)(plVar11 + 2) = 1;
      _swift_willThrow();
      _swift_retain(unaff_x20);
LAB_1002740b4:
      FUN_10003f094(&local_98);
      goto LAB_1002740bc;
    }
    puVar9 = &local_98;
    FUN_10003f030(puVar9,local_80);
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    local_c0 = (long *)0x0;
    pcVar14 = "dataWithJSONObject:options:error:";
    puVar4 = (undefined8 *)
             NSJSONSerialization::dataWithJSONObject_options_error_
                       ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                        puVar9,0,&local_c0);
    _swift_unknownObjectRelease(puVar9);
    if (puVar4 == (undefined8 *)0x0) {
      plVar10 = local_c0;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_c0);
      puVar4 = (undefined8 *)0x0;
      _swift_willThrow();
      FUN_100262084();
      _swift_allocError(&DAT_1009a8e98,puVar4,0,0);
      *puVar4 = unaff_x20;
      puVar4[1] = 0;
      *(undefined1 *)(puVar4 + 2) = 1;
      _swift_willThrow();
      _swift_retain(unaff_x20);
LAB_1002740ac:
      _swift_errorRelease(plVar10);
      goto LAB_1002740b4;
    }
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    puVar9 = &local_98;
    FUN_10003f094();
  }
  uVar1 = (uint)((ulong)pcVar14 >> 0x20);
  uVar15 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar15 == 0) {
      if (((ulong)pcVar14 & 0xff000000000000) == 0) {
LAB_100273a28:
        if ((param_6 & 1) == 0) {
          local_98 = 0x7d7b;
          uStack_90 = 0xe200000000000000;
          __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar26);
          FUN_10027454c();
          uVar17 = 0;
          lVar24 = lVar26;
          local_1a8 = puVar9;
          __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                    (lVar26,0,PTR___sSSN_1009957f8);
          pcVar25 = *(code **)(lVar21 + 8);
          (*pcVar25)(lVar26,lVar3);
          if (uVar17 >> 0x3c < 0xf) {
            __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                      (puVar18,param_7,lVar24,uVar17,param_7,param_8);
            if (unaff_x21 != 0) {
              _swift_errorRelease(unaff_x21);
              FUN_100006cc8(lVar24,uVar17);
              (**(code **)(lVar19 + 0x38))(puVar18,1,1,param_7);
              (**(code **)(lVar16 + 8))(puVar18,lVar2);
              unaff_x21 = 0;
              goto LAB_100273b3c;
            }
            FUN_100006cdc(puVar4,pcVar14);
            FUN_100006cc8(lVar24,uVar17);
            (**(code **)(lVar19 + 0x38))(puVar18,0,1,param_7);
            pcVar25 = *(code **)(lVar19 + 0x20);
LAB_100273f70:
            (*pcVar25)(lVar20,puVar18,param_7);
            (*pcVar25)(param_1,lVar20,param_7);
            goto LAB_1002740bc;
          }
LAB_100273b3c:
          local_98 = 0x5d7d7b5b;
          uStack_90 = 0xe400000000000000;
          __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar26);
          uVar17 = 0;
          lVar20 = lVar26;
          __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                    (lVar26,0,PTR___sSSN_1009957f8,local_1a8);
          (*pcVar25)(lVar26,lVar3);
          if (uVar17 >> 0x3c < 0xf) {
            __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                      (puVar22,param_7,lVar20,uVar17,param_7,param_8);
            if (unaff_x21 == 0) {
              FUN_100006cdc(puVar4,pcVar14);
              FUN_100006cc8(lVar20,uVar17);
              (**(code **)(lVar19 + 0x38))(puVar22,0,1,param_7);
              pcVar25 = *(code **)(lVar19 + 0x20);
              puVar18 = puVar22;
              lVar20 = lVar23;
              goto LAB_100273f70;
            }
            _swift_errorRelease(unaff_x21);
            FUN_100006cc8(lVar20,uVar17);
            (**(code **)(lVar19 + 0x38))(puVar22,1,1,param_7);
            (**(code **)(lVar16 + 8))(puVar22,lVar2);
            unaff_x21 = 0;
          }
        }
      }
    }
    else if ((long)(int)puVar4 == (long)puVar4 >> 0x20) goto LAB_100273a28;
  }
  else if ((uVar15 != 2) || (puVar4[2] == puVar4[3])) goto LAB_100273a28;
  __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
            (param_1,param_7,puVar4,pcVar14,param_7,param_8);
  if (unaff_x21 == 0) {
    FUN_100006cdc(puVar4,pcVar14);
  }
  else {
    FUN_100262084();
    _swift_allocError(&DAT_1009a8e98,param_7,0,0);
    *param_7 = unaff_x21;
    param_7[1] = (long)unaff_x20;
    *(undefined1 *)(param_7 + 2) = 3;
    _swift_willThrow();
    _swift_retain(unaff_x20);
    FUN_100006cdc(puVar4,pcVar14);
  }
LAB_1002740bc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

