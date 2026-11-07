// rea decompile_all
// name: FUN_100415820
// address: 0x100415820
// body: available
// range: 0x100415820-0x100415a17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100415a14 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001004158b8) */

void FUN_100415820(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ID IVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  uVar7 = 0;
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  uStack_78 = unaff_x20[9];
  local_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_58 = unaff_x20[0xd];
  local_60 = unaff_x20[0xc];
  local_50 = unaff_x20[0xe];
  uStack_b8 = unaff_x20[1];
  local_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  uStack_98 = unaff_x20[5];
  local_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uVar2 = uVar1;
  FUN_100412660();
  puVar6 = &DAT_1009bd2b0;
  puVar3 = &local_c0;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar3,&DAT_1009bd2b0,uVar2);
  _swift_release(uVar1);
  puVar4 = puVar3;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar3,puVar6);
  local_c0 = 0;
  IVar5 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                     puVar4,0,&local_c0);
  if (IVar5 == 0) {
    uVar2 = local_c0;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_c0);
    _swift_willThrow(0);
    FUN_100006cdc(puVar3,puVar6);
    _swift_errorRelease(uVar2);
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_c0,IVar5);
    FUN_100006cdc(puVar3,puVar6);
    _swift_unknownObjectRelease(IVar5);
    puVar6 = &DAT_100a759d8;
    FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
    _swift_dynamicCast(local_d0,&local_c0,PTR___sypN_100995e88 + 8,puVar6,6);
    if ((uVar7 & 1) != 0) goto LAB_1004158d4;
  }
  FUN_1000cc648(PTR___swiftEmptyArrayStorage_100995ea0);
LAB_1004158d4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

