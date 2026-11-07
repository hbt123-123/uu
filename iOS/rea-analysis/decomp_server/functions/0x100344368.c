// rea decompile_all
// name: FUN_100344368
// address: 0x100344368
// body: available
// range: 0x100344368-0x100344a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100344a58 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100344368(ID *param_1,undefined8 param_2,ID param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  ID *pIVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ID IVar11;
  ID IVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x20;
  long lVar19;
  long unaff_x21;
  long lVar20;
  long lVar21;
  undefined1 auStack_d0 [8];
  long local_c8;
  ID *local_c0;
  long local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar21 = *(long *)(lVar4 + -8);
  lVar16 = *(long *)(lVar21 + 0x40);
  puVar10 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar19 = (long)(auStack_d0 + -(lVar16 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar20 = lVar19 - (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar5 + -8);
  if (param_5 == 0) {
    local_c0 = param_1;
    local_b8 = lVar19;
    local_b0 = auStack_d0 + -(lVar16 + 0xfU & 0xfffffffffffffff0);
    local_a8 = param_2;
    local_a0 = lVar20 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
    local_98 = param_5;
    FUN_10007f314(param_4,lVar20,&DAT_100a83428,&DAT_100817bb0);
    lVar19 = lVar20;
    (**(code **)(lVar18 + 0x30))(lVar20,1,lVar5);
    lVar16 = local_a0;
    if ((int)lVar19 == 1) {
      FUN_100040bb4(lVar20,&DAT_100a83428,&DAT_100817bb0);
      uVar6 = 0;
      FUN_100277ad0(0);
      puVar13 = &DAT_100a824a8;
      FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
      _swift_allocError(uVar6,puVar13,0,0);
      uVar7 = 0;
      FUN_100278368(0);
      _swift_storeEnumTagMultiPayload(puVar13,uVar7,7);
      _swift_storeEnumTagMultiPayload(puVar13,uVar6,10);
      _swift_willThrow();
      param_5 = local_98;
    }
    else {
      (**(code **)(lVar18 + 0x20))(local_a0,lVar20,lVar5);
      uVar14 = 0;
      lVar20 = lVar16;
      __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC();
      puVar3 = local_b0;
      lVar19 = local_b8;
      if (unaff_x21 == 0) {
        uVar1 = (uint)(uVar14 >> 0x20);
        uVar15 = uVar1 >> 0x1e;
        local_c8 = lVar20;
        if (uVar1 >> 0x1e < 2) {
          if (uVar15 == 0) {
            if ((uVar14 & 0xff000000000000) == 0) goto LAB_100344684;
          }
          else {
            lVar16 = (long)(int)lVar20;
            lVar17 = lVar20 >> 0x20;
LAB_1003446ac:
            if (lVar16 == lVar17) goto LAB_1003446b4;
            FUN_100008184();
          }
          uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
          lVar4 = *(long *)(unaff_x20 + 0x30);
          FUN_10003f030(unaff_x20 + 0x10,uVar6);
          lVar16 = lVar20;
          uVar9 = uVar14;
          (**(code **)(lVar4 + 8))(lVar20,uVar14,uVar6,lVar4);
          FUN_100006cdc(lVar20,uVar14);
          lVar4 = lVar16;
          __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar16,uVar9);
          local_70 = 0;
          IVar11 = NSJSONSerialization::JSONObjectWithData_options_error_
                             ((ID)&_OBJC_CLASS___NSJSONSerialization,
                              "JSONObjectWithData:options:error:",lVar4,
                              *(undefined8 *)(unaff_x20 + 0x48),&local_70);
          if (IVar11 != 0) {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(local_c0,IVar11);
            _swift_unknownObjectRelease(IVar11);
            FUN_100006cdc(lVar16,uVar9);
            FUN_100006cdc(local_c8,uVar14);
LAB_100344998:
            (**(code **)(lVar18 + 8))(local_a0,lVar5);
            goto LAB_1003448d0;
          }
          uVar6 = local_70;
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
          _swift_willThrow(0);
          uVar7 = 0;
          FUN_100277ad0(0);
          puVar13 = &DAT_100a824a8;
          FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70)
          ;
          _swift_allocError(uVar7,puVar13,0,0);
          *puVar13 = uVar6;
          uVar6 = 0;
          FUN_100278368(0);
          _swift_storeEnumTagMultiPayload(puVar13,uVar6,2);
          _swift_storeEnumTagMultiPayload(puVar13,uVar7,10);
          _swift_willThrow();
          FUN_100006cdc(lVar16,uVar9);
        }
        else {
          if (uVar15 == 2) {
            lVar16 = *(long *)(lVar20 + 0x10);
            lVar17 = *(long *)(lVar20 + 0x18);
            goto LAB_1003446ac;
          }
LAB_100344684:
          FUN_100006cdc();
LAB_1003446b4:
          FUN_10007f314(local_a8,lVar19,&DAT_100a82c30,&DAT_1008171f0);
          lVar16 = lVar19;
          (**(code **)(lVar21 + 0x30))(lVar19,1,lVar4);
          if ((int)lVar16 != 1) {
            puVar8 = puVar3;
            (**(code **)(lVar21 + 0x20))(puVar3,lVar19,lVar4);
            __s10Foundation10URLRequestV10httpMethodSSSgvg();
            (**(code **)(lVar21 + 8))(puVar3,lVar4);
            if (lVar19 == 0) goto LAB_10034474c;
            FUN_100153074(puVar8,lVar19,*(undefined8 *)(unaff_x20 + 0x40));
            _swift_bridgeObjectRelease(lVar19);
            if (((ulong)puVar8 & 1) == 0) goto LAB_10034474c;
LAB_100344774:
            puVar10 = &_OBJC_CLASS___NSNull;
            _objc_allocWithZone();
            IVar11 = _objc_msgSend((ID)puVar10,"init");
            IVar12 = 0;
            FUN_100347b80();
            pIVar2 = local_c0;
            local_c0[3] = IVar12;
            FUN_100006cdc(local_c8,uVar14);
            *pIVar2 = IVar11;
            goto LAB_100344998;
          }
LAB_10034474c:
          if (param_3 != 0) {
            uVar9 = _objc_msgSend(param_3,"statusCode");
            FUN_1003440c0(uVar9,unaff_x20);
            if ((uVar9 & 1) != 0) goto LAB_100344774;
          }
          uVar6 = 0;
          FUN_100277ad0(0);
          puVar13 = &DAT_100a824a8;
          FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70)
          ;
          _swift_allocError(uVar6,puVar13,0,0);
          uVar7 = 0;
          FUN_100278368(0);
          _swift_storeEnumTagMultiPayload(puVar13,uVar7,6);
          _swift_storeEnumTagMultiPayload(puVar13,uVar6,10);
          _swift_willThrow();
        }
        _swift_willThrow();
        FUN_100006cdc(local_c8,uVar14);
        (**(code **)(lVar18 + 8))(local_a0,lVar5);
        param_5 = local_98;
      }
      else {
        uVar6 = 0;
        FUN_100277ad0(0);
        puVar13 = &DAT_100a824a8;
        FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
        _swift_allocError(uVar6,puVar13,0,0);
        (**(code **)(lVar18 + 0x10))(puVar13,lVar16,lVar5);
        uVar7 = 0;
        FUN_100278368(0);
        _swift_storeEnumTagMultiPayload(puVar13,uVar7,0);
        _swift_storeEnumTagMultiPayload(puVar13,uVar6,10);
        _swift_willThrow();
        _swift_errorRelease(unaff_x21);
        (**(code **)(lVar18 + 8))(lVar16,lVar5);
        param_5 = local_98;
      }
    }
  }
  else {
    _swift_willThrow();
  }
  _swift_errorRetain(param_5);
LAB_1003448d0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

