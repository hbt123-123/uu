// rea decompile_all
// name: FUN_100284260
// address: 0x100284260
// body: available
// range: 0x100284260-0x1002849cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002849c8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100284260(ID *param_1,long param_2,long param_3)

{
  uint uVar1;
  ID *pIVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ID IVar9;
  ID IVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x21;
  long lVar19;
  long lVar20;
  long *plVar21;
  ID IVar22;
  undefined8 uVar23;
  long lVar24;
  undefined1 auStack_f0 [8];
  ID *local_e8;
  undefined1 *local_e0;
  long local_d8;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar4 = 0;
  local_e8 = param_1;
  local_d8 = param_2;
  __s10Foundation10URLRequestVMa();
  lVar18 = *(long *)(lVar4 + -8);
  lVar13 = *(long *)(lVar18 + 0x40);
  puVar8 = &DAT_100a82460;
  local_e0 = auStack_f0 + -(lVar13 + 0xfU & 0xfffffffffffffff0);
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar14 = (long)(auStack_f0 + -(lVar13 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0;
  FUN_1002c76a8();
  lVar24 = lVar14 - (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  uVar15 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = lVar24 - uVar15;
  IVar22 = lVar17 - uVar15;
  plVar21 = *(long **)(param_3 + _TtC9Alamofire7Request::mutableState);
  uVar23 = *(undefined8 *)(plVar21[2] + 0x10);
  _os_unfair_lock_lock(uVar23);
  lVar20 = *(long *)(*plVar21 + 0x60);
  _swift_beginAccess((long)plVar21 + lVar20,auStack_80,0,0);
  FUN_10028ab0c((long)plVar21 + lVar20,lVar24);
  lVar19 = *(long *)(lVar24 + 0x148);
  _swift_bridgeObjectRetain(lVar19);
  FUN_1000d27dc(lVar24,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar23);
  lVar16 = *(long *)(lVar19 + 0x10);
  if (lVar16 != 0) {
    (**(code **)(lVar18 + 0x10))
              (IVar22,lVar19 + ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar18 + 0x48) * (lVar16 + -1),lVar4);
  }
  _swift_bridgeObjectRelease(lVar19);
  IVar9 = IVar22;
  (**(code **)(lVar18 + 0x38))(IVar22,lVar16 == 0,1,lVar4);
  FUN_1002c85ec();
  lVar19 = *(long *)(param_3 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar23 = *(undefined8 *)(*(long *)(lVar19 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar23);
  _swift_beginAccess(lVar19 + 0x18,auStack_98,0,0);
  lVar16 = *(long *)(lVar19 + 0x18);
  uVar15 = *(ulong *)(lVar19 + 0x20);
  FUN_10010bd10(lVar16,uVar15);
  _os_unfair_lock_unlock(uVar23);
  uVar23 = *(undefined8 *)(plVar21[2] + 0x10);
  _os_unfair_lock_lock(uVar23);
  FUN_10028ab0c((long)plVar21 + lVar20,lVar24);
  FUN_10007f314(lVar24 + *(int *)(lVar13 + 0x5c),lVar14,&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar24,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar23);
  lVar19 = 0;
  FUN_100277ad0();
  lVar13 = lVar14;
  (**(code **)(*(long *)(lVar19 + -8) + 0x30))(lVar14,1,lVar19);
  if ((int)lVar13 != 1) {
    puVar5 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar19,puVar5,0,0);
    FUN_10026531c(lVar14);
    _swift_willThrow();
    FUN_100006cc8(lVar16,uVar15);
    goto LAB_1002847b0;
  }
  FUN_100040bb4(lVar14,&DAT_100a82460,&DAT_1008175c0);
  lVar13 = local_d8;
  if (uVar15 >> 0x3c < 0xf) {
    uVar1 = (uint)(uVar15 >> 0x20);
    uVar12 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar12 == 0) {
        if ((uVar15 & 0xff000000000000) != 0) goto LAB_100284810;
        goto LAB_1002845f4;
      }
      if ((long)(int)lVar16 != lVar16 >> 0x20) goto LAB_100284800;
    }
    else if (uVar12 == 2) {
      if (*(long *)(lVar16 + 0x10) != *(long *)(lVar16 + 0x18)) {
LAB_100284800:
        FUN_10010bd10(lVar16,uVar15);
LAB_100284810:
        uVar23 = *(undefined8 *)(lVar13 + 0x28);
        lVar4 = *(long *)(lVar13 + 0x30);
        FUN_10003f030(lVar13 + 0x10,uVar23);
        lVar17 = lVar16;
        uVar7 = uVar15;
        (**(code **)(lVar4 + 8))(lVar16,uVar15,uVar23,lVar4);
        FUN_100006cc8(lVar16,uVar15);
        if (unaff_x21 == 0) {
          lVar4 = lVar17;
          __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar17,uVar7);
          local_a0 = 0;
          IVar9 = NSJSONSerialization::JSONObjectWithData_options_error_
                            ((ID)&_OBJC_CLASS___NSJSONSerialization,
                             "JSONObjectWithData:options:error:",lVar4,
                             *(undefined8 *)(lVar13 + 0x48),&local_a0);
          if (IVar9 == 0) {
            uVar23 = local_a0;
            __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
            _swift_willThrow(0);
            puVar5 = &DAT_100a824a8;
            FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,
                          &TargetProtocolConformanceDescriptor_100816c70);
            _swift_allocError(lVar19,puVar5,0,0);
            *puVar5 = uVar23;
            uVar11 = 0;
            FUN_100278368(0);
            _swift_storeEnumTagMultiPayload(puVar5,uVar11,2);
            _swift_storeEnumTagMultiPayload(puVar5,lVar19,10);
            _swift_willThrow();
            _swift_errorRetain(uVar23);
            FUN_100006cdc(lVar17,uVar7);
            FUN_100006cc8(lVar16,uVar15);
            _swift_errorRelease(uVar23);
            goto LAB_1002847b0;
          }
          __ss018_bridgeAnyObjectToB0yypyXlSgF(local_e8,IVar9);
          _swift_unknownObjectRelease(IVar9);
          FUN_100006cdc(lVar17,uVar7);
        }
        FUN_100006cc8(lVar16,uVar15);
        goto LAB_1002847b0;
      }
    }
    else {
LAB_1002845f4:
      FUN_100006cc8(lVar16,uVar15);
    }
  }
  FUN_10007f314(IVar22,lVar17,&DAT_100a82c30,&DAT_1008171f0);
  lVar14 = lVar17;
  (**(code **)(lVar18 + 0x30))(lVar17,1,lVar4);
  puVar3 = local_e0;
  if ((int)lVar14 == 1) {
LAB_1002846ac:
    if (IVar9 != 0) {
      uVar7 = _objc_msgSend(IVar9,"statusCode");
      FUN_100348358(uVar7,lVar13);
      if ((uVar7 & 1) != 0) goto LAB_1002846d8;
    }
    puVar5 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar19,puVar5,0,0);
    uVar23 = 0;
    FUN_100278368(0);
    _swift_storeEnumTagMultiPayload(puVar5,uVar23,6);
    _swift_storeEnumTagMultiPayload(puVar5,lVar19,10);
    _swift_willThrow();
    FUN_100006cc8(lVar16,uVar15);
  }
  else {
    puVar6 = local_e0;
    (**(code **)(lVar18 + 0x20))(local_e0,lVar17,lVar4);
    __s10Foundation10URLRequestV10httpMethodSSSgvg();
    (**(code **)(lVar18 + 8))(puVar3,lVar4);
    if (lVar17 == 0) goto LAB_1002846ac;
    FUN_100153074(puVar6,lVar17,*(undefined8 *)(lVar13 + 0x40));
    _swift_bridgeObjectRelease(lVar17);
    if (((ulong)puVar6 & 1) == 0) goto LAB_1002846ac;
LAB_1002846d8:
    puVar8 = &_OBJC_CLASS___NSNull;
    _objc_allocWithZone();
    IVar9 = _objc_msgSend((ID)puVar8,"init");
    IVar10 = 0;
    FUN_10004003c(0,&DAT_100a82c48,&PTR__OBJC_CLASS___NSNull_100a659f8);
    pIVar2 = local_e8;
    local_e8[3] = IVar10;
    FUN_100006cc8(lVar16,uVar15);
    *pIVar2 = IVar9;
  }
LAB_1002847b0:
  FUN_100040bb4(IVar22,&DAT_100a82c30,&DAT_1008171f0);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

