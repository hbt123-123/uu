// rea decompile_all
// name: FUN_1003467c0
// address: 0x1003467c0
// body: available
// range: 0x1003467c0-0x100346c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100346c38 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003467c0(ID *param_1,undefined8 param_2,ID param_3,long param_4,ulong param_5,long param_6
                  )

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  long unaff_x20;
  ID *pIVar14;
  long unaff_x21;
  long lVar15;
  ID local_a0;
  long local_98;
  ID *local_90;
  undefined8 local_88;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  local_88 = param_2;
  __s10Foundation10URLRequestVMa();
  lVar13 = *(long *)(lVar2 + -8);
  uVar5 = (long)&local_a0 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  uVar9 = local_88;
  lVar15 = uVar5 - (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_6 == 0) {
    local_a0 = param_3;
    local_98 = lVar13;
    local_90 = param_1;
    if (param_5 >> 0x3c < 0xf) {
      uVar1 = (uint)(param_5 >> 0x20);
      uVar12 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar12 == 0) {
          if ((param_5 & 0xff000000000000) != 0) goto LAB_100346a7c;
          goto LAB_1003468cc;
        }
        if ((long)(int)param_4 != param_4 >> 0x20) goto LAB_100346a6c;
      }
      else if (uVar12 == 2) {
        if (*(long *)(param_4 + 0x10) != *(long *)(param_4 + 0x18)) {
LAB_100346a6c:
          FUN_10010bd10(param_4,param_5);
LAB_100346a7c:
          uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
          lVar2 = *(long *)(unaff_x20 + 0x30);
          FUN_10003f030(unaff_x20 + 0x10,uVar9);
          lVar15 = param_4;
          uVar5 = param_5;
          (**(code **)(lVar2 + 8))(param_4,param_5,uVar9,lVar2);
          FUN_100006cc8(param_4,param_5);
          if (unaff_x21 == 0) {
            lVar2 = lVar15;
            __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar15,uVar5);
            local_70 = 0;
            IVar7 = NSJSONSerialization::JSONObjectWithData_options_error_
                              ((ID)&_OBJC_CLASS___NSJSONSerialization,
                               "JSONObjectWithData:options:error:",lVar2,
                               *(undefined8 *)(unaff_x20 + 0x48),&local_70);
            if (IVar7 != 0) {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(local_90,IVar7);
              _swift_unknownObjectRelease(IVar7);
              FUN_100006cdc(lVar15,uVar5);
              goto LAB_100346ad4;
            }
            uVar9 = local_70;
            __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
            _swift_willThrow(0);
            uVar10 = 0;
            FUN_100277ad0(0);
            puVar11 = &DAT_100a824a8;
            FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,
                          &TargetProtocolConformanceDescriptor_100816c70);
            _swift_allocError(uVar10,puVar11,0,0);
            *puVar11 = uVar9;
            uVar9 = 0;
            FUN_100278368(0);
            _swift_storeEnumTagMultiPayload(puVar11,uVar9,2);
            _swift_storeEnumTagMultiPayload(puVar11,uVar10,10);
            _swift_willThrow();
            FUN_100006cdc(lVar15,uVar5);
          }
          goto LAB_100346acc;
        }
      }
      else {
LAB_1003468cc:
        FUN_100006cc8(param_4,param_5);
      }
    }
    FUN_10007f314(uVar9,lVar15,&DAT_100a82c30,&DAT_1008171f0);
    lVar13 = local_98;
    lVar3 = lVar15;
    (**(code **)(local_98 + 0x30))(lVar15,1,lVar2);
    if ((int)lVar3 != 1) {
      uVar4 = uVar5;
      (**(code **)(lVar13 + 0x20))(uVar5,lVar15,lVar2);
      __s10Foundation10URLRequestV10httpMethodSSSgvg();
      (**(code **)(lVar13 + 8))(uVar5,lVar2);
      if (lVar15 == 0) goto LAB_100346994;
      FUN_100153074(uVar4,lVar15,*(undefined8 *)(unaff_x20 + 0x40));
      _swift_bridgeObjectRelease(lVar15);
      pIVar14 = local_90;
      if ((uVar4 & 1) == 0) goto LAB_100346994;
LAB_1003469c4:
      puVar6 = &_OBJC_CLASS___NSNull;
      _objc_allocWithZone();
      IVar7 = _objc_msgSend((ID)puVar6,"init");
      IVar8 = 0;
      FUN_100347b80();
      pIVar14[3] = IVar8;
      *pIVar14 = IVar7;
      goto LAB_100346ad4;
    }
LAB_100346994:
    pIVar14 = local_90;
    if (local_a0 != 0) {
      uVar5 = _objc_msgSend(local_a0,"statusCode");
      FUN_1003440c0(uVar5,unaff_x20);
      if ((uVar5 & 1) != 0) goto LAB_1003469c4;
    }
    uVar9 = 0;
    FUN_100277ad0(0);
    puVar11 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar9,puVar11,0,0);
    uVar10 = 0;
    FUN_100278368(0);
    _swift_storeEnumTagMultiPayload(puVar11,uVar10,6);
    _swift_storeEnumTagMultiPayload(puVar11,uVar9,10);
    _swift_willThrow();
  }
  else {
    _swift_willThrow();
  }
LAB_100346acc:
  _swift_errorRetain(param_6);
LAB_100346ad4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

