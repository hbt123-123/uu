// rea decompile_all
// name: FUN_1002c5158
// address: 0x1002c5158
// body: available
// range: 0x1002c5158-0x1002c554b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002c5548 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002c5158(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long unaff_x21;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar13 = *(long *)(lVar3 + -8);
  puVar14 = auStack_a0 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = *(long *)(param_2 + 0x20);
  FUN_10003f030(param_2,uVar1);
  (**(code **)(lVar6 + 8))(puVar14,uVar1,lVar6);
  if (unaff_x21 != 0) goto LAB_1002c5508;
  local_98 = param_4;
  if (param_3 == 0) {
LAB_1002c54f4:
    (**(code **)(lVar13 + 0x20))(param_1,puVar14,lVar3);
  }
  else {
    puVar4 = &DAT_100a83970;
    FUN_100004bb4(&DAT_100a83970,&DAT_100818490);
    lVar6 = param_3;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_3,PTR___sSSN_1009957f8,puVar4,PTR___sSSSHsWP_100995808);
    IVar5 = NSJSONSerialization::isValidJSONObject_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,"isValidJSONObject:",lVar6);
    if ((int)IVar5 == 0) {
      puVar10 = (undefined8 *)0x0;
      FUN_100277ad0();
      puVar8 = puVar10;
      FUN_1002c272c();
      puVar9 = puVar10;
      _swift_allocError(puVar10,puVar8,0,0);
      FUN_1002c6478();
      puVar4 = &DAT_1009ad868;
      _swift_allocError(&DAT_1009ad868,puVar9,0,0);
      *puVar8 = puVar4;
    }
    else {
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (param_3,PTR___sSSN_1009957f8,puVar4,PTR___sSSSHsWP_100995808);
      local_70 = (undefined *)0x0;
      pcVar11 = "dataWithJSONObject:options:error:";
      IVar5 = NSJSONSerialization::dataWithJSONObject_options_error_
                        ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                         param_3,local_98,&local_70);
      if (IVar5 != 0) {
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar5);
        lVar6 = 0;
        __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
        puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
        if (lVar6 != 0) {
          local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
          FUN_1002bb634();
          _swift_bridgeObjectRelease(lVar6);
          puVar4 = local_70;
        }
        uVar12 = 0;
        uVar15 = 0x2d746e65746e6f43;
        FUN_1002bbc2c(0x2d746e65746e6f43,0xec00000065707954,puVar4);
        if ((uVar12 & 1) == 0) {
          if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002c5544);
            (*pcVar2)();
          }
          uVar12 = *(ulong *)(puVar4 + 0x10);
          _swift_bridgeObjectRelease(puVar4);
          if (uVar12 <= uVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002c5548);
            (*pcVar2)();
          }
        }
        else {
          _swift_bridgeObjectRelease();
          __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
          local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
          if (puVar4 != (undefined *)0x0) {
            FUN_1002bb634();
            _swift_bridgeObjectRelease(puVar4);
          }
          FUN_1002bba74(0x2d746e65746e6f43,0xec00000065707954,&DAT_d000000000000010,
                        0x80000001008a8820);
          puVar4 = local_70;
          puVar7 = local_70;
          FUN_1002bc258(local_70);
          _swift_bridgeObjectRelease(puVar4);
          __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(puVar7);
        }
        __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs(IVar5,pcVar11);
        goto LAB_1002c54f4;
      }
      puVar4 = local_70;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _swift_willThrow(0);
      puVar10 = (undefined8 *)0x0;
      FUN_100277ad0();
      puVar8 = puVar10;
      FUN_1002c272c();
      _swift_allocError(puVar10,puVar8,0,0);
      *puVar8 = puVar4;
    }
    _swift_storeEnumTagMultiPayload(puVar8,puVar10,5);
    _swift_willThrow();
    (**(code **)(lVar13 + 8))(puVar14,lVar3);
  }
LAB_1002c5508:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

