// rea decompile_all
// name: FUN_100410514
// address: 0x100410514
// body: available
// range: 0x100410514-0x1004107bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004107b0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001004107b4) */
/* WARNING: Removing unreachable block (ram,0x0001004105dc) */

void FUN_100410514(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *unaff_x20;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined *puStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  uVar6 = 0xea00000000006465;
  if (*unaff_x20 == '\0') {
    uVar6 = 0xea00000000007265;
  }
  local_78 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = PTR___sSiN_100995968;
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  local_78 = 0x6c6c6f72746e6f63;
  uStack_70 = uVar6;
  local_68 = puVar2;
  puStack_60 = puVar7;
  FUN_1004126a0();
  puVar8 = &DAT_1009bcd28;
  puVar3 = &local_78;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar3,&DAT_1009bcd28,puVar2);
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(puVar7);
  _swift_bridgeObjectRelease(uVar6);
  puVar4 = puVar3;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar3,puVar8);
  local_78 = 0;
  IVar5 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                     puVar4,0,&local_78);
  if (IVar5 == 0) {
    uVar6 = local_78;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_78);
    _swift_willThrow(0);
    FUN_100006cdc(puVar3,puVar8);
    _swift_errorRelease(uVar6);
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_78,IVar5);
    _swift_unknownObjectRelease(IVar5);
    puVar2 = &DAT_100a8e3d8;
    FUN_100004bb4(&DAT_100a8e3d8,&DAT_100824d58);
    puVar4 = local_88;
    _swift_dynamicCast(puVar4,&local_78,PTR___sypN_100995e88 + 8,puVar2,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
      _swift_bridgeObjectRetain(uVar1);
      uVar6 = local_88[0];
      _swift_isUniquelyReferenced_nonNull_native(local_88[0]);
      local_78 = local_88[0];
      FUN_1004126e0(uVar1,FUN_10027163c,0,uVar6,&local_78);
      _swift_bridgeObjectRelease(uVar1);
      FUN_100006cdc(puVar3,puVar8);
      goto LAB_100410608;
    }
    FUN_100006cdc(puVar3,puVar8);
  }
  FUN_1000cbc40(PTR___swiftEmptyArrayStorage_100995ea0);
LAB_100410608:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

