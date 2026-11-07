// rea decompile_all
// name: FUN_1002c554c
// address: 0x1002c554c
// body: available
// range: 0x1002c554c-0x1002c59c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002c59c0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002c554c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  ID IVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  code *pcVar12;
  long unaff_x21;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  char *local_d0;
  undefined8 local_c8;
  undefined *local_a8 [3];
  long local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar13 = *(long *)(lVar1 + -8);
  lVar14 = (long)&local_d0 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = *(long *)(param_2 + 0x20);
  FUN_10003f030(param_2,uVar10);
  (**(code **)(lVar4 + 8))(lVar14,uVar10,lVar4);
  if (unaff_x21 != 0) goto LAB_1002c5980;
  local_c8 = param_1;
  FUN_1002c64b8(param_3,local_a8);
  if (local_90 == 0) {
    FUN_100040bb4(local_a8,&DAT_100a82480,&DAT_1008182d0);
    pcVar12 = *(code **)(lVar13 + 0x20);
    uVar10 = local_c8;
  }
  else {
    FUN_10007f3d4(local_a8,auStack_88);
    puVar2 = auStack_88;
    FUN_10003f030(puVar2,local_70);
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    IVar3 = NSJSONSerialization::isValidJSONObject_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,"isValidJSONObject:",puVar2);
    _swift_unknownObjectRelease(puVar2);
    if ((int)IVar3 == 0) {
      puVar6 = (undefined8 *)0x0;
      FUN_100277ad0();
      puVar7 = puVar6;
      FUN_1002c272c();
      puVar9 = puVar6;
      _swift_allocError(puVar6,puVar7,0,0);
      FUN_1002c6478();
      puVar8 = &DAT_1009ad868;
      _swift_allocError(&DAT_1009ad868,puVar9,0,0);
      *puVar7 = puVar8;
      _swift_storeEnumTagMultiPayload(puVar7,puVar6,5);
      _swift_willThrow();
      (**(code **)(lVar13 + 8))(lVar14,lVar1);
      FUN_10003f094(auStack_88);
      goto LAB_1002c5980;
    }
    puVar2 = auStack_88;
    FUN_10003f030(puVar2,local_70);
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    local_a8[0] = (undefined *)0x0;
    pcVar11 = "dataWithJSONObject:options:error:";
    IVar3 = NSJSONSerialization::dataWithJSONObject_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                       puVar2,param_4,local_a8);
    _swift_unknownObjectRelease(puVar2);
    if (IVar3 == 0) {
      puVar8 = local_a8[0];
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _swift_willThrow(0);
      puVar9 = (undefined8 *)0x0;
      FUN_100277ad0();
      puVar7 = puVar9;
      FUN_1002c272c();
      _swift_allocError(puVar9,puVar7,0,0);
      *puVar7 = puVar8;
      _swift_storeEnumTagMultiPayload(puVar7,puVar9,5);
      _swift_willThrow();
      (**(code **)(lVar13 + 8))(lVar14,lVar1);
      FUN_10003f094(auStack_88);
      goto LAB_1002c5980;
    }
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    lVar4 = 0;
    local_d0 = pcVar11;
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar4 != 0) {
      local_a8[0] = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1002bb634();
      _swift_bridgeObjectRelease(lVar4);
      puVar8 = local_a8[0];
    }
    uVar16 = 0;
    uVar15 = 0x2d746e65746e6f43;
    FUN_1002bbc2c(0x2d746e65746e6f43,0xec00000065707954,puVar8);
    if ((uVar16 & 1) == 0) {
      if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1002c59bc);
        (*pcVar12)();
      }
      uVar16 = *(ulong *)(puVar8 + 0x10);
      _swift_bridgeObjectRelease(puVar8);
      if (uVar16 <= uVar15) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1002c59c0);
        (*pcVar12)();
      }
    }
    else {
      _swift_bridgeObjectRelease();
      __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
      local_a8[0] = PTR___swiftEmptyArrayStorage_100995ea0;
      if (puVar8 != (undefined *)0x0) {
        FUN_1002bb634();
        _swift_bridgeObjectRelease(puVar8);
      }
      FUN_1002bba74(0x2d746e65746e6f43,0xec00000065707954,&DAT_d000000000000010,0x80000001008a8820);
      puVar8 = local_a8[0];
      puVar5 = local_a8[0];
      FUN_1002bc258(local_a8[0]);
      _swift_bridgeObjectRelease(puVar8);
      __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(puVar5);
    }
    uVar10 = local_c8;
    __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs(IVar3,local_d0);
    FUN_10003f094(auStack_88);
    pcVar12 = *(code **)(lVar13 + 0x20);
  }
  (*pcVar12)(uVar10,lVar14,lVar1);
LAB_1002c5980:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

