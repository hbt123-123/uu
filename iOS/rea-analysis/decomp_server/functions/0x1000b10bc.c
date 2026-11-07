// rea decompile_all
// name: FUN_1000b10bc
// address: 0x1000b10bc
// body: available
// range: 0x1000b10bc-0x1000b137b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b1378 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000b10bc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  undefined *local_a0 [2];
  undefined8 local_90;
  long lStack_88;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1000cc648(PTR___swiftEmptyArrayStorage_100995ea0);
    if (param_4 != 0) {
      lVar3 = param_4;
      local_90 = param_3;
      lStack_88 = param_4;
      _swift_bridgeObjectRetain(param_4);
      __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar10);
      FUN_10009ff0c();
      uVar9 = 0;
      lVar4 = lVar10;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (lVar10,0,PTR___sSSN_1009957f8,lVar3);
      (**(code **)(lVar11 + 8))(lVar10,lVar1);
      _swift_bridgeObjectRelease(param_4);
      if (uVar9 >> 0x3c < 0xf) {
        lVar1 = lVar4;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar4,uVar9);
        local_90 = 0;
        IVar5 = NSJSONSerialization::JSONObjectWithData_options_error_
                          ((ID)&_OBJC_CLASS___NSJSONSerialization,
                           "JSONObjectWithData:options:error:",lVar1,0,&local_90);
        if (IVar5 == 0) {
          uVar8 = local_90;
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_90);
          _swift_willThrow(0);
          FUN_100006cc8(lVar4,uVar9);
          _swift_errorRelease(uVar8);
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_90,IVar5);
          FUN_100006cc8(lVar4,uVar9);
          _swift_unknownObjectRelease(IVar5);
          puVar6 = &DAT_100a759d8;
          FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
          ppuVar7 = local_a0;
          _swift_dynamicCast(ppuVar7,&local_90,PTR___sypN_100995e88 + 8,puVar6,6);
          if (((ulong)ppuVar7 & 1) != 0) {
            _swift_bridgeObjectRelease(puVar2);
            puVar2 = local_a0[0];
          }
        }
      }
    }
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    FUN_1000b142c(DAT_100b360a8 + 200,&local_90);
    FUN_10003f030(&local_90,local_78);
    puVar6 = puVar2;
    FUN_100183774(puVar2);
    _swift_bridgeObjectRelease(puVar2);
    (**(code **)(lStack_70 + 0x78))(param_1,param_2,puVar6,local_78,lStack_70);
    _swift_bridgeObjectRelease(puVar6);
    FUN_10003f094(&local_90);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

